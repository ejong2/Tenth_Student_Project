// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG_Inventory.h"

bool UUMG_Inventory::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	AInvenPlayerController* MyController = Cast<AInvenPlayerController>(GetWorld()->GetFirstPlayerController());
	AInvenProjectCharacter* MyCharacter = Cast<AInvenProjectCharacter>(MyController->GetPawn());

	int32 GainCount = 1;


	if (MyController->bIsClickingInventory == true)
	{
		//�κ����� �κ�����
		MyController->MyLayout->Inventory->InvenItemListView->RegenerateAllEntries();
	}
	else if (MyController->bIsClickingInventory == false)
	{
		//������ �κ����� �߰�
		if (MyController->MatchedIndex > -1)// Ŭ���� ������ �ε����� �����Ҷ�
		{
			UItemObject* ClickedObj = Cast<UItemObject>(MyController->MyLayout->LandItems->LandItemListView->GetItemAt(MyController->MatchedIndex));
			if (ClickedObj)
			{

				// 1. ��
				// 2. ����
				if (GainCount > 0)
				{
					if (GainCount >= ClickedObj->ItemObjectCount)
					{
						//����ȹ��
						MyCharacter->InvenCompo->AddItem(ClickedObj->ItemClass, ClickedObj->ItemObjectCount);
						//���ͻ���
						MyCharacter->FindAndDestroyActorFromItemObj(MyController->MatchedIndex);
					}
					else//(GainCount < ClickedObj->ItemObjectCount)
					{
						MyCharacter->InvenCompo->AddItem(ClickedObj->ItemClass, GainCount);
						ClickedObj->ItemObjectCount -= GainCount;
						MyController->MyLayout->LandItems->LandItemListView->RegenerateAllEntries();
					}
				}
				else
				{
					MyController->MyLayout->Inventory->InvenItemListView->RegenerateAllEntries();

				}


			}


		}

	}


	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, TEXT("On Inventory"));

	return true;
}
