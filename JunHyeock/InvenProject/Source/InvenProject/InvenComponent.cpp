// Fill out your copyright notice in the Description page of Project Settings.


#include "InvenComponent.h"

// Sets default values for this component's properties
UInvenComponent::UInvenComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UInvenComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UInvenComponent::InitializeComponent()
{
}


// Called every frame
void UInvenComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UInvenComponent::AddItem(TSubclassOf<AItemBase> ItemClass, int32 AddCount)
{
	if (ItemClass == nullptr)
		return;

	UItemObject* NewItemObject = NewObject<UItemObject>(this, UItemObject::StaticClass());
	NewItemObject->ItemObjectCount += AddCount;

	if (ItemObjectArray.Num() <= 0)
	{	// 1. Not containing any item
		NewItemObject->ItemClass = ItemClass;

		ItemObjectArray.Add(NewItemObject);
		
		return;
	}

	for (auto ObjectItr : ItemObjectArray)
	{	// 2. Found Same Item
		AItemBase* ObjectItrCDO = Cast<AItemBase>(ObjectItr->ItemClass->GetDefaultObject());
		AItemBase* NewItemCDO = Cast<AItemBase>(NewItemObject->ItemClass->GetDefaultObject());

		if (ObjectItrCDO->GetItemID() == NewItemCDO->GetItemID())
		{
			ObjectItr->ItemObjectCount += AddCount;
			return;
		}
	}
	// 3.Not found same item but certain item containing
	ItemObjectArray.Add(NewItemObject);

	AInvenPlayerController* InvenController = Cast<AInvenPlayerController>(GetWorld()->GetFirstPlayerController());
	InvenController->RefreshInventory(ItemObjectArray);

	//refresh ui
}

