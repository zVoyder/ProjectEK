// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/BetterSelectableWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBetterSelectableWidget() {}

// ********** Begin Cross Module References ********************************************************
BETTERUI_API UClass* Z_Construct_UClass_UBetterSelectableWidget();
BETTERUI_API UClass* Z_Construct_UClass_UBetterSelectableWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BetterUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UBetterSelectableWidget Function DeselectWidget **********************
void IBetterSelectableWidget::DeselectWidget()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_DeselectWidget instead.");
}
static FName NAME_UBetterSelectableWidget_DeselectWidget = FName(TEXT("DeselectWidget"));
void IBetterSelectableWidget::Execute_DeselectWidget(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UBetterSelectableWidget::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UBetterSelectableWidget_DeselectWidget);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IBetterSelectableWidget*)(O->GetNativeInterfaceAddress(UBetterSelectableWidget::StaticClass())))
	{
		I->DeselectWidget_Implementation();
	}
}
struct Z_Construct_UFunction_UBetterSelectableWidget_DeselectWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/BetterSelectableWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterSelectableWidget_DeselectWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterSelectableWidget, nullptr, "DeselectWidget", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterSelectableWidget_DeselectWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterSelectableWidget_DeselectWidget_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBetterSelectableWidget_DeselectWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterSelectableWidget_DeselectWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBetterSelectableWidget::execDeselectWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeselectWidget_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UBetterSelectableWidget Function DeselectWidget ************************

// ********** Begin Interface UBetterSelectableWidget Function SelectWidget ************************
void IBetterSelectableWidget::SelectWidget()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SelectWidget instead.");
}
static FName NAME_UBetterSelectableWidget_SelectWidget = FName(TEXT("SelectWidget"));
void IBetterSelectableWidget::Execute_SelectWidget(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UBetterSelectableWidget::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UBetterSelectableWidget_SelectWidget);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IBetterSelectableWidget*)(O->GetNativeInterfaceAddress(UBetterSelectableWidget::StaticClass())))
	{
		I->SelectWidget_Implementation();
	}
}
struct Z_Construct_UFunction_UBetterSelectableWidget_SelectWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/BetterSelectableWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBetterSelectableWidget_SelectWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBetterSelectableWidget, nullptr, "SelectWidget", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBetterSelectableWidget_SelectWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBetterSelectableWidget_SelectWidget_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UBetterSelectableWidget_SelectWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBetterSelectableWidget_SelectWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBetterSelectableWidget::execSelectWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectWidget_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UBetterSelectableWidget Function SelectWidget **************************

// ********** Begin Interface UBetterSelectableWidget **********************************************
void UBetterSelectableWidget::StaticRegisterNativesUBetterSelectableWidget()
{
	UClass* Class = UBetterSelectableWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DeselectWidget", &IBetterSelectableWidget::execDeselectWidget },
		{ "SelectWidget", &IBetterSelectableWidget::execSelectWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBetterSelectableWidget;
UClass* UBetterSelectableWidget::GetPrivateStaticClass()
{
	using TClass = UBetterSelectableWidget;
	if (!Z_Registration_Info_UClass_UBetterSelectableWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BetterSelectableWidget"),
			Z_Registration_Info_UClass_UBetterSelectableWidget.InnerSingleton,
			StaticRegisterNativesUBetterSelectableWidget,
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
	return Z_Registration_Info_UClass_UBetterSelectableWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UBetterSelectableWidget_NoRegister()
{
	return UBetterSelectableWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBetterSelectableWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/BetterSelectableWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBetterSelectableWidget_DeselectWidget, "DeselectWidget" }, // 138712634
		{ &Z_Construct_UFunction_UBetterSelectableWidget_SelectWidget, "SelectWidget" }, // 2096875435
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBetterSelectableWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBetterSelectableWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BetterUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterSelectableWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBetterSelectableWidget_Statics::ClassParams = {
	&UBetterSelectableWidget::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBetterSelectableWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBetterSelectableWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBetterSelectableWidget()
{
	if (!Z_Registration_Info_UClass_UBetterSelectableWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBetterSelectableWidget.OuterSingleton, Z_Construct_UClass_UBetterSelectableWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBetterSelectableWidget.OuterSingleton;
}
UBetterSelectableWidget::UBetterSelectableWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBetterSelectableWidget);
// ********** End Interface UBetterSelectableWidget ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSelectableWidget_h__Script_BetterUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBetterSelectableWidget, UBetterSelectableWidget::StaticClass, TEXT("UBetterSelectableWidget"), &Z_Registration_Info_UClass_UBetterSelectableWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBetterSelectableWidget), 3989435975U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSelectableWidget_h__Script_BetterUI_1213954988(TEXT("/Script/BetterUI"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSelectableWidget_h__Script_BetterUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSelectableWidget_h__Script_BetterUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
