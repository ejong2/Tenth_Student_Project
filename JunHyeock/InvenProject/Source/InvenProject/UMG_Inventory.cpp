// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG_Inventory.h"

bool UUMG_Inventory::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	AInvenPlayerController* MyController = Cast<AInvenPlayerController>(GetWorld()->GetFirstPlayerController());
	AInvenProjectCharacter* MyCharacter = Cast<AInvenProjectCharacter>(MyController->GetPawn());

	int32 GainCount = 1;


	if (MyController->bIsClickingInventory == true)
	{
		//인벤에서 인벤으로
		MyController->MyLayout->Inventory->InvenItemListView->RegenerateAllEntries();
	}
	else if (MyController->bIsClickingInventory == false)
	{
		//땅에서 인벤으로 추가
		if (MyController->MatchedIndex > -1)// 클릭한 위젯의 인덱스가 존재할때
		{
			UItemObject* ClickedObj = Cast<UItemObject>(MyController->MyLayout->LandItems->LandItemListView->GetItemAt(MyController->MatchedIndex));
			if (ClickedObj)
			{

				// 1. 비교
				// 2. 삭제
				if (GainCount > 0)
				{
					if (GainCount >= ClickedObj->ItemObjectCount)
					{
						//전부획득
						MyCharacter->InvenCompo->AddItem(ClickedObj->ItemClass, ClickedObj->ItemObjectCount);
						//액터삭제
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
