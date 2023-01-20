// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG_LandItems.h"

bool UUMG_LandItems::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, TEXT("Left Drop"));

	UDragWidget* DragDropOperation = Cast<UDragWidget>(InOperation);
	
	if (DragDropOperation == nullptr)
	return false;
	

	DragDropOperation->ItemClass;



	AItemBase* NewItem = GetWorld()->SpawnActor<AItemBase>(DragDropOperation->ItemClass, FVector(0,0,600), FRotator(0));

	
	if (DragDropOperation->ItemClass != nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, UKismetSystemLibrary::GetDisplayName(DragDropOperation->ItemClass));
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, UKismetSystemLibrary::GetDisplayName(NewItem));

	}


    return true;
}
