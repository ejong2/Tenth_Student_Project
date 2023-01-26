// Copyright Epic Games, Inc. All Rights Reserved.

#include "InvenProjectCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"

//////////////////////////////////////////////////////////////////////////
// AInvenProjectCharacter

AInvenProjectCharacter::AInvenProjectCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &AInvenProjectCharacter::OnOverlapBegin);
	GetCapsuleComponent()->OnComponentEndOverlap.AddDynamic(this, &AInvenProjectCharacter::OnOverlapEnd);
	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm


	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)

	InvenCompo = CreateDefaultSubobject<UInvenComponent>(TEXT("InventoryComponent"));

	
	HeadGear = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HeadGear"));
	HeadGear->AttachToComponent(GetMesh(), FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("head"));
	//HeadGear->SetRelativeLocation(FVector(0,0,70)); 
	HeadGear->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	HeadGear->SetGenerateOverlapEvents(false);
	HeadGear->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);

	BodySuit = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodySuit"));
	BodySuit->AttachToComponent(GetMesh(), FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("spine_03"));
	BodySuit->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	BodySuit->SetGenerateOverlapEvents(false);
	BodySuit->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);

	Shoose = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Shoose"));
	Shoose->AttachToComponent(GetMesh(), FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("foot_r"));
	Shoose->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	Shoose->SetGenerateOverlapEvents(false);
	Shoose->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);

	Weapon = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Weapon"));
	Weapon->AttachToComponent(GetMesh(), FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("hand_r"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	Weapon->SetGenerateOverlapEvents(false);
	Weapon->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);



}

//////////////////////////////////////////////////////////////////////////
// Input

void AInvenProjectCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &AInvenProjectCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AInvenProjectCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AInvenProjectCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AInvenProjectCharacter::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &AInvenProjectCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &AInvenProjectCharacter::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &AInvenProjectCharacter::OnResetVR);
}

void AInvenProjectCharacter::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AInvenPlayerController* MyController = Cast<AInvenPlayerController>(GetController());
	if (MyController)
	{
		
	}
	AItemBase* Item = Cast<AItemBase>(OtherActor);
	if (Item)
	{
		TSubclassOf<AItemBase> ItemClass = Item->GetClass();
		OverlapedItemArray.Add(Item);
	}
	//InvenCompo->AddItem(ItemClass, Item->ItemCount);

	//MyController->AddItemToLandItems(Item);


}

void AInvenProjectCharacter::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	AItemBase* Item = Cast<AItemBase>(OtherActor);
	if (Item == nullptr)
		return;
	OverlapedItemArray.Remove(Item);
}

void AInvenProjectCharacter::FindAndDestroyActorFromItemObj(int32 index)
{
	//TArray<AActor*> Result;
	//GetOverlappingActors(Result, AItemBase::StaticClass());
	//AItemBase* DestroyingItem = Cast<AItemBase>(Result[index]);
	//Result[index]->Destroy();
	if(OverlapedItemArray.IsValidIndex(index))
	OverlapedItemArray[index]->Destroy();
	
}

void AInvenProjectCharacter::FindAndDecreaseCountActorObject(int32 index, int32 Count)
{
	if (OverlapedItemArray.IsValidIndex(index))
	{
		OverlapedItemArray[index]->ItemCount -= Count;
	}
}




void AInvenProjectCharacter::OnResetVR()
{
	// If InvenProject is added to a project via 'Add Feature' in the Unreal Editor the dependency on HeadMountedDisplay in InvenProject.Build.cs is not automatically propagated
	// and a linker error will result.
	// You will need to either:
	//		Add "HeadMountedDisplay" to [YourProject].Build.cs PublicDependencyModuleNames in order to build successfully (appropriate if supporting VR).
	// or:
	//		Comment or delete the call to ResetOrientationAndPosition below (appropriate if not supporting VR)
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void AInvenProjectCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
		Jump();
}

void AInvenProjectCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
		StopJumping();
}

void AInvenProjectCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AInvenProjectCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AInvenProjectCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void AInvenProjectCharacter::MoveRight(float Value)
{
	if ( (Controller != nullptr) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}
