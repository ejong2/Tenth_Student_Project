// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InvenProject/DragWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDragWidget() {}
// Cross Module References
	INVENPROJECT_API UClass* Z_Construct_UClass_UDragWidget_NoRegister();
	INVENPROJECT_API UClass* Z_Construct_UClass_UDragWidget();
	UMG_API UClass* Z_Construct_UClass_UDragDropOperation();
	UPackage* Z_Construct_UPackage__Script_InvenProject();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	INVENPROJECT_API UClass* Z_Construct_UClass_AItemBase_NoRegister();
// End Cross Module References
	void UDragWidget::StaticRegisterNativesUDragWidget()
	{
	}
	UClass* Z_Construct_UClass_UDragWidget_NoRegister()
	{
		return UDragWidget::StaticClass();
	}
	struct Z_Construct_UClass_UDragWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DragOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDragWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDragDropOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_InvenProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DragWidget.h" },
		{ "ModuleRelativePath", "DragWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragWidget_Statics::NewProp_WidgetReference_MetaData[] = {
		{ "Category", "DragWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DragWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDragWidget_Statics::NewProp_WidgetReference = { "WidgetReference", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDragWidget, WidgetReference), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDragWidget_Statics::NewProp_WidgetReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragWidget_Statics::NewProp_WidgetReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragWidget_Statics::NewProp_DragOffset_MetaData[] = {
		{ "Category", "DragWidget" },
		{ "ModuleRelativePath", "DragWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDragWidget_Statics::NewProp_DragOffset = { "DragOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDragWidget, DragOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UDragWidget_Statics::NewProp_DragOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragWidget_Statics::NewProp_DragOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragWidget_Statics::NewProp_ItemClass_MetaData[] = {
		{ "Category", "DragWidget" },
		{ "ModuleRelativePath", "DragWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDragWidget_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDragWidget, ItemClass), Z_Construct_UClass_AItemBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UDragWidget_Statics::NewProp_ItemClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragWidget_Statics::NewProp_ItemClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragWidget_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "DragWidget" },
		{ "ModuleRelativePath", "DragWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDragWidget_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDragWidget, Count), METADATA_PARAMS(Z_Construct_UClass_UDragWidget_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDragWidget_Statics::NewProp_Count_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDragWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragWidget_Statics::NewProp_WidgetReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragWidget_Statics::NewProp_DragOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragWidget_Statics::NewProp_ItemClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDragWidget_Statics::NewProp_Count,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDragWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDragWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDragWidget_Statics::ClassParams = {
		&UDragWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDragWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDragWidget_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDragWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDragWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDragWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDragWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDragWidget, 3742863462);
	template<> INVENPROJECT_API UClass* StaticClass<UDragWidget>()
	{
		return UDragWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDragWidget(Z_Construct_UClass_UDragWidget, &UDragWidget::StaticClass, TEXT("/Script/InvenProject"), TEXT("UDragWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDragWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
