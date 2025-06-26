// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/Structs/QuestSaveData.h"
#include "Data/Structs/TaskSaveData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeQuestSaveData() {}

// ********** Begin Cross Module References ********************************************************
QUESTSYSTEM_API UEnum* Z_Construct_UEnum_QuestSystem_EQuestStatus();
QUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FQuestSaveData();
QUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTaskSaveData();
UPackage* Z_Construct_UPackage__Script_QuestSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FQuestSaveData ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FQuestSaveData;
class UScriptStruct* FQuestSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FQuestSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FQuestSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestSaveData, (UObject*)Z_Construct_UPackage__Script_QuestSystem(), TEXT("QuestSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_FQuestSaveData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FQuestSaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Data/Structs/QuestSaveData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestStatus_MetaData[] = {
		{ "Category", "QuestSaveData" },
		{ "ModuleRelativePath", "Public/Data/Structs/QuestSaveData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tasks_MetaData[] = {
		{ "Category", "QuestSaveData" },
		{ "ModuleRelativePath", "Public/Data/Structs/QuestSaveData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTaskIndex_MetaData[] = {
		{ "Category", "QuestSaveData" },
		{ "ModuleRelativePath", "Public/Data/Structs/QuestSaveData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_QuestStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_QuestStatus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tasks_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tasks_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Tasks;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentTaskIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestSaveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQuestSaveData_Statics::NewProp_QuestStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FQuestSaveData_Statics::NewProp_QuestStatus = { "QuestStatus", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestSaveData, QuestStatus), Z_Construct_UEnum_QuestSystem_EQuestStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestStatus_MetaData), NewProp_QuestStatus_MetaData) }; // 2306328276
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestSaveData_Statics::NewProp_Tasks_ValueProp = { "Tasks", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTaskSaveData, METADATA_PARAMS(0, nullptr) }; // 1939530510
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FQuestSaveData_Statics::NewProp_Tasks_Key_KeyProp = { "Tasks_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FQuestSaveData_Statics::NewProp_Tasks = { "Tasks", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestSaveData, Tasks), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tasks_MetaData), NewProp_Tasks_MetaData) }; // 1939530510
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestSaveData_Statics::NewProp_CurrentTaskIndex = { "CurrentTaskIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestSaveData, CurrentTaskIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTaskIndex_MetaData), NewProp_CurrentTaskIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestSaveData_Statics::NewProp_QuestStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestSaveData_Statics::NewProp_QuestStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestSaveData_Statics::NewProp_Tasks_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestSaveData_Statics::NewProp_Tasks_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestSaveData_Statics::NewProp_Tasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestSaveData_Statics::NewProp_CurrentTaskIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestSaveData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	nullptr,
	&NewStructOps,
	"QuestSaveData",
	Z_Construct_UScriptStruct_FQuestSaveData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestSaveData_Statics::PropPointers),
	sizeof(FQuestSaveData),
	alignof(FQuestSaveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestSaveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQuestSaveData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQuestSaveData()
{
	if (!Z_Registration_Info_UScriptStruct_FQuestSaveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FQuestSaveData.InnerSingleton, Z_Construct_UScriptStruct_FQuestSaveData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FQuestSaveData.InnerSingleton;
}
// ********** End ScriptStruct FQuestSaveData ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_Structs_QuestSaveData_h__Script_QuestSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FQuestSaveData::StaticStruct, Z_Construct_UScriptStruct_FQuestSaveData_Statics::NewStructOps, TEXT("QuestSaveData"), &Z_Registration_Info_UScriptStruct_FQuestSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestSaveData), 2940496550U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_Structs_QuestSaveData_h__Script_QuestSystem_209318991(TEXT("/Script/QuestSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_Structs_QuestSaveData_h__Script_QuestSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_Structs_QuestSaveData_h__Script_QuestSystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
