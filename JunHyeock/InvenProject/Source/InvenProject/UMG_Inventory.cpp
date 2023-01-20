// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG_Inventory.h"

bool UUMG_Inventory::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{

	//땅에버리기로직
	AInvenPlayerController* MyController = Cast<AInvenPlayerController>(GetWorld()->GetFirstPlayerController());
	AInvenProjectCharacter* MyCharacter = Cast<AInvenProjectCharacter>(MyController->GetPawn());

	MyCharacter->InvenCompo->RemoveItem(MyController->MatchedIndex);

	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("Drop"));

	return true;
}
