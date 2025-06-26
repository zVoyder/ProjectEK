// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/CheckpointIndexData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCheckpointIndexData() {}

// ********** Begin Cross Module References ********************************************************
CHECKPOINTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FCheckpointIndexData();
UPackage* Z_Construct_UPackage__Script_CheckpointSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FCheckpointIndexData **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCheckpointIndexData;
class UScriptStruct* FCheckpointIndexData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCheckpointIndexData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCheckpointIndexData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCheckpointIndexData, (UObject*)Z_Construct_UPackage__Script_CheckpointSystem(), TEXT("CheckpointIndexData"));
	}
	return Z_Registration_Info_UScriptStruct_FCheckpointIndexData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCheckpointIndexData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/CheckpointIndexData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckpointIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/CheckpointIndexData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckpointName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/CheckpointIndexData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CheckpointIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CheckpointName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCheckpointIndexData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCheckpointIndexData_Statics::NewProp_CheckpointIndex = { "CheckpointIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCheckpointIndexData, CheckpointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckpointIndex_MetaData), NewProp_CheckpointIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCheckpointIndexData_Statics::NewProp_CheckpointName = { "CheckpointName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCheckpointIndexData, CheckpointName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckpointName_MetaData), NewProp_CheckpointName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCheckpointIndexData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckpointIndexData_Statics::NewProp_CheckpointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckpointIndexData_Statics::NewProp_CheckpointName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckpointIndexData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCheckpointIndexData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CheckpointSystem,
	nullptr,
	&NewStructOps,
	"CheckpointIndexData",
	Z_Construct_UScriptStruct_FCheckpointIndexData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckpointIndexData_Statics::PropPointers),
	sizeof(FCheckpointIndexData),
	alignof(FCheckpointIndexData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckpointIndexData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCheckpointIndexData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCheckpointIndexData()
{
	if (!Z_Registration_Info_UScriptStruct_FCheckpointIndexData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCheckpointIndexData.InnerSingleton, Z_Construct_UScriptStruct_FCheckpointIndexData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCheckpointIndexData.InnerSingleton;
}
// ********** End ScriptStruct FCheckpointIndexData ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CheckpointSystem_Source_CheckpointSystem_Public_Data_CheckpointIndexData_h__Script_CheckpointSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCheckpointIndexData::StaticStruct, Z_Construct_UScriptStruct_FCheckpointIndexData_Statics::NewStructOps, TEXT("CheckpointIndexData"), &Z_Registration_Info_UScriptStruct_FCheckpointIndexData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCheckpointIndexData), 1223963643U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CheckpointSystem_Source_CheckpointSystem_Public_Data_CheckpointIndexData_h__Script_CheckpointSystem_616041518(TEXT("/Script/CheckpointSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CheckpointSystem_Source_CheckpointSystem_Public_Data_CheckpointIndexData_h__Script_CheckpointSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CheckpointSystem_Source_CheckpointSystem_Public_Data_CheckpointIndexData_h__Script_CheckpointSystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
