// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemBase.generated.h"

UCLASS()
class INVENPROJECT_API AItemBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItemBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	

public:
	int32 GetItemID();

	UPROPERTY(BlueprintReadwrite, EditAnywhere)
	FString ItemName = TEXT("");
	UPROPERTY(BlueprintReadwrite, EditAnywhere)
	UTexture2D* ItemIcon;
private:

	//some data...
	int32 ItemID = 0;

};
