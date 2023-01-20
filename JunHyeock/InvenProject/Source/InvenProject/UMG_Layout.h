// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UMG_LandItems.h"
#include "UMG_Inventory.h"
#include "UMG_Layout.generated.h"

/**
 * 
 */
UCLASS()
class INVENPROJECT_API UUMG_Layout : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(meta = (BindWidget))
	UUMG_Inventory* Inventory;
	UPROPERTY(meta = (BindWidget))
	UUMG_LandItems* LandItems;
};
