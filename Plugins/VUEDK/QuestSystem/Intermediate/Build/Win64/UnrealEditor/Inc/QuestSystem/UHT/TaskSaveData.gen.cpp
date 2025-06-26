// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/Structs/TaskSaveData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTaskSaveData() {}

// ********** Begin Cross Module References ********************************************************
QUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTaskSaveData();
UPackage* Z_Construct_UPackage__Script_QuestSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FTaskSaveData *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTaskSaveData;
class UScriptStruct* FTaskSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTaskSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTaskSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTaskSaveData, (UObject*)Z_Construct_UPackage__Script_QuestSystem(), TEXT("TaskSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_FTaskSaveData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTaskSaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Data/Structs/TaskSaveData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAchieved_MetaData[] = {
		{ "Category", "TaskSaveData" },
		{ "ModuleRelativePath", "Public/Data/Structs/TaskSaveData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAchieveCount_MetaData[] = {
		{ "Category", "TaskSaveData" },
		{ "ModuleRelativePath", "Public/Data/Structs/TaskSaveData.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsAchieved_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAchieved;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentAchieveCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTaskSaveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FTaskSaveData_Statics::NewProp_bIsAchieved_SetBit(void* Obj)
{
	((FTaskSaveData*)Obj)->bIsAchieved = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTaskSaveData_Statics::NewProp_bIsAchieved = { "bIsAchieved", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTaskSaveData), &Z_Construct_UScriptStruct_FTaskSaveData_Statics::NewProp_bIsAchieved_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAchieved_MetaData), NewProp_bIsAchieved_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTaskSaveData_Statics::NewProp_CurrentAchieveCount = { "CurrentAchieveCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaskSaveData, CurrentAchieveCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAchieveCount_MetaData), NewProp_CurrentAchieveCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTaskSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskSaveData_Statics::NewProp_bIsAchieved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskSaveData_Statics::NewProp_CurrentAchieveCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTaskSaveData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	nullptr,
	&NewStructOps,
	"TaskSaveData",
	Z_Construct_UScriptStruct_FTaskSaveData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskSaveData_Statics::PropPointers),
	sizeof(FTaskSaveData),
	alignof(FTaskSaveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskSaveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTaskSaveData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTaskSaveData()
{
	if (!Z_Registration_Info_UScriptStruct_FTaskSaveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTaskSaveData.InnerSingleton, Z_Construct_UScriptStruct_FTaskSaveData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTaskSaveData.InnerSingleton;
}
// ********** End ScriptStruct FTaskSaveData *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_Structs_TaskSaveData_h__Script_QuestSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTaskSaveData::StaticStruct, Z_Construct_UScriptStruct_FTaskSaveData_Statics::NewStructOps, TEXT("TaskSaveData"), &Z_Registration_Info_UScriptStruct_FTaskSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTaskSaveData), 1939530510U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_Structs_TaskSaveData_h__Script_QuestSystem_1354266361(TEXT("/Script/QuestSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_Structs_TaskSaveData_h__Script_QuestSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_Structs_TaskSaveData_h__Script_QuestSystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
