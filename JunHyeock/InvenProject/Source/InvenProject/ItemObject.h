// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ItemBase.h"
#include "ItemObject.generated.h"

/**
 * 
 */
UCLASS()
class INVENPROJECT_API UItemObject : public UObject
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadwrite, EditAnywhere)
	TSubclassOf<AItemBase> ItemClass;

	int32 ItemObjectCount = 0; 
};
