// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENPROJECT_ItemObject_generated_h
#error "ItemObject.generated.h already included, missing '#pragma once' in ItemObject.h"
#endif
#define INVENPROJECT_ItemObject_generated_h

#define InvenProject_Source_InvenProject_ItemObject_h_16_SPARSE_DATA
#define InvenProject_Source_InvenProject_ItemObject_h_16_RPC_WRAPPERS
#define InvenProject_Source_InvenProject_ItemObject_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define InvenProject_Source_InvenProject_ItemObject_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemObject(); \
	friend struct Z_Construct_UClass_UItemObject_Statics; \
public: \
	DECLARE_CLASS(UItemObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InvenProject"), NO_API) \
	DECLARE_SERIALIZER(UItemObject)


#define InvenProject_Source_InvenProject_ItemObject_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUItemObject(); \
	friend struct Z_Construct_UClass_UItemObject_Statics; \
public: \
	DECLARE_CLASS(UItemObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InvenProject"), NO_API) \
	DECLARE_SERIALIZER(UItemObject)


#define InvenProject_Source_InvenProject_ItemObject_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemObject(UItemObject&&); \
	NO_API UItemObject(const UItemObject&); \
public:


#define InvenProject_Source_InvenProject_ItemObject_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemObject(UItemObject&&); \
	NO_API UItemObject(const UItemObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemObject)


#define InvenProject_Source_InvenProject_ItemObject_h_16_PRIVATE_PROPERTY_OFFSET
#define InvenProject_Source_InvenProject_ItemObject_h_13_PROLOG
#define InvenProject_Source_InvenProject_ItemObject_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InvenProject_Source_InvenProject_ItemObject_h_16_PRIVATE_PROPERTY_OFFSET \
	InvenProject_Source_InvenProject_ItemObject_h_16_SPARSE_DATA \
	InvenProject_Source_InvenProject_ItemObject_h_16_RPC_WRAPPERS \
	InvenProject_Source_InvenProject_ItemObject_h_16_INCLASS \
	InvenProject_Source_InvenProject_ItemObject_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define InvenProject_Source_InvenProject_ItemObject_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InvenProject_Source_InvenProject_ItemObject_h_16_PRIVATE_PROPERTY_OFFSET \
	InvenProject_Source_InvenProject_ItemObject_h_16_SPARSE_DATA \
	InvenProject_Source_InvenProject_ItemObject_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	InvenProject_Source_InvenProject_ItemObject_h_16_INCLASS_NO_PURE_DECLS \
	InvenProject_Source_InvenProject_ItemObject_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENPROJECT_API UClass* StaticClass<class UItemObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InvenProject_Source_InvenProject_ItemObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
