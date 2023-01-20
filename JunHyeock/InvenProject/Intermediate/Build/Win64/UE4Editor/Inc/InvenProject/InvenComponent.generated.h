// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AItemBase;
#ifdef INVENPROJECT_InvenComponent_generated_h
#error "InvenComponent.generated.h already included, missing '#pragma once' in InvenComponent.h"
#endif
#define INVENPROJECT_InvenComponent_generated_h

#define InvenProject_Source_InvenProject_InvenComponent_h_18_SPARSE_DATA
#define InvenProject_Source_InvenProject_InvenComponent_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execAddItem);


#define InvenProject_Source_InvenProject_InvenComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execAddItem);


#define InvenProject_Source_InvenProject_InvenComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInvenComponent(); \
	friend struct Z_Construct_UClass_UInvenComponent_Statics; \
public: \
	DECLARE_CLASS(UInvenComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InvenProject"), NO_API) \
	DECLARE_SERIALIZER(UInvenComponent)


#define InvenProject_Source_InvenProject_InvenComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUInvenComponent(); \
	friend struct Z_Construct_UClass_UInvenComponent_Statics; \
public: \
	DECLARE_CLASS(UInvenComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InvenProject"), NO_API) \
	DECLARE_SERIALIZER(UInvenComponent)


#define InvenProject_Source_InvenProject_InvenComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInvenComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInvenComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInvenComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInvenComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInvenComponent(UInvenComponent&&); \
	NO_API UInvenComponent(const UInvenComponent&); \
public:


#define InvenProject_Source_InvenProject_InvenComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInvenComponent(UInvenComponent&&); \
	NO_API UInvenComponent(const UInvenComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInvenComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInvenComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInvenComponent)


#define InvenProject_Source_InvenProject_InvenComponent_h_18_PRIVATE_PROPERTY_OFFSET
#define InvenProject_Source_InvenProject_InvenComponent_h_15_PROLOG
#define InvenProject_Source_InvenProject_InvenComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InvenProject_Source_InvenProject_InvenComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	InvenProject_Source_InvenProject_InvenComponent_h_18_SPARSE_DATA \
	InvenProject_Source_InvenProject_InvenComponent_h_18_RPC_WRAPPERS \
	InvenProject_Source_InvenProject_InvenComponent_h_18_INCLASS \
	InvenProject_Source_InvenProject_InvenComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define InvenProject_Source_InvenProject_InvenComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InvenProject_Source_InvenProject_InvenComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	InvenProject_Source_InvenProject_InvenComponent_h_18_SPARSE_DATA \
	InvenProject_Source_InvenProject_InvenComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	InvenProject_Source_InvenProject_InvenComponent_h_18_INCLASS_NO_PURE_DECLS \
	InvenProject_Source_InvenProject_InvenComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENPROJECT_API UClass* StaticClass<class UInvenComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InvenProject_Source_InvenProject_InvenComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
