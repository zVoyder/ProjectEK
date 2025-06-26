// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/CustomOptionData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCustomOptionData() {}

// ********** Begin Cross Module References ********************************************************
CUSTOMSETTINGSSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FCustomOptionData();
UPackage* Z_Construct_UPackage__Script_CustomSettingsSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FCustomOptionData *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCustomOptionData;
class UScriptStruct* FCustomOptionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCustomOptionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCustomOptionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomOptionData, (UObject*)Z_Construct_UPackage__Script_CustomSettingsSystem(), TEXT("CustomOptionData"));
	}
	return Z_Registration_Info_UScriptStruct_FCustomOptionData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCustomOptionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/CustomOptionData.h" },
		{ "NotBlueprintType", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Setting" },
		{ "ModuleRelativePath", "Public/Data/CustomOptionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[] = {
		{ "Category", "Setting" },
		{ "ModuleRelativePath", "Public/Data/CustomOptionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[] = {
		{ "Category", "Setting" },
		{ "ModuleRelativePath", "Public/Data/CustomOptionData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomOptionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCustomOptionData_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomOptionData, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCustomOptionData_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomOptionData, MinValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinValue_MetaData), NewProp_MinValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCustomOptionData_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomOptionData, MaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxValue_MetaData), NewProp_MaxValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomOptionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomOptionData_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomOptionData_Statics::NewProp_MinValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomOptionData_Statics::NewProp_MaxValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomOptionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomOptionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CustomSettingsSystem,
	nullptr,
	&NewStructOps,
	"CustomOptionData",
	Z_Construct_UScriptStruct_FCustomOptionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomOptionData_Statics::PropPointers),
	sizeof(FCustomOptionData),
	alignof(FCustomOptionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomOptionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCustomOptionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCustomOptionData()
{
	if (!Z_Registration_Info_UScriptStruct_FCustomOptionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCustomOptionData.InnerSingleton, Z_Construct_UScriptStruct_FCustomOptionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCustomOptionData.InnerSingleton;
}
// ********** End ScriptStruct FCustomOptionData ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_Data_CustomOptionData_h__Script_CustomSettingsSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCustomOptionData::StaticStruct, Z_Construct_UScriptStruct_FCustomOptionData_Statics::NewStructOps, TEXT("CustomOptionData"), &Z_Registration_Info_UScriptStruct_FCustomOptionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomOptionData), 2972798083U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_Data_CustomOptionData_h__Script_CustomSettingsSystem_3815128640(TEXT("/Script/CustomSettingsSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_Data_CustomOptionData_h__Script_CustomSettingsSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_Data_CustomOptionData_h__Script_CustomSettingsSystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
