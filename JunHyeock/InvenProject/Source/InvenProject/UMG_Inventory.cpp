// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG_Inventory.h"

bool UUMG_Inventory::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	AInvenPlayerController* MyController = Cast<AInvenPlayerController>(GetWorld()->GetFirstPlayerController());
	AInvenProjectCharacter* MyCharacter = Cast<AInvenProjectCharacter>(MyController->GetPawn());
	if (MyController->bIsClickingInventory == true)
	{
		//�κ����� �κ�����
		MyController->MyLayout->Inventory->InvenItemListView->RegenerateAllEntries();
	}
	else if (MyController->bIsClickingInventory == false)
	{
		//������ �κ����� �߰�
		if (MyController->MatchedIndex > -1)
		{
			UItemObject* ClickedObj = Cast<UItemObject>(MyController->MyLayout->LandItems->LandItemListView->GetItemAt(MyController->MatchedIndex));
			if (ClickedObj)
			{
				MyCharacter->InvenCompo->AddItem(ClickedObj->ItemClass, ClickedObj->ItemObjectCount);

				//���ͻ���
				MyCharacter->FindAndDestroyActorFromItemObj(MyController->MatchedIndex);

			}


		}

	}


	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("On Inventory"));

	return true;
}
