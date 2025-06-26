// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/SaveData/CheckpointsSaveData.h"
#include "Data/CheckpointIndexData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCheckpointsSaveData() {}

// ********** Begin Cross Module References ********************************************************
CHECKPOINTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FCheckpointIndexData();
CHECKPOINTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FCheckpointsSaveData();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
UPackage* Z_Construct_UPackage__Script_CheckpointSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FCheckpointsSaveData **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCheckpointsSaveData;
class UScriptStruct* FCheckpointsSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCheckpointsSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCheckpointsSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCheckpointsSaveData, (UObject*)Z_Construct_UPackage__Script_CheckpointSystem(), TEXT("CheckpointsSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_FCheckpointsSaveData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCheckpointsSaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/SaveData/CheckpointsSaveData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCheckpoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/SaveData/CheckpointsSaveData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckpointIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/SaveData/CheckpointsSaveData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentCheckpoints_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentCheckpoints_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CurrentCheckpoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CheckpointIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCheckpointsSaveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckpointsSaveData_Statics::NewProp_CurrentCheckpoints_ValueProp = { "CurrentCheckpoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckpointsSaveData_Statics::NewProp_CurrentCheckpoints_Key_KeyProp = { "CurrentCheckpoints_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCheckpointIndexData, METADATA_PARAMS(0, nullptr) }; // 1223963643
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCheckpointsSaveData_Statics::NewProp_CurrentCheckpoints = { "CurrentCheckpoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCheckpointsSaveData, CurrentCheckpoints), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCheckpoints_MetaData), NewProp_CurrentCheckpoints_MetaData) }; // 1223963643
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCheckpointsSaveData_Statics::NewProp_CheckpointIndex = { "CheckpointIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCheckpointsSaveData, CheckpointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckpointIndex_MetaData), NewProp_CheckpointIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCheckpointsSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckpointsSaveData_Statics::NewProp_CurrentCheckpoints_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckpointsSaveData_Statics::NewProp_CurrentCheckpoints_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckpointsSaveData_Statics::NewProp_CurrentCheckpoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckpointsSaveData_Statics::NewProp_CheckpointIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckpointsSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCheckpointsSaveData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CheckpointSystem,
	nullptr,
	&NewStructOps,
	"CheckpointsSaveData",
	Z_Construct_UScriptStruct_FCheckpointsSaveData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckpointsSaveData_Statics::PropPointers),
	sizeof(FCheckpointsSaveData),
	alignof(FCheckpointsSaveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckpointsSaveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCheckpointsSaveData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCheckpointsSaveData()
{
	if (!Z_Registration_Info_UScriptStruct_FCheckpointsSaveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCheckpointsSaveData.InnerSingleton, Z_Construct_UScriptStruct_FCheckpointsSaveData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCheckpointsSaveData.InnerSingleton;
}
// ********** End ScriptStruct FCheckpointsSaveData ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CheckpointSystem_Source_CheckpointSystem_Public_Data_SaveData_CheckpointsSaveData_h__Script_CheckpointSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCheckpointsSaveData::StaticStruct, Z_Construct_UScriptStruct_FCheckpointsSaveData_Statics::NewStructOps, TEXT("CheckpointsSaveData"), &Z_Registration_Info_UScriptStruct_FCheckpointsSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCheckpointsSaveData), 2865782105U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CheckpointSystem_Source_CheckpointSystem_Public_Data_SaveData_CheckpointsSaveData_h__Script_CheckpointSystem_364387691(TEXT("/Script/CheckpointSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CheckpointSystem_Source_CheckpointSystem_Public_Data_SaveData_CheckpointsSaveData_h__Script_CheckpointSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CheckpointSystem_Source_CheckpointSystem_Public_Data_SaveData_CheckpointsSaveData_h__Script_CheckpointSystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
