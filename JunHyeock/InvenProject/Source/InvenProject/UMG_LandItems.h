// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ListView.h"
#include "DragWidget.h"
#include "ItemBase.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "InvenPlayerController.h"
#include "InvenProjectCharacter.h"
#include "UMG_LandItems.generated.h"

/**
 * 
 */
UCLASS()
class INVENPROJECT_API UUMG_LandItems : public UUserWidget
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(meta = (BindWidget), BlueprintReadOnly, VisibleAnywhere)
	UListView* LandItemListView;

	virtual bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;

	UFUNCTION(Server, Reliable)
	void SpawnItemwithClassAndCount(TSubclassOf<AActor> Myclass, int32 count, FTransform MyTransform);

	UFUNCTION(NetMulticast, Reliable)
	void ResSpawnItemwithClassAndCount(TSubclassOf<AActor> Myclass, int32 count, FTransform MyTransform);

private:


};
