// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Utility/CustomGameUserSettingsUtility.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCustomGameUserSettingsUtility() {}

// ********** Begin Cross Module References ********************************************************
CUSTOMSETTINGSSYSTEM_API UClass* Z_Construct_UClass_UCustomGameUserSettings_NoRegister();
CUSTOMSETTINGSSYSTEM_API UClass* Z_Construct_UClass_UCustomUserSettingsUtility();
CUSTOMSETTINGSSYSTEM_API UClass* Z_Construct_UClass_UCustomUserSettingsUtility_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_CustomSettingsSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCustomUserSettingsUtility Function GetCustomUserSettings ****************
struct Z_Construct_UFunction_UCustomUserSettingsUtility_GetCustomUserSettings_Statics
{
	struct CustomUserSettingsUtility_eventGetCustomUserSettings_Parms
	{
		UCustomGameUserSettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Utility/CustomGameUserSettingsUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomUserSettingsUtility_GetCustomUserSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomUserSettingsUtility_eventGetCustomUserSettings_Parms, ReturnValue), Z_Construct_UClass_UCustomGameUserSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomUserSettingsUtility_GetCustomUserSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomUserSettingsUtility_GetCustomUserSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomUserSettingsUtility_GetCustomUserSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomUserSettingsUtility_GetCustomUserSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCustomUserSettingsUtility, nullptr, "GetCustomUserSettings", Z_Construct_UFunction_UCustomUserSettingsUtility_GetCustomUserSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomUserSettingsUtility_GetCustomUserSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomUserSettingsUtility_GetCustomUserSettings_Statics::CustomUserSettingsUtility_eventGetCustomUserSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomUserSettingsUtility_GetCustomUserSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomUserSettingsUtility_GetCustomUserSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCustomUserSettingsUtility_GetCustomUserSettings_Statics::CustomUserSettingsUtility_eventGetCustomUserSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomUserSettingsUtility_GetCustomUserSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomUserSettingsUtility_GetCustomUserSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomUserSettingsUtility::execGetCustomUserSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCustomGameUserSettings**)Z_Param__Result=UCustomUserSettingsUtility::GetCustomUserSettings();
	P_NATIVE_END;
}
// ********** End Class UCustomUserSettingsUtility Function GetCustomUserSettings ******************

// ********** Begin Class UCustomUserSettingsUtility ***********************************************
void UCustomUserSettingsUtility::StaticRegisterNativesUCustomUserSettingsUtility()
{
	UClass* Class = UCustomUserSettingsUtility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomUserSettings", &UCustomUserSettingsUtility::execGetCustomUserSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCustomUserSettingsUtility;
UClass* UCustomUserSettingsUtility::GetPrivateStaticClass()
{
	using TClass = UCustomUserSettingsUtility;
	if (!Z_Registration_Info_UClass_UCustomUserSettingsUtility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CustomUserSettingsUtility"),
			Z_Registration_Info_UClass_UCustomUserSettingsUtility.InnerSingleton,
			StaticRegisterNativesUCustomUserSettingsUtility,
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
	return Z_Registration_Info_UClass_UCustomUserSettingsUtility.InnerSingleton;
}
UClass* Z_Construct_UClass_UCustomUserSettingsUtility_NoRegister()
{
	return UCustomUserSettingsUtility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCustomUserSettingsUtility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Utility/CustomGameUserSettingsUtility.h" },
		{ "ModuleRelativePath", "Public/Utility/CustomGameUserSettingsUtility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomUserSettingsUtility_GetCustomUserSettings, "GetCustomUserSettings" }, // 1325823396
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomUserSettingsUtility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCustomUserSettingsUtility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_CustomSettingsSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomUserSettingsUtility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomUserSettingsUtility_Statics::ClassParams = {
	&UCustomUserSettingsUtility::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomUserSettingsUtility_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomUserSettingsUtility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomUserSettingsUtility()
{
	if (!Z_Registration_Info_UClass_UCustomUserSettingsUtility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomUserSettingsUtility.OuterSingleton, Z_Construct_UClass_UCustomUserSettingsUtility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomUserSettingsUtility.OuterSingleton;
}
UCustomUserSettingsUtility::UCustomUserSettingsUtility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomUserSettingsUtility);
UCustomUserSettingsUtility::~UCustomUserSettingsUtility() {}
// ********** End Class UCustomUserSettingsUtility *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_Utility_CustomGameUserSettingsUtility_h__Script_CustomSettingsSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomUserSettingsUtility, UCustomUserSettingsUtility::StaticClass, TEXT("UCustomUserSettingsUtility"), &Z_Registration_Info_UClass_UCustomUserSettingsUtility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomUserSettingsUtility), 2495909427U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_Utility_CustomGameUserSettingsUtility_h__Script_CustomSettingsSystem_1389406798(TEXT("/Script/CustomSettingsSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_Utility_CustomGameUserSettingsUtility_h__Script_CustomSettingsSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_Utility_CustomGameUserSettingsUtility_h__Script_CustomSettingsSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
