// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InvenProject/InvenProjectGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInvenProjectGameMode() {}
// Cross Module References
	INVENPROJECT_API UClass* Z_Construct_UClass_AInvenProjectGameMode_NoRegister();
	INVENPROJECT_API UClass* Z_Construct_UClass_AInvenProjectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_InvenProject();
// End Cross Module References
	void AInvenProjectGameMode::StaticRegisterNativesAInvenProjectGameMode()
	{
	}
	UClass* Z_Construct_UClass_AInvenProjectGameMode_NoRegister()
	{
		return AInvenProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AInvenProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInvenProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InvenProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInvenProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "InvenProjectGameMode.h" },
		{ "ModuleRelativePath", "InvenProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInvenProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInvenProjectGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInvenProjectGameMode_Statics::ClassParams = {
		&AInvenProjectGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AInvenProjectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInvenProjectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInvenProjectGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInvenProjectGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInvenProjectGameMode, 375148172);
	template<> INVENPROJECT_API UClass* StaticClass<AInvenProjectGameMode>()
	{
		return AInvenProjectGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInvenProjectGameMode(Z_Construct_UClass_AInvenProjectGameMode, &AInvenProjectGameMode::StaticClass, TEXT("/Script/InvenProject"), TEXT("AInvenProjectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInvenProjectGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
