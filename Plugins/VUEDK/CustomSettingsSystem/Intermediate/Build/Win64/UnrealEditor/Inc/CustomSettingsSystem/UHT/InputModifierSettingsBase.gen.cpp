// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputsModifiers/InputModifierSettingsBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInputModifierSettingsBase() {}

// ********** Begin Cross Module References ********************************************************
CUSTOMSETTINGSSYSTEM_API UClass* Z_Construct_UClass_UInputModifierSettingsBase();
CUSTOMSETTINGSSYSTEM_API UClass* Z_Construct_UClass_UInputModifierSettingsBase_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifier();
UPackage* Z_Construct_UPackage__Script_CustomSettingsSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInputModifierSettingsBase Function OnSettingsApplied ********************
struct Z_Construct_UFunction_UInputModifierSettingsBase_OnSettingsApplied_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputsModifiers/InputModifierSettingsBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputModifierSettingsBase_OnSettingsApplied_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInputModifierSettingsBase, nullptr, "OnSettingsApplied", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInputModifierSettingsBase_OnSettingsApplied_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInputModifierSettingsBase_OnSettingsApplied_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInputModifierSettingsBase_OnSettingsApplied()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputModifierSettingsBase_OnSettingsApplied_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInputModifierSettingsBase::execOnSettingsApplied)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSettingsApplied();
	P_NATIVE_END;
}
// ********** End Class UInputModifierSettingsBase Function OnSettingsApplied **********************

// ********** Begin Class UInputModifierSettingsBase ***********************************************
void UInputModifierSettingsBase::StaticRegisterNativesUInputModifierSettingsBase()
{
	UClass* Class = UInputModifierSettingsBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnSettingsApplied", &UInputModifierSettingsBase::execOnSettingsApplied },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInputModifierSettingsBase;
UClass* UInputModifierSettingsBase::GetPrivateStaticClass()
{
	using TClass = UInputModifierSettingsBase;
	if (!Z_Registration_Info_UClass_UInputModifierSettingsBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InputModifierSettingsBase"),
			Z_Registration_Info_UClass_UInputModifierSettingsBase.InnerSingleton,
			StaticRegisterNativesUInputModifierSettingsBase,
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
	return Z_Registration_Info_UClass_UInputModifierSettingsBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UInputModifierSettingsBase_NoRegister()
{
	return UInputModifierSettingsBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInputModifierSettingsBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InputsModifiers/InputModifierSettingsBase.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InputsModifiers/InputModifierSettingsBase.h" },
		{ "NotBlueprintType", "true" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputModifierSettingsBase_OnSettingsApplied, "OnSettingsApplied" }, // 1555561927
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputModifierSettingsBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInputModifierSettingsBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputModifier,
	(UObject* (*)())Z_Construct_UPackage__Script_CustomSettingsSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierSettingsBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputModifierSettingsBase_Statics::ClassParams = {
	&UInputModifierSettingsBase::StaticClass,
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
	0x401030A3u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierSettingsBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputModifierSettingsBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputModifierSettingsBase()
{
	if (!Z_Registration_Info_UClass_UInputModifierSettingsBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputModifierSettingsBase.OuterSingleton, Z_Construct_UClass_UInputModifierSettingsBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputModifierSettingsBase.OuterSingleton;
}
UInputModifierSettingsBase::UInputModifierSettingsBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputModifierSettingsBase);
UInputModifierSettingsBase::~UInputModifierSettingsBase() {}
// ********** End Class UInputModifierSettingsBase *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_InputsModifiers_InputModifierSettingsBase_h__Script_CustomSettingsSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputModifierSettingsBase, UInputModifierSettingsBase::StaticClass, TEXT("UInputModifierSettingsBase"), &Z_Registration_Info_UClass_UInputModifierSettingsBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputModifierSettingsBase), 126151402U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_InputsModifiers_InputModifierSettingsBase_h__Script_CustomSettingsSystem_1943371218(TEXT("/Script/CustomSettingsSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_InputsModifiers_InputModifierSettingsBase_h__Script_CustomSettingsSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_InputsModifiers_InputModifierSettingsBase_h__Script_CustomSettingsSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
