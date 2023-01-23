// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "ItemObject.h"
#include "InvenPlayerController.h"
#include "InvenProjectCharacter.h"
#include "DragWidget.h"
#include "ItemObject.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
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


	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;

	FReply CustomDetectDrag(const FPointerEvent& InMouseEvent, UWidget* WidgetDetectingDrag, FKey DragKey);

	virtual void NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation) override;
	virtual void NativeOnDragLeave(const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;
	virtual void NativeOnDragCancelled(const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;



public:
	UPROPERTY(meta = (BindWidget))
	UTextBlock* ItemName;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* ItemCount;
	UPROPERTY(meta = (BindWidget))
	UImage* ItemIcon;

	class UItemObject* EntryObject;

	UDragWidget* DragDropOperation;
	
};
