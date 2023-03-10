// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG_EntryItem.h"

void UUMG_EntryItem::NativeConstruct()
{
	Super::NativeConstruct();

}

void UUMG_EntryItem::NativePreConstruct()
{

	//if (ItemName == nullptr)
	//	ItemName = Cast<UTextBlock>(GetWidgetFromName(TEXT("ItemName")));
	//if (ItemCount == nullptr)
	//	ItemCount = Cast<UTextBlock>(GetWidgetFromName(TEXT("ItemCount")));
	//if (ItemCount != nullptr && GEngine)
	//{
	//	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Red, TEXT("wpqkf"));
	//}
	Super::NativePreConstruct();
}


void UUMG_EntryItem::NativeOnListItemObjectSet(UObject* ListItemEntry)
{
	if (ListItemEntry != nullptr)
	{
	EntryObject = Cast<UItemObject>(ListItemEntry);
	if (EntryObject == nullptr)
		return;
	AItemBase* ItemBaseObject = Cast<AItemBase>(EntryObject->ItemClass->GetDefaultObject());

	ItemCount->SetText(FText::FromString(FString::FromInt(EntryObject->ItemObjectCount)));
	ItemName->SetText(FText::FromString(ItemBaseObject->ItemName));
	ItemIcon->SetBrushFromTexture(ItemBaseObject->ItemIcon);
	}

}

FReply UUMG_EntryItem::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);

	AInvenPlayerController* MyController = Cast<AInvenPlayerController>(GetWorld()->GetFirstPlayerController());
	//MyController->ClickItem = this;
	MyController->FindIndexFromClickedWidget(this);

	FEventReply Reply;
	Reply.NativeReply = Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);


	if (InMouseEvent.IsMouseButtonDown(EKeys::LeftMouseButton) == true)
	{
		Reply = UWidgetBlueprintLibrary::DetectDragIfPressed(InMouseEvent, this, EKeys::LeftMouseButton);
	}

	MyController->bIsClickingEquip = false;
	return Reply.NativeReply;


	//return CustomDetectDrag(InMouseEvent, this, EKeys::LeftMouseButton);
}

FReply UUMG_EntryItem::CustomDetectDrag(const FPointerEvent& InMouseEvent, UWidget* WidgetDetectingDrag, FKey DragKey)
{
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

				GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, TEXT("handle"));

				return Reply.NativeReply;
			}
		}
	}

	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, TEXT("unhandle"));
	return FReply::Unhandled();
}

void UUMG_EntryItem::NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation)
{

	//init
	AInvenPlayerController* MyController = Cast<AInvenPlayerController>(GetWorld()->GetFirstPlayerController());
	AInvenProjectCharacter* MyCharacter = Cast<AInvenProjectCharacter>(MyController->GetPawn());
	UUMG_Layout* MyLayout = Cast<UUMG_Layout>(MyController->MyWidget);
	int32 CurrentIndex = MyController->MatchedIndex;


	//DragWidget
	DragDropOperation = NewObject<UDragWidget>(this);

	DragDropOperation->WidgetReference = this;

	UUMG_EntryItem* NewDragVisual = CreateWidget<UUMG_EntryItem>(this, GetClass());
	
	if (NewDragVisual != nullptr)
	{
		NewDragVisual->ItemCount->SetText(ItemCount->GetText());
		NewDragVisual->ItemName->SetText(ItemName->GetText());
		NewDragVisual->ItemIcon->SetBrush(ItemIcon->Brush);
	}

	DragDropOperation->DefaultDragVisual = NewDragVisual;

	DragDropOperation->DragOffset = InGeometry.AbsoluteToLocal(InMouseEvent.GetScreenSpacePosition());
	DragDropOperation->Pivot = EDragPivot::MouseDown;


	if (MyController->bIsClickingInventory == true)
	{
		DragDropOperation->ItemClass = MyController->GetItemObjectofTileview(CurrentIndex)->ItemClass;
		DragDropOperation->Count = MyController->GetItemObjectofTileview(CurrentIndex)->ItemObjectCount;

	}
	else if(MyController->bIsClickingInventory == false)
	{
		DragDropOperation->ItemClass = MyCharacter->OverlapedItemArray[MyController->MatchedIndex]->GetClass();
		DragDropOperation->Count = MyCharacter->OverlapedItemArray[MyController->MatchedIndex]->ItemCount;

	}


	OutOperation = DragDropOperation;

	//Remove Data of Array
	//MyCharacter->InvenCompo->RemoveItem(CurrentIndex);



}

void UUMG_EntryItem::NativeOnDragLeave(const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
}

void UUMG_EntryItem::NativeOnDragCancelled(const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	if (DragDropOperation)
	{
		//add to gc
		DragDropOperation->ConditionalBeginDestroy();
	}
	//GetWorld()->ForceGarbageCollection(true);
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Red, TEXT("Cancle"));
	
	AInvenPlayerController* MyController = Cast<AInvenPlayerController>(GetWorld()->GetFirstPlayerController());
	UUMG_Layout* MyLayout = Cast<UUMG_Layout>(MyController->MyWidget);
	MyLayout->Inventory->InvenItemListView->RegenerateAllEntries();
	MyLayout->LandItems->LandItemListView->RegenerateAllEntries();
}




