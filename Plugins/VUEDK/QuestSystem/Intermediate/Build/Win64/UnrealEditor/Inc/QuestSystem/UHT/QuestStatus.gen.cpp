// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/Enums/QuestStatus.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeQuestStatus() {}

// ********** Begin Cross Module References ********************************************************
QUESTSYSTEM_API UEnum* Z_Construct_UEnum_QuestSystem_EQuestStatus();
UPackage* Z_Construct_UPackage__Script_QuestSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EQuestStatus **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQuestStatus;
static UEnum* EQuestStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EQuestStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EQuestStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_QuestSystem_EQuestStatus, (UObject*)Z_Construct_UPackage__Script_QuestSystem(), TEXT("EQuestStatus"));
	}
	return Z_Registration_Info_UEnum_EQuestStatus.OuterSingleton;
}
template<> QUESTSYSTEM_API UEnum* StaticEnum<EQuestStatus>()
{
	return EQuestStatus_StaticEnum();
}
struct Z_Construct_UEnum_QuestSystem_EQuestStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Active.DisplayName", "Active" },
		{ "Active.Name", "EQuestStatus::Active" },
		{ "BlueprintType", "true" },
		{ "Completed.DisplayName", "Completed" },
		{ "Completed.Name", "EQuestStatus::Completed" },
		{ "Inactive.DisplayName", "Inactive" },
		{ "Inactive.Name", "EQuestStatus::Inactive" },
		{ "ModuleRelativePath", "Public/Data/Enums/QuestStatus.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EQuestStatus::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EQuestStatus::None", (int64)EQuestStatus::None },
		{ "EQuestStatus::Active", (int64)EQuestStatus::Active },
		{ "EQuestStatus::Inactive", (int64)EQuestStatus::Inactive },
		{ "EQuestStatus::Completed", (int64)EQuestStatus::Completed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_QuestSystem_EQuestStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_QuestSystem,
	nullptr,
	"EQuestStatus",
	"EQuestStatus",
	Z_Construct_UEnum_QuestSystem_EQuestStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_QuestSystem_EQuestStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_QuestSystem_EQuestStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_QuestSystem_EQuestStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_QuestSystem_EQuestStatus()
{
	if (!Z_Registration_Info_UEnum_EQuestStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQuestStatus.InnerSingleton, Z_Construct_UEnum_QuestSystem_EQuestStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EQuestStatus.InnerSingleton;
}
// ********** End Enum EQuestStatus ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_Enums_QuestStatus_h__Script_QuestSystem_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EQuestStatus_StaticEnum, TEXT("EQuestStatus"), &Z_Registration_Info_UEnum_EQuestStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2306328276U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_Enums_QuestStatus_h__Script_QuestSystem_2248597009(TEXT("/Script/QuestSystem"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_Enums_QuestStatus_h__Script_QuestSystem_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_Enums_QuestStatus_h__Script_QuestSystem_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
