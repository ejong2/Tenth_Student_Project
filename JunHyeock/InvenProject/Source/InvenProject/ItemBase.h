// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "InvenPlayerController.h"
#include "InvenProjectCharacter.h"
#include "ItemObject.h"
#include "ItemBase.generated.h"

UCLASS()
class INVENPROJECT_API AItemBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItemBase();
	virtual ~AItemBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USphereComponent* Sphere;

	UPROPERTY(EditAnywhere, BlueprintReadwrite)
	UStaticMeshComponent* StaticMesh;


	int32 GetItemID();

	UPROPERTY(BlueprintReadwrite, EditAnywhere)
	FString ItemName = TEXT("");
	UPROPERTY(BlueprintReadwrite, EditAnywhere)
	UTexture2D* ItemIcon;

	UPROPERTY(BlueprintReadwrite, EditAnywhere)
	int32 ItemCount = 0;
	UPROPERTY(BlueprintReadwrite, EditAnywhere)
	int32 ItemID = 0;

	UItemObject* ItemObj;

	bool bIsCreatedObj = false;



	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
			class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
			const FHitResult& SweepResult);

	UFUNCTION()
		void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
			class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
private:

	//some data...



};
