// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/Structs/QuestEntryData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeQuestEntryData() {}

// ********** Begin Cross Module References ********************************************************
QUESTSYSTEM_API UEnum* Z_Construct_UEnum_QuestSystem_EQuestStatus();
QUESTSYSTEM_API UEnum* Z_Construct_UEnum_QuestSystem_EQuestType();
QUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FQuestEntryData();
UPackage* Z_Construct_UPackage__Script_QuestSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FQuestEntryData ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FQuestEntryData;
class UScriptStruct* FQuestEntryData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FQuestEntryData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FQuestEntryData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestEntryData, (UObject*)Z_Construct_UPackage__Script_QuestSystem(), TEXT("QuestEntryData"));
	}
	return Z_Registration_Info_UScriptStruct_FQuestEntryData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FQuestEntryData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/Structs/QuestEntryData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestType_MetaData[] = {
		{ "Category", "QuestEntryData" },
		{ "ModuleRelativePath", "Public/Data/Structs/QuestEntryData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialQuestStatus_MetaData[] = {
		{ "Category", "QuestEntryData" },
		{ "ModuleRelativePath", "Public/Data/Structs/QuestEntryData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_QuestType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_QuestType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InitialQuestStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InitialQuestStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestEntryData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQuestEntryData_Statics::NewProp_QuestType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FQuestEntryData_Statics::NewProp_QuestType = { "QuestType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestEntryData, QuestType), Z_Construct_UEnum_QuestSystem_EQuestType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestType_MetaData), NewProp_QuestType_MetaData) }; // 3095288182
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQuestEntryData_Statics::NewProp_InitialQuestStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FQuestEntryData_Statics::NewProp_InitialQuestStatus = { "InitialQuestStatus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestEntryData, InitialQuestStatus), Z_Construct_UEnum_QuestSystem_EQuestStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialQuestStatus_MetaData), NewProp_InitialQuestStatus_MetaData) }; // 2306328276
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestEntryData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestEntryData_Statics::NewProp_QuestType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestEntryData_Statics::NewProp_QuestType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestEntryData_Statics::NewProp_InitialQuestStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestEntryData_Statics::NewProp_InitialQuestStatus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestEntryData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestEntryData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	nullptr,
	&NewStructOps,
	"QuestEntryData",
	Z_Construct_UScriptStruct_FQuestEntryData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestEntryData_Statics::PropPointers),
	sizeof(FQuestEntryData),
	alignof(FQuestEntryData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestEntryData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQuestEntryData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQuestEntryData()
{
	if (!Z_Registration_Info_UScriptStruct_FQuestEntryData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FQuestEntryData.InnerSingleton, Z_Construct_UScriptStruct_FQuestEntryData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FQuestEntryData.InnerSingleton;
}
// ********** End ScriptStruct FQuestEntryData *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_Structs_QuestEntryData_h__Script_QuestSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FQuestEntryData::StaticStruct, Z_Construct_UScriptStruct_FQuestEntryData_Statics::NewStructOps, TEXT("QuestEntryData"), &Z_Registration_Info_UScriptStruct_FQuestEntryData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestEntryData), 4253459843U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_Structs_QuestEntryData_h__Script_QuestSystem_2332804562(TEXT("/Script/QuestSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_Structs_QuestEntryData_h__Script_QuestSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_Structs_QuestEntryData_h__Script_QuestSystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
