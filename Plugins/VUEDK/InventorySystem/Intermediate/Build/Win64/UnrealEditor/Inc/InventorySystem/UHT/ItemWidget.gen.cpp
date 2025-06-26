// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/ItemWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeItemWidget() {}

// ********** Begin Cross Module References ********************************************************
BETTERDRAGSYSTEM_API UClass* Z_Construct_UClass_UBetterDropReceiverWidget();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemWidget();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UItemWidget Function Check ***********************************************
struct Z_Construct_UFunction_UItemWidget_Check_Statics
{
	struct ItemWidget_eventCheck_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/ItemWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UItemWidget_Check_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemWidget_eventCheck_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemWidget_Check_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemWidget_eventCheck_Parms), &Z_Construct_UFunction_UItemWidget_Check_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemWidget_Check_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemWidget_Check_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemWidget_Check_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemWidget_Check_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemWidget, nullptr, "Check", Z_Construct_UFunction_UItemWidget_Check_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemWidget_Check_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemWidget_Check_Statics::ItemWidget_eventCheck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemWidget_Check_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemWidget_Check_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UItemWidget_Check_Statics::ItemWidget_eventCheck_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemWidget_Check()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemWidget_Check_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemWidget::execCheck)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Check();
	P_NATIVE_END;
}
// ********** End Class UItemWidget Function Check *************************************************

// ********** Begin Class UItemWidget Function Init ************************************************
struct Z_Construct_UFunction_UItemWidget_Init_Statics
{
	struct ItemWidget_eventInit_Parms
	{
		UItemBase* InItem;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/ItemWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemWidget_Init_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemWidget_eventInit_Parms, InItem), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemWidget_Init_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemWidget_Init_Statics::NewProp_InItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemWidget_Init_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemWidget_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemWidget, nullptr, "Init", Z_Construct_UFunction_UItemWidget_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemWidget_Init_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemWidget_Init_Statics::ItemWidget_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemWidget_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemWidget_Init_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UItemWidget_Init_Statics::ItemWidget_eventInit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemWidget_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemWidget_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemWidget::execInit)
{
	P_GET_OBJECT(UItemBase,Z_Param_InItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init(Z_Param_InItem);
	P_NATIVE_END;
}
// ********** End Class UItemWidget Function Init **************************************************

// ********** Begin Class UItemWidget Function OnInit **********************************************
struct ItemWidget_eventOnInit_Parms
{
	UItemBase* InItem;
};
static FName NAME_UItemWidget_OnInit = FName(TEXT("OnInit"));
void UItemWidget::OnInit(UItemBase* InItem)
{
	ItemWidget_eventOnInit_Parms Parms;
	Parms.InItem=InItem;
	UFunction* Func = FindFunctionChecked(NAME_UItemWidget_OnInit);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UItemWidget_OnInit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/ItemWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemWidget_OnInit_Statics::NewProp_InItem = { "InItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemWidget_eventOnInit_Parms, InItem), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemWidget_OnInit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemWidget_OnInit_Statics::NewProp_InItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemWidget_OnInit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemWidget_OnInit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemWidget, nullptr, "OnInit", Z_Construct_UFunction_UItemWidget_OnInit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemWidget_OnInit_Statics::PropPointers), sizeof(ItemWidget_eventOnInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemWidget_OnInit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemWidget_OnInit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ItemWidget_eventOnInit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemWidget_OnInit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemWidget_OnInit_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UItemWidget Function OnInit ************************************************

// ********** Begin Class UItemWidget **************************************************************
void UItemWidget::StaticRegisterNativesUItemWidget()
{
	UClass* Class = UItemWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Check", &UItemWidget::execCheck },
		{ "Init", &UItemWidget::execInit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UItemWidget;
UClass* UItemWidget::GetPrivateStaticClass()
{
	using TClass = UItemWidget;
	if (!Z_Registration_Info_UClass_UItemWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ItemWidget"),
			Z_Registration_Info_UClass_UItemWidget.InnerSingleton,
			StaticRegisterNativesUItemWidget,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UItemWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UItemWidget_NoRegister()
{
	return UItemWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UItemWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/ItemWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/ItemWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[] = {
		{ "Category", "ItemWidget" },
		{ "ModuleRelativePath", "Public/Widgets/ItemWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemWidget_Check, "Check" }, // 1939351285
		{ &Z_Construct_UFunction_UItemWidget_Init, "Init" }, // 3487500045
		{ &Z_Construct_UFunction_UItemWidget_OnInit, "OnInit" }, // 829967259
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemWidget_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemWidget, Item), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Item_MetaData), NewProp_Item_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemWidget_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBetterDropReceiverWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemWidget_Statics::ClassParams = {
	&UItemWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UItemWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemWidget()
{
	if (!Z_Registration_Info_UClass_UItemWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemWidget.OuterSingleton, Z_Construct_UClass_UItemWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemWidget.OuterSingleton;
}
UItemWidget::UItemWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemWidget);
UItemWidget::~UItemWidget() {}
// ********** End Class UItemWidget ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Widgets_ItemWidget_h__Script_InventorySystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemWidget, UItemWidget::StaticClass, TEXT("UItemWidget"), &Z_Registration_Info_UClass_UItemWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemWidget), 1766353427U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Widgets_ItemWidget_h__Script_InventorySystem_821603126(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Widgets_ItemWidget_h__Script_InventorySystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Widgets_ItemWidget_h__Script_InventorySystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
