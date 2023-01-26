// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG_EquipmentSlot.h"

void UUMG_EquipmentSlot::NativeConstruct()
{
    if (Icon && TempIcon)
    {
        TempIcon->SetBrush(Icon->Brush);
    }
}

FReply UUMG_EquipmentSlot::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
    FEventReply Reply;
    Reply.NativeReply = Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);

    if (InMouseEvent.IsMouseButtonDown(EKeys::RightMouseButton) == true)
    {

    }
    else if (InMouseEvent.IsMouseButtonDown(EKeys::LeftMouseButton) == true)
    {
        Reply = UWidgetBlueprintLibrary::DetectDragIfPressed(InMouseEvent, this, EKeys::LeftMouseButton);
        AInvenPlayerController* MyController = Cast<AInvenPlayerController>(GetWorld()->GetFirstPlayerController());
        MyController->bIsClickingEquip = true;
        MyController->bIsClickingInventory = false;

    }
    return Reply.NativeReply;
}

void UUMG_EquipmentSlot::NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation)
{
    if (ItemClass == nullptr)
        return;

    UDragWidget* DragDropOperation = NewObject<UDragWidget>();

    UUMG_EquipmentSlot* NewDragVisual = CreateWidget<UUMG_EquipmentSlot>(this, GetClass());
    if (NewDragVisual)
    {
        NewDragVisual->Icon->SetBrush(Icon->Brush);
    }
    
    DragDropOperation->DefaultDragVisual = NewDragVisual;
    DragDropOperation->WidgetReference = this;
    DragDropOperation->DragOffset = InGeometry.AbsoluteToLocal(InMouseEvent.GetScreenSpacePosition());
    DragDropOperation->ItemClass = ItemClass;
    DragDropOperation->Pivot = EDragPivot::MouseDown;


    OutOperation = DragDropOperation;
}

bool UUMG_EquipmentSlot::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
    UDragWidget* DragDropOperation = Cast<UDragWidget>(InOperation);
    
    //TSubclassOf<AItemBase> ItemClass = DragDropOperation->ItemClass;
    AInvenPlayerController* MyController = Cast<AInvenPlayerController>(GetWorld()->GetFirstPlayerController());
    AInvenProjectCharacter* MyCharacter = Cast<AInvenProjectCharacter>(MyController->GetPawn());

    AItemBase* Item = Cast<AItemBase>(DragDropOperation->ItemClass->GetDefaultObject());

    ItemClass = DragDropOperation->ItemClass;
    AItemBase* TempObject = Cast<AItemBase>(DragDropOperation->ItemClass->GetDefaultObject());
    Icon->SetBrushFromTexture(TempObject->ItemIcon);


    if (MyController->bIsClickingEquip == false && MyController->bIsClickingInventory == true)
    {
        MyCharacter->InvenCompo->RemoveItemasCount(MyController->MatchedIndex, 1);
    }
    else if (MyController->bIsClickingEquip == false && MyController->bIsClickingInventory == false)
    {
        UItemObject* ClickedObj = Cast<UItemObject>(MyController->MyLayout->LandItems->LandItemListView->GetItemAt(MyController->MatchedIndex));
        if (1 >= ClickedObj->ItemObjectCount)
        {
            //액터삭제
            MyCharacter->FindAndDestroyActorFromItemObj(MyController->MatchedIndex);
            MyController->MatchedIndex = -1;
        }
        else//(GainCount < ClickedObj->ItemObjectCount)
        {
            ClickedObj->ItemObjectCount -= 1;
            MyCharacter->FindAndDecreaseCountActorObject(MyController->MatchedIndex, 1);
            MyController->MyLayout->LandItems->LandItemListView->RegenerateAllEntries();
            MyController->MatchedIndex = -1;
        }
    }
    else if (MyController->bIsClickingEquip == true && MyController->bIsClickingInventory == false)
    {
        UUMG_EquipmentSlot* SelectedSlot = Cast<UUMG_EquipmentSlot>(DragDropOperation->WidgetReference);
        if (SelectedSlot == this)
            return false;
        SelectedSlot->ItemClass = nullptr;
        SelectedSlot->SetMeshBySlotType(nullptr);
    }

    SetMeshBySlotType(Item->StaticMesh->GetStaticMesh());

    return true;
}


void UUMG_EquipmentSlot::SetMeshBySlotType(UStaticMesh* Mesh)
{
    AInvenPlayerController* MyController = Cast<AInvenPlayerController>(GetWorld()->GetFirstPlayerController());
    AInvenProjectCharacter* MyCharacter = Cast<AInvenProjectCharacter>(MyController->GetPawn());

    if (Mesh == nullptr)
    Icon->SetBrush(TempIcon->Brush);


    //Must Check Item GearType Enum
    switch (SlotType)
    {
    case MyEnum::NONE:
        break;
    case MyEnum::Head:
    {
        if (true)
            MyCharacter->HeadGear->SetStaticMesh(Mesh);
        break;
    }

    case MyEnum::Body:
    {
        if (true)
            MyCharacter->BodySuit->SetStaticMesh(Mesh);
        break;
    }

    case MyEnum::Foot:
    {
        if (true)
            MyCharacter->Shoose->SetStaticMesh(Mesh);
        break;
    }

    case MyEnum::Weapon:
    {
        if (true)
            MyCharacter->Weapon->SetStaticMesh(Mesh);
        break;
    }

    default:
        break;
    }
}