// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG_InventorySlot.h"

bool UUMG_InventorySlot::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	//GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("Drop in slot"));
	
	AMainGamePlayerController* MyPC = Cast<AMainGamePlayerController>(GetWorld()->GetFirstPlayerController());
	UDragWidget* DraggingWidget = Cast<UDragWidget>(InOperation);
	UUMG_InventoryItem* DraggingItem = Cast<UUMG_InventoryItem>(DraggingWidget->WidgetReference);

	if (MyPC == nullptr || DraggingWidget == nullptr || DraggingItem)
		return false;


	//Finding Same Widget in WidgetArray of TileView
	const TArray<UUserWidget*> EntryWidgets = InvenTileView->GetDisplayedEntryWidgets();
	int32 SameItemFirstIndex = EntryWidgets.IndexOfByKey(MyPC->DraggingItemWidget);
	UInventoryItemData* aa = MyPC->FirstItemDataArray[SameItemFirstIndex];


	if (MyPC->InvenWidget->LeftInventory == this)
	{
		MyPC->AddItemToDataArray(MyPC->FirstItemDataArray, aa);
		return true;
	}
	else if(MyPC->InvenWidget->CenterInventory == this)
	{
		MyPC->AddItemToDataArray(MyPC->SecondItemDataArray, aa);
		return true;
	}


	return false;

}

