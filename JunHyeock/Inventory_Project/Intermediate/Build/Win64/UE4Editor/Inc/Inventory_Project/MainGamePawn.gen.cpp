// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory_Project/MainGamePawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainGamePawn() {}
// Cross Module References
	INVENTORY_PROJECT_API UClass* Z_Construct_UClass_AMainGamePawn_NoRegister();
	INVENTORY_PROJECT_API UClass* Z_Construct_UClass_AMainGamePawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Inventory_Project();
// End Cross Module References
	void AMainGamePawn::StaticRegisterNativesAMainGamePawn()
	{
	}
	UClass* Z_Construct_UClass_AMainGamePawn_NoRegister()
	{
		return AMainGamePawn::StaticClass();
	}
	struct Z_Construct_UClass_AMainGamePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainGamePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Inventory_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainGamePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MainGamePawn.h" },
		{ "ModuleRelativePath", "MainGamePawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainGamePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainGamePawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMainGamePawn_Statics::ClassParams = {
		&AMainGamePawn::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMainGamePawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainGamePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainGamePawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMainGamePawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainGamePawn, 2042438513);
	template<> INVENTORY_PROJECT_API UClass* StaticClass<AMainGamePawn>()
	{
		return AMainGamePawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainGamePawn(Z_Construct_UClass_AMainGamePawn, &AMainGamePawn::StaticClass, TEXT("/Script/Inventory_Project"), TEXT("AMainGamePawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainGamePawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
