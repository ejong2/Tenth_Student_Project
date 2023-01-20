// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ListView.h"
#include "InvenPlayerController.h"
#include "InvenProjectCharacter.h"
#include "UMG_Inventory.generated.h"

/**
 * 
 */
UCLASS()
class INVENPROJECT_API UUMG_Inventory : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;

	UPROPERTY(meta = (BindWidget))
	UListView* InvenItemListView;
	
};
