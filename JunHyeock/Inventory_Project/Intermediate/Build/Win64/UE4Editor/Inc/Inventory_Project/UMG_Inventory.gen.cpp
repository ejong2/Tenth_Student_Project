// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory_Project/UMG_Inventory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMG_Inventory() {}
// Cross Module References
	INVENTORY_PROJECT_API UClass* Z_Construct_UClass_UUMG_Inventory_NoRegister();
	INVENTORY_PROJECT_API UClass* Z_Construct_UClass_UUMG_Inventory();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Inventory_Project();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometry();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FPointerEvent();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FEventReply();
	UMG_API UClass* Z_Construct_UClass_UTileView_NoRegister();
	INVENTORY_PROJECT_API UClass* Z_Construct_UClass_UUMG_InventorySlot_NoRegister();
	INVENTORY_PROJECT_API UClass* Z_Construct_UClass_UInventoryItemData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMG_Inventory::execAddItemToCenter)
	{
		P_GET_OBJECT(UObject,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddItemToCenter(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMG_Inventory::execAddItemtoInventory)
	{
		P_GET_OBJECT(UObject,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddItemtoInventory(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMG_Inventory::execRedirectMouseDownToWidget)
	{
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_InGeometry);
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_InMouseEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEventReply*)Z_Param__Result=P_THIS->RedirectMouseDownToWidget(Z_Param_Out_InGeometry,Z_Param_Out_InMouseEvent);
		P_NATIVE_END;
	}
	void UUMG_Inventory::StaticRegisterNativesUUMG_Inventory()
	{
		UClass* Class = UUMG_Inventory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItemToCenter", &UUMG_Inventory::execAddItemToCenter },
			{ "AddItemtoInventory", &UUMG_Inventory::execAddItemtoInventory },
			{ "RedirectMouseDownToWidget", &UUMG_Inventory::execRedirectMouseDownToWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMG_Inventory_AddItemToCenter_Statics
	{
		struct UMG_Inventory_eventAddItemToCenter_Parms
		{
			UObject* Item;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMG_Inventory_AddItemToCenter_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMG_Inventory_eventAddItemToCenter_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMG_Inventory_AddItemToCenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMG_Inventory_AddItemToCenter_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMG_Inventory_AddItemToCenter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UMG_Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMG_Inventory_AddItemToCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMG_Inventory, nullptr, "AddItemToCenter", nullptr, nullptr, sizeof(UMG_Inventory_eventAddItemToCenter_Parms), Z_Construct_UFunction_UUMG_Inventory_AddItemToCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMG_Inventory_AddItemToCenter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMG_Inventory_AddItemToCenter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMG_Inventory_AddItemToCenter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMG_Inventory_AddItemToCenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMG_Inventory_AddItemToCenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMG_Inventory_AddItemtoInventory_Statics
	{
		struct UMG_Inventory_eventAddItemtoInventory_Parms
		{
			UObject* Item;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMG_Inventory_AddItemtoInventory_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMG_Inventory_eventAddItemtoInventory_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMG_Inventory_AddItemtoInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMG_Inventory_AddItemtoInventory_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMG_Inventory_AddItemtoInventory_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//=======================================================\n" },
		{ "ModuleRelativePath", "UMG_Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMG_Inventory_AddItemtoInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMG_Inventory, nullptr, "AddItemtoInventory", nullptr, nullptr, sizeof(UMG_Inventory_eventAddItemtoInventory_Parms), Z_Construct_UFunction_UUMG_Inventory_AddItemtoInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMG_Inventory_AddItemtoInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMG_Inventory_AddItemtoInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMG_Inventory_AddItemtoInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMG_Inventory_AddItemtoInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMG_Inventory_AddItemtoInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMG_Inventory_RedirectMouseDownToWidget_Statics
	{
		struct UMG_Inventory_eventRedirectMouseDownToWidget_Parms
		{
			FGeometry InGeometry;
			FPointerEvent InMouseEvent;
			FEventReply ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InGeometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InGeometry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMouseEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InMouseEvent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMG_Inventory_RedirectMouseDownToWidget_Statics::NewProp_InGeometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMG_Inventory_RedirectMouseDownToWidget_Statics::NewProp_InGeometry = { "InGeometry", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMG_Inventory_eventRedirectMouseDownToWidget_Parms, InGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_UUMG_Inventory_RedirectMouseDownToWidget_Statics::NewProp_InGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMG_Inventory_RedirectMouseDownToWidget_Statics::NewProp_InGeometry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMG_Inventory_RedirectMouseDownToWidget_Statics::NewProp_InMouseEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMG_Inventory_RedirectMouseDownToWidget_Statics::NewProp_InMouseEvent = { "InMouseEvent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMG_Inventory_eventRedirectMouseDownToWidget_Parms, InMouseEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UUMG_Inventory_RedirectMouseDownToWidget_Statics::NewProp_InMouseEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMG_Inventory_RedirectMouseDownToWidget_Statics::NewProp_InMouseEvent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMG_Inventory_RedirectMouseDownToWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMG_Inventory_eventRedirectMouseDownToWidget_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMG_Inventory_RedirectMouseDownToWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMG_Inventory_RedirectMouseDownToWidget_Statics::NewProp_InGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMG_Inventory_RedirectMouseDownToWidget_Statics::NewProp_InMouseEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMG_Inventory_RedirectMouseDownToWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMG_Inventory_RedirectMouseDownToWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UMG_Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMG_Inventory_RedirectMouseDownToWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMG_Inventory, nullptr, "RedirectMouseDownToWidget", nullptr, nullptr, sizeof(UMG_Inventory_eventRedirectMouseDownToWidget_Parms), Z_Construct_UFunction_UUMG_Inventory_RedirectMouseDownToWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMG_Inventory_RedirectMouseDownToWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMG_Inventory_RedirectMouseDownToWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMG_Inventory_RedirectMouseDownToWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMG_Inventory_RedirectMouseDownToWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMG_Inventory_RedirectMouseDownToWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMG_Inventory_NoRegister()
	{
		return UUMG_Inventory::StaticClass();
	}
	struct Z_Construct_UClass_UUMG_Inventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyItemTileView_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyItemTileView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyItemTileViewCenter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyItemTileViewCenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftInventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CenterInventory;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemDataArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemDataArraySecond_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDataArraySecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemDataArraySecond;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMG_Inventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Inventory_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMG_Inventory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMG_Inventory_AddItemToCenter, "AddItemToCenter" }, // 3339212694
		{ &Z_Construct_UFunction_UUMG_Inventory_AddItemtoInventory, "AddItemtoInventory" }, // 3615291273
		{ &Z_Construct_UFunction_UUMG_Inventory_RedirectMouseDownToWidget, "RedirectMouseDownToWidget" }, // 1493860393
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMG_Inventory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UMG_Inventory.h" },
		{ "ModuleRelativePath", "UMG_Inventory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_MyItemTileView_MetaData[] = {
		{ "Category", "UMG_Inventory" },
		{ "Comment", "/*meta = (BindWidget), */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UMG_Inventory.h" },
		{ "ToolTip", "meta = (BindWidget)," },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_MyItemTileView = { "MyItemTileView", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMG_Inventory, MyItemTileView), Z_Construct_UClass_UTileView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_MyItemTileView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_MyItemTileView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_MyItemTileViewCenter_MetaData[] = {
		{ "Category", "UMG_Inventory" },
		{ "Comment", "/*meta = (BindWidget), */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UMG_Inventory.h" },
		{ "ToolTip", "meta = (BindWidget)," },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_MyItemTileViewCenter = { "MyItemTileViewCenter", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMG_Inventory, MyItemTileViewCenter), Z_Construct_UClass_UTileView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_MyItemTileViewCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_MyItemTileViewCenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_LeftInventory_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UMG_Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_LeftInventory = { "LeftInventory", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMG_Inventory, LeftInventory), Z_Construct_UClass_UUMG_InventorySlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_LeftInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_LeftInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_CenterInventory_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UMG_Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_CenterInventory = { "CenterInventory", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMG_Inventory, CenterInventory), Z_Construct_UClass_UUMG_InventorySlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_CenterInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_CenterInventory_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_ItemDataArray_Inner = { "ItemDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInventoryItemData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_ItemDataArray_MetaData[] = {
		{ "Category", "UMG_Inventory" },
		{ "Comment", "//it will be contain component or player controller\n" },
		{ "ModuleRelativePath", "UMG_Inventory.h" },
		{ "ToolTip", "it will be contain component or player controller" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_ItemDataArray = { "ItemDataArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMG_Inventory, ItemDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_ItemDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_ItemDataArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_ItemDataArraySecond_Inner = { "ItemDataArraySecond", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInventoryItemData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_ItemDataArraySecond_MetaData[] = {
		{ "Category", "UMG_Inventory" },
		{ "ModuleRelativePath", "UMG_Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_ItemDataArraySecond = { "ItemDataArraySecond", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMG_Inventory, ItemDataArraySecond), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_ItemDataArraySecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_ItemDataArraySecond_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMG_Inventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_MyItemTileView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_MyItemTileViewCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_LeftInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_CenterInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_ItemDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_ItemDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_ItemDataArraySecond_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMG_Inventory_Statics::NewProp_ItemDataArraySecond,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMG_Inventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMG_Inventory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMG_Inventory_Statics::ClassParams = {
		&UUMG_Inventory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMG_Inventory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_Inventory_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMG_Inventory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_Inventory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMG_Inventory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMG_Inventory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMG_Inventory, 1491392155);
	template<> INVENTORY_PROJECT_API UClass* StaticClass<UUMG_Inventory>()
	{
		return UUMG_Inventory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMG_Inventory(Z_Construct_UClass_UUMG_Inventory, &UUMG_Inventory::StaticClass, TEXT("/Script/Inventory_Project"), TEXT("UUMG_Inventory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMG_Inventory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
