// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG_LandItems.h"

bool UUMG_LandItems::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	//땅에버리기로직
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, TEXT("Left Drop"));

	AInvenPlayerController* MyController = Cast<AInvenPlayerController>(GetWorld()->GetFirstPlayerController());
	AInvenProjectCharacter* MyCharacter = Cast<AInvenProjectCharacter>(MyController->GetPawn());

	UDragWidget* DragDropOperation = Cast<UDragWidget>(InOperation);
	
	if (DragDropOperation == nullptr)
	return false;

	//스폰


	if (MyController->bIsClickingInventory == true)
	{
		AItemBase* NewItem = GetWorld()->SpawnActor<AItemBase>(DragDropOperation->ItemClass,
			(GetWorld()->GetFirstPlayerController()->GetPawn())->GetActorLocation(), FRotator(0));
		NewItem->ItemCount = MyCharacter->InvenCompo->ItemObjectArray[MyController->MatchedIndex]->ItemObjectCount;

		MyCharacter->InvenCompo->RemoveItem(MyController->MatchedIndex);
	}
	else if (MyController->bIsClickingInventory == false)
	{
		MyController->MyLayout->LandItems->LandItemListView->RegenerateAllEntries();
	}

    return true;
}
