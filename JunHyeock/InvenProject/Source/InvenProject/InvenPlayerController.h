// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Blueprint/UserWidget.h"
#include "UMG_Layout.h"
#include "ItemObject.h"
#include "UMG_EntryItem.h"
#include "Kismet/KismetSystemLibrary.h"
#include "InvenPlayerController.generated.h"

UENUM(BlueprintType)
enum class  ClickWidgetType : uint8
{
	NONE = 0 UMETA(DisplayName = "NONE"),
	Inventory = 1 UMETA(DisplayName = "Inventory"),
	LandItems = 2 UMETA(DisplayName = "LandItems"),
	Equipment = 3 UMETA(DisplayName = "Equipment"),
};


/**
 * 
 */
UCLASS()
class INVENPROJECT_API AInvenPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:

	AInvenPlayerController();
	virtual ~AInvenPlayerController();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSecond) override;

	virtual void SetupInputComponent() override;
	

public:

	void CreateMyWidget();
	void ToggleInven();

	int32 FindIndexFromClickedWidget(UUserWidget* ClickWidget);

	void RefreshInventory(TArray<class UItemObject*>& ItemObjectArray);
	UFUNCTION(BlueprintCallable)
	class UItemObject* GetItemObjectofTileview(int32 index);


	UFUNCTION(Client, Reliable)
	void AddItemToLandItems(class UItemObject* Item);

	UFUNCTION(Client, Reliable)
	void RemoveItemFromLandItems(class UItemObject* Item);

public:

	UPROPERTY(EditAnywhere, Category = "Widget")
	TSubclassOf<UUserWidget> WidgetClass;

	UPROPERTY(BlueprintReadwrite, EditAnywhere)
	UUserWidget* MyWidget;

	class UUMG_Layout* MyLayout;
	class UUMG_EntryItem* ClickItem;

	UPROPERTY(BlueprintReadwrite, EditAnywhere)
	int32 MatchedIndex;

	UPROPERTY(BlueprintReadwrite, EditAnywhere)
	bool bIsClickingInventory = false;

	bool bIsClickingEquip = false;

	ClickWidgetType ClickType = ClickWidgetType::NONE;
};
