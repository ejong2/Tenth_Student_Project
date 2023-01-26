// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG_EquipmentSlot.h"

FReply UUMG_EquipmentSlot::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
    FEventReply Reply;
    Reply.NativeReply = Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);

    if (InMouseEvent.IsMouseButtonDown(EKeys::RightMouseButton) == true)
    {
        AInvenPlayerController* MyController = Cast<AInvenPlayerController>(GetWorld()->GetFirstPlayerController());
        AInvenProjectCharacter* MyCharacter = Cast<AInvenProjectCharacter>(MyController->GetPawn());

        switch (SlotType)
        {
        case MyEnum::NONE:
            break;
        case MyEnum::Head:
        {
            if (IsValid(MyCharacter->HeadGear->GetStaticMesh()))
            {
                MyCharacter->HeadGear->SetStaticMesh(nullptr);
                break;
            }
        }
        case MyEnum::Body:
        {
            if (IsValid(MyCharacter->BodySuit->GetStaticMesh()))
            {
                MyCharacter->BodySuit->SetStaticMesh(nullptr);
                break;
            }
        }
        case MyEnum::Foot:
        {
            if (IsValid(MyCharacter->Shoose->GetStaticMesh()))
            {
                MyCharacter->Shoose->SetStaticMesh(nullptr);
                break;
            }
        }
        case MyEnum::Weapon:
        {
            if (IsValid(MyCharacter->Weapon->GetStaticMesh()))
            {
                MyCharacter->Weapon->SetStaticMesh(nullptr);
                break;
            }
        }
        default:
            break;
        }


    }

    return Reply.NativeReply;
}

bool UUMG_EquipmentSlot::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
    UDragWidget* DragDropOperation = Cast<UDragWidget>(InOperation);
    
    //TSubclassOf<AItemBase> ItemClass = DragDropOperation->ItemClass;
    AInvenPlayerController* MyController = Cast<AInvenPlayerController>(GetWorld()->GetFirstPlayerController());
    AInvenProjectCharacter* MyCharacter = Cast<AInvenProjectCharacter>(MyController->GetPawn());

    AItemBase* Item = Cast<AItemBase>(DragDropOperation->ItemClass->GetDefaultObject());


    //Must Check Item GearType Enum
    switch (SlotType)
    {
    case MyEnum::NONE:
        break;
    case MyEnum::Head:
    {
        if(true)
        MyCharacter->HeadGear->SetStaticMesh(Item->StaticMesh->GetStaticMesh());
        break;
    }

    case MyEnum::Body:
    {
        if (true)
        MyCharacter->BodySuit->SetStaticMesh(Item->StaticMesh->GetStaticMesh());
        break;
    }

    case MyEnum::Foot:
    {
        if (true)
        MyCharacter->Shoose->SetStaticMesh(Item->StaticMesh->GetStaticMesh());
        break;
    }

    case MyEnum::Weapon:
    {
        if (true)
        MyCharacter->Weapon->SetStaticMesh(Item->StaticMesh->GetStaticMesh());
        break;
    }

    default:
        break;
    }


    return true;
}
