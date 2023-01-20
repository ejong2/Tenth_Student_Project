// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InvenProject/ItemBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemBase() {}
// Cross Module References
	INVENPROJECT_API UClass* Z_Construct_UClass_AItemBase_NoRegister();
	INVENPROJECT_API UClass* Z_Construct_UClass_AItemBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_InvenProject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void AItemBase::StaticRegisterNativesAItemBase()
	{
	}
	UClass* Z_Construct_UClass_AItemBase_NoRegister()
	{
		return AItemBase::StaticClass();
	}
	struct Z_Construct_UClass_AItemBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItemBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_InvenProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ItemBase.h" },
		{ "ModuleRelativePath", "ItemBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemBase_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "ItemBase" },
		{ "ModuleRelativePath", "ItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AItemBase_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItemBase, ItemName), METADATA_PARAMS(Z_Construct_UClass_AItemBase_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemBase_Statics::NewProp_ItemName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemBase_Statics::NewProp_ItemIcon_MetaData[] = {
		{ "Category", "ItemBase" },
		{ "ModuleRelativePath", "ItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemBase_Statics::NewProp_ItemIcon = { "ItemIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItemBase, ItemIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItemBase_Statics::NewProp_ItemIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemBase_Statics::NewProp_ItemIcon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItemBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBase_Statics::NewProp_ItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBase_Statics::NewProp_ItemIcon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItemBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AItemBase_Statics::ClassParams = {
		&AItemBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AItemBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AItemBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AItemBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AItemBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AItemBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AItemBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AItemBase, 3311982435);
	template<> INVENPROJECT_API UClass* StaticClass<AItemBase>()
	{
		return AItemBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AItemBase(Z_Construct_UClass_AItemBase, &AItemBase::StaticClass, TEXT("/Script/InvenProject"), TEXT("AItemBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItemBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
