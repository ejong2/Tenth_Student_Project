// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ItemBase.h"
#include "ItemObject.h"
#include "InvenPlayerController.h"
#include "InvenComponent.generated.h"




UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class INVENPROJECT_API UInvenComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInvenComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	virtual void InitializeComponent() override;



public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
public:

	UFUNCTION(BlueprintCallable)
	void AddItem(TSubclassOf<AItemBase> ItemClass, int32 AddCount);

	UFUNCTION(BlueprintCallable)
	void RemoveItem(int32 index);

	void RemoveItemasCount(int32 index, int32 Count);

	TArray<class UItemObject*> ItemObjectArray;

};
