// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weapons/Data/ReloadEventData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeReloadEventData() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FReloadEventData();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FReloadEventData **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FReloadEventData;
class UScriptStruct* FReloadEventData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FReloadEventData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FReloadEventData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReloadEventData, (UObject*)Z_Construct_UPackage__Script_WeaponSystem(), TEXT("ReloadEventData"));
	}
	return Z_Registration_Info_UScriptStruct_FReloadEventData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FReloadEventData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Weapons/Data/ReloadEventData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmmoToReload_MetaData[] = {
		{ "Category", "ReloadEventData" },
		{ "ModuleRelativePath", "Public/Weapons/Data/ReloadEventData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AmmoToReload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReloadEventData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FReloadEventData_Statics::NewProp_AmmoToReload = { "AmmoToReload", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FReloadEventData, AmmoToReload), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmmoToReload_MetaData), NewProp_AmmoToReload_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReloadEventData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReloadEventData_Statics::NewProp_AmmoToReload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReloadEventData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReloadEventData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
	nullptr,
	&NewStructOps,
	"ReloadEventData",
	Z_Construct_UScriptStruct_FReloadEventData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReloadEventData_Statics::PropPointers),
	sizeof(FReloadEventData),
	alignof(FReloadEventData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReloadEventData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FReloadEventData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FReloadEventData()
{
	if (!Z_Registration_Info_UScriptStruct_FReloadEventData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FReloadEventData.InnerSingleton, Z_Construct_UScriptStruct_FReloadEventData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FReloadEventData.InnerSingleton;
}
// ********** End ScriptStruct FReloadEventData ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_Data_ReloadEventData_h__Script_WeaponSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FReloadEventData::StaticStruct, Z_Construct_UScriptStruct_FReloadEventData_Statics::NewStructOps, TEXT("ReloadEventData"), &Z_Registration_Info_UScriptStruct_FReloadEventData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReloadEventData), 1060695821U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_Data_ReloadEventData_h__Script_WeaponSystem_1495144687(TEXT("/Script/WeaponSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_Data_ReloadEventData_h__Script_WeaponSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_Data_ReloadEventData_h__Script_WeaponSystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
