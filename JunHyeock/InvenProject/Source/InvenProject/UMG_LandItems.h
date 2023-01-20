// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ListView.h"
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


private:


};
