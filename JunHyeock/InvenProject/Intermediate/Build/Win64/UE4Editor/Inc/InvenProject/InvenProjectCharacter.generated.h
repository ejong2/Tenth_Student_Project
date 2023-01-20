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
#ifdef INVENPROJECT_InvenProjectCharacter_generated_h
#error "InvenProjectCharacter.generated.h already included, missing '#pragma once' in InvenProjectCharacter.h"
#endif
#define INVENPROJECT_InvenProjectCharacter_generated_h

#define InvenProject_Source_InvenProject_InvenProjectCharacter_h_15_SPARSE_DATA
#define InvenProject_Source_InvenProject_InvenProjectCharacter_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define InvenProject_Source_InvenProject_InvenProjectCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define InvenProject_Source_InvenProject_InvenProjectCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInvenProjectCharacter(); \
	friend struct Z_Construct_UClass_AInvenProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AInvenProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InvenProject"), NO_API) \
	DECLARE_SERIALIZER(AInvenProjectCharacter)


#define InvenProject_Source_InvenProject_InvenProjectCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAInvenProjectCharacter(); \
	friend struct Z_Construct_UClass_AInvenProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AInvenProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InvenProject"), NO_API) \
	DECLARE_SERIALIZER(AInvenProjectCharacter)


#define InvenProject_Source_InvenProject_InvenProjectCharacter_h_15_STANDARD_CONSTRUCTORS \
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


#define InvenProject_Source_InvenProject_InvenProjectCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInvenProjectCharacter(AInvenProjectCharacter&&); \
	NO_API AInvenProjectCharacter(const AInvenProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInvenProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInvenProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInvenProjectCharacter)


#define InvenProject_Source_InvenProject_InvenProjectCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AInvenProjectCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AInvenProjectCharacter, FollowCamera); }


#define InvenProject_Source_InvenProject_InvenProjectCharacter_h_12_PROLOG
#define InvenProject_Source_InvenProject_InvenProjectCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InvenProject_Source_InvenProject_InvenProjectCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	InvenProject_Source_InvenProject_InvenProjectCharacter_h_15_SPARSE_DATA \
	InvenProject_Source_InvenProject_InvenProjectCharacter_h_15_RPC_WRAPPERS \
	InvenProject_Source_InvenProject_InvenProjectCharacter_h_15_INCLASS \
	InvenProject_Source_InvenProject_InvenProjectCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define InvenProject_Source_InvenProject_InvenProjectCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InvenProject_Source_InvenProject_InvenProjectCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	InvenProject_Source_InvenProject_InvenProjectCharacter_h_15_SPARSE_DATA \
	InvenProject_Source_InvenProject_InvenProjectCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	InvenProject_Source_InvenProject_InvenProjectCharacter_h_15_INCLASS_NO_PURE_DECLS \
	InvenProject_Source_InvenProject_InvenProjectCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENPROJECT_API UClass* StaticClass<class AInvenProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InvenProject_Source_InvenProject_InvenProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
