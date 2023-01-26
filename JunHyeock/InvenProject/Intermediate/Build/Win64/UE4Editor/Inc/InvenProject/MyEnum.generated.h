// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENPROJECT_MyEnum_generated_h
#error "MyEnum.generated.h already included, missing '#pragma once' in MyEnum.h"
#endif
#define INVENPROJECT_MyEnum_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID InvenProject_Source_InvenProject_MyEnum_h


#define FOREACH_ENUM_MYENUM(op) \
	op(MyEnum::NONE) \
	op(MyEnum::Head) \
	op(MyEnum::Body) \
	op(MyEnum::Foot) \
	op(MyEnum::Weapon) 

enum class MyEnum : uint8;
template<> INVENPROJECT_API UEnum* StaticEnum<MyEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
