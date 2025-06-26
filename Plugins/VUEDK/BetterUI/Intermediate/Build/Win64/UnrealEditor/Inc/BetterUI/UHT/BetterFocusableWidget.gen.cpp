// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/BetterFocusableWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBetterFocusableWidget() {}

// ********** Begin Cross Module References ********************************************************
BETTERUI_API UClass* Z_Construct_UClass_UBetterFocusableWidget();
BETTERUI_API UClass* Z_Construct_UClass_UBetterFocusableWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_BetterUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UBetterFocusableWidget Function GetWidgetFocusTarget *****************
struct BetterFocusableWidget_eventGetWidgetFocusTarget_Parms
{
	UWidget* ReturnValue;

	/** Constructor, initializes return property only **/
	BetterFocusableWidget_eventGetWidgetFocusTarget_Parms()
		: ReturnValue(NULL)
	{
	}
};
UWidget* IBetterFocusableWidget::GetWidgetFocusTarget()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetWidgetFocusTarget instead.");
	BetterFocusableWidget_eventGetWidgetFocusTarget_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UBetterFocusableWidget_GetWidgetFocusTarget = FName(TEXT("GetWidgetFocusTarget"));
UWidget* IBetterFocusableWidget::Execute_GetWidgetFocusTarget(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UBetterFocusableWidget::StaticClass()));
	BetterFocusableWidget_eventGetWidgetFocusTarget_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UBetterFocusableWidget_GetWidgetFocusTarget);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IBetterFocusableWidget*)(O->GetNativeInterfaceAddress(UBetterFocusableWidget::StaticClass())))
	{
		Parms.ReturnValue = I->GetWidgetFocusTarget_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UBetterFocusableWidget_GetWidgetFocusTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/BetterFocusableWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterFocusableWidget_GetWidgetFocusTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterFocusableWidget_eventGetWidgetFocusTarget_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterFocusableWidget_GetWidgetFocusTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterFocusableWidget_GetWidgetFocusTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterFocusableWidget_GetWidgetFocusTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterFocusableWidget_GetWidgetFocusTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterFocusableWidget, nullptr, "GetWidgetFocusTarget", Z_Construct_UFunction_UBetterFocusableWidget_GetWidgetFocusTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterFocusableWidget_GetWidgetFocusTarget_Statics::PropPointers), sizeof(BetterFocusableWidget_eventGetWidgetFocusTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterFocusableWidget_GetWidgetFocusTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterFocusableWidget_GetWidgetFocusTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BetterFocusableWidget_eventGetWidgetFocusTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterFocusableWidget_GetWidgetFocusTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterFocusableWidget_GetWidgetFocusTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBetterFocusableWidget::execGetWidgetFocusTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWidget**)Z_Param__Result=P_THIS->GetWidgetFocusTarget_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UBetterFocusableWidget Function GetWidgetFocusTarget *******************

// ********** Begin Interface UBetterFocusableWidget Function GetWidgetUnfocusTarget ***************
struct BetterFocusableWidget_eventGetWidgetUnfocusTarget_Parms
{
	UWidget* ReturnValue;

	/** Constructor, initializes return property only **/
	BetterFocusableWidget_eventGetWidgetUnfocusTarget_Parms()
		: ReturnValue(NULL)
	{
	}
};
UWidget* IBetterFocusableWidget::GetWidgetUnfocusTarget()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetWidgetUnfocusTarget instead.");
	BetterFocusableWidget_eventGetWidgetUnfocusTarget_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UBetterFocusableWidget_GetWidgetUnfocusTarget = FName(TEXT("GetWidgetUnfocusTarget"));
UWidget* IBetterFocusableWidget::Execute_GetWidgetUnfocusTarget(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UBetterFocusableWidget::StaticClass()));
	BetterFocusableWidget_eventGetWidgetUnfocusTarget_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UBetterFocusableWidget_GetWidgetUnfocusTarget);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IBetterFocusableWidget*)(O->GetNativeInterfaceAddress(UBetterFocusableWidget::StaticClass())))
	{
		Parms.ReturnValue = I->GetWidgetUnfocusTarget_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UBetterFocusableWidget_GetWidgetUnfocusTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/BetterFocusableWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBetterFocusableWidget_GetWidgetUnfocusTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BetterFocusableWidget_eventGetWidgetUnfocusTarget_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBetterFocusableWidget_GetWidgetUnfocusTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBetterFocusableWidget_GetWidgetUnfocusTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterFocusableWidget_GetWidgetUnfocusTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterFocusableWidget_GetWidgetUnfocusTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterFocusableWidget, nullptr, "GetWidgetUnfocusTarget", Z_Construct_UFunction_UBetterFocusableWidget_GetWidgetUnfocusTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterFocusableWidget_GetWidgetUnfocusTarget_Statics::PropPointers), sizeof(BetterFocusableWidget_eventGetWidgetUnfocusTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterFocusableWidget_GetWidgetUnfocusTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterFocusableWidget_GetWidgetUnfocusTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(BetterFocusableWidget_eventGetWidgetUnfocusTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBetterFocusableWidget_GetWidgetUnfocusTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterFocusableWidget_GetWidgetUnfocusTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBetterFocusableWidget::execGetWidgetUnfocusTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWidget**)Z_Param__Result=P_THIS->GetWidgetUnfocusTarget_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UBetterFocusableWidget Function GetWidgetUnfocusTarget *****************

// ********** Begin Interface UBetterFocusableWidget ***********************************************
void UBetterFocusableWidget::StaticRegisterNativesUBetterFocusableWidget()
{
	UClass* Class = UBetterFocusableWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetWidgetFocusTarget", &IBetterFocusableWidget::execGetWidgetFocusTarget },
		{ "GetWidgetUnfocusTarget", &IBetterFocusableWidget::execGetWidgetUnfocusTarget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBetterFocusableWidget;
UClass* UBetterFocusableWidget::GetPrivateStaticClass()
{
	using TClass = UBetterFocusableWidget;
	if (!Z_Registration_Info_UClass_UBetterFocusableWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BetterFocusableWidget"),
			Z_Registration_Info_UClass_UBetterFocusableWidget.InnerSingleton,
			StaticRegisterNativesUBetterFocusableWidget,
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
	return Z_Registration_Info_UClass_UBetterFocusableWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UBetterFocusableWidget_NoRegister()
{
	return UBetterFocusableWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBetterFocusableWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/BetterFocusableWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBetterFocusableWidget_GetWidgetFocusTarget, "GetWidgetFocusTarget" }, // 1951463932
		{ &Z_Construct_UFunction_UBetterFocusableWidget_GetWidgetUnfocusTarget, "GetWidgetUnfocusTarget" }, // 2679773433
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBetterFocusableWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBetterFocusableWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BetterUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterFocusableWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBetterFocusableWidget_Statics::ClassParams = {
	&UBetterFocusableWidget::StaticClass,
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
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterFocusableWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBetterFocusableWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBetterFocusableWidget()
{
	if (!Z_Registration_Info_UClass_UBetterFocusableWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBetterFocusableWidget.OuterSingleton, Z_Construct_UClass_UBetterFocusableWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBetterFocusableWidget.OuterSingleton;
}
UBetterFocusableWidget::UBetterFocusableWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBetterFocusableWidget);
// ********** End Interface UBetterFocusableWidget *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterFocusableWidget_h__Script_BetterUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBetterFocusableWidget, UBetterFocusableWidget::StaticClass, TEXT("UBetterFocusableWidget"), &Z_Registration_Info_UClass_UBetterFocusableWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBetterFocusableWidget), 2136985605U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterFocusableWidget_h__Script_BetterUI_1775282122(TEXT("/Script/BetterUI"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterFocusableWidget_h__Script_BetterUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterFocusableWidget_h__Script_BetterUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
