// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponCrosshair/Widgets/FirearmCrosshairWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFirearmCrosshairWidget() {}

// ********** Begin Cross Module References ********************************************************
UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AWeaponFirearm_NoRegister();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UFirearmCrosshairWidget();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UFirearmCrosshairWidget_NoRegister();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UWeaponCrosshairWidget();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFirearmCrosshairWidget Function AnimateCrosshair ************************
struct Z_Construct_UFunction_UFirearmCrosshairWidget_AnimateCrosshair_Statics
{
	struct FirearmCrosshairWidget_eventAnimateCrosshair_Parms
	{
		UWidgetAnimation* CrosshairAnimation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponCrosshair/Widgets/FirearmCrosshairWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrosshairAnimation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFirearmCrosshairWidget_AnimateCrosshair_Statics::NewProp_CrosshairAnimation = { "CrosshairAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FirearmCrosshairWidget_eventAnimateCrosshair_Parms, CrosshairAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirearmCrosshairWidget_AnimateCrosshair_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirearmCrosshairWidget_AnimateCrosshair_Statics::NewProp_CrosshairAnimation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFirearmCrosshairWidget_AnimateCrosshair_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirearmCrosshairWidget_AnimateCrosshair_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFirearmCrosshairWidget, nullptr, "AnimateCrosshair", Z_Construct_UFunction_UFirearmCrosshairWidget_AnimateCrosshair_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirearmCrosshairWidget_AnimateCrosshair_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFirearmCrosshairWidget_AnimateCrosshair_Statics::FirearmCrosshairWidget_eventAnimateCrosshair_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFirearmCrosshairWidget_AnimateCrosshair_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFirearmCrosshairWidget_AnimateCrosshair_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFirearmCrosshairWidget_AnimateCrosshair_Statics::FirearmCrosshairWidget_eventAnimateCrosshair_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFirearmCrosshairWidget_AnimateCrosshair()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirearmCrosshairWidget_AnimateCrosshair_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFirearmCrosshairWidget::execAnimateCrosshair)
{
	P_GET_OBJECT(UWidgetAnimation,Z_Param_CrosshairAnimation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AnimateCrosshair(Z_Param_CrosshairAnimation);
	P_NATIVE_END;
}
// ********** End Class UFirearmCrosshairWidget Function AnimateCrosshair **************************

// ********** Begin Class UFirearmCrosshairWidget Function OnAimDisabled ***************************
static FName NAME_UFirearmCrosshairWidget_OnAimDisabled = FName(TEXT("OnAimDisabled"));
void UFirearmCrosshairWidget::OnAimDisabled()
{
	UFunction* Func = FindFunctionChecked(NAME_UFirearmCrosshairWidget_OnAimDisabled);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnAimDisabled_Implementation();
	}
}
struct Z_Construct_UFunction_UFirearmCrosshairWidget_OnAimDisabled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponCrosshair/Widgets/FirearmCrosshairWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirearmCrosshairWidget_OnAimDisabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFirearmCrosshairWidget, nullptr, "OnAimDisabled", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFirearmCrosshairWidget_OnAimDisabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFirearmCrosshairWidget_OnAimDisabled_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFirearmCrosshairWidget_OnAimDisabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirearmCrosshairWidget_OnAimDisabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFirearmCrosshairWidget::execOnAimDisabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAimDisabled_Implementation();
	P_NATIVE_END;
}
// ********** End Class UFirearmCrosshairWidget Function OnAimDisabled *****************************

// ********** Begin Class UFirearmCrosshairWidget Function OnAimEnabled ****************************
static FName NAME_UFirearmCrosshairWidget_OnAimEnabled = FName(TEXT("OnAimEnabled"));
void UFirearmCrosshairWidget::OnAimEnabled()
{
	UFunction* Func = FindFunctionChecked(NAME_UFirearmCrosshairWidget_OnAimEnabled);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnAimEnabled_Implementation();
	}
}
struct Z_Construct_UFunction_UFirearmCrosshairWidget_OnAimEnabled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponCrosshair/Widgets/FirearmCrosshairWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirearmCrosshairWidget_OnAimEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFirearmCrosshairWidget, nullptr, "OnAimEnabled", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFirearmCrosshairWidget_OnAimEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFirearmCrosshairWidget_OnAimEnabled_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFirearmCrosshairWidget_OnAimEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirearmCrosshairWidget_OnAimEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFirearmCrosshairWidget::execOnAimEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAimEnabled_Implementation();
	P_NATIVE_END;
}
// ********** End Class UFirearmCrosshairWidget Function OnAimEnabled ******************************

// ********** Begin Class UFirearmCrosshairWidget Function OnSpreadChanged *************************
struct FirearmCrosshairWidget_eventOnSpreadChanged_Parms
{
	float Spread;
};
static FName NAME_UFirearmCrosshairWidget_OnSpreadChanged = FName(TEXT("OnSpreadChanged"));
void UFirearmCrosshairWidget::OnSpreadChanged(float Spread)
{
	UFunction* Func = FindFunctionChecked(NAME_UFirearmCrosshairWidget_OnSpreadChanged);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		FirearmCrosshairWidget_eventOnSpreadChanged_Parms Parms;
		Parms.Spread=Spread;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnSpreadChanged_Implementation(Spread);
	}
}
struct Z_Construct_UFunction_UFirearmCrosshairWidget_OnSpreadChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponCrosshair/Widgets/FirearmCrosshairWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Spread;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFirearmCrosshairWidget_OnSpreadChanged_Statics::NewProp_Spread = { "Spread", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FirearmCrosshairWidget_eventOnSpreadChanged_Parms, Spread), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFirearmCrosshairWidget_OnSpreadChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFirearmCrosshairWidget_OnSpreadChanged_Statics::NewProp_Spread,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFirearmCrosshairWidget_OnSpreadChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFirearmCrosshairWidget_OnSpreadChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFirearmCrosshairWidget, nullptr, "OnSpreadChanged", Z_Construct_UFunction_UFirearmCrosshairWidget_OnSpreadChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFirearmCrosshairWidget_OnSpreadChanged_Statics::PropPointers), sizeof(FirearmCrosshairWidget_eventOnSpreadChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFirearmCrosshairWidget_OnSpreadChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFirearmCrosshairWidget_OnSpreadChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FirearmCrosshairWidget_eventOnSpreadChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFirearmCrosshairWidget_OnSpreadChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFirearmCrosshairWidget_OnSpreadChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFirearmCrosshairWidget::execOnSpreadChanged)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Spread);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSpreadChanged_Implementation(Z_Param_Spread);
	P_NATIVE_END;
}
// ********** End Class UFirearmCrosshairWidget Function OnSpreadChanged ***************************

// ********** Begin Class UFirearmCrosshairWidget **************************************************
void UFirearmCrosshairWidget::StaticRegisterNativesUFirearmCrosshairWidget()
{
	UClass* Class = UFirearmCrosshairWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AnimateCrosshair", &UFirearmCrosshairWidget::execAnimateCrosshair },
		{ "OnAimDisabled", &UFirearmCrosshairWidget::execOnAimDisabled },
		{ "OnAimEnabled", &UFirearmCrosshairWidget::execOnAimEnabled },
		{ "OnSpreadChanged", &UFirearmCrosshairWidget::execOnSpreadChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFirearmCrosshairWidget;
UClass* UFirearmCrosshairWidget::GetPrivateStaticClass()
{
	using TClass = UFirearmCrosshairWidget;
	if (!Z_Registration_Info_UClass_UFirearmCrosshairWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FirearmCrosshairWidget"),
			Z_Registration_Info_UClass_UFirearmCrosshairWidget.InnerSingleton,
			StaticRegisterNativesUFirearmCrosshairWidget,
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
	return Z_Registration_Info_UClass_UFirearmCrosshairWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UFirearmCrosshairWidget_NoRegister()
{
	return UFirearmCrosshairWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFirearmCrosshairWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WeaponCrosshair/Widgets/FirearmCrosshairWidget.h" },
		{ "ModuleRelativePath", "Public/WeaponCrosshair/Widgets/FirearmCrosshairWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Firearm_MetaData[] = {
		{ "Category", "FirearmCrosshairWidget" },
		{ "ModuleRelativePath", "Public/WeaponCrosshair/Widgets/FirearmCrosshairWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Firearm;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFirearmCrosshairWidget_AnimateCrosshair, "AnimateCrosshair" }, // 1611120600
		{ &Z_Construct_UFunction_UFirearmCrosshairWidget_OnAimDisabled, "OnAimDisabled" }, // 3741390340
		{ &Z_Construct_UFunction_UFirearmCrosshairWidget_OnAimEnabled, "OnAimEnabled" }, // 327203927
		{ &Z_Construct_UFunction_UFirearmCrosshairWidget_OnSpreadChanged, "OnSpreadChanged" }, // 3185691342
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFirearmCrosshairWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFirearmCrosshairWidget_Statics::NewProp_Firearm = { "Firearm", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFirearmCrosshairWidget, Firearm), Z_Construct_UClass_AWeaponFirearm_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Firearm_MetaData), NewProp_Firearm_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFirearmCrosshairWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFirearmCrosshairWidget_Statics::NewProp_Firearm,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFirearmCrosshairWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFirearmCrosshairWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWeaponCrosshairWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFirearmCrosshairWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFirearmCrosshairWidget_Statics::ClassParams = {
	&UFirearmCrosshairWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFirearmCrosshairWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFirearmCrosshairWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFirearmCrosshairWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UFirearmCrosshairWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFirearmCrosshairWidget()
{
	if (!Z_Registration_Info_UClass_UFirearmCrosshairWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFirearmCrosshairWidget.OuterSingleton, Z_Construct_UClass_UFirearmCrosshairWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFirearmCrosshairWidget.OuterSingleton;
}
UFirearmCrosshairWidget::UFirearmCrosshairWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFirearmCrosshairWidget);
UFirearmCrosshairWidget::~UFirearmCrosshairWidget() {}
// ********** End Class UFirearmCrosshairWidget ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_Widgets_FirearmCrosshairWidget_h__Script_WeaponSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFirearmCrosshairWidget, UFirearmCrosshairWidget::StaticClass, TEXT("UFirearmCrosshairWidget"), &Z_Registration_Info_UClass_UFirearmCrosshairWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFirearmCrosshairWidget), 3459757250U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_Widgets_FirearmCrosshairWidget_h__Script_WeaponSystem_3871126299(TEXT("/Script/WeaponSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_Widgets_FirearmCrosshairWidget_h__Script_WeaponSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_Widgets_FirearmCrosshairWidget_h__Script_WeaponSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
