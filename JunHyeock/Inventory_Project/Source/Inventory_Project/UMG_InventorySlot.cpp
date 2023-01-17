// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG_InventorySlot.h"

bool UUMG_InventorySlot::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("Drop in slot"));
	


	return false;
}
