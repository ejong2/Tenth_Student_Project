// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FTransform;
#ifdef INVENPROJECT_UMG_LandItems_generated_h
#error "UMG_LandItems.generated.h already included, missing '#pragma once' in UMG_LandItems.h"
#endif
#define INVENPROJECT_UMG_LandItems_generated_h

#define InvenProject_Source_InvenProject_UMG_LandItems_h_22_SPARSE_DATA
#define InvenProject_Source_InvenProject_UMG_LandItems_h_22_RPC_WRAPPERS \
	virtual void ResSpawnItemwithClassAndCount_Implementation(TSubclassOf<AActor>  Myclass, int32 count, FTransform MyTransform); \
	virtual void SpawnItemwithClassAndCount_Implementation(TSubclassOf<AActor>  Myclass, int32 count, FTransform MyTransform); \
 \
	DECLARE_FUNCTION(execResSpawnItemwithClassAndCount); \
	DECLARE_FUNCTION(execSpawnItemwithClassAndCount);


#define InvenProject_Source_InvenProject_UMG_LandItems_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ResSpawnItemwithClassAndCount_Implementation(TSubclassOf<AActor>  Myclass, int32 count, FTransform MyTransform); \
	virtual void SpawnItemwithClassAndCount_Implementation(TSubclassOf<AActor>  Myclass, int32 count, FTransform MyTransform); \
 \
	DECLARE_FUNCTION(execResSpawnItemwithClassAndCount); \
	DECLARE_FUNCTION(execSpawnItemwithClassAndCount);


#define InvenProject_Source_InvenProject_UMG_LandItems_h_22_EVENT_PARMS \
	struct UMG_LandItems_eventResSpawnItemwithClassAndCount_Parms \
	{ \
		TSubclassOf<AActor>  Myclass; \
		int32 count; \
		FTransform MyTransform; \
	}; \
	struct UMG_LandItems_eventSpawnItemwithClassAndCount_Parms \
	{ \
		TSubclassOf<AActor>  Myclass; \
		int32 count; \
		FTransform MyTransform; \
	};


#define InvenProject_Source_InvenProject_UMG_LandItems_h_22_CALLBACK_WRAPPERS
#define InvenProject_Source_InvenProject_UMG_LandItems_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMG_LandItems(); \
	friend struct Z_Construct_UClass_UUMG_LandItems_Statics; \
public: \
	DECLARE_CLASS(UUMG_LandItems, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InvenProject"), NO_API) \
	DECLARE_SERIALIZER(UUMG_LandItems)


#define InvenProject_Source_InvenProject_UMG_LandItems_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUUMG_LandItems(); \
	friend struct Z_Construct_UClass_UUMG_LandItems_Statics; \
public: \
	DECLARE_CLASS(UUMG_LandItems, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InvenProject"), NO_API) \
	DECLARE_SERIALIZER(UUMG_LandItems)


#define InvenProject_Source_InvenProject_UMG_LandItems_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMG_LandItems(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMG_LandItems) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMG_LandItems); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMG_LandItems); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMG_LandItems(UUMG_LandItems&&); \
	NO_API UUMG_LandItems(const UUMG_LandItems&); \
public:


#define InvenProject_Source_InvenProject_UMG_LandItems_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMG_LandItems(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMG_LandItems(UUMG_LandItems&&); \
	NO_API UUMG_LandItems(const UUMG_LandItems&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMG_LandItems); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMG_LandItems); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMG_LandItems)


#define InvenProject_Source_InvenProject_UMG_LandItems_h_22_PRIVATE_PROPERTY_OFFSET
#define InvenProject_Source_InvenProject_UMG_LandItems_h_19_PROLOG \
	InvenProject_Source_InvenProject_UMG_LandItems_h_22_EVENT_PARMS


#define InvenProject_Source_InvenProject_UMG_LandItems_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InvenProject_Source_InvenProject_UMG_LandItems_h_22_PRIVATE_PROPERTY_OFFSET \
	InvenProject_Source_InvenProject_UMG_LandItems_h_22_SPARSE_DATA \
	InvenProject_Source_InvenProject_UMG_LandItems_h_22_RPC_WRAPPERS \
	InvenProject_Source_InvenProject_UMG_LandItems_h_22_CALLBACK_WRAPPERS \
	InvenProject_Source_InvenProject_UMG_LandItems_h_22_INCLASS \
	InvenProject_Source_InvenProject_UMG_LandItems_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define InvenProject_Source_InvenProject_UMG_LandItems_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InvenProject_Source_InvenProject_UMG_LandItems_h_22_PRIVATE_PROPERTY_OFFSET \
	InvenProject_Source_InvenProject_UMG_LandItems_h_22_SPARSE_DATA \
	InvenProject_Source_InvenProject_UMG_LandItems_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	InvenProject_Source_InvenProject_UMG_LandItems_h_22_CALLBACK_WRAPPERS \
	InvenProject_Source_InvenProject_UMG_LandItems_h_22_INCLASS_NO_PURE_DECLS \
	InvenProject_Source_InvenProject_UMG_LandItems_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENPROJECT_API UClass* StaticClass<class UUMG_LandItems>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InvenProject_Source_InvenProject_UMG_LandItems_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
