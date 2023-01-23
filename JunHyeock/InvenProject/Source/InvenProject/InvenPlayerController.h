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

	class UItemObject* GetItemObjectofTileview(int32 index);



	void AddItemToLandItems(class UItemObject* Item);

	void RemoveItemFromLandItems(class UItemObject* Item);

public:

	UPROPERTY(EditAnywhere, Category = "Widget")
	TSubclassOf<UUserWidget> WidgetClass;

	UPROPERTY(BlueprintReadwrite, EditAnywhere)
	UUserWidget* MyWidget;

	class UUMG_Layout* MyLayout;
	class UUMG_EntryItem* ClickItem;

	int32 MatchedIndex;

	bool bIsClickingInventory = false;

};
