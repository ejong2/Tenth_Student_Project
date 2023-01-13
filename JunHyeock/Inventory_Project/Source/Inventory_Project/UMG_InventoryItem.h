// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "Components/Border.h"
#include "Components/TextBlock.h"
#include "Blueprint/UserWidget.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "UMG_InventoryItem.generated.h"

/**
 * 
 */
UCLASS()
class INVENTORY_PROJECT_API UUMG_InventoryItem : public UUserWidget, public IUserObjectListEntry
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;

public:
	// view�� add�� ȣ��
	virtual void NativeOnListItemObjectSet(UObject* ListItemObject) override;

	// ���� �� ȣ��
	virtual void NativeOnItemSelectionChanged(bool bIsSelected) override;
	
private:
	// UI�������
	UPROPERTY()
	UBorder* Background;
	UPROPERTY()
	UTextBlock* NameText;
};
