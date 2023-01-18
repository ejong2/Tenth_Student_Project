// Fill out your copyright notice in the Description page of Project Settings.


#include "MainGamePlayerController.h"


AMainGamePlayerController::AMainGamePlayerController()
{
	PrimaryActorTick.bCanEverTick = true;
}

AMainGamePlayerController::~AMainGamePlayerController()
{
}

void AMainGamePlayerController::BeginPlay()
{
	Super::BeginPlay();
	
	//Widget Must Be Created On PlayerController
	CreateMaingameWidget();

}

void AMainGamePlayerController::Tick(float DeltaSecond)
{
	Super::Tick(DeltaSecond);
}

void AMainGamePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindAction(TEXT("InventoryToggle"), IE_Pressed, this, &AMainGamePlayerController::InventoryToggle);
	InputComponent->BindAction(TEXT("ZButton"), IE_Pressed, this, &AMainGamePlayerController::ItemLeftToCenter);
	InputComponent->BindAction(TEXT("XButton"), IE_Pressed, this, &AMainGamePlayerController::ItemCenterToLeft);

	InputComponent->BindAction(TEXT("CButton"), IE_Pressed, this, &AMainGamePlayerController::OneItemLeftToCenter);
	InputComponent->BindAction(TEXT("VButton"), IE_Pressed, this, &AMainGamePlayerController::OneItemCenterToLeft);

}

void AMainGamePlayerController::MoveForward(float Axis)
{
	
}

void AMainGamePlayerController::MoveRight(float Axis)
{

}

void AMainGamePlayerController::CreateMaingameWidget()
{
	if (IsValid(WidgetClass))
	{
		Hudlayout = Cast<UHUDLayout>(CreateWidget(GetWorld(), WidgetClass));

		if (Hudlayout != nullptr)
		{
			Hudlayout->AddToViewport();
			bShowMouseCursor = true;
			InvenWidget = Hudlayout->Inventory;
			InvenWidget->SetVisibility(ESlateVisibility::Collapsed);
		}	
	}
}

void AMainGamePlayerController::InventoryToggle()
{
	if (InvenWidget == nullptr)
		return;

	if (InvenWidget->GetVisibility() == ESlateVisibility::Collapsed)
	{
		InvenWidget->SetVisibility(ESlateVisibility::Visible);
		bShowMouseCursor = true;
	}

	else if (InvenWidget->GetVisibility() == ESlateVisibility::Visible)
	{
		InvenWidget->SetVisibility(ESlateVisibility::Collapsed);
		bShowMouseCursor = false;
	}
}

void AMainGamePlayerController::AddItemToDataArray(TArray<UInventoryItemData*>& TargetDataArray, UInventoryItemData* ItemData)
{
	bool bIsNotFounded = true;
	if (TargetDataArray.Num() <= 0 )
	{	//no item containing
		TargetDataArray.Add(ItemData);
		return;
	}

	for (UInventoryItemData* DataItr : FirstItemDataArray)
	{
		if (ItemData->ItemID == DataItr->ItemID)
		{	//Founded SameItem
			DataItr->ItemCount += ItemData->ItemCount;
			bIsNotFounded = false;
			return;
		}
	}

	if (bIsNotFounded)
	{
		//not found but other item containing
		TargetDataArray.Add(ItemData);
		return;
	}
}


void AMainGamePlayerController::GainItem(UInventoryItemData* ItemData)
{
	//will use FirstItemDataArray, LeftInvenSlot

	AddItemToDataArray(FirstItemDataArray, ItemData);

	InvenWidget->LeftInventory->InvenTileView->SetListItems(FirstItemDataArray);
	InvenWidget->LeftInventory->InvenTileView->RegenerateAllEntries();
}


void AMainGamePlayerController::AddItemToInventory(UObject* Obj)
{
	//if (InvenWidget == nullptr || Obj == nullptr)
	//{
	//	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("Something is null"));
	//	return;
	//}

	//InvenWidget->AddItemtoInventory(Obj);


}
void AMainGamePlayerController::ItemLeftToCenter()
{
	//if (InvenWidget == nullptr)
	//	return;

	//InvenWidget->PopItemLeftToCenter();
}
void AMainGamePlayerController::ItemCenterToLeft()
{
	//if (InvenWidget == nullptr)
	//	return;

	//InvenWidget->PopItemCenterToLeft();
}
void AMainGamePlayerController::OneItemLeftToCenter()
{
	//InvenWidget->OneItemLeftToCenter();
}
void AMainGamePlayerController::OneItemCenterToLeft()
{
	//InvenWidget->OneItemCenterToLeft();
}
void AMainGamePlayerController::FindInventoryItem(UObject* Object) 
{
	if (InvenWidget == nullptr || Object == nullptr)
		return;

	UUMG_InventoryItem* tempitem = Cast<UUMG_InventoryItem>(Object);

	DragItemIndex = InvenWidget->MyItemTileView->GetDisplayedEntryWidgets().IndexOfByKey(tempitem);
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, FString::Printf(TEXT("Find %d"), DragItemIndex));

	//InvenWidget->MyItemTileView->GetIndexForItem(Object);

	//TArray<UUserWidget*> temparray = InvenWidget->MyItemTileView->GetDisplayedEntryWidgets();

	//auto tempObject = InvenWidget->MyItemTileView->ItemFromEntryWidget(*tempitem);
	//const UInventoryItemData* consttempData = Cast<UInventoryItemData>(tempObject);
	//UInventoryItemData* tempData = const_cast<UInventoryItemData*>(consttempData);
	//DragItemIndex = InvenWidget->ItemDataArray.Find(tempData);

	//for (UUserWidget* arrayitr : temparray )
	//{
	//	if (arrayitr == tempitem)
	//	{
	//		//DragItemIndex = 
	//		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("Find"));
	//		break;
	//	}
	//}

	//for (UObject* Dataitr : InvenWidget->MyItemTileView->GetListItems())
	//{
	//	if (tempitem == InvenWidget->MyItemTileView->GetEntryWidgetFromItem(Dataitr))
	//	{
	//		
	//		DragItemIndex = InvenWidget->ItemDataArray.IndexOfByKey(Dataitr);
	//		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, FString::Printf(TEXT("Success %d"), DragItemIndex));
	//		DraggingItemData = InvenWidget->ItemDataArray[DragItemIndex];
	//		break;
	//	}
	//}

}

