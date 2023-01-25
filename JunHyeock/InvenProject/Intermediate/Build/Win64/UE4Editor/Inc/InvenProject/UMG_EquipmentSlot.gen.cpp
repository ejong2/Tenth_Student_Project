// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InvenProject/UMG_EquipmentSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMG_EquipmentSlot() {}
// Cross Module References
	INVENPROJECT_API UClass* Z_Construct_UClass_UUMG_EquipmentSlot_NoRegister();
	INVENPROJECT_API UClass* Z_Construct_UClass_UUMG_EquipmentSlot();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_InvenProject();
// End Cross Module References
	void UUMG_EquipmentSlot::StaticRegisterNativesUUMG_EquipmentSlot()
	{
	}
	UClass* Z_Construct_UClass_UUMG_EquipmentSlot_NoRegister()
	{
		return UUMG_EquipmentSlot::StaticClass();
	}
	struct Z_Construct_UClass_UUMG_EquipmentSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMG_EquipmentSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_InvenProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMG_EquipmentSlot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UMG_EquipmentSlot.h" },
		{ "ModuleRelativePath", "UMG_EquipmentSlot.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMG_EquipmentSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMG_EquipmentSlot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMG_EquipmentSlot_Statics::ClassParams = {
		&UUMG_EquipmentSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMG_EquipmentSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_EquipmentSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMG_EquipmentSlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMG_EquipmentSlot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMG_EquipmentSlot, 199826265);
	template<> INVENPROJECT_API UClass* StaticClass<UUMG_EquipmentSlot>()
	{
		return UUMG_EquipmentSlot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMG_EquipmentSlot(Z_Construct_UClass_UUMG_EquipmentSlot, &UUMG_EquipmentSlot::StaticClass, TEXT("/Script/InvenProject"), TEXT("UUMG_EquipmentSlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMG_EquipmentSlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
