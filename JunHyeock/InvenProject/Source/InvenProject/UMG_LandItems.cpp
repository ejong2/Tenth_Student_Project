// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG_LandItems.h"

bool UUMG_LandItems::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{

	AInvenPlayerController* MyController = Cast<AInvenPlayerController>(GetWorld()->GetFirstPlayerController());
	AInvenProjectCharacter* MyCharacter = Cast<AInvenProjectCharacter>(MyController->GetPawn());

	UDragWidget* DragDropOperation = Cast<UDragWidget>(InOperation);
	
	if (DragDropOperation == nullptr)
	return false;


	if (MyController->bIsClickingEquip == true)
	{

		MyCharacter->SpawnItemFromClassAndCount(DragDropOperation->ItemClass, 1);

		//SpawnItemwithClassAndCount(DragDropOperation->ItemClass, 1, SpawnTransform);

		UUMG_EquipmentSlot* SelectedSlot = Cast<UUMG_EquipmentSlot>(DragDropOperation->WidgetReference);
		SelectedSlot->ItemClass = nullptr;
		SelectedSlot->SetMeshBySlotType(nullptr);
		return true;
	}

	int32 RemoveCount = 1;

	//스폰


	if (MyController->bIsClickingInventory == true)
	{
		//AItemBase* NewItem = GetWorld()->SpawnActor<AItemBase>(DragDropOperation->ItemClass,
		//	(GetWorld()->GetFirstPlayerController()->GetPawn())->GetActorLocation(), FRotator(0));
		//NewItem->ItemCount = MyCharacter->InvenCompo->ItemObjectArray[MyController->MatchedIndex]->ItemObjectCount;

		if (RemoveCount <= 0)
		{
			MyController->MyLayout->LandItems->LandItemListView->RegenerateAllEntries();
			return false;
		}

		
		MyCharacter->SpawnItemFromClassAndCount(DragDropOperation->ItemClass, RemoveCount);

		//SpawnItemwithClassAndCount(DragDropOperation->ItemClass, RemoveCount, SpawnTransform);

		MyCharacter->InvenCompo->RemoveItemasCount(MyController->MatchedIndex, RemoveCount);


		//NewItem->ItemCount = MyCharacter->InvenCompo->ItemObjectArray[MyController->MatchedIndex]->ItemObjectCount;
		////이부분 대신 한개씩 버리기
		//MyCharacter->InvenCompo->RemoveItem(MyController->MatchedIndex);
			


	}
	else if (MyController->bIsClickingInventory == false)
	{
		MyController->MyLayout->LandItems->LandItemListView->RegenerateAllEntries();
	}

    return true;
}


void UUMG_LandItems::SpawnItemwithClassAndCount_Implementation(TSubclassOf<AActor> Myclass, int32 count, FTransform MyTransform)
{
	ResSpawnItemwithClassAndCount(Myclass, count, MyTransform);
}

void UUMG_LandItems::ResSpawnItemwithClassAndCount_Implementation(TSubclassOf<AActor> Myclass, int32 count, FTransform MyTransform)
{
	AItemBase* NewItem = Cast<AItemBase>(UGameplayStatics::BeginDeferredActorSpawnFromClass(this, Myclass, MyTransform));
	if (NewItem != nullptr)
	{
		NewItem->ItemCount = count;
		UGameplayStatics::FinishSpawningActor(NewItem, MyTransform);
	}
}