// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/BetterUIOperationsFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBetterUIOperationsFactory() {}

// ********** Begin Cross Module References ********************************************************
BETTERUI_API UClass* Z_Construct_UClass_UBetterSwitchOperation_NoRegister();
BETTERUI_API UClass* Z_Construct_UClass_UBetterUIOperationsFactory();
BETTERUI_API UClass* Z_Construct_UClass_UBetterUIOperationsFactory_NoRegister();
BETTERUI_API UClass* Z_Construct_UClass_UBetterWidget_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
UPackage* Z_Construct_UPackage__Script_BetterUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBetterUIOperationsFactory Function CreateBetterSwichOperation ***********
struct Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperation_Statics
{
	struct BetterUIOperationsFactory_eventCreateBetterSwichOperation_Parms
	{
		UUserWidget* OwnerWidget;
		UWidgetSwitcher* InSwitcher;
		TArray<UBetterWidget*> InBetterWidgetsSwitchList;
		UBetterSwitchOperation* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BetterUI|Factory" },
		{ "DefaultToSelf", "OwnerWidget" },
		{ "HidePin", "OwnerWidget" },
		{ "ModuleRelativePath", "Public/Factories/BetterUIOperationsFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSwitcher_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBetterWidgetsSwitchList_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSwitcher;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InBetterWidgetsSwitchList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InBetterWidgetsSwitchList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperation_Statics::NewProp_OwnerWidget = { "OwnerWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterUIOperationsFactory_eventCreateBetterSwichOperation_Parms, OwnerWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerWidget_MetaData), NewProp_OwnerWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperation_Statics::NewProp_InSwitcher = { "InSwitcher", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterUIOperationsFactory_eventCreateBetterSwichOperation_Parms, InSwitcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSwitcher_MetaData), NewProp_InSwitcher_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperation_Statics::NewProp_InBetterWidgetsSwitchList_Inner = { "InBetterWidgetsSwitchList", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBetterWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperation_Statics::NewProp_InBetterWidgetsSwitchList = { "InBetterWidgetsSwitchList", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterUIOperationsFactory_eventCreateBetterSwichOperation_Parms, InBetterWidgetsSwitchList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBetterWidgetsSwitchList_MetaData), NewProp_InBetterWidgetsSwitchList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterUIOperationsFactory_eventCreateBetterSwichOperation_Parms, ReturnValue), Z_Construct_UClass_UBetterSwitchOperation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperation_Statics::NewProp_OwnerWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperation_Statics::NewProp_InSwitcher,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperation_Statics::NewProp_InBetterWidgetsSwitchList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperation_Statics::NewProp_InBetterWidgetsSwitchList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterUIOperationsFactory, nullptr, "CreateBetterSwichOperation", Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperation_Statics::BetterUIOperationsFactory_eventCreateBetterSwichOperation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperation_Statics::BetterUIOperationsFactory_eventCreateBetterSwichOperation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterUIOperationsFactory::execCreateBetterSwichOperation)
{
	P_GET_OBJECT(UUserWidget,Z_Param_OwnerWidget);
	P_GET_OBJECT(UWidgetSwitcher,Z_Param_InSwitcher);
	P_GET_TARRAY(UBetterWidget*,Z_Param_InBetterWidgetsSwitchList);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBetterSwitchOperation**)Z_Param__Result=UBetterUIOperationsFactory::CreateBetterSwichOperation(Z_Param_OwnerWidget,Z_Param_InSwitcher,Z_Param_InBetterWidgetsSwitchList);
	P_NATIVE_END;
}
// ********** End Class UBetterUIOperationsFactory Function CreateBetterSwichOperation *************

// ********** Begin Class UBetterUIOperationsFactory Function CreateBetterSwichOperationWithContainer 
struct Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperationWithContainer_Statics
{
	struct BetterUIOperationsFactory_eventCreateBetterSwichOperationWithContainer_Parms
	{
		UUserWidget* OwnerWidget;
		UWidgetSwitcher* InSwitcher;
		UPanelWidget* InPanelContainer;
		UBetterSwitchOperation* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BetterUI|Factory" },
		{ "DefaultToSelf", "OwnerWidget" },
		{ "HidePin", "OwnerWidget" },
		{ "ModuleRelativePath", "Public/Factories/BetterUIOperationsFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSwitcher_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPanelContainer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSwitcher;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InPanelContainer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperationWithContainer_Statics::NewProp_OwnerWidget = { "OwnerWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterUIOperationsFactory_eventCreateBetterSwichOperationWithContainer_Parms, OwnerWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerWidget_MetaData), NewProp_OwnerWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperationWithContainer_Statics::NewProp_InSwitcher = { "InSwitcher", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterUIOperationsFactory_eventCreateBetterSwichOperationWithContainer_Parms, InSwitcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSwitcher_MetaData), NewProp_InSwitcher_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperationWithContainer_Statics::NewProp_InPanelContainer = { "InPanelContainer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterUIOperationsFactory_eventCreateBetterSwichOperationWithContainer_Parms, InPanelContainer), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPanelContainer_MetaData), NewProp_InPanelContainer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperationWithContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterUIOperationsFactory_eventCreateBetterSwichOperationWithContainer_Parms, ReturnValue), Z_Construct_UClass_UBetterSwitchOperation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperationWithContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperationWithContainer_Statics::NewProp_OwnerWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperationWithContainer_Statics::NewProp_InSwitcher,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperationWithContainer_Statics::NewProp_InPanelContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperationWithContainer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperationWithContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperationWithContainer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterUIOperationsFactory, nullptr, "CreateBetterSwichOperationWithContainer", Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperationWithContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperationWithContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperationWithContainer_Statics::BetterUIOperationsFactory_eventCreateBetterSwichOperationWithContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperationWithContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperationWithContainer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperationWithContainer_Statics::BetterUIOperationsFactory_eventCreateBetterSwichOperationWithContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperationWithContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperationWithContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBetterUIOperationsFactory::execCreateBetterSwichOperationWithContainer)
{
	P_GET_OBJECT(UUserWidget,Z_Param_OwnerWidget);
	P_GET_OBJECT(UWidgetSwitcher,Z_Param_InSwitcher);
	P_GET_OBJECT(UPanelWidget,Z_Param_InPanelContainer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBetterSwitchOperation**)Z_Param__Result=UBetterUIOperationsFactory::CreateBetterSwichOperationWithContainer(Z_Param_OwnerWidget,Z_Param_InSwitcher,Z_Param_InPanelContainer);
	P_NATIVE_END;
}
// ********** End Class UBetterUIOperationsFactory Function CreateBetterSwichOperationWithContainer 

// ********** Begin Class UBetterUIOperationsFactory ***********************************************
void UBetterUIOperationsFactory::StaticRegisterNativesUBetterUIOperationsFactory()
{
	UClass* Class = UBetterUIOperationsFactory::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateBetterSwichOperation", &UBetterUIOperationsFactory::execCreateBetterSwichOperation },
		{ "CreateBetterSwichOperationWithContainer", &UBetterUIOperationsFactory::execCreateBetterSwichOperationWithContainer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBetterUIOperationsFactory;
UClass* UBetterUIOperationsFactory::GetPrivateStaticClass()
{
	using TClass = UBetterUIOperationsFactory;
	if (!Z_Registration_Info_UClass_UBetterUIOperationsFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BetterUIOperationsFactory"),
			Z_Registration_Info_UClass_UBetterUIOperationsFactory.InnerSingleton,
			StaticRegisterNativesUBetterUIOperationsFactory,
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
	return Z_Registration_Info_UClass_UBetterUIOperationsFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UBetterUIOperationsFactory_NoRegister()
{
	return UBetterUIOperationsFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBetterUIOperationsFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/BetterUIOperationsFactory.h" },
		{ "ModuleRelativePath", "Public/Factories/BetterUIOperationsFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperation, "CreateBetterSwichOperation" }, // 2283115201
		{ &Z_Construct_UFunction_UBetterUIOperationsFactory_CreateBetterSwichOperationWithContainer, "CreateBetterSwichOperationWithContainer" }, // 3215913927
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBetterUIOperationsFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBetterUIOperationsFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_BetterUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterUIOperationsFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBetterUIOperationsFactory_Statics::ClassParams = {
	&UBetterUIOperationsFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterUIOperationsFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UBetterUIOperationsFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBetterUIOperationsFactory()
{
	if (!Z_Registration_Info_UClass_UBetterUIOperationsFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBetterUIOperationsFactory.OuterSingleton, Z_Construct_UClass_UBetterUIOperationsFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBetterUIOperationsFactory.OuterSingleton;
}
UBetterUIOperationsFactory::UBetterUIOperationsFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBetterUIOperationsFactory);
UBetterUIOperationsFactory::~UBetterUIOperationsFactory() {}
// ********** End Class UBetterUIOperationsFactory *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Factories_BetterUIOperationsFactory_h__Script_BetterUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBetterUIOperationsFactory, UBetterUIOperationsFactory::StaticClass, TEXT("UBetterUIOperationsFactory"), &Z_Registration_Info_UClass_UBetterUIOperationsFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBetterUIOperationsFactory), 2515993856U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Factories_BetterUIOperationsFactory_h__Script_BetterUI_3546688438(TEXT("/Script/BetterUI"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Factories_BetterUIOperationsFactory_h__Script_BetterUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Factories_BetterUIOperationsFactory_h__Script_BetterUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
