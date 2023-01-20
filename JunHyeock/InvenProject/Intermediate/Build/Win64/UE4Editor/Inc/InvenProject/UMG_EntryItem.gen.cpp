// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InvenProject/UMG_EntryItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMG_EntryItem() {}
// Cross Module References
	INVENPROJECT_API UClass* Z_Construct_UClass_UUMG_EntryItem_NoRegister();
	INVENPROJECT_API UClass* Z_Construct_UClass_UUMG_EntryItem();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_InvenProject();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserObjectListEntry_NoRegister();
// End Cross Module References
	void UUMG_EntryItem::StaticRegisterNativesUUMG_EntryItem()
	{
	}
	UClass* Z_Construct_UClass_UUMG_EntryItem_NoRegister()
	{
		return UUMG_EntryItem::StaticClass();
	}
	struct Z_Construct_UClass_UUMG_EntryItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMG_EntryItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_InvenProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMG_EntryItem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UMG_EntryItem.h" },
		{ "ModuleRelativePath", "UMG_EntryItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMG_EntryItem_Statics::NewProp_ItemName_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UMG_EntryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMG_EntryItem_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMG_EntryItem, ItemName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMG_EntryItem_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_EntryItem_Statics::NewProp_ItemName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMG_EntryItem_Statics::NewProp_ItemCount_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UMG_EntryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMG_EntryItem_Statics::NewProp_ItemCount = { "ItemCount", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMG_EntryItem, ItemCount), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMG_EntryItem_Statics::NewProp_ItemCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_EntryItem_Statics::NewProp_ItemCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMG_EntryItem_Statics::NewProp_ItemIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UMG_EntryItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMG_EntryItem_Statics::NewProp_ItemIcon = { "ItemIcon", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMG_EntryItem, ItemIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMG_EntryItem_Statics::NewProp_ItemIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_EntryItem_Statics::NewProp_ItemIcon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMG_EntryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMG_EntryItem_Statics::NewProp_ItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMG_EntryItem_Statics::NewProp_ItemCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMG_EntryItem_Statics::NewProp_ItemIcon,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UUMG_EntryItem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUserObjectListEntry_NoRegister, (int32)VTABLE_OFFSET(UUMG_EntryItem, IUserObjectListEntry), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMG_EntryItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMG_EntryItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMG_EntryItem_Statics::ClassParams = {
		&UUMG_EntryItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUMG_EntryItem_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_EntryItem_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMG_EntryItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_EntryItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMG_EntryItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMG_EntryItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMG_EntryItem, 1454985887);
	template<> INVENPROJECT_API UClass* StaticClass<UUMG_EntryItem>()
	{
		return UUMG_EntryItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMG_EntryItem(Z_Construct_UClass_UUMG_EntryItem, &UUMG_EntryItem::StaticClass, TEXT("/Script/InvenProject"), TEXT("UUMG_EntryItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMG_EntryItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
