// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InvenProject/UMG_LandItems.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMG_LandItems() {}
// Cross Module References
	INVENPROJECT_API UClass* Z_Construct_UClass_UUMG_LandItems_NoRegister();
	INVENPROJECT_API UClass* Z_Construct_UClass_UUMG_LandItems();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_InvenProject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	UMG_API UClass* Z_Construct_UClass_UListView_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMG_LandItems::execResSpawnItemwithClassAndCount)
	{
		P_GET_OBJECT(UClass,Z_Param_Myclass);
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_GET_STRUCT(FTransform,Z_Param_MyTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResSpawnItemwithClassAndCount_Implementation(Z_Param_Myclass,Z_Param_count,Z_Param_MyTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMG_LandItems::execSpawnItemwithClassAndCount)
	{
		P_GET_OBJECT(UClass,Z_Param_Myclass);
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_GET_STRUCT(FTransform,Z_Param_MyTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnItemwithClassAndCount_Implementation(Z_Param_Myclass,Z_Param_count,Z_Param_MyTransform);
		P_NATIVE_END;
	}
	static FName NAME_UUMG_LandItems_ResSpawnItemwithClassAndCount = FName(TEXT("ResSpawnItemwithClassAndCount"));
	void UUMG_LandItems::ResSpawnItemwithClassAndCount(TSubclassOf<AActor>  Myclass, int32 count, FTransform MyTransform)
	{
		UMG_LandItems_eventResSpawnItemwithClassAndCount_Parms Parms;
		Parms.Myclass=Myclass;
		Parms.count=count;
		Parms.MyTransform=MyTransform;
		ProcessEvent(FindFunctionChecked(NAME_UUMG_LandItems_ResSpawnItemwithClassAndCount),&Parms);
	}
	static FName NAME_UUMG_LandItems_SpawnItemwithClassAndCount = FName(TEXT("SpawnItemwithClassAndCount"));
	void UUMG_LandItems::SpawnItemwithClassAndCount(TSubclassOf<AActor>  Myclass, int32 count, FTransform MyTransform)
	{
		UMG_LandItems_eventSpawnItemwithClassAndCount_Parms Parms;
		Parms.Myclass=Myclass;
		Parms.count=count;
		Parms.MyTransform=MyTransform;
		ProcessEvent(FindFunctionChecked(NAME_UUMG_LandItems_SpawnItemwithClassAndCount),&Parms);
	}
	void UUMG_LandItems::StaticRegisterNativesUUMG_LandItems()
	{
		UClass* Class = UUMG_LandItems::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResSpawnItemwithClassAndCount", &UUMG_LandItems::execResSpawnItemwithClassAndCount },
			{ "SpawnItemwithClassAndCount", &UUMG_LandItems::execSpawnItemwithClassAndCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMG_LandItems_ResSpawnItemwithClassAndCount_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Myclass;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_count;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MyTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUMG_LandItems_ResSpawnItemwithClassAndCount_Statics::NewProp_Myclass = { "Myclass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMG_LandItems_eventResSpawnItemwithClassAndCount_Parms, Myclass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMG_LandItems_ResSpawnItemwithClassAndCount_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMG_LandItems_eventResSpawnItemwithClassAndCount_Parms, count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMG_LandItems_ResSpawnItemwithClassAndCount_Statics::NewProp_MyTransform = { "MyTransform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMG_LandItems_eventResSpawnItemwithClassAndCount_Parms, MyTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMG_LandItems_ResSpawnItemwithClassAndCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMG_LandItems_ResSpawnItemwithClassAndCount_Statics::NewProp_Myclass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMG_LandItems_ResSpawnItemwithClassAndCount_Statics::NewProp_count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMG_LandItems_ResSpawnItemwithClassAndCount_Statics::NewProp_MyTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMG_LandItems_ResSpawnItemwithClassAndCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UMG_LandItems.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMG_LandItems_ResSpawnItemwithClassAndCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMG_LandItems, nullptr, "ResSpawnItemwithClassAndCount", nullptr, nullptr, sizeof(UMG_LandItems_eventResSpawnItemwithClassAndCount_Parms), Z_Construct_UFunction_UUMG_LandItems_ResSpawnItemwithClassAndCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMG_LandItems_ResSpawnItemwithClassAndCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMG_LandItems_ResSpawnItemwithClassAndCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMG_LandItems_ResSpawnItemwithClassAndCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMG_LandItems_ResSpawnItemwithClassAndCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMG_LandItems_ResSpawnItemwithClassAndCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMG_LandItems_SpawnItemwithClassAndCount_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Myclass;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_count;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MyTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUMG_LandItems_SpawnItemwithClassAndCount_Statics::NewProp_Myclass = { "Myclass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMG_LandItems_eventSpawnItemwithClassAndCount_Parms, Myclass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMG_LandItems_SpawnItemwithClassAndCount_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMG_LandItems_eventSpawnItemwithClassAndCount_Parms, count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMG_LandItems_SpawnItemwithClassAndCount_Statics::NewProp_MyTransform = { "MyTransform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMG_LandItems_eventSpawnItemwithClassAndCount_Parms, MyTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMG_LandItems_SpawnItemwithClassAndCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMG_LandItems_SpawnItemwithClassAndCount_Statics::NewProp_Myclass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMG_LandItems_SpawnItemwithClassAndCount_Statics::NewProp_count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMG_LandItems_SpawnItemwithClassAndCount_Statics::NewProp_MyTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMG_LandItems_SpawnItemwithClassAndCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UMG_LandItems.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMG_LandItems_SpawnItemwithClassAndCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMG_LandItems, nullptr, "SpawnItemwithClassAndCount", nullptr, nullptr, sizeof(UMG_LandItems_eventSpawnItemwithClassAndCount_Parms), Z_Construct_UFunction_UUMG_LandItems_SpawnItemwithClassAndCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMG_LandItems_SpawnItemwithClassAndCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMG_LandItems_SpawnItemwithClassAndCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMG_LandItems_SpawnItemwithClassAndCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMG_LandItems_SpawnItemwithClassAndCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMG_LandItems_SpawnItemwithClassAndCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMG_LandItems_NoRegister()
	{
		return UUMG_LandItems::StaticClass();
	}
	struct Z_Construct_UClass_UUMG_LandItems_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandItemListView_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LandItemListView;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMG_LandItems_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_InvenProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMG_LandItems_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMG_LandItems_ResSpawnItemwithClassAndCount, "ResSpawnItemwithClassAndCount" }, // 1057696530
		{ &Z_Construct_UFunction_UUMG_LandItems_SpawnItemwithClassAndCount, "SpawnItemwithClassAndCount" }, // 1534754231
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMG_LandItems_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UMG_LandItems.h" },
		{ "ModuleRelativePath", "UMG_LandItems.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMG_LandItems_Statics::NewProp_LandItemListView_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UMG_LandItems" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UMG_LandItems.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMG_LandItems_Statics::NewProp_LandItemListView = { "LandItemListView", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMG_LandItems, LandItemListView), Z_Construct_UClass_UListView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMG_LandItems_Statics::NewProp_LandItemListView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_LandItems_Statics::NewProp_LandItemListView_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMG_LandItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMG_LandItems_Statics::NewProp_LandItemListView,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMG_LandItems_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMG_LandItems>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMG_LandItems_Statics::ClassParams = {
		&UUMG_LandItems::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMG_LandItems_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_LandItems_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMG_LandItems_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMG_LandItems_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMG_LandItems()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMG_LandItems_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMG_LandItems, 368576099);
	template<> INVENPROJECT_API UClass* StaticClass<UUMG_LandItems>()
	{
		return UUMG_LandItems::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMG_LandItems(Z_Construct_UClass_UUMG_LandItems, &UUMG_LandItems::StaticClass, TEXT("/Script/InvenProject"), TEXT("UUMG_LandItems"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMG_LandItems);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
