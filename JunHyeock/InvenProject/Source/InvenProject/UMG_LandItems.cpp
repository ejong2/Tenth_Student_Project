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
		FTransform SpawnTransform = FTransform((GetWorld()->GetFirstPlayerController()->GetPawn())->GetActorLocation());
		AItemBase* NewItem = Cast<AItemBase>(UGameplayStatics::BeginDeferredActorSpawnFromClass(this, DragDropOperation->ItemClass, SpawnTransform));
		if (NewItem != nullptr)
		{
			NewItem->ItemCount = 1;
			UGameplayStatics::FinishSpawningActor(NewItem, SpawnTransform);
			UUMG_EquipmentSlot* SelectedSlot = Cast<UUMG_EquipmentSlot>(DragDropOperation->WidgetReference);
			SelectedSlot->ItemClass = nullptr;
			SelectedSlot->SetMeshBySlotType(nullptr);
			return true;
		}
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

		FTransform SpawnTransform = FTransform((GetWorld()->GetFirstPlayerController()->GetPawn())->GetActorLocation());
		AItemBase* NewItem = Cast<AItemBase>(UGameplayStatics::BeginDeferredActorSpawnFromClass(this, DragDropOperation->ItemClass, SpawnTransform));
		if (NewItem != nullptr)
		{
			NewItem->ItemCount = RemoveCount;
			MyCharacter->InvenCompo->RemoveItemasCount(MyController->MatchedIndex, RemoveCount);


			//NewItem->ItemCount = MyCharacter->InvenCompo->ItemObjectArray[MyController->MatchedIndex]->ItemObjectCount;
			////이부분 대신 한개씩 버리기
			//MyCharacter->InvenCompo->RemoveItem(MyController->MatchedIndex);
			UGameplayStatics::FinishSpawningActor(NewItem, SpawnTransform);
			
		}


	}
	else if (MyController->bIsClickingInventory == false)
	{
		MyController->MyLayout->LandItems->LandItemListView->RegenerateAllEntries();
	}

    return true;
}
