// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG_EntryItem.h"

void UUMG_EntryItem::NativeOnListItemObjectSet(UObject* ListItemEntry)
{
	UItemObject* EntryObject = Cast<UItemObject>(ListItemEntry);
	if (EntryObject == nullptr)
		return;
	
	AItemBase* ItemBaseObject = Cast<AItemBase>(EntryObject->ItemClass->GetDefaultObject());

	ItemCount->SetText(FText::FromString(FString::FromInt(EntryObject->ItemObjectCount)));

	ItemName->SetText(FText::FromString(FString::FromInt(ItemBaseObject->GetItemID())));
	ItemIcon->SetBrushFromTexture(ItemBaseObject->ItemIcon);
}
