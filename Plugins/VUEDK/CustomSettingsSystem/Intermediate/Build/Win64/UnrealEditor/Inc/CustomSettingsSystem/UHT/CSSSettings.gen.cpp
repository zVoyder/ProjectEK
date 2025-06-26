// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CSSSettings.h"
#include "Data/CustomOptionData.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCSSSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
CUSTOMSETTINGSSYSTEM_API UClass* Z_Construct_UClass_UCSSSettings();
CUSTOMSETTINGSSYSTEM_API UClass* Z_Construct_UClass_UCSSSettings_NoRegister();
CUSTOMSETTINGSSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FCustomOptionData();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_CustomSettingsSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCSSSettings *************************************************************
void UCSSSettings::StaticRegisterNativesUCSSSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCSSSettings;
UClass* UCSSSettings::GetPrivateStaticClass()
{
	using TClass = UCSSSettings;
	if (!Z_Registration_Info_UClass_UCSSSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CSSSettings"),
			Z_Registration_Info_UClass_UCSSSettings.InnerSingleton,
			StaticRegisterNativesUCSSSettings,
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
	return Z_Registration_Info_UClass_UCSSSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UCSSSettings_NoRegister()
{
	return UCSSSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCSSSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Custom Game User Settings" },
		{ "IncludePath", "CSSSettings.h" },
		{ "ModuleRelativePath", "Public/CSSSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomSettingsMap_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CSSSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFrameRateLimit_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CSSSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultVSync_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CSSSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomSettingsMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomSettingsMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CustomSettingsMap;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultFrameRateLimit;
	static void NewProp_DefaultVSync_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultVSync;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSSSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCSSSettings_Statics::NewProp_CustomSettingsMap_ValueProp = { "CustomSettingsMap", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FCustomOptionData, METADATA_PARAMS(0, nullptr) }; // 2972798083
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCSSSettings_Statics::NewProp_CustomSettingsMap_Key_KeyProp = { "CustomSettingsMap_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCSSSettings_Statics::NewProp_CustomSettingsMap = { "CustomSettingsMap", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCSSSettings, CustomSettingsMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomSettingsMap_MetaData), NewProp_CustomSettingsMap_MetaData) }; // 133831994 2972798083
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSSSettings_Statics::NewProp_DefaultFrameRateLimit = { "DefaultFrameRateLimit", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCSSSettings, DefaultFrameRateLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultFrameRateLimit_MetaData), NewProp_DefaultFrameRateLimit_MetaData) };
void Z_Construct_UClass_UCSSSettings_Statics::NewProp_DefaultVSync_SetBit(void* Obj)
{
	((UCSSSettings*)Obj)->DefaultVSync = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCSSSettings_Statics::NewProp_DefaultVSync = { "DefaultVSync", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCSSSettings), &Z_Construct_UClass_UCSSSettings_Statics::NewProp_DefaultVSync_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultVSync_MetaData), NewProp_DefaultVSync_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCSSSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSSSettings_Statics::NewProp_CustomSettingsMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSSSettings_Statics::NewProp_CustomSettingsMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSSSettings_Statics::NewProp_CustomSettingsMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSSSettings_Statics::NewProp_DefaultFrameRateLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSSSettings_Statics::NewProp_DefaultVSync,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCSSSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCSSSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_CustomSettingsSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCSSSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCSSSettings_Statics::ClassParams = {
	&UCSSSettings::StaticClass,
	"CSSSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCSSSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCSSSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCSSSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UCSSSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCSSSettings()
{
	if (!Z_Registration_Info_UClass_UCSSSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCSSSettings.OuterSingleton, Z_Construct_UClass_UCSSSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCSSSettings.OuterSingleton;
}
UCSSSettings::UCSSSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCSSSettings);
UCSSSettings::~UCSSSettings() {}
// ********** End Class UCSSSettings ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_CSSSettings_h__Script_CustomSettingsSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCSSSettings, UCSSSettings::StaticClass, TEXT("UCSSSettings"), &Z_Registration_Info_UClass_UCSSSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCSSSettings), 3373813909U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_CSSSettings_h__Script_CustomSettingsSystem_2696054998(TEXT("/Script/CustomSettingsSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_CSSSettings_h__Script_CustomSettingsSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_CSSSettings_h__Script_CustomSettingsSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
