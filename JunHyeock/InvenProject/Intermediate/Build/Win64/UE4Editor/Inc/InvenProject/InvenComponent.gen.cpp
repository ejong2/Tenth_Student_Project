// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InvenProject/InvenComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInvenComponent() {}
// Cross Module References
	INVENPROJECT_API UClass* Z_Construct_UClass_UInvenComponent_NoRegister();
	INVENPROJECT_API UClass* Z_Construct_UClass_UInvenComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_InvenProject();
// End Cross Module References
	void UInvenComponent::StaticRegisterNativesUInvenComponent()
	{
	}
	UClass* Z_Construct_UClass_UInvenComponent_NoRegister()
	{
		return UInvenComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInvenComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInvenComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_InvenProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInvenComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "InvenComponent.h" },
		{ "ModuleRelativePath", "InvenComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInvenComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInvenComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInvenComponent_Statics::ClassParams = {
		&UInvenComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInvenComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInvenComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInvenComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInvenComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInvenComponent, 2034724923);
	template<> INVENPROJECT_API UClass* StaticClass<UInvenComponent>()
	{
		return UInvenComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInvenComponent(Z_Construct_UClass_UInvenComponent, &UInvenComponent::StaticClass, TEXT("/Script/InvenProject"), TEXT("UInvenComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInvenComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
