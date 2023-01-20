// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InvenProject/UMG_Layout.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMG_Layout() {}
// Cross Module References
	INVENPROJECT_API UClass* Z_Construct_UClass_UUMG_Layout_NoRegister();
	INVENPROJECT_API UClass* Z_Construct_UClass_UUMG_Layout();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_InvenProject();
	INVENPROJECT_API UClass* Z_Construct_UClass_UUMG_Inventory_NoRegister();
	INVENPROJECT_API UClass* Z_Construct_UClass_UUMG_LandItems_NoRegister();
// End Cross Module References
	void UUMG_Layout::StaticRegisterNativesUUMG_Layout()
	{
	}
	UClass* Z_Construct_UClass_UUMG_Layout_NoRegister()
	{
		return UUMG_Layout::StaticClass();
	}
	struct Z_Construct_UClass_UUMG_Layout_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LandItems;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMG_Layout_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_InvenProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMG_Layout_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UMG_Layout.h" },
		{ "ModuleRelativePath", "UMG_Layout.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMG_Layout_Statics::NewProp_Inventory_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UMG_Layout.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMG_Layout_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMG_Layout, Inventory), Z_Construct_UClass_UUMG_Inventory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMG_Layout_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_Layout_Statics::NewProp_Inventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMG_Layout_Statics::NewProp_LandItems_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UMG_Layout.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMG_Layout_Statics::NewProp_LandItems = { "LandItems", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMG_Layout, LandItems), Z_Construct_UClass_UUMG_LandItems_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMG_Layout_Statics::NewProp_LandItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_Layout_Statics::NewProp_LandItems_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMG_Layout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMG_Layout_Statics::NewProp_Inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMG_Layout_Statics::NewProp_LandItems,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMG_Layout_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMG_Layout>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMG_Layout_Statics::ClassParams = {
		&UUMG_Layout::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUMG_Layout_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_Layout_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMG_Layout_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_Layout_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMG_Layout()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMG_Layout_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMG_Layout, 1276950660);
	template<> INVENPROJECT_API UClass* StaticClass<UUMG_Layout>()
	{
		return UUMG_Layout::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMG_Layout(Z_Construct_UClass_UUMG_Layout, &UUMG_Layout::StaticClass, TEXT("/Script/InvenProject"), TEXT("UUMG_Layout"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMG_Layout);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
