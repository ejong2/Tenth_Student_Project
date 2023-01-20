// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemBase.h"

// Sets default values
AItemBase::AItemBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	RootComponent = Sphere;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> M_Mesh(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'"));

	if (M_Mesh.Succeeded())
	{
		StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
		StaticMesh->SetupAttachment(RootComponent);
		StaticMesh->SetStaticMesh(M_Mesh.Object);
		StaticMesh->SetCollisionProfileName(TEXT("NoCollision"), false);
		StaticMesh->SetGenerateOverlapEvents(false);

	}
}

AItemBase::~AItemBase()
{
}

// Called when the game starts or when spawned
void AItemBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AItemBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int32 AItemBase::GetItemID()
{
	return ItemID;
}

