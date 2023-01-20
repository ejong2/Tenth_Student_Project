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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	INVENPROJECT_API UClass* Z_Construct_UClass_AItemBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UInvenComponent::execRemoveItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveItem(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInvenComponent::execAddItem)
	{
		P_GET_OBJECT(UClass,Z_Param_ItemClass);
		P_GET_PROPERTY(FIntProperty,Z_Param_AddCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddItem(Z_Param_ItemClass,Z_Param_AddCount);
		P_NATIVE_END;
	}
	void UInvenComponent::StaticRegisterNativesUInvenComponent()
	{
		UClass* Class = UInvenComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItem", &UInvenComponent::execAddItem },
			{ "RemoveItem", &UInvenComponent::execRemoveItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInvenComponent_AddItem_Statics
	{
		struct InvenComponent_eventAddItem_Parms
		{
			TSubclassOf<AItemBase>  ItemClass;
			int32 AddCount;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemClass;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInvenComponent_AddItem_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InvenComponent_eventAddItem_Parms, ItemClass), Z_Construct_UClass_AItemBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInvenComponent_AddItem_Statics::NewProp_AddCount = { "AddCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InvenComponent_eventAddItem_Parms, AddCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInvenComponent_AddItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInvenComponent_AddItem_Statics::NewProp_ItemClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInvenComponent_AddItem_Statics::NewProp_AddCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInvenComponent_AddItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InvenComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInvenComponent_AddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInvenComponent, nullptr, "AddItem", nullptr, nullptr, sizeof(InvenComponent_eventAddItem_Parms), Z_Construct_UFunction_UInvenComponent_AddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInvenComponent_AddItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInvenComponent_AddItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInvenComponent_AddItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInvenComponent_AddItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInvenComponent_AddItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInvenComponent_RemoveItem_Statics
	{
		struct InvenComponent_eventRemoveItem_Parms
		{
			int32 index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInvenComponent_RemoveItem_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InvenComponent_eventRemoveItem_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInvenComponent_RemoveItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInvenComponent_RemoveItem_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInvenComponent_RemoveItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InvenComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInvenComponent_RemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInvenComponent, nullptr, "RemoveItem", nullptr, nullptr, sizeof(InvenComponent_eventRemoveItem_Parms), Z_Construct_UFunction_UInvenComponent_RemoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInvenComponent_RemoveItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInvenComponent_RemoveItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInvenComponent_RemoveItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInvenComponent_RemoveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInvenComponent_RemoveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInvenComponent_NoRegister()
	{
		return UInvenComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInvenComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_UInvenComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInvenComponent_AddItem, "AddItem" }, // 1593855541
		{ &Z_Construct_UFunction_UInvenComponent_RemoveItem, "RemoveItem" }, // 3303915422
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UInvenComponent, 2643709020);
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
