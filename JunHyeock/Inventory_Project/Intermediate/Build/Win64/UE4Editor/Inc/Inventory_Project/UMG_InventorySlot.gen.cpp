// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory_Project/UMG_InventorySlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMG_InventorySlot() {}
// Cross Module References
	INVENTORY_PROJECT_API UClass* Z_Construct_UClass_UUMG_InventorySlot_NoRegister();
	INVENTORY_PROJECT_API UClass* Z_Construct_UClass_UUMG_InventorySlot();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Inventory_Project();
	UMG_API UClass* Z_Construct_UClass_UTileView_NoRegister();
// End Cross Module References
	void UUMG_InventorySlot::StaticRegisterNativesUUMG_InventorySlot()
	{
	}
	UClass* Z_Construct_UClass_UUMG_InventorySlot_NoRegister()
	{
		return UUMG_InventorySlot::StaticClass();
	}
	struct Z_Construct_UClass_UUMG_InventorySlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvenTileView_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InvenTileView;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMG_InventorySlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Inventory_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMG_InventorySlot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UMG_InventorySlot.h" },
		{ "ModuleRelativePath", "UMG_InventorySlot.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMG_InventorySlot_Statics::NewProp_InvenTileView_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UMG_InventorySlot.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMG_InventorySlot_Statics::NewProp_InvenTileView = { "InvenTileView", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMG_InventorySlot, InvenTileView), Z_Construct_UClass_UTileView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMG_InventorySlot_Statics::NewProp_InvenTileView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_InventorySlot_Statics::NewProp_InvenTileView_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMG_InventorySlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMG_InventorySlot_Statics::NewProp_InvenTileView,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMG_InventorySlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMG_InventorySlot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMG_InventorySlot_Statics::ClassParams = {
		&UUMG_InventorySlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUMG_InventorySlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_InventorySlot_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMG_InventorySlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_InventorySlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMG_InventorySlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMG_InventorySlot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMG_InventorySlot, 1920493132);
	template<> INVENTORY_PROJECT_API UClass* StaticClass<UUMG_InventorySlot>()
	{
		return UUMG_InventorySlot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMG_InventorySlot(Z_Construct_UClass_UUMG_InventorySlot, &UUMG_InventorySlot::StaticClass, TEXT("/Script/Inventory_Project"), TEXT("UUMG_InventorySlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMG_InventorySlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
