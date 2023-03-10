// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InvenComponent.h"
#include "InvenPlayerController.h"
#include "ItemObject.h"
#include "MyEnum.h"
#include "InvenProjectCharacter.generated.h"

UCLASS(config=Game)
class AInvenProjectCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;


public:
	AInvenProjectCharacter();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

protected:

	/** Resets HMD orientation in VR. */
	void OnResetVR();

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	class UInvenComponent* InvenCompo;

	TArray<AItemBase*> OverlapedItemArray;

public:
	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, 
		class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, 
		const FHitResult& SweepResult);

	UFUNCTION()
		void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,
			class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION(Server, Reliable)
	void FindAndDestroyActorFromItemObj(int32 index);

	UFUNCTION(NetMulticast, Reliable)
	void ResFindAndDestroyActorFromItemObj(int32 index);

	UFUNCTION(Server, Reliable)
	void FindAndDecreaseCountActorObject(int32 index, int32 Count);

	UFUNCTION(NetMulticast, Reliable)
	void ResFindAndDecreaseCountActorObject(int32 index, int32 Count);

	UFUNCTION(Server, Reliable)
	void SetMeshBySlotType(MyEnum Myenum, UStaticMesh* MyMesh);

	UFUNCTION(NetMulticast, Reliable)
	void ResSetMeshBySlotType(MyEnum Myenum, UStaticMesh* MyMesh);

	UStaticMesh* GetMeshBySlotType(MyEnum Myenum);

	UFUNCTION(Server, Reliable)
	void SpawnItemFromClassAndCount(TSubclassOf<AActor> MyActorClass, int32 count);

	UFUNCTION(NetMulticast, Reliable)
	void ResSpawnItemFromClassAndCount(TSubclassOf<AActor> MyActorClass, int32 count);


public:
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	UStaticMeshComponent* HeadGear;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	UStaticMeshComponent* BodySuit;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	UStaticMeshComponent* Shoose;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	UStaticMeshComponent* Weapon;
};

