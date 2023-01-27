// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class MyEnum : uint8;
class UStaticMesh;
class UPrimitiveComponent;
struct FHitResult;
#ifdef INVENPROJECT_InvenProjectCharacter_generated_h
#error "InvenProjectCharacter.generated.h already included, missing '#pragma once' in InvenProjectCharacter.h"
#endif
#define INVENPROJECT_InvenProjectCharacter_generated_h

#define InvenProject_Source_InvenProject_InvenProjectCharacter_h_16_SPARSE_DATA
#define InvenProject_Source_InvenProject_InvenProjectCharacter_h_16_RPC_WRAPPERS \
	virtual void ResSpawnItemFromClassAndCount_Implementation(TSubclassOf<AActor>  MyActorClass, int32 count); \
	virtual void SpawnItemFromClassAndCount_Implementation(TSubclassOf<AActor>  MyActorClass, int32 count); \
	virtual void ResSetMeshBySlotType_Implementation(MyEnum Myenum, UStaticMesh* MyMesh); \
	virtual void SetMeshBySlotType_Implementation(MyEnum Myenum, UStaticMesh* MyMesh); \
	virtual void ResFindAndDecreaseCountActorObject_Implementation(int32 index, int32 Count); \
	virtual void FindAndDecreaseCountActorObject_Implementation(int32 index, int32 Count); \
	virtual void ResFindAndDestroyActorFromItemObj_Implementation(int32 index); \
	virtual void FindAndDestroyActorFromItemObj_Implementation(int32 index); \
 \
	DECLARE_FUNCTION(execResSpawnItemFromClassAndCount); \
	DECLARE_FUNCTION(execSpawnItemFromClassAndCount); \
	DECLARE_FUNCTION(execResSetMeshBySlotType); \
	DECLARE_FUNCTION(execSetMeshBySlotType); \
	DECLARE_FUNCTION(execResFindAndDecreaseCountActorObject); \
	DECLARE_FUNCTION(execFindAndDecreaseCountActorObject); \
	DECLARE_FUNCTION(execResFindAndDestroyActorFromItemObj); \
	DECLARE_FUNCTION(execFindAndDestroyActorFromItemObj); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define InvenProject_Source_InvenProject_InvenProjectCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ResSpawnItemFromClassAndCount_Implementation(TSubclassOf<AActor>  MyActorClass, int32 count); \
	virtual void SpawnItemFromClassAndCount_Implementation(TSubclassOf<AActor>  MyActorClass, int32 count); \
	virtual void ResSetMeshBySlotType_Implementation(MyEnum Myenum, UStaticMesh* MyMesh); \
	virtual void SetMeshBySlotType_Implementation(MyEnum Myenum, UStaticMesh* MyMesh); \
	virtual void ResFindAndDecreaseCountActorObject_Implementation(int32 index, int32 Count); \
	virtual void FindAndDecreaseCountActorObject_Implementation(int32 index, int32 Count); \
	virtual void ResFindAndDestroyActorFromItemObj_Implementation(int32 index); \
	virtual void FindAndDestroyActorFromItemObj_Implementation(int32 index); \
 \
	DECLARE_FUNCTION(execResSpawnItemFromClassAndCount); \
	DECLARE_FUNCTION(execSpawnItemFromClassAndCount); \
	DECLARE_FUNCTION(execResSetMeshBySlotType); \
	DECLARE_FUNCTION(execSetMeshBySlotType); \
	DECLARE_FUNCTION(execResFindAndDecreaseCountActorObject); \
	DECLARE_FUNCTION(execFindAndDecreaseCountActorObject); \
	DECLARE_FUNCTION(execResFindAndDestroyActorFromItemObj); \
	DECLARE_FUNCTION(execFindAndDestroyActorFromItemObj); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define InvenProject_Source_InvenProject_InvenProjectCharacter_h_16_EVENT_PARMS \
	struct InvenProjectCharacter_eventFindAndDecreaseCountActorObject_Parms \
	{ \
		int32 index; \
		int32 Count; \
	}; \
	struct InvenProjectCharacter_eventFindAndDestroyActorFromItemObj_Parms \
	{ \
		int32 index; \
	}; \
	struct InvenProjectCharacter_eventResFindAndDecreaseCountActorObject_Parms \
	{ \
		int32 index; \
		int32 Count; \
	}; \
	struct InvenProjectCharacter_eventResFindAndDestroyActorFromItemObj_Parms \
	{ \
		int32 index; \
	}; \
	struct InvenProjectCharacter_eventResSetMeshBySlotType_Parms \
	{ \
		MyEnum Myenum; \
		UStaticMesh* MyMesh; \
	}; \
	struct InvenProjectCharacter_eventResSpawnItemFromClassAndCount_Parms \
	{ \
		TSubclassOf<AActor>  MyActorClass; \
		int32 count; \
	}; \
	struct InvenProjectCharacter_eventSetMeshBySlotType_Parms \
	{ \
		MyEnum Myenum; \
		UStaticMesh* MyMesh; \
	}; \
	struct InvenProjectCharacter_eventSpawnItemFromClassAndCount_Parms \
	{ \
		TSubclassOf<AActor>  MyActorClass; \
		int32 count; \
	};


#define InvenProject_Source_InvenProject_InvenProjectCharacter_h_16_CALLBACK_WRAPPERS
#define InvenProject_Source_InvenProject_InvenProjectCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInvenProjectCharacter(); \
	friend struct Z_Construct_UClass_AInvenProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AInvenProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InvenProject"), NO_API) \
	DECLARE_SERIALIZER(AInvenProjectCharacter)


#define InvenProject_Source_InvenProject_InvenProjectCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAInvenProjectCharacter(); \
	friend struct Z_Construct_UClass_AInvenProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AInvenProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InvenProject"), NO_API) \
	DECLARE_SERIALIZER(AInvenProjectCharacter)


#define InvenProject_Source_InvenProject_InvenProjectCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInvenProjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInvenProjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInvenProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInvenProjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInvenProjectCharacter(AInvenProjectCharacter&&); \
	NO_API AInvenProjectCharacter(const AInvenProjectCharacter&); \
public:


#define InvenProject_Source_InvenProject_InvenProjectCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInvenProjectCharacter(AInvenProjectCharacter&&); \
	NO_API AInvenProjectCharacter(const AInvenProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInvenProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInvenProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInvenProjectCharacter)


#define InvenProject_Source_InvenProject_InvenProjectCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AInvenProjectCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AInvenProjectCharacter, FollowCamera); }


#define InvenProject_Source_InvenProject_InvenProjectCharacter_h_13_PROLOG \
	InvenProject_Source_InvenProject_InvenProjectCharacter_h_16_EVENT_PARMS


#define InvenProject_Source_InvenProject_InvenProjectCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InvenProject_Source_InvenProject_InvenProjectCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	InvenProject_Source_InvenProject_InvenProjectCharacter_h_16_SPARSE_DATA \
	InvenProject_Source_InvenProject_InvenProjectCharacter_h_16_RPC_WRAPPERS \
	InvenProject_Source_InvenProject_InvenProjectCharacter_h_16_CALLBACK_WRAPPERS \
	InvenProject_Source_InvenProject_InvenProjectCharacter_h_16_INCLASS \
	InvenProject_Source_InvenProject_InvenProjectCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define InvenProject_Source_InvenProject_InvenProjectCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InvenProject_Source_InvenProject_InvenProjectCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	InvenProject_Source_InvenProject_InvenProjectCharacter_h_16_SPARSE_DATA \
	InvenProject_Source_InvenProject_InvenProjectCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	InvenProject_Source_InvenProject_InvenProjectCharacter_h_16_CALLBACK_WRAPPERS \
	InvenProject_Source_InvenProject_InvenProjectCharacter_h_16_INCLASS_NO_PURE_DECLS \
	InvenProject_Source_InvenProject_InvenProjectCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENPROJECT_API UClass* StaticClass<class AInvenProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InvenProject_Source_InvenProject_InvenProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
