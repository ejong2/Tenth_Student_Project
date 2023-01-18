// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory_Project/MainGamePlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainGamePlayerController() {}
// Cross Module References
	INVENTORY_PROJECT_API UClass* Z_Construct_UClass_AMainGamePlayerController_NoRegister();
	INVENTORY_PROJECT_API UClass* Z_Construct_UClass_AMainGamePlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Inventory_Project();
	INVENTORY_PROJECT_API UClass* Z_Construct_UClass_UInventoryItemData_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	INVENTORY_PROJECT_API UClass* Z_Construct_UClass_UUMG_Inventory_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMainGamePlayerController::execAddItemToInventory)
	{
		P_GET_OBJECT(UObject,Z_Param_Obj);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddItemToInventory(Z_Param_Obj);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainGamePlayerController::execGainItem)
	{
		P_GET_OBJECT(UInventoryItemData,Z_Param_ItemData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GainItem(Z_Param_ItemData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMainGamePlayerController::execAddItemToDataArray)
	{
		P_GET_TARRAY_REF(UInventoryItemData*,Z_Param_Out_TargetDataArray);
		P_GET_OBJECT(UInventoryItemData,Z_Param_ItemData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddItemToDataArray(Z_Param_Out_TargetDataArray,Z_Param_ItemData);
		P_NATIVE_END;
	}
	void AMainGamePlayerController::StaticRegisterNativesAMainGamePlayerController()
	{
		UClass* Class = AMainGamePlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItemToDataArray", &AMainGamePlayerController::execAddItemToDataArray },
			{ "AddItemToInventory", &AMainGamePlayerController::execAddItemToInventory },
			{ "GainItem", &AMainGamePlayerController::execGainItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMainGamePlayerController_AddItemToDataArray_Statics
	{
		struct MainGamePlayerController_eventAddItemToDataArray_Parms
		{
			TArray<UInventoryItemData*> TargetDataArray;
			UInventoryItemData* ItemData;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetDataArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetDataArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMainGamePlayerController_AddItemToDataArray_Statics::NewProp_TargetDataArray_Inner = { "TargetDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInventoryItemData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMainGamePlayerController_AddItemToDataArray_Statics::NewProp_TargetDataArray = { "TargetDataArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MainGamePlayerController_eventAddItemToDataArray_Parms, TargetDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMainGamePlayerController_AddItemToDataArray_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MainGamePlayerController_eventAddItemToDataArray_Parms, ItemData), Z_Construct_UClass_UInventoryItemData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainGamePlayerController_AddItemToDataArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainGamePlayerController_AddItemToDataArray_Statics::NewProp_TargetDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainGamePlayerController_AddItemToDataArray_Statics::NewProp_TargetDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainGamePlayerController_AddItemToDataArray_Statics::NewProp_ItemData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainGamePlayerController_AddItemToDataArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainGamePlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainGamePlayerController_AddItemToDataArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainGamePlayerController, nullptr, "AddItemToDataArray", nullptr, nullptr, sizeof(MainGamePlayerController_eventAddItemToDataArray_Parms), Z_Construct_UFunction_AMainGamePlayerController_AddItemToDataArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGamePlayerController_AddItemToDataArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainGamePlayerController_AddItemToDataArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGamePlayerController_AddItemToDataArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainGamePlayerController_AddItemToDataArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainGamePlayerController_AddItemToDataArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainGamePlayerController_AddItemToInventory_Statics
	{
		struct MainGamePlayerController_eventAddItemToInventory_Parms
		{
			UObject* Obj;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Obj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMainGamePlayerController_AddItemToInventory_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MainGamePlayerController_eventAddItemToInventory_Parms, Obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainGamePlayerController_AddItemToInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainGamePlayerController_AddItemToInventory_Statics::NewProp_Obj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainGamePlayerController_AddItemToInventory_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//====================================================\n" },
		{ "ModuleRelativePath", "MainGamePlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainGamePlayerController_AddItemToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainGamePlayerController, nullptr, "AddItemToInventory", nullptr, nullptr, sizeof(MainGamePlayerController_eventAddItemToInventory_Parms), Z_Construct_UFunction_AMainGamePlayerController_AddItemToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGamePlayerController_AddItemToInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainGamePlayerController_AddItemToInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGamePlayerController_AddItemToInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainGamePlayerController_AddItemToInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainGamePlayerController_AddItemToInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMainGamePlayerController_GainItem_Statics
	{
		struct MainGamePlayerController_eventGainItem_Parms
		{
			UInventoryItemData* ItemData;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMainGamePlayerController_GainItem_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MainGamePlayerController_eventGainItem_Parms, ItemData), Z_Construct_UClass_UInventoryItemData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainGamePlayerController_GainItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainGamePlayerController_GainItem_Statics::NewProp_ItemData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMainGamePlayerController_GainItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MainGamePlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainGamePlayerController_GainItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainGamePlayerController, nullptr, "GainItem", nullptr, nullptr, sizeof(MainGamePlayerController_eventGainItem_Parms), Z_Construct_UFunction_AMainGamePlayerController_GainItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGamePlayerController_GainItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMainGamePlayerController_GainItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainGamePlayerController_GainItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMainGamePlayerController_GainItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMainGamePlayerController_GainItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMainGamePlayerController_NoRegister()
	{
		return AMainGamePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMainGamePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstItemDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstItemDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FirstItemDataArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondItemDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondItemDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SecondItemDataArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvenWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InvenWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainGamePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Inventory_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMainGamePlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainGamePlayerController_AddItemToDataArray, "AddItemToDataArray" }, // 184920672
		{ &Z_Construct_UFunction_AMainGamePlayerController_AddItemToInventory, "AddItemToInventory" }, // 2651164143
		{ &Z_Construct_UFunction_AMainGamePlayerController_GainItem, "GainItem" }, // 798400942
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainGamePlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MainGamePlayerController.h" },
		{ "ModuleRelativePath", "MainGamePlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainGamePlayerController_Statics::NewProp_FirstItemDataArray_Inner = { "FirstItemDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInventoryItemData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainGamePlayerController_Statics::NewProp_FirstItemDataArray_MetaData[] = {
		{ "Category", "MainGamePlayerController" },
		{ "ModuleRelativePath", "MainGamePlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMainGamePlayerController_Statics::NewProp_FirstItemDataArray = { "FirstItemDataArray", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainGamePlayerController, FirstItemDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMainGamePlayerController_Statics::NewProp_FirstItemDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainGamePlayerController_Statics::NewProp_FirstItemDataArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainGamePlayerController_Statics::NewProp_SecondItemDataArray_Inner = { "SecondItemDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInventoryItemData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainGamePlayerController_Statics::NewProp_SecondItemDataArray_MetaData[] = {
		{ "Category", "MainGamePlayerController" },
		{ "ModuleRelativePath", "MainGamePlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMainGamePlayerController_Statics::NewProp_SecondItemDataArray = { "SecondItemDataArray", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainGamePlayerController, SecondItemDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMainGamePlayerController_Statics::NewProp_SecondItemDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainGamePlayerController_Statics::NewProp_SecondItemDataArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainGamePlayerController_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "MainGamePlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainGamePlayerController_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainGamePlayerController, WidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMainGamePlayerController_Statics::NewProp_WidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainGamePlayerController_Statics::NewProp_WidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainGamePlayerController_Statics::NewProp_InvenWidget_MetaData[] = {
		{ "Category", "MainGamePlayerController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainGamePlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainGamePlayerController_Statics::NewProp_InvenWidget = { "InvenWidget", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainGamePlayerController, InvenWidget), Z_Construct_UClass_UUMG_Inventory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainGamePlayerController_Statics::NewProp_InvenWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainGamePlayerController_Statics::NewProp_InvenWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainGamePlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGamePlayerController_Statics::NewProp_FirstItemDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGamePlayerController_Statics::NewProp_FirstItemDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGamePlayerController_Statics::NewProp_SecondItemDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGamePlayerController_Statics::NewProp_SecondItemDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGamePlayerController_Statics::NewProp_WidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGamePlayerController_Statics::NewProp_InvenWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainGamePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainGamePlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMainGamePlayerController_Statics::ClassParams = {
		&AMainGamePlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMainGamePlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMainGamePlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMainGamePlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainGamePlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainGamePlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMainGamePlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainGamePlayerController, 50511770);
	template<> INVENTORY_PROJECT_API UClass* StaticClass<AMainGamePlayerController>()
	{
		return AMainGamePlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainGamePlayerController(Z_Construct_UClass_AMainGamePlayerController, &AMainGamePlayerController::StaticClass, TEXT("/Script/Inventory_Project"), TEXT("AMainGamePlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainGamePlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
