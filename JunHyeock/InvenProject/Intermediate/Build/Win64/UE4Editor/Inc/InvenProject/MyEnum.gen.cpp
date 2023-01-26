// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InvenProject/MyEnum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyEnum() {}
// Cross Module References
	INVENPROJECT_API UEnum* Z_Construct_UEnum_InvenProject_MyEnum();
	UPackage* Z_Construct_UPackage__Script_InvenProject();
// End Cross Module References
	static UEnum* MyEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_InvenProject_MyEnum, Z_Construct_UPackage__Script_InvenProject(), TEXT("MyEnum"));
		}
		return Singleton;
	}
	template<> INVENPROJECT_API UEnum* StaticEnum<MyEnum>()
	{
		return MyEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_MyEnum(MyEnum_StaticEnum, TEXT("/Script/InvenProject"), TEXT("MyEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_InvenProject_MyEnum_Hash() { return 488501795U; }
	UEnum* Z_Construct_UEnum_InvenProject_MyEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_InvenProject();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("MyEnum"), 0, Get_Z_Construct_UEnum_InvenProject_MyEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "MyEnum::NONE", (int64)MyEnum::NONE },
				{ "MyEnum::Head", (int64)MyEnum::Head },
				{ "MyEnum::Body", (int64)MyEnum::Body },
				{ "MyEnum::Foot", (int64)MyEnum::Foot },
				{ "MyEnum::Weapon", (int64)MyEnum::Weapon },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Body.Comment", "/**\n * \n */" },
				{ "Body.DisplayName", "Body" },
				{ "Body.Name", "MyEnum::Body" },
				{ "Comment", "/**\n * \n */" },
				{ "Foot.Comment", "/**\n * \n */" },
				{ "Foot.DisplayName", "Foot" },
				{ "Foot.Name", "MyEnum::Foot" },
				{ "Head.Comment", "/**\n * \n */" },
				{ "Head.DisplayName", "Head" },
				{ "Head.Name", "MyEnum::Head" },
				{ "ModuleRelativePath", "MyEnum.h" },
				{ "NONE.Comment", "/**\n * \n */" },
				{ "NONE.DisplayName", "NONE" },
				{ "NONE.Name", "MyEnum::NONE" },
				{ "Weapon.Comment", "/**\n * \n */" },
				{ "Weapon.DisplayName", "Weapon" },
				{ "Weapon.Name", "MyEnum::Weapon" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_InvenProject,
				nullptr,
				"MyEnum",
				"MyEnum",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
