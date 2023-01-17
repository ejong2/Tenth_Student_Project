// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TileView.h"
#include "MainGamePlayerController.h"
#include "UMG_InventorySlot.generated.h"

/**
 * 
 */
UCLASS()
class INVENTORY_PROJECT_API UUMG_InventorySlot : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;


	UPROPERTY(meta = (BindWidget), BlueprintReadWrite, EditAnywhere)
	class UTileView* InvenTileView;
};
