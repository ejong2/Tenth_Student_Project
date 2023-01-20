// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InvenProject/UMG_LandItems.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMG_LandItems() {}
// Cross Module References
	INVENPROJECT_API UClass* Z_Construct_UClass_UUMG_LandItems_NoRegister();
	INVENPROJECT_API UClass* Z_Construct_UClass_UUMG_LandItems();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_InvenProject();
	UMG_API UClass* Z_Construct_UClass_UListView_NoRegister();
// End Cross Module References
	void UUMG_LandItems::StaticRegisterNativesUUMG_LandItems()
	{
	}
	UClass* Z_Construct_UClass_UUMG_LandItems_NoRegister()
	{
		return UUMG_LandItems::StaticClass();
	}
	struct Z_Construct_UClass_UUMG_LandItems_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandItemListView_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LandItemListView;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMG_LandItems_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_InvenProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMG_LandItems_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UMG_LandItems.h" },
		{ "ModuleRelativePath", "UMG_LandItems.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMG_LandItems_Statics::NewProp_LandItemListView_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UMG_LandItems.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMG_LandItems_Statics::NewProp_LandItemListView = { "LandItemListView", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMG_LandItems, LandItemListView), Z_Construct_UClass_UListView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMG_LandItems_Statics::NewProp_LandItemListView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_LandItems_Statics::NewProp_LandItemListView_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMG_LandItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMG_LandItems_Statics::NewProp_LandItemListView,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMG_LandItems_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMG_LandItems>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMG_LandItems_Statics::ClassParams = {
		&UUMG_LandItems::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUMG_LandItems_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_LandItems_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMG_LandItems_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_LandItems_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMG_LandItems()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMG_LandItems_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMG_LandItems, 1820187628);
	template<> INVENPROJECT_API UClass* StaticClass<UUMG_LandItems>()
	{
		return UUMG_LandItems::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMG_LandItems(Z_Construct_UClass_UUMG_LandItems, &UUMG_LandItems::StaticClass, TEXT("/Script/InvenProject"), TEXT("UUMG_LandItems"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMG_LandItems);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
