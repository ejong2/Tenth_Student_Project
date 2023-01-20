// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InvenProject/InvenPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInvenPlayerController() {}
// Cross Module References
	INVENPROJECT_API UClass* Z_Construct_UClass_AInvenPlayerController_NoRegister();
	INVENPROJECT_API UClass* Z_Construct_UClass_AInvenPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_InvenProject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void AInvenPlayerController::StaticRegisterNativesAInvenPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AInvenPlayerController_NoRegister()
	{
		return AInvenPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AInvenPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInvenPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_InvenProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInvenPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "InvenPlayerController.h" },
		{ "ModuleRelativePath", "InvenPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInvenPlayerController_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "InvenPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AInvenPlayerController_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInvenPlayerController, WidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AInvenPlayerController_Statics::NewProp_WidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInvenPlayerController_Statics::NewProp_WidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInvenPlayerController_Statics::NewProp_MyWidget_MetaData[] = {
		{ "Category", "InvenPlayerController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InvenPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInvenPlayerController_Statics::NewProp_MyWidget = { "MyWidget", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInvenPlayerController, MyWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInvenPlayerController_Statics::NewProp_MyWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInvenPlayerController_Statics::NewProp_MyWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInvenPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInvenPlayerController_Statics::NewProp_WidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInvenPlayerController_Statics::NewProp_MyWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInvenPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInvenPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInvenPlayerController_Statics::ClassParams = {
		&AInvenPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AInvenPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AInvenPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInvenPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInvenPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInvenPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInvenPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInvenPlayerController, 121054784);
	template<> INVENPROJECT_API UClass* StaticClass<AInvenPlayerController>()
	{
		return AInvenPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInvenPlayerController(Z_Construct_UClass_AInvenPlayerController, &AInvenPlayerController::StaticClass, TEXT("/Script/InvenProject"), TEXT("AInvenPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInvenPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
