// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/DragDropOperation.h"
#include "DragWidget.generated.h"

/**
 * 
 */
UCLASS()
class INVENPROJECT_API UDragWidget : public UDragDropOperation
{
	GENERATED_BODY()
	
public:

	UDragWidget();
	~UDragWidget();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UUserWidget* WidgetReference;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D DragOffset;


	TSubclassOf<class AItemBase> ItemClass;
	int32 Count;
	

};