// Fill out your copyright notice in the Description page of Project Settings.


#include "InvenPlayerController.h"

AInvenPlayerController::AInvenPlayerController()
{
}

AInvenPlayerController::~AInvenPlayerController()
{
}

void AInvenPlayerController::BeginPlay()
{
	Super::BeginPlay();
	CreateMyWidget();
	MyLayout = Cast<UUMG_Layout>(MyWidget);
}

void AInvenPlayerController::Tick(float DeltaSecond)
{
	Super::Tick(DeltaSecond);
}

void AInvenPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction(TEXT("ToggleInven"), IE_Pressed, this, &AInvenPlayerController::ToggleInven);
}

void AInvenPlayerController::CreateMyWidget()
{
	if (WidgetClass == nullptr)
		return;

	MyWidget = CreateWidget(GetWorld(), WidgetClass);
	if (MyWidget)
	{
		MyWidget->AddToViewport();
		MyWidget->SetVisibility(ESlateVisibility::Collapsed);
	}

}

void AInvenPlayerController::ToggleInven()
{
	if (MyWidget == nullptr)
		return;

	if (MyWidget->Visibility == ESlateVisibility::Collapsed)
	{
		MyWidget->SetVisibility(ESlateVisibility::Visible);
		SetShowMouseCursor(true);

	}
	else if (MyWidget->Visibility == ESlateVisibility::Visible)
	{
		MyWidget->SetVisibility(ESlateVisibility::Collapsed);
		SetShowMouseCursor(false);
	}
}

int32 AInvenPlayerController::FindIndexFromClickedWidget(UUserWidget* ClickWidget)
{
	bIsClickingInventory = true;
    //UUMG_Layout* MyLayout = Cast<UUMG_Layout>(MyWidget);
	UUMG_EntryItem* ClickedEntryItem = Cast<UUMG_EntryItem>(ClickWidget);
	MatchedIndex = MyLayout->Inventory->InvenItemListView->GetDisplayedEntryWidgets().IndexOfByKey(ClickWidget);
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, FString::Printf(TEXT("%d"), MatchedIndex));

	
	//not in Inventory
	if (MatchedIndex < 0)
	{
		MatchedIndex = MyLayout->LandItems->LandItemListView->GetDisplayedEntryWidgets().IndexOfByKey(ClickWidget);
		bIsClickingInventory = false;
	}

	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, FString::Printf(TEXT("%d"), MatchedIndex));


	return MatchedIndex;
}

void AInvenPlayerController::RefreshInventory(TArray<UItemObject*>& ItemObjectArray)
{
	//UUMG_Layout* MyLayout = Cast<UUMG_Layout>(MyWidget);
	MyLayout->Inventory->InvenItemListView->SetListItems(ItemObjectArray);
	MyLayout->Inventory->InvenItemListView->RegenerateAllEntries();
	
}

UItemObject* AInvenPlayerController::GetItemObjectofTileview(int32 index)
{
	//UUMG_Layout* MyLayout = Cast<UUMG_Layout>(MyWidget);
	UObject* TempObj = MyLayout->Inventory->InvenItemListView->GetItemAt(index);
	UItemObject* ReturnItemObject = Cast<UItemObject>(TempObj);

	return ReturnItemObject;
}
 
void AInvenPlayerController::AddItemToLandItems(AItemBase* Item)
{
	UItemObject* NewItemObject = NewObject<UItemObject>(this, UItemObject::StaticClass());
	NewItemObject->ItemClass = Item->GetClass();
	NewItemObject->ItemObjectCount = Item->ItemCount;

	MyLayout->LandItems->LandItemListView->AddItem(NewItemObject);
}
