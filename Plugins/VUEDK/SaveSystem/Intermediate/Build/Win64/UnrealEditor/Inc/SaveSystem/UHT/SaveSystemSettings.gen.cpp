// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveSystemSettings.h"
#include "Data/Structs/AutoSaveManagerData.h"
#include "Data/Structs/SaveManagerData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSaveSystemSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SAVESYSTEM_API UClass* Z_Construct_UClass_USaveSystemSettings();
SAVESYSTEM_API UClass* Z_Construct_UClass_USaveSystemSettings_NoRegister();
SAVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAutoSaveManagerData();
SAVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSaveManagerData();
UPackage* Z_Construct_UPackage__Script_SaveSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USaveSystemSettings ******************************************************
void USaveSystemSettings::StaticRegisterNativesUSaveSystemSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USaveSystemSettings;
UClass* USaveSystemSettings::GetPrivateStaticClass()
{
	using TClass = USaveSystemSettings;
	if (!Z_Registration_Info_UClass_USaveSystemSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SaveSystemSettings"),
			Z_Registration_Info_UClass_USaveSystemSettings.InnerSingleton,
			StaticRegisterNativesUSaveSystemSettings,
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
	return Z_Registration_Info_UClass_USaveSystemSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_USaveSystemSettings_NoRegister()
{
	return USaveSystemSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USaveSystemSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Save System Settings" },
		{ "IncludePath", "SaveSystemSettings.h" },
		{ "ModuleRelativePath", "Public/SaveSystemSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveManagerData_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/SaveSystemSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAutoSave_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/SaveSystemSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoSaveManagerData_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bEnableAutoSave" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/SaveSystemSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SaveManagerData;
	static void NewProp_bEnableAutoSave_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAutoSave;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AutoSaveManagerData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveSystemSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveSystemSettings_Statics::NewProp_SaveManagerData = { "SaveManagerData", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveSystemSettings, SaveManagerData), Z_Construct_UScriptStruct_FSaveManagerData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveManagerData_MetaData), NewProp_SaveManagerData_MetaData) }; // 327736943
void Z_Construct_UClass_USaveSystemSettings_Statics::NewProp_bEnableAutoSave_SetBit(void* Obj)
{
	((USaveSystemSettings*)Obj)->bEnableAutoSave = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USaveSystemSettings_Statics::NewProp_bEnableAutoSave = { "bEnableAutoSave", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USaveSystemSettings), &Z_Construct_UClass_USaveSystemSettings_Statics::NewProp_bEnableAutoSave_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAutoSave_MetaData), NewProp_bEnableAutoSave_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveSystemSettings_Statics::NewProp_AutoSaveManagerData = { "AutoSaveManagerData", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveSystemSettings, AutoSaveManagerData), Z_Construct_UScriptStruct_FAutoSaveManagerData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoSaveManagerData_MetaData), NewProp_AutoSaveManagerData_MetaData) }; // 978320185
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveSystemSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSystemSettings_Statics::NewProp_SaveManagerData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSystemSettings_Statics::NewProp_bEnableAutoSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSystemSettings_Statics::NewProp_AutoSaveManagerData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveSystemSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USaveSystemSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SaveSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveSystemSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveSystemSettings_Statics::ClassParams = {
	&USaveSystemSettings::StaticClass,
	"SaveSystemSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USaveSystemSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USaveSystemSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveSystemSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveSystemSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USaveSystemSettings()
{
	if (!Z_Registration_Info_UClass_USaveSystemSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveSystemSettings.OuterSingleton, Z_Construct_UClass_USaveSystemSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USaveSystemSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USaveSystemSettings);
USaveSystemSettings::~USaveSystemSettings() {}
// ********** End Class USaveSystemSettings ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveSystemSettings_h__Script_SaveSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USaveSystemSettings, USaveSystemSettings::StaticClass, TEXT("USaveSystemSettings"), &Z_Registration_Info_UClass_USaveSystemSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveSystemSettings), 4143447027U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveSystemSettings_h__Script_SaveSystem_1231843479(TEXT("/Script/SaveSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveSystemSettings_h__Script_SaveSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveSystemSettings_h__Script_SaveSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
