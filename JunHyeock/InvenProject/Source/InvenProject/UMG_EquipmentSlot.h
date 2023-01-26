// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DragWidget.h"
#include "InvenPlayerController.h"
#include "InvenProjectCharacter.h"
#include "MyEnum.h"
#include "UMG_EquipmentSlot.generated.h"

/**
 * 
 */
UCLASS()
class INVENPROJECT_API UUMG_EquipmentSlot : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;


	virtual bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;
	
	MyEnum SlotType = MyEnum::NONE;
};
