// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG_EquipmentSlot.h"

void UUMG_EquipmentSlot::NativeConstruct()
{
    if (Icon && DefaultIcon)
    {
        DefaultIcon->SetBrush(Icon->Brush);
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
    AInvenPlayerController* MyController = Cast<AInvenPlayerController>(GetWorld()->GetFirstPlayerController());
    AInvenProjectCharacter* MyCharacter = Cast<AInvenProjectCharacter>(MyController->GetPawn());
    AItemBase* Item = Cast<AItemBase>(DragDropOperation->ItemClass->GetDefaultObject());

    AItemBase* TempObject = Cast<AItemBase>(DragDropOperation->ItemClass->GetDefaultObject());



    if (MyController->bIsClickingEquip == false && MyController->bIsClickingInventory == true)
    {//인벤토리에서
        MyCharacter->InvenCompo->RemoveItemasCount(MyController->MatchedIndex, 1);
    }
    else if (MyController->bIsClickingEquip == false && MyController->bIsClickingInventory == false)
    {//랜드아이템에서
        UItemObject* ClickedObj = Cast<UItemObject>(MyController->MyLayout->LandItems->LandItemListView->GetItemAt(MyController->MatchedIndex));
        if (ClickedObj && 1 >= ClickedObj->ItemObjectCount)
        {
            //액터삭제
            MyCharacter->FindAndDestroyActorFromItemObj(MyController->MatchedIndex);
            MyController->MatchedIndex = -1;
        }
        else if (ClickedObj && 1 < ClickedObj->ItemObjectCount)
        {
            ClickedObj->ItemObjectCount -= 1;
            MyCharacter->FindAndDecreaseCountActorObject(MyController->MatchedIndex, 1);
            MyController->MyLayout->LandItems->LandItemListView->RegenerateAllEntries();
            MyController->MatchedIndex = -1;
        }
    }
    else if (MyController->bIsClickingEquip == true && MyController->bIsClickingInventory == false)
    {//장비창에서
        UUMG_EquipmentSlot* SelectedSlot = Cast<UUMG_EquipmentSlot>(DragDropOperation->WidgetReference);
        if (SelectedSlot == this)
            return false;

        if (ItemClass != nullptr)
        {//드롭받은 장비창이 아이템 갖고있으면 
            //Swap Data :: Class, Brush, Mesh
            TSubclassOf<AItemBase> TempClass = ItemClass;
            FSlateBrush TempBrush = Icon->Brush;
            UStaticMesh* TempMesh = MyCharacter->GetMeshBySlotType(SlotType);


            SelectedSlot->SetMeshBySlotType(TempMesh);
            SelectedSlot->Icon->SetBrush(TempBrush);
            SelectedSlot->ItemClass = TempClass;
        }
        if(ItemClass == nullptr)
        {
            SelectedSlot->ItemClass = nullptr;
            SelectedSlot->SetMeshBySlotType(nullptr);

        }

    }
    ItemClass = DragDropOperation->ItemClass;
    Icon->SetBrushFromTexture(TempObject->ItemIcon);
    SetMeshBySlotType(Item->StaticMesh->GetStaticMesh());

    return true;
}


void UUMG_EquipmentSlot::SetMeshBySlotType(UStaticMesh* Mesh)
{
    AInvenPlayerController* MyController = Cast<AInvenPlayerController>(GetWorld()->GetFirstPlayerController());
    AInvenProjectCharacter* MyCharacter = Cast<AInvenProjectCharacter>(MyController->GetPawn());

    if (Mesh == nullptr && Icon)
    Icon->SetBrush(DefaultIcon->Brush);

    MyCharacter->SetMeshBySlotType(SlotType, Mesh);

}

