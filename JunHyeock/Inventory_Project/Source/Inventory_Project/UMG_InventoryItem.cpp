// Fill out your copyright notice in the Description page of Project Settings.

#include "InventoryItemData.h"
#include "UMG_InventoryItem.h"

void UUMG_InventoryItem::NativeConstruct()
{
	Super::NativeConstruct();

}

FReply UUMG_InventoryItem::CustomDetectDrag(const FPointerEvent& InMouseEvent, UWidget* WidgetDetectingDrag, FKey DragKey)
{
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Red, TEXT("Drag"));
	if (InMouseEvent.GetEffectingButton() == DragKey /*|| PointerEvent.IsTouchEvent()*/)
	{
		FEventReply Reply;

		Reply.NativeReply = FReply::Handled();

		if (WidgetDetectingDrag)
		{
			TSharedPtr<SWidget> SlateWidgetDetectingDrag = WidgetDetectingDrag->GetCachedWidget();

			if (SlateWidgetDetectingDrag.IsValid())
			{
				Reply.NativeReply = Reply.NativeReply.DetectDrag(SlateWidgetDetectingDrag.ToSharedRef(), DragKey);

				return Reply.NativeReply;
			}
		}
	}

	return FReply::Unhandled();
}

FReply UUMG_InventoryItem::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);

	AMainGamePlayerController* MYPC = Cast<AMainGamePlayerController>(GetWorld()->GetFirstPlayerController());
	if (MYPC)
	{	//Send this to Dragging Player Controller
		MYPC->DraggingItemWidget = this;
	}

	return CustomDetectDrag(InMouseEvent, this, EKeys::LeftMouseButton);
}

void UUMG_InventoryItem::NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation)
{
	Super::NativeOnDragDetected(InGeometry, InMouseEvent, OutOperation);

	UDragWidget* DragDropOperation = NewObject<UDragWidget>();
	this->SetVisibility(ESlateVisibility::HitTestInvisible);

	DragDropOperation->WidgetReference = this;
	DragDropOperation->DragOffset = InGeometry.AbsoluteToLocal(InMouseEvent.GetScreenSpacePosition());

	DragDropOperation->DefaultDragVisual = this;
	DragDropOperation->Pivot = EDragPivot::MouseDown;

	OutOperation = DragDropOperation;

}

void UUMG_InventoryItem::NativeOnDragLeave(const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	//RemoveFromParent();
}

void UUMG_InventoryItem::NativeOnListItemObjectSet(UObject* ListItemObject)
{
	SetData(ListItemObject);
}

void UUMG_InventoryItem::NativeOnItemSelectionChanged(bool bIsSelected)
{
	/*if (Background != nullptr)
	{
		Background->SetBrushColor(FLinearColor(0.f, 0.3f, 1.f, 0.5f*(float)bIsSelected));

	}*/
}

void UUMG_InventoryItem::SetData(UObject* ListItemObject)
{
	if (ListItemObject == nullptr)
		return;
		
	UInventoryItemData* Item = Cast<UInventoryItemData>(ListItemObject);
	
	ItemName->SetText(FText::FromString(Item->DataString));
	ItemBackground->SetBrushColor(Item->DataColor);
	ItemCount->SetText(FText::AsNumber(Item->ItemCount));


}