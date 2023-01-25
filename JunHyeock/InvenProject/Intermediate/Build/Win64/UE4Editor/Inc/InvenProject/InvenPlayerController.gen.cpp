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
	INVENPROJECT_API UClass* Z_Construct_UClass_UItemObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AInvenPlayerController::execGetItemObjectofTileview)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UItemObject**)Z_Param__Result=P_THIS->GetItemObjectofTileview(Z_Param_index);
		P_NATIVE_END;
	}
	void AInvenPlayerController::StaticRegisterNativesAInvenPlayerController()
	{
		UClass* Class = AInvenPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetItemObjectofTileview", &AInvenPlayerController::execGetItemObjectofTileview },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AInvenPlayerController_GetItemObjectofTileview_Statics
	{
		struct InvenPlayerController_eventGetItemObjectofTileview_Parms
		{
			int32 index;
			UItemObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInvenPlayerController_GetItemObjectofTileview_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InvenPlayerController_eventGetItemObjectofTileview_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInvenPlayerController_GetItemObjectofTileview_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InvenPlayerController_eventGetItemObjectofTileview_Parms, ReturnValue), Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInvenPlayerController_GetItemObjectofTileview_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInvenPlayerController_GetItemObjectofTileview_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInvenPlayerController_GetItemObjectofTileview_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInvenPlayerController_GetItemObjectofTileview_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InvenPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInvenPlayerController_GetItemObjectofTileview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInvenPlayerController, nullptr, "GetItemObjectofTileview", nullptr, nullptr, sizeof(InvenPlayerController_eventGetItemObjectofTileview_Parms), Z_Construct_UFunction_AInvenPlayerController_GetItemObjectofTileview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInvenPlayerController_GetItemObjectofTileview_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInvenPlayerController_GetItemObjectofTileview_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInvenPlayerController_GetItemObjectofTileview_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInvenPlayerController_GetItemObjectofTileview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInvenPlayerController_GetItemObjectofTileview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AInvenPlayerController_NoRegister()
	{
		return AInvenPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AInvenPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchedIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MatchedIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsClickingInventory_MetaData[];
#endif
		static void NewProp_bIsClickingInventory_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsClickingInventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInvenPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_InvenProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AInvenPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInvenPlayerController_GetItemObjectofTileview, "GetItemObjectofTileview" }, // 211996888
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInvenPlayerController_Statics::NewProp_MatchedIndex_MetaData[] = {
		{ "Category", "InvenPlayerController" },
		{ "ModuleRelativePath", "InvenPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AInvenPlayerController_Statics::NewProp_MatchedIndex = { "MatchedIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInvenPlayerController, MatchedIndex), METADATA_PARAMS(Z_Construct_UClass_AInvenPlayerController_Statics::NewProp_MatchedIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInvenPlayerController_Statics::NewProp_MatchedIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInvenPlayerController_Statics::NewProp_bIsClickingInventory_MetaData[] = {
		{ "Category", "InvenPlayerController" },
		{ "ModuleRelativePath", "InvenPlayerController.h" },
	};
#endif
	void Z_Construct_UClass_AInvenPlayerController_Statics::NewProp_bIsClickingInventory_SetBit(void* Obj)
	{
		((AInvenPlayerController*)Obj)->bIsClickingInventory = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AInvenPlayerController_Statics::NewProp_bIsClickingInventory = { "bIsClickingInventory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AInvenPlayerController), &Z_Construct_UClass_AInvenPlayerController_Statics::NewProp_bIsClickingInventory_SetBit, METADATA_PARAMS(Z_Construct_UClass_AInvenPlayerController_Statics::NewProp_bIsClickingInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInvenPlayerController_Statics::NewProp_bIsClickingInventory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInvenPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInvenPlayerController_Statics::NewProp_WidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInvenPlayerController_Statics::NewProp_MyWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInvenPlayerController_Statics::NewProp_MatchedIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInvenPlayerController_Statics::NewProp_bIsClickingInventory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInvenPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInvenPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInvenPlayerController_Statics::ClassParams = {
		&AInvenPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AInvenPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AInvenPlayerController, 325675760);
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
