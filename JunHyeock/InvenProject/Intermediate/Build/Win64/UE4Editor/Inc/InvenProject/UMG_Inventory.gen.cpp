// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InvenProject/UMG_Inventory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMG_Inventory() {}
// Cross Module References
	INVENPROJECT_API UClass* Z_Construct_UClass_UUMG_Inventory_NoRegister();
	INVENPROJECT_API UClass* Z_Construct_UClass_UUMG_Inventory();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_InvenProject();
	UMG_API UClass* Z_Construct_UClass_UListView_NoRegister();
// End Cross Module References
	void UUMG_Inventory::StaticRegisterNativesUUMG_Inventory()
	{
	}
	UClass* Z_Construct_UClass_UUMG_Inventory_NoRegister()
	{
		return UUMG_Inventory::StaticClass();
	}
	struct Z_Construct_UClass_UUMG_Inventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvenItemListView_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InvenItemListView;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMG_Inventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_InvenProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMG_Inventory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UMG_Inventory.h" },
		{ "ModuleRelativePath", "UMG_Inventory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_InvenItemListView_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UMG_Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_InvenItemListView = { "InvenItemListView", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMG_Inventory, InvenItemListView), Z_Construct_UClass_UListView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_InvenItemListView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_InvenItemListView_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMG_Inventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_InvenItemListView,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMG_Inventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMG_Inventory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMG_Inventory_Statics::ClassParams = {
		&UUMG_Inventory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUMG_Inventory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_Inventory_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMG_Inventory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_Inventory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMG_Inventory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMG_Inventory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMG_Inventory, 2726556319);
	template<> INVENPROJECT_API UClass* StaticClass<UUMG_Inventory>()
	{
		return UUMG_Inventory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMG_Inventory(Z_Construct_UClass_UUMG_Inventory, &UUMG_Inventory::StaticClass, TEXT("/Script/InvenProject"), TEXT("UUMG_Inventory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMG_Inventory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
