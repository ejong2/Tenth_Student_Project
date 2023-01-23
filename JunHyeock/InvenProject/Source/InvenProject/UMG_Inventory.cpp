// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG_Inventory.h"

bool UUMG_Inventory::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	AInvenPlayerController* MyController = Cast<AInvenPlayerController>(GetWorld()->GetFirstPlayerController());
	AInvenProjectCharacter* MyCharacter = Cast<AInvenProjectCharacter>(MyController->GetPawn());
	if (MyController->bIsClickingInventory == true)
	{
		MyController->MyLayout->Inventory->InvenItemListView->RegenerateAllEntries();
	}
	else if (MyController->bIsClickingInventory == false)
	{
		//인벤으로 추가
		UItemObject* ClickedObj = Cast<UItemObject>(MyController->MyLayout->LandItems->LandItemListView->GetItemAt(MyController->MatchedIndex));
		MyCharacter->InvenCompo->AddItem(ClickedObj->ItemClass, ClickedObj->ItemObjectCount);
		
		//액터삭제
		MyCharacter->FindAndDestroyActorFromItemObj(MyController->MatchedIndex);
	}


	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("On Inventory"));

	return true;
}
