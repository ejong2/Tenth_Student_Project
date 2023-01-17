// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG_InventorySlot.h"

bool UUMG_InventorySlot::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	//Engine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("Drop in slot"));
	
	AMainGamePlayerController* MyPC = Cast<AMainGamePlayerController>(GetWorld()->GetFirstPlayerController());
	if (MyPC == nullptr)
		return false;


	if (MyPC->InvenWidget->LeftInventory == this)
	{
		MyPC->AddItemToInventory(MyPC->DraggingItemData);
	}
	else if(MyPC->InvenWidget->CenterInventory == this)
	{
			
	}





	return false;
}
