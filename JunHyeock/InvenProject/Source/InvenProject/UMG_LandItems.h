// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ListView.h"
#include "DragWidget.h"
#include "ItemBase.h"
#include "Kismet/KismetSystemLibrary.h"
#include "UMG_LandItems.generated.h"

/**
 * 
 */
UCLASS()
class INVENPROJECT_API UUMG_LandItems : public UUserWidget
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(meta = (BindWidget))
	UListView* LandItemListView;

	virtual bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;


private:


};
