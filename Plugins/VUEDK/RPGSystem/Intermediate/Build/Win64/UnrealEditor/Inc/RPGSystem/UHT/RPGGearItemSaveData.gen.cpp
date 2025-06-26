// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGInventory/Data/SaveData/RPGGearItemSaveData.h"
#include "RPGInventory/Data/SaveData/RPGItemSaveData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRPGGearItemSaveData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
RPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FRPGGearItemSaveData();
RPGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FRPGItemSaveData();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FRPGGearItemSaveData **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRPGGearItemSaveData;
class UScriptStruct* FRPGGearItemSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRPGGearItemSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRPGGearItemSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRPGGearItemSaveData, (UObject*)Z_Construct_UPackage__Script_RPGSystem(), TEXT("RPGGearItemSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_FRPGGearItemSaveData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FRPGGearItemSaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RPGInventory/Data/SaveData/RPGGearItemSaveData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RPGItemSaveData_MetaData[] = {
		{ "Category", "RPGGearItemSaveData" },
		{ "ModuleRelativePath", "Public/RPGInventory/Data/SaveData/RPGGearItemSaveData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GearStats_MetaData[] = {
		{ "Category", "RPGGearItemSaveData" },
		{ "ModuleRelativePath", "Public/RPGInventory/Data/SaveData/RPGGearItemSaveData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RPGItemSaveData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GearStats_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GearStats_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GearStats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRPGGearItemSaveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRPGGearItemSaveData_Statics::NewProp_RPGItemSaveData = { "RPGItemSaveData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPGGearItemSaveData, RPGItemSaveData), Z_Construct_UScriptStruct_FRPGItemSaveData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RPGItemSaveData_MetaData), NewProp_RPGItemSaveData_MetaData) }; // 2032670270
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRPGGearItemSaveData_Statics::NewProp_GearStats_ValueProp = { "GearStats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRPGGearItemSaveData_Statics::NewProp_GearStats_Key_KeyProp = { "GearStats_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRPGGearItemSaveData_Statics::NewProp_GearStats = { "GearStats", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPGGearItemSaveData, GearStats), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GearStats_MetaData), NewProp_GearStats_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRPGGearItemSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGGearItemSaveData_Statics::NewProp_RPGItemSaveData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGGearItemSaveData_Statics::NewProp_GearStats_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGGearItemSaveData_Statics::NewProp_GearStats_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGGearItemSaveData_Statics::NewProp_GearStats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGGearItemSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRPGGearItemSaveData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
	nullptr,
	&NewStructOps,
	"RPGGearItemSaveData",
	Z_Construct_UScriptStruct_FRPGGearItemSaveData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGGearItemSaveData_Statics::PropPointers),
	sizeof(FRPGGearItemSaveData),
	alignof(FRPGGearItemSaveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGGearItemSaveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRPGGearItemSaveData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRPGGearItemSaveData()
{
	if (!Z_Registration_Info_UScriptStruct_FRPGGearItemSaveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRPGGearItemSaveData.InnerSingleton, Z_Construct_UScriptStruct_FRPGGearItemSaveData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FRPGGearItemSaveData.InnerSingleton;
}
// ********** End ScriptStruct FRPGGearItemSaveData ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_SaveData_RPGGearItemSaveData_h__Script_RPGSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRPGGearItemSaveData::StaticStruct, Z_Construct_UScriptStruct_FRPGGearItemSaveData_Statics::NewStructOps, TEXT("RPGGearItemSaveData"), &Z_Registration_Info_UScriptStruct_FRPGGearItemSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRPGGearItemSaveData), 2394929111U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_SaveData_RPGGearItemSaveData_h__Script_RPGSystem_794160722(TEXT("/Script/RPGSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_SaveData_RPGGearItemSaveData_h__Script_RPGSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_SaveData_RPGGearItemSaveData_h__Script_RPGSystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
