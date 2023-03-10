// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UMG_LandItems.h"
#include "UMG_Inventory.h"
#include "UMG_EquipmentSlot.h"
#include "MyEnum.h"
#include "UMG_Layout.generated.h"

/**
 * 
 */
UCLASS()
class INVENPROJECT_API UUMG_Layout : public UUserWidget
{
	GENERATED_BODY()


public:
	virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget), BlueprintReadOnly, VisibleAnywhere)
	class UUMG_Inventory* Inventory;
	UPROPERTY(meta = (BindWidget), BlueprintReadOnly, VisibleAnywhere)
	class UUMG_LandItems* LandItems;

	MyEnum TempEnum;
};
