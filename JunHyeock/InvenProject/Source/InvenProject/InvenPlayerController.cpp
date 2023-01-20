// Fill out your copyright notice in the Description page of Project Settings.


#include "InvenPlayerController.h"

AInvenPlayerController::AInvenPlayerController()
{
}

AInvenPlayerController::~AInvenPlayerController()
{
}

void AInvenPlayerController::BeginPlay()
{
	Super::BeginPlay();
	CreateMyWidget();
}

void AInvenPlayerController::Tick(float DeltaSecond)
{
	Super::Tick(DeltaSecond);
}

void AInvenPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction(TEXT("ToggleInven"), IE_Pressed, this, &AInvenPlayerController::ToggleInven);
}

void AInvenPlayerController::CreateMyWidget()
{
	if (WidgetClass == nullptr)
		return;

	MyWidget = CreateWidget(GetWorld(), WidgetClass);
	if (MyWidget)
	{
		MyWidget->AddToViewport();
		MyWidget->SetVisibility(ESlateVisibility::Collapsed);
	}

}

void AInvenPlayerController::ToggleInven()
{
	if (MyWidget == nullptr)
		return;

	if (MyWidget->Visibility == ESlateVisibility::Collapsed)
	{
		MyWidget->SetVisibility(ESlateVisibility::Visible);
		SetShowMouseCursor(true);

	}
	else if (MyWidget->Visibility == ESlateVisibility::Visible)
	{
		MyWidget->SetVisibility(ESlateVisibility::Collapsed);
		SetShowMouseCursor(false);
	}
}

void AInvenPlayerController::RefreshInventory(TArray<UItemObject*>& ItemObjectArray)
{
	UUMG_Layout* MyLayout = Cast<UUMG_Layout>(MyWidget);
	MyLayout->Inventory->InvenItemListView->SetListItems(ItemObjectArray);
	
}
