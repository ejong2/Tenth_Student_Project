// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UItemObject;
#ifdef INVENPROJECT_InvenPlayerController_generated_h
#error "InvenPlayerController.generated.h already included, missing '#pragma once' in InvenPlayerController.h"
#endif
#define INVENPROJECT_InvenPlayerController_generated_h

#define InvenProject_Source_InvenProject_InvenPlayerController_h_30_SPARSE_DATA
#define InvenProject_Source_InvenProject_InvenPlayerController_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetItemObjectofTileview);


#define InvenProject_Source_InvenProject_InvenPlayerController_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetItemObjectofTileview);


#define InvenProject_Source_InvenProject_InvenPlayerController_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInvenPlayerController(); \
	friend struct Z_Construct_UClass_AInvenPlayerController_Statics; \
public: \
	DECLARE_CLASS(AInvenPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InvenProject"), NO_API) \
	DECLARE_SERIALIZER(AInvenPlayerController)


#define InvenProject_Source_InvenProject_InvenPlayerController_h_30_INCLASS \
private: \
	static void StaticRegisterNativesAInvenPlayerController(); \
	friend struct Z_Construct_UClass_AInvenPlayerController_Statics; \
public: \
	DECLARE_CLASS(AInvenPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InvenProject"), NO_API) \
	DECLARE_SERIALIZER(AInvenPlayerController)


#define InvenProject_Source_InvenProject_InvenPlayerController_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInvenPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInvenPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInvenPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInvenPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInvenPlayerController(AInvenPlayerController&&); \
	NO_API AInvenPlayerController(const AInvenPlayerController&); \
public:


#define InvenProject_Source_InvenProject_InvenPlayerController_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInvenPlayerController(AInvenPlayerController&&); \
	NO_API AInvenPlayerController(const AInvenPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInvenPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInvenPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInvenPlayerController)


#define InvenProject_Source_InvenProject_InvenPlayerController_h_30_PRIVATE_PROPERTY_OFFSET
#define InvenProject_Source_InvenProject_InvenPlayerController_h_27_PROLOG
#define InvenProject_Source_InvenProject_InvenPlayerController_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InvenProject_Source_InvenProject_InvenPlayerController_h_30_PRIVATE_PROPERTY_OFFSET \
	InvenProject_Source_InvenProject_InvenPlayerController_h_30_SPARSE_DATA \
	InvenProject_Source_InvenProject_InvenPlayerController_h_30_RPC_WRAPPERS \
	InvenProject_Source_InvenProject_InvenPlayerController_h_30_INCLASS \
	InvenProject_Source_InvenProject_InvenPlayerController_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define InvenProject_Source_InvenProject_InvenPlayerController_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	InvenProject_Source_InvenProject_InvenPlayerController_h_30_PRIVATE_PROPERTY_OFFSET \
	InvenProject_Source_InvenProject_InvenPlayerController_h_30_SPARSE_DATA \
	InvenProject_Source_InvenProject_InvenPlayerController_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	InvenProject_Source_InvenProject_InvenPlayerController_h_30_INCLASS_NO_PURE_DECLS \
	InvenProject_Source_InvenProject_InvenPlayerController_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENPROJECT_API UClass* StaticClass<class AInvenPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InvenProject_Source_InvenProject_InvenPlayerController_h


#define FOREACH_ENUM_CLICKWIDGETTYPE(op) \
	op(ClickWidgetType::NONE) \
	op(ClickWidgetType::Inventory) \
	op(ClickWidgetType::LandItems) \
	op(ClickWidgetType::Equipment) 

enum class ClickWidgetType : uint8;
template<> INVENPROJECT_API UEnum* StaticEnum<ClickWidgetType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
