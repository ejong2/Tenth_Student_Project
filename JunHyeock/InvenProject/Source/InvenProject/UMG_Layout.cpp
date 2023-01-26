// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG_Layout.h"

void UUMG_Layout::NativeConstruct()
{
	UUMG_EquipmentSlot* TempSlot =  Cast<UUMG_EquipmentSlot>(GetWidgetFromName(TEXT("HeadGearSlot")));
	if (TempSlot)
	{
		TempSlot->SlotType = MyEnum::Head;

		TempSlot = Cast<UUMG_EquipmentSlot>(GetWidgetFromName(TEXT("BodySuitSlot")));
		TempSlot->SlotType = MyEnum::Body;

		TempSlot = Cast<UUMG_EquipmentSlot>(GetWidgetFromName(TEXT("ShooseSlot")));
		TempSlot->SlotType = MyEnum::Foot;

		TempSlot = Cast<UUMG_EquipmentSlot>(GetWidgetFromName(TEXT("WeaponSlot")));
		TempSlot->SlotType = MyEnum::Weapon;
	}
}