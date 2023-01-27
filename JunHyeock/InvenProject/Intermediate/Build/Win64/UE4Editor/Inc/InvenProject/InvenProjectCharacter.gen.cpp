// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InvenProject/InvenProjectCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInvenProjectCharacter() {}
// Cross Module References
	INVENPROJECT_API UClass* Z_Construct_UClass_AInvenProjectCharacter_NoRegister();
	INVENPROJECT_API UClass* Z_Construct_UClass_AInvenProjectCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_InvenProject();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	INVENPROJECT_API UEnum* Z_Construct_UEnum_InvenProject_MyEnum();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	INVENPROJECT_API UClass* Z_Construct_UClass_UInvenComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AInvenProjectCharacter::execResSpawnItemFromClassAndCount)
	{
		P_GET_OBJECT(UClass,Z_Param_MyActorClass);
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResSpawnItemFromClassAndCount_Implementation(Z_Param_MyActorClass,Z_Param_count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInvenProjectCharacter::execSpawnItemFromClassAndCount)
	{
		P_GET_OBJECT(UClass,Z_Param_MyActorClass);
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnItemFromClassAndCount_Implementation(Z_Param_MyActorClass,Z_Param_count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInvenProjectCharacter::execResSetMeshBySlotType)
	{
		P_GET_ENUM(MyEnum,Z_Param_Myenum);
		P_GET_OBJECT(UStaticMesh,Z_Param_MyMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResSetMeshBySlotType_Implementation(MyEnum(Z_Param_Myenum),Z_Param_MyMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInvenProjectCharacter::execSetMeshBySlotType)
	{
		P_GET_ENUM(MyEnum,Z_Param_Myenum);
		P_GET_OBJECT(UStaticMesh,Z_Param_MyMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMeshBySlotType_Implementation(MyEnum(Z_Param_Myenum),Z_Param_MyMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInvenProjectCharacter::execResFindAndDecreaseCountActorObject)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResFindAndDecreaseCountActorObject_Implementation(Z_Param_index,Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInvenProjectCharacter::execFindAndDecreaseCountActorObject)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindAndDecreaseCountActorObject_Implementation(Z_Param_index,Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInvenProjectCharacter::execResFindAndDestroyActorFromItemObj)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResFindAndDestroyActorFromItemObj_Implementation(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInvenProjectCharacter::execFindAndDestroyActorFromItemObj)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindAndDestroyActorFromItemObj_Implementation(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInvenProjectCharacter::execOnOverlapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInvenProjectCharacter::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	static FName NAME_AInvenProjectCharacter_FindAndDecreaseCountActorObject = FName(TEXT("FindAndDecreaseCountActorObject"));
	void AInvenProjectCharacter::FindAndDecreaseCountActorObject(int32 index, int32 Count)
	{
		InvenProjectCharacter_eventFindAndDecreaseCountActorObject_Parms Parms;
		Parms.index=index;
		Parms.Count=Count;
		ProcessEvent(FindFunctionChecked(NAME_AInvenProjectCharacter_FindAndDecreaseCountActorObject),&Parms);
	}
	static FName NAME_AInvenProjectCharacter_FindAndDestroyActorFromItemObj = FName(TEXT("FindAndDestroyActorFromItemObj"));
	void AInvenProjectCharacter::FindAndDestroyActorFromItemObj(int32 index)
	{
		InvenProjectCharacter_eventFindAndDestroyActorFromItemObj_Parms Parms;
		Parms.index=index;
		ProcessEvent(FindFunctionChecked(NAME_AInvenProjectCharacter_FindAndDestroyActorFromItemObj),&Parms);
	}
	static FName NAME_AInvenProjectCharacter_ResFindAndDecreaseCountActorObject = FName(TEXT("ResFindAndDecreaseCountActorObject"));
	void AInvenProjectCharacter::ResFindAndDecreaseCountActorObject(int32 index, int32 Count)
	{
		InvenProjectCharacter_eventResFindAndDecreaseCountActorObject_Parms Parms;
		Parms.index=index;
		Parms.Count=Count;
		ProcessEvent(FindFunctionChecked(NAME_AInvenProjectCharacter_ResFindAndDecreaseCountActorObject),&Parms);
	}
	static FName NAME_AInvenProjectCharacter_ResFindAndDestroyActorFromItemObj = FName(TEXT("ResFindAndDestroyActorFromItemObj"));
	void AInvenProjectCharacter::ResFindAndDestroyActorFromItemObj(int32 index)
	{
		InvenProjectCharacter_eventResFindAndDestroyActorFromItemObj_Parms Parms;
		Parms.index=index;
		ProcessEvent(FindFunctionChecked(NAME_AInvenProjectCharacter_ResFindAndDestroyActorFromItemObj),&Parms);
	}
	static FName NAME_AInvenProjectCharacter_ResSetMeshBySlotType = FName(TEXT("ResSetMeshBySlotType"));
	void AInvenProjectCharacter::ResSetMeshBySlotType(MyEnum Myenum, UStaticMesh* MyMesh)
	{
		InvenProjectCharacter_eventResSetMeshBySlotType_Parms Parms;
		Parms.Myenum=Myenum;
		Parms.MyMesh=MyMesh;
		ProcessEvent(FindFunctionChecked(NAME_AInvenProjectCharacter_ResSetMeshBySlotType),&Parms);
	}
	static FName NAME_AInvenProjectCharacter_ResSpawnItemFromClassAndCount = FName(TEXT("ResSpawnItemFromClassAndCount"));
	void AInvenProjectCharacter::ResSpawnItemFromClassAndCount(TSubclassOf<AActor>  MyActorClass, int32 count)
	{
		InvenProjectCharacter_eventResSpawnItemFromClassAndCount_Parms Parms;
		Parms.MyActorClass=MyActorClass;
		Parms.count=count;
		ProcessEvent(FindFunctionChecked(NAME_AInvenProjectCharacter_ResSpawnItemFromClassAndCount),&Parms);
	}
	static FName NAME_AInvenProjectCharacter_SetMeshBySlotType = FName(TEXT("SetMeshBySlotType"));
	void AInvenProjectCharacter::SetMeshBySlotType(MyEnum Myenum, UStaticMesh* MyMesh)
	{
		InvenProjectCharacter_eventSetMeshBySlotType_Parms Parms;
		Parms.Myenum=Myenum;
		Parms.MyMesh=MyMesh;
		ProcessEvent(FindFunctionChecked(NAME_AInvenProjectCharacter_SetMeshBySlotType),&Parms);
	}
	static FName NAME_AInvenProjectCharacter_SpawnItemFromClassAndCount = FName(TEXT("SpawnItemFromClassAndCount"));
	void AInvenProjectCharacter::SpawnItemFromClassAndCount(TSubclassOf<AActor>  MyActorClass, int32 count)
	{
		InvenProjectCharacter_eventSpawnItemFromClassAndCount_Parms Parms;
		Parms.MyActorClass=MyActorClass;
		Parms.count=count;
		ProcessEvent(FindFunctionChecked(NAME_AInvenProjectCharacter_SpawnItemFromClassAndCount),&Parms);
	}
	void AInvenProjectCharacter::StaticRegisterNativesAInvenProjectCharacter()
	{
		UClass* Class = AInvenProjectCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindAndDecreaseCountActorObject", &AInvenProjectCharacter::execFindAndDecreaseCountActorObject },
			{ "FindAndDestroyActorFromItemObj", &AInvenProjectCharacter::execFindAndDestroyActorFromItemObj },
			{ "OnOverlapBegin", &AInvenProjectCharacter::execOnOverlapBegin },
			{ "OnOverlapEnd", &AInvenProjectCharacter::execOnOverlapEnd },
			{ "ResFindAndDecreaseCountActorObject", &AInvenProjectCharacter::execResFindAndDecreaseCountActorObject },
			{ "ResFindAndDestroyActorFromItemObj", &AInvenProjectCharacter::execResFindAndDestroyActorFromItemObj },
			{ "ResSetMeshBySlotType", &AInvenProjectCharacter::execResSetMeshBySlotType },
			{ "ResSpawnItemFromClassAndCount", &AInvenProjectCharacter::execResSpawnItemFromClassAndCount },
			{ "SetMeshBySlotType", &AInvenProjectCharacter::execSetMeshBySlotType },
			{ "SpawnItemFromClassAndCount", &AInvenProjectCharacter::execSpawnItemFromClassAndCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AInvenProjectCharacter_FindAndDecreaseCountActorObject_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInvenProjectCharacter_FindAndDecreaseCountActorObject_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InvenProjectCharacter_eventFindAndDecreaseCountActorObject_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInvenProjectCharacter_FindAndDecreaseCountActorObject_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InvenProjectCharacter_eventFindAndDecreaseCountActorObject_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInvenProjectCharacter_FindAndDecreaseCountActorObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInvenProjectCharacter_FindAndDecreaseCountActorObject_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInvenProjectCharacter_FindAndDecreaseCountActorObject_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInvenProjectCharacter_FindAndDecreaseCountActorObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InvenProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInvenProjectCharacter_FindAndDecreaseCountActorObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInvenProjectCharacter, nullptr, "FindAndDecreaseCountActorObject", nullptr, nullptr, sizeof(InvenProjectCharacter_eventFindAndDecreaseCountActorObject_Parms), Z_Construct_UFunction_AInvenProjectCharacter_FindAndDecreaseCountActorObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInvenProjectCharacter_FindAndDecreaseCountActorObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInvenProjectCharacter_FindAndDecreaseCountActorObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInvenProjectCharacter_FindAndDecreaseCountActorObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInvenProjectCharacter_FindAndDecreaseCountActorObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInvenProjectCharacter_FindAndDecreaseCountActorObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInvenProjectCharacter_FindAndDestroyActorFromItemObj_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInvenProjectCharacter_FindAndDestroyActorFromItemObj_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InvenProjectCharacter_eventFindAndDestroyActorFromItemObj_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInvenProjectCharacter_FindAndDestroyActorFromItemObj_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInvenProjectCharacter_FindAndDestroyActorFromItemObj_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInvenProjectCharacter_FindAndDestroyActorFromItemObj_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InvenProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInvenProjectCharacter_FindAndDestroyActorFromItemObj_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInvenProjectCharacter, nullptr, "FindAndDestroyActorFromItemObj", nullptr, nullptr, sizeof(InvenProjectCharacter_eventFindAndDestroyActorFromItemObj_Parms), Z_Construct_UFunction_AInvenProjectCharacter_FindAndDestroyActorFromItemObj_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInvenProjectCharacter_FindAndDestroyActorFromItemObj_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInvenProjectCharacter_FindAndDestroyActorFromItemObj_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInvenProjectCharacter_FindAndDestroyActorFromItemObj_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInvenProjectCharacter_FindAndDestroyActorFromItemObj()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInvenProjectCharacter_FindAndDestroyActorFromItemObj_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapBegin_Statics
	{
		struct InvenProjectCharacter_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InvenProjectCharacter_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InvenProjectCharacter_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InvenProjectCharacter_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InvenProjectCharacter_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((InvenProjectCharacter_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InvenProjectCharacter_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InvenProjectCharacter_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapBegin_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InvenProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInvenProjectCharacter, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(InvenProjectCharacter_eventOnOverlapBegin_Parms), Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapEnd_Statics
	{
		struct InvenProjectCharacter_eventOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapEnd_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InvenProjectCharacter_eventOnOverlapEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InvenProjectCharacter_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InvenProjectCharacter_eventOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InvenProjectCharacter_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapEnd_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapEnd_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapEnd_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InvenProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInvenProjectCharacter, nullptr, "OnOverlapEnd", nullptr, nullptr, sizeof(InvenProjectCharacter_eventOnOverlapEnd_Parms), Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInvenProjectCharacter_ResFindAndDecreaseCountActorObject_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInvenProjectCharacter_ResFindAndDecreaseCountActorObject_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InvenProjectCharacter_eventResFindAndDecreaseCountActorObject_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInvenProjectCharacter_ResFindAndDecreaseCountActorObject_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InvenProjectCharacter_eventResFindAndDecreaseCountActorObject_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInvenProjectCharacter_ResFindAndDecreaseCountActorObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInvenProjectCharacter_ResFindAndDecreaseCountActorObject_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInvenProjectCharacter_ResFindAndDecreaseCountActorObject_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInvenProjectCharacter_ResFindAndDecreaseCountActorObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InvenProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInvenProjectCharacter_ResFindAndDecreaseCountActorObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInvenProjectCharacter, nullptr, "ResFindAndDecreaseCountActorObject", nullptr, nullptr, sizeof(InvenProjectCharacter_eventResFindAndDecreaseCountActorObject_Parms), Z_Construct_UFunction_AInvenProjectCharacter_ResFindAndDecreaseCountActorObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInvenProjectCharacter_ResFindAndDecreaseCountActorObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInvenProjectCharacter_ResFindAndDecreaseCountActorObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInvenProjectCharacter_ResFindAndDecreaseCountActorObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInvenProjectCharacter_ResFindAndDecreaseCountActorObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInvenProjectCharacter_ResFindAndDecreaseCountActorObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInvenProjectCharacter_ResFindAndDestroyActorFromItemObj_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInvenProjectCharacter_ResFindAndDestroyActorFromItemObj_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InvenProjectCharacter_eventResFindAndDestroyActorFromItemObj_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInvenProjectCharacter_ResFindAndDestroyActorFromItemObj_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInvenProjectCharacter_ResFindAndDestroyActorFromItemObj_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInvenProjectCharacter_ResFindAndDestroyActorFromItemObj_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InvenProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInvenProjectCharacter_ResFindAndDestroyActorFromItemObj_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInvenProjectCharacter, nullptr, "ResFindAndDestroyActorFromItemObj", nullptr, nullptr, sizeof(InvenProjectCharacter_eventResFindAndDestroyActorFromItemObj_Parms), Z_Construct_UFunction_AInvenProjectCharacter_ResFindAndDestroyActorFromItemObj_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInvenProjectCharacter_ResFindAndDestroyActorFromItemObj_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInvenProjectCharacter_ResFindAndDestroyActorFromItemObj_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInvenProjectCharacter_ResFindAndDestroyActorFromItemObj_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInvenProjectCharacter_ResFindAndDestroyActorFromItemObj()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInvenProjectCharacter_ResFindAndDestroyActorFromItemObj_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInvenProjectCharacter_ResSetMeshBySlotType_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Myenum_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Myenum;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AInvenProjectCharacter_ResSetMeshBySlotType_Statics::NewProp_Myenum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AInvenProjectCharacter_ResSetMeshBySlotType_Statics::NewProp_Myenum = { "Myenum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InvenProjectCharacter_eventResSetMeshBySlotType_Parms, Myenum), Z_Construct_UEnum_InvenProject_MyEnum, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInvenProjectCharacter_ResSetMeshBySlotType_Statics::NewProp_MyMesh = { "MyMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InvenProjectCharacter_eventResSetMeshBySlotType_Parms, MyMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInvenProjectCharacter_ResSetMeshBySlotType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInvenProjectCharacter_ResSetMeshBySlotType_Statics::NewProp_Myenum_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInvenProjectCharacter_ResSetMeshBySlotType_Statics::NewProp_Myenum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInvenProjectCharacter_ResSetMeshBySlotType_Statics::NewProp_MyMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInvenProjectCharacter_ResSetMeshBySlotType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InvenProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInvenProjectCharacter_ResSetMeshBySlotType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInvenProjectCharacter, nullptr, "ResSetMeshBySlotType", nullptr, nullptr, sizeof(InvenProjectCharacter_eventResSetMeshBySlotType_Parms), Z_Construct_UFunction_AInvenProjectCharacter_ResSetMeshBySlotType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInvenProjectCharacter_ResSetMeshBySlotType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInvenProjectCharacter_ResSetMeshBySlotType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInvenProjectCharacter_ResSetMeshBySlotType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInvenProjectCharacter_ResSetMeshBySlotType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInvenProjectCharacter_ResSetMeshBySlotType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInvenProjectCharacter_ResSpawnItemFromClassAndCount_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MyActorClass;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AInvenProjectCharacter_ResSpawnItemFromClassAndCount_Statics::NewProp_MyActorClass = { "MyActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InvenProjectCharacter_eventResSpawnItemFromClassAndCount_Parms, MyActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInvenProjectCharacter_ResSpawnItemFromClassAndCount_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InvenProjectCharacter_eventResSpawnItemFromClassAndCount_Parms, count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInvenProjectCharacter_ResSpawnItemFromClassAndCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInvenProjectCharacter_ResSpawnItemFromClassAndCount_Statics::NewProp_MyActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInvenProjectCharacter_ResSpawnItemFromClassAndCount_Statics::NewProp_count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInvenProjectCharacter_ResSpawnItemFromClassAndCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InvenProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInvenProjectCharacter_ResSpawnItemFromClassAndCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInvenProjectCharacter, nullptr, "ResSpawnItemFromClassAndCount", nullptr, nullptr, sizeof(InvenProjectCharacter_eventResSpawnItemFromClassAndCount_Parms), Z_Construct_UFunction_AInvenProjectCharacter_ResSpawnItemFromClassAndCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInvenProjectCharacter_ResSpawnItemFromClassAndCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInvenProjectCharacter_ResSpawnItemFromClassAndCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInvenProjectCharacter_ResSpawnItemFromClassAndCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInvenProjectCharacter_ResSpawnItemFromClassAndCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInvenProjectCharacter_ResSpawnItemFromClassAndCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInvenProjectCharacter_SetMeshBySlotType_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Myenum_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Myenum;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AInvenProjectCharacter_SetMeshBySlotType_Statics::NewProp_Myenum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AInvenProjectCharacter_SetMeshBySlotType_Statics::NewProp_Myenum = { "Myenum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InvenProjectCharacter_eventSetMeshBySlotType_Parms, Myenum), Z_Construct_UEnum_InvenProject_MyEnum, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInvenProjectCharacter_SetMeshBySlotType_Statics::NewProp_MyMesh = { "MyMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InvenProjectCharacter_eventSetMeshBySlotType_Parms, MyMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInvenProjectCharacter_SetMeshBySlotType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInvenProjectCharacter_SetMeshBySlotType_Statics::NewProp_Myenum_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInvenProjectCharacter_SetMeshBySlotType_Statics::NewProp_Myenum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInvenProjectCharacter_SetMeshBySlotType_Statics::NewProp_MyMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInvenProjectCharacter_SetMeshBySlotType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InvenProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInvenProjectCharacter_SetMeshBySlotType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInvenProjectCharacter, nullptr, "SetMeshBySlotType", nullptr, nullptr, sizeof(InvenProjectCharacter_eventSetMeshBySlotType_Parms), Z_Construct_UFunction_AInvenProjectCharacter_SetMeshBySlotType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInvenProjectCharacter_SetMeshBySlotType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInvenProjectCharacter_SetMeshBySlotType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInvenProjectCharacter_SetMeshBySlotType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInvenProjectCharacter_SetMeshBySlotType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInvenProjectCharacter_SetMeshBySlotType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInvenProjectCharacter_SpawnItemFromClassAndCount_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MyActorClass;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AInvenProjectCharacter_SpawnItemFromClassAndCount_Statics::NewProp_MyActorClass = { "MyActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InvenProjectCharacter_eventSpawnItemFromClassAndCount_Parms, MyActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInvenProjectCharacter_SpawnItemFromClassAndCount_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InvenProjectCharacter_eventSpawnItemFromClassAndCount_Parms, count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInvenProjectCharacter_SpawnItemFromClassAndCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInvenProjectCharacter_SpawnItemFromClassAndCount_Statics::NewProp_MyActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInvenProjectCharacter_SpawnItemFromClassAndCount_Statics::NewProp_count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInvenProjectCharacter_SpawnItemFromClassAndCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InvenProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInvenProjectCharacter_SpawnItemFromClassAndCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInvenProjectCharacter, nullptr, "SpawnItemFromClassAndCount", nullptr, nullptr, sizeof(InvenProjectCharacter_eventSpawnItemFromClassAndCount_Parms), Z_Construct_UFunction_AInvenProjectCharacter_SpawnItemFromClassAndCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInvenProjectCharacter_SpawnItemFromClassAndCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInvenProjectCharacter_SpawnItemFromClassAndCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInvenProjectCharacter_SpawnItemFromClassAndCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInvenProjectCharacter_SpawnItemFromClassAndCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInvenProjectCharacter_SpawnItemFromClassAndCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AInvenProjectCharacter_NoRegister()
	{
		return AInvenProjectCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AInvenProjectCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvenCompo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InvenCompo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadGear_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeadGear;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodySuit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodySuit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shoose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Shoose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Weapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInvenProjectCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_InvenProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AInvenProjectCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInvenProjectCharacter_FindAndDecreaseCountActorObject, "FindAndDecreaseCountActorObject" }, // 1136675205
		{ &Z_Construct_UFunction_AInvenProjectCharacter_FindAndDestroyActorFromItemObj, "FindAndDestroyActorFromItemObj" }, // 1791618344
		{ &Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapBegin, "OnOverlapBegin" }, // 4164838913
		{ &Z_Construct_UFunction_AInvenProjectCharacter_OnOverlapEnd, "OnOverlapEnd" }, // 714756510
		{ &Z_Construct_UFunction_AInvenProjectCharacter_ResFindAndDecreaseCountActorObject, "ResFindAndDecreaseCountActorObject" }, // 4058496730
		{ &Z_Construct_UFunction_AInvenProjectCharacter_ResFindAndDestroyActorFromItemObj, "ResFindAndDestroyActorFromItemObj" }, // 213571319
		{ &Z_Construct_UFunction_AInvenProjectCharacter_ResSetMeshBySlotType, "ResSetMeshBySlotType" }, // 3619302403
		{ &Z_Construct_UFunction_AInvenProjectCharacter_ResSpawnItemFromClassAndCount, "ResSpawnItemFromClassAndCount" }, // 3628124987
		{ &Z_Construct_UFunction_AInvenProjectCharacter_SetMeshBySlotType, "SetMeshBySlotType" }, // 959177542
		{ &Z_Construct_UFunction_AInvenProjectCharacter_SpawnItemFromClassAndCount, "SpawnItemFromClassAndCount" }, // 1202174924
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInvenProjectCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "InvenProjectCharacter.h" },
		{ "ModuleRelativePath", "InvenProjectCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InvenProjectCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInvenProjectCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InvenProjectCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInvenProjectCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "InvenProjectCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInvenProjectCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "InvenProjectCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInvenProjectCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_InvenCompo_MetaData[] = {
		{ "Category", "InvenProjectCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InvenProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_InvenCompo = { "InvenCompo", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInvenProjectCharacter, InvenCompo), Z_Construct_UClass_UInvenComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_InvenCompo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_InvenCompo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_HeadGear_MetaData[] = {
		{ "Category", "InvenProjectCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InvenProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_HeadGear = { "HeadGear", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInvenProjectCharacter, HeadGear), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_HeadGear_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_HeadGear_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_BodySuit_MetaData[] = {
		{ "Category", "InvenProjectCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InvenProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_BodySuit = { "BodySuit", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInvenProjectCharacter, BodySuit), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_BodySuit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_BodySuit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_Shoose_MetaData[] = {
		{ "Category", "InvenProjectCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InvenProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_Shoose = { "Shoose", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInvenProjectCharacter, Shoose), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_Shoose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_Shoose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_Weapon_MetaData[] = {
		{ "Category", "InvenProjectCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InvenProjectCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInvenProjectCharacter, Weapon), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_Weapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_Weapon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInvenProjectCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_InvenCompo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_HeadGear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_BodySuit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_Shoose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInvenProjectCharacter_Statics::NewProp_Weapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInvenProjectCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInvenProjectCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInvenProjectCharacter_Statics::ClassParams = {
		&AInvenProjectCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AInvenProjectCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AInvenProjectCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInvenProjectCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInvenProjectCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInvenProjectCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInvenProjectCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInvenProjectCharacter, 952247805);
	template<> INVENPROJECT_API UClass* StaticClass<AInvenProjectCharacter>()
	{
		return AInvenProjectCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInvenProjectCharacter(Z_Construct_UClass_AInvenProjectCharacter, &AInvenProjectCharacter::StaticClass, TEXT("/Script/InvenProject"), TEXT("AInvenProjectCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInvenProjectCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
