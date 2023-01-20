// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "ItemObject.h"
#include "UMG_EntryItem.generated.h"

/**
 * 
 */
UCLASS()
class INVENPROJECT_API UUMG_EntryItem : public UUserWidget, public IUserObjectListEntry
{
	GENERATED_BODY()
	
public:
	
	virtual void NativeOnListItemObjectSet(UObject* ListItemEntry) override;

public:
	UPROPERTY(meta = (BindWidget))
	UTextBlock* ItemName;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* ItemCount;
	UPROPERTY(meta = (BindWidget))
	UImage* ItemIcon;
	
};
