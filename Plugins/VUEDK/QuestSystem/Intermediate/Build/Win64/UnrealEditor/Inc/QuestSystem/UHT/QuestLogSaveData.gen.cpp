// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/Structs/QuestLogSaveData.h"
#include "Data/Structs/QuestSaveData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeQuestLogSaveData() {}

// ********** Begin Cross Module References ********************************************************
QUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FQuestLogSaveData();
QUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FQuestSaveData();
UPackage* Z_Construct_UPackage__Script_QuestSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FQuestLogSaveData *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FQuestLogSaveData;
class UScriptStruct* FQuestLogSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FQuestLogSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FQuestLogSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestLogSaveData, (UObject*)Z_Construct_UPackage__Script_QuestSystem(), TEXT("QuestLogSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_FQuestLogSaveData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FQuestLogSaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Data/Structs/QuestLogSaveData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackedQuestFName_MetaData[] = {
		{ "Category", "QuestLogSaveData" },
		{ "ModuleRelativePath", "Public/Data/Structs/QuestLogSaveData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quests_MetaData[] = {
		{ "Category", "QuestLogSaveData" },
		{ "ModuleRelativePath", "Public/Data/Structs/QuestLogSaveData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TrackedQuestFName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Quests_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Quests_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Quests;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestLogSaveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FQuestLogSaveData_Statics::NewProp_TrackedQuestFName = { "TrackedQuestFName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestLogSaveData, TrackedQuestFName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackedQuestFName_MetaData), NewProp_TrackedQuestFName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestLogSaveData_Statics::NewProp_Quests_ValueProp = { "Quests", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FQuestSaveData, METADATA_PARAMS(0, nullptr) }; // 2940496550
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FQuestLogSaveData_Statics::NewProp_Quests_Key_KeyProp = { "Quests_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FQuestLogSaveData_Statics::NewProp_Quests = { "Quests", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestLogSaveData, Quests), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quests_MetaData), NewProp_Quests_MetaData) }; // 2940496550
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestLogSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestLogSaveData_Statics::NewProp_TrackedQuestFName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestLogSaveData_Statics::NewProp_Quests_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestLogSaveData_Statics::NewProp_Quests_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestLogSaveData_Statics::NewProp_Quests,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestLogSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestLogSaveData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	nullptr,
	&NewStructOps,
	"QuestLogSaveData",
	Z_Construct_UScriptStruct_FQuestLogSaveData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestLogSaveData_Statics::PropPointers),
	sizeof(FQuestLogSaveData),
	alignof(FQuestLogSaveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestLogSaveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQuestLogSaveData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQuestLogSaveData()
{
	if (!Z_Registration_Info_UScriptStruct_FQuestLogSaveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FQuestLogSaveData.InnerSingleton, Z_Construct_UScriptStruct_FQuestLogSaveData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FQuestLogSaveData.InnerSingleton;
}
// ********** End ScriptStruct FQuestLogSaveData ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_Structs_QuestLogSaveData_h__Script_QuestSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FQuestLogSaveData::StaticStruct, Z_Construct_UScriptStruct_FQuestLogSaveData_Statics::NewStructOps, TEXT("QuestLogSaveData"), &Z_Registration_Info_UScriptStruct_FQuestLogSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestLogSaveData), 194729343U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_Structs_QuestLogSaveData_h__Script_QuestSystem_3911832746(TEXT("/Script/QuestSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_Structs_QuestLogSaveData_h__Script_QuestSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_Structs_QuestLogSaveData_h__Script_QuestSystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
