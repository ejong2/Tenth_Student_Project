// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "Components/Border.h"
#include "Components/TextBlock.h"
#include "Blueprint/UserWidget.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "DragWidget.h"
#include "UMG_Inventory.h"
#include "MainGamePlayerController.h"
#include "UMG_InventoryItem.generated.h"

/**
 * 
 */
UCLASS()
class INVENTORY_PROJECT_API UUMG_InventoryItem : public UUserWidget, public IUserObjectListEntry
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;

	FReply CustomDetectDrag(const FPointerEvent& InMouseEvent, UWidget* WidgetDetectingDrag, FKey DragKey);

	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	virtual void NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation) override;
	virtual void NativeOnDragLeave(const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;


public:
	// view에 add시 호출
	virtual void NativeOnListItemObjectSet(UObject* ListItemObject) override;

	// 선택 시 호출
	virtual void NativeOnItemSelectionChanged(bool bIsSelected) override;
	

	void SetData(UObject* ListItemObject);
private:
	// UI구성요소
	UPROPERTY(meta = (BindWidget))
	UBorder* ItemBackground;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* ItemName;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* ItemCount;


	UObject* CurrentData;

};
