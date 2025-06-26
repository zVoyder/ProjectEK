// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponCrosshair/Widgets/WeaponCrosshairWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWeaponCrosshairWidget() {}

// ********** Begin Cross Module References ********************************************************
CROSSHAIRSYSTEM_API UClass* Z_Construct_UClass_UCrosshairWidget();
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UWeaponCrosshairWidget();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UWeaponCrosshairWidget_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWeaponCrosshairWidget Function OnWeaponAttackFailed *********************
static FName NAME_UWeaponCrosshairWidget_OnWeaponAttackFailed = FName(TEXT("OnWeaponAttackFailed"));
void UWeaponCrosshairWidget::OnWeaponAttackFailed()
{
	UFunction* Func = FindFunctionChecked(NAME_UWeaponCrosshairWidget_OnWeaponAttackFailed);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnWeaponAttackFailed_Implementation();
	}
}
struct Z_Construct_UFunction_UWeaponCrosshairWidget_OnWeaponAttackFailed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponCrosshair/Widgets/WeaponCrosshairWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponCrosshairWidget_OnWeaponAttackFailed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponCrosshairWidget, nullptr, "OnWeaponAttackFailed", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponCrosshairWidget_OnWeaponAttackFailed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponCrosshairWidget_OnWeaponAttackFailed_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UWeaponCrosshairWidget_OnWeaponAttackFailed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponCrosshairWidget_OnWeaponAttackFailed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponCrosshairWidget::execOnWeaponAttackFailed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWeaponAttackFailed_Implementation();
	P_NATIVE_END;
}
// ********** End Class UWeaponCrosshairWidget Function OnWeaponAttackFailed ***********************

// ********** Begin Class UWeaponCrosshairWidget Function OnWeaponAttackSuccess ********************
static FName NAME_UWeaponCrosshairWidget_OnWeaponAttackSuccess = FName(TEXT("OnWeaponAttackSuccess"));
void UWeaponCrosshairWidget::OnWeaponAttackSuccess()
{
	UFunction* Func = FindFunctionChecked(NAME_UWeaponCrosshairWidget_OnWeaponAttackSuccess);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnWeaponAttackSuccess_Implementation();
	}
}
struct Z_Construct_UFunction_UWeaponCrosshairWidget_OnWeaponAttackSuccess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeaponCrosshair/Widgets/WeaponCrosshairWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponCrosshairWidget_OnWeaponAttackSuccess_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponCrosshairWidget, nullptr, "OnWeaponAttackSuccess", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponCrosshairWidget_OnWeaponAttackSuccess_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponCrosshairWidget_OnWeaponAttackSuccess_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UWeaponCrosshairWidget_OnWeaponAttackSuccess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponCrosshairWidget_OnWeaponAttackSuccess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponCrosshairWidget::execOnWeaponAttackSuccess)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWeaponAttackSuccess_Implementation();
	P_NATIVE_END;
}
// ********** End Class UWeaponCrosshairWidget Function OnWeaponAttackSuccess **********************

// ********** Begin Class UWeaponCrosshairWidget ***************************************************
void UWeaponCrosshairWidget::StaticRegisterNativesUWeaponCrosshairWidget()
{
	UClass* Class = UWeaponCrosshairWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnWeaponAttackFailed", &UWeaponCrosshairWidget::execOnWeaponAttackFailed },
		{ "OnWeaponAttackSuccess", &UWeaponCrosshairWidget::execOnWeaponAttackSuccess },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWeaponCrosshairWidget;
UClass* UWeaponCrosshairWidget::GetPrivateStaticClass()
{
	using TClass = UWeaponCrosshairWidget;
	if (!Z_Registration_Info_UClass_UWeaponCrosshairWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WeaponCrosshairWidget"),
			Z_Registration_Info_UClass_UWeaponCrosshairWidget.InnerSingleton,
			StaticRegisterNativesUWeaponCrosshairWidget,
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
	return Z_Registration_Info_UClass_UWeaponCrosshairWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UWeaponCrosshairWidget_NoRegister()
{
	return UWeaponCrosshairWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWeaponCrosshairWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WeaponCrosshair/Widgets/WeaponCrosshairWidget.h" },
		{ "ModuleRelativePath", "Public/WeaponCrosshair/Widgets/WeaponCrosshairWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[] = {
		{ "Category", "WeaponCrosshairWidget" },
		{ "ModuleRelativePath", "Public/WeaponCrosshair/Widgets/WeaponCrosshairWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponCrosshairWidget_OnWeaponAttackFailed, "OnWeaponAttackFailed" }, // 1604668008
		{ &Z_Construct_UFunction_UWeaponCrosshairWidget_OnWeaponAttackSuccess, "OnWeaponAttackSuccess" }, // 2352044459
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponCrosshairWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponCrosshairWidget_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponCrosshairWidget, Weapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weapon_MetaData), NewProp_Weapon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponCrosshairWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponCrosshairWidget_Statics::NewProp_Weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponCrosshairWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWeaponCrosshairWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCrosshairWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponCrosshairWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponCrosshairWidget_Statics::ClassParams = {
	&UWeaponCrosshairWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWeaponCrosshairWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponCrosshairWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponCrosshairWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponCrosshairWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeaponCrosshairWidget()
{
	if (!Z_Registration_Info_UClass_UWeaponCrosshairWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponCrosshairWidget.OuterSingleton, Z_Construct_UClass_UWeaponCrosshairWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeaponCrosshairWidget.OuterSingleton;
}
UWeaponCrosshairWidget::UWeaponCrosshairWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponCrosshairWidget);
UWeaponCrosshairWidget::~UWeaponCrosshairWidget() {}
// ********** End Class UWeaponCrosshairWidget *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_Widgets_WeaponCrosshairWidget_h__Script_WeaponSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponCrosshairWidget, UWeaponCrosshairWidget::StaticClass, TEXT("UWeaponCrosshairWidget"), &Z_Registration_Info_UClass_UWeaponCrosshairWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponCrosshairWidget), 2192527963U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_Widgets_WeaponCrosshairWidget_h__Script_WeaponSystem_3434896245(TEXT("/Script/WeaponSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_Widgets_WeaponCrosshairWidget_h__Script_WeaponSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_WeaponCrosshair_Widgets_WeaponCrosshairWidget_h__Script_WeaponSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
