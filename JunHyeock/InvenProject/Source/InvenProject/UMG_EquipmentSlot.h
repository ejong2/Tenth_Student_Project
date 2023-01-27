// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DragWidget.h"
#include "InvenPlayerController.h"
#include "InvenProjectCharacter.h"
#include "MyEnum.h"
#include "Components/Image.h"
#include "UMG_EquipmentSlot.generated.h"

/**
 * 
 */
UCLASS()
class INVENPROJECT_API UUMG_EquipmentSlot : public UUserWidget
{
	GENERATED_BODY()

public:
	
	void NativeConstruct() override;
	
	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;

	virtual void NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation) override;
	//virtual void NativeOnDragCancelled(const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;

	virtual bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;
	
	void SetMeshBySlotType(UStaticMesh* Mesh);

	MyEnum SlotType = MyEnum::NONE;

	
	TSubclassOf<AItemBase> ItemClass = nullptr;

	UPROPERTY(meta = (BindWidget))
	UImage* Icon;

	UPROPERTY(meta = (BindWidget))
	UImage* DefaultIcon;
};
