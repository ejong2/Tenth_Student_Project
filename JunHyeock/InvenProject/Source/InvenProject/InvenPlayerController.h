// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Blueprint/UserWidget.h"
#include "UMG_Layout.h"
#include "ItemObject.h"
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

	void RefreshInventory(TArray<UItemObject*>& ItemObjectArray);

public:

	UPROPERTY(EditAnywhere, Category = "Widget")
	TSubclassOf<UUserWidget> WidgetClass;

	UPROPERTY(BlueprintReadwrite, EditAnywhere)
	UUserWidget* MyWidget;



};
