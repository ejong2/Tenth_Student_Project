// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "UMG_Inventory.h"
#include "HUDLayout.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MainGamePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class INVENTORY_PROJECT_API AMainGamePlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AMainGamePlayerController();
	~AMainGamePlayerController();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSecond) override;

	void SetupInputComponent() override;

public:

	//move
	void MoveForward(float Axis);
	void MoveRight(float Axis);

	//inventory
	void CreateMaingameWidget();
	void InventoryToggle();

	UFUNCTION(BlueprintCallable)
	void AddItemToInventory(UObject* Obj);

	void ItemLeftToCenter();
	void ItemCenterToLeft();

	void OneItemLeftToCenter();
	void OneItemCenterToLeft();

	void FindInventoryItem(UObject* Object);



public:

	UPROPERTY(EditAnywhere, Category = "Widget")
	TSubclassOf<UUserWidget> WidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UUMG_Inventory* InvenWidget = nullptr;

	class UHUDLayout* Hudlayout = nullptr;

	FString ItemTagText = TEXT("TEXT Sample");

	int32 DragItemIndex;

};


