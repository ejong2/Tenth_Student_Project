// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG_EquipmentSlot.h"

bool UUMG_EquipmentSlot::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
    GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("EquipSlot"));
    UDragWidget* DragDropOperation = Cast<UDragWidget>(InOperation);
    
    TSubclassOf<AItemBase> ItemClass = DragDropOperation->ItemClass;
    AInvenPlayerController* MyController = Cast<AInvenPlayerController>(GetWorld()->GetFirstPlayerController());
    AInvenProjectCharacter* MyCharacter = Cast<AInvenProjectCharacter>(MyController->GetPawn());

    AItemBase* Item = Cast<AItemBase>(DragDropOperation->ItemClass->GetDefaultObject());
    Item->StaticMesh->GetStaticMesh();

    

    MyCharacter->HeadGear->SetStaticMesh(Item->StaticMesh->GetStaticMesh());


    return false;
}
