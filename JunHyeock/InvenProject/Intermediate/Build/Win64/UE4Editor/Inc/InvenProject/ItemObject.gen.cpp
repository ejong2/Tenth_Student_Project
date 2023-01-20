// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InvenProject/ItemObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemObject() {}
// Cross Module References
	INVENPROJECT_API UClass* Z_Construct_UClass_UItemObject_NoRegister();
	INVENPROJECT_API UClass* Z_Construct_UClass_UItemObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_InvenProject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	INVENPROJECT_API UClass* Z_Construct_UClass_AItemBase_NoRegister();
// End Cross Module References
	void UItemObject::StaticRegisterNativesUItemObject()
	{
	}
	UClass* Z_Construct_UClass_UItemObject_NoRegister()
	{
		return UItemObject::StaticClass();
	}
	struct Z_Construct_UClass_UItemObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InvenProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ItemObject.h" },
		{ "ModuleRelativePath", "ItemObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemObject_Statics::NewProp_ItemClass_MetaData[] = {
		{ "Category", "ItemObject" },
		{ "ModuleRelativePath", "ItemObject.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UItemObject_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItemObject, ItemClass), Z_Construct_UClass_AItemBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UItemObject_Statics::NewProp_ItemClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItemObject_Statics::NewProp_ItemClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemObject_Statics::NewProp_ItemClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemObject_Statics::ClassParams = {
		&UItemObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UItemObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UItemObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UItemObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemObject, 3178233851);
	template<> INVENPROJECT_API UClass* StaticClass<UItemObject>()
	{
		return UItemObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemObject(Z_Construct_UClass_UItemObject, &UItemObject::StaticClass, TEXT("/Script/InvenProject"), TEXT("UItemObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
