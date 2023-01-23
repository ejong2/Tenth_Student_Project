// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef INVENPROJECT_ItemBase_generated_h
#error "ItemBase.generated.h already included, missing '#pragma once' in ItemBase.h"
#endif
#define INVENPROJECT_ItemBase_generated_h

#define InvenProject_Source_InvenProject_ItemBase_h_16_SPARSE_DATA
#define InvenProject_Source_InvenProject_ItemBase_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define InvenProject_Source_InvenProject_ItemBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define InvenProject_Source_InvenProject_ItemBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItemBase(); \
	friend struct Z_Construct_UClass_AItemBase_Statics; \
public: \
	DECLARE_CLASS(AItemBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InvenProject"), NO_API) \
	DECLARE_SERIALIZER(AItemBase)


#define InvenProject_Source_InvenProject_ItemBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAItemBase(); \
	friend struct Z_Construct_UClass_AItemBase_Statics; \
public: \
	DECLARE_CLASS(AItemBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InvenProject"), NO_API) \
	DECLARE_SERIALIZER(AItemBase)


#define InvenProject_Source_InvenProject_ItemBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItemBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItemBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItemBase(AItemBase&&); \
	NO_API AItemBase(const AItemBase&); \
public:


#define InvenProject_Source_InvenProject_ItemBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItemBase(AItemBase&&); \
	NO_API AItemBase(const AItemBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItemBase)


#define InvenProject_Source_InvenProject_ItemBase_h_16_PRIVATE_PROPERTY_OFFSET
#define InvenProject_Source_InvenProject_ItemBase_h_13_PROLOG
#define InvenProject_Source_InvenProject_ItemBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InvenProject_Source_InvenProject_ItemBase_h_16_PRIVATE_PROPERTY_OFFSET \
	InvenProject_Source_InvenProject_ItemBase_h_16_SPARSE_DATA \
	InvenProject_Source_InvenProject_ItemBase_h_16_RPC_WRAPPERS \
	InvenProject_Source_InvenProject_ItemBase_h_16_INCLASS \
	InvenProject_Source_InvenProject_ItemBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define InvenProject_Source_InvenProject_ItemBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InvenProject_Source_InvenProject_ItemBase_h_16_PRIVATE_PROPERTY_OFFSET \
	InvenProject_Source_InvenProject_ItemBase_h_16_SPARSE_DATA \
	InvenProject_Source_InvenProject_ItemBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	InvenProject_Source_InvenProject_ItemBase_h_16_INCLASS_NO_PURE_DECLS \
	InvenProject_Source_InvenProject_ItemBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENPROJECT_API UClass* StaticClass<class AItemBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InvenProject_Source_InvenProject_ItemBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
