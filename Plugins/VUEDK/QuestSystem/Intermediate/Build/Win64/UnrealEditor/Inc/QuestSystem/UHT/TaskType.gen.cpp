// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/Enums/TaskType.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTaskType() {}

// ********** Begin Cross Module References ********************************************************
QUESTSYSTEM_API UEnum* Z_Construct_UEnum_QuestSystem_ETaskType();
UPackage* Z_Construct_UPackage__Script_QuestSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ETaskType *****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETaskType;
static UEnum* ETaskType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETaskType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETaskType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_QuestSystem_ETaskType, (UObject*)Z_Construct_UPackage__Script_QuestSystem(), TEXT("ETaskType"));
	}
	return Z_Registration_Info_UEnum_ETaskType.OuterSingleton;
}
template<> QUESTSYSTEM_API UEnum* StaticEnum<ETaskType>()
{
	return ETaskType_StaticEnum();
}
struct Z_Construct_UEnum_QuestSystem_ETaskType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.DisplayName", "Count" },
		{ "Count.Name", "ETaskType::Count" },
		{ "ModuleRelativePath", "Public/Data/Enums/TaskType.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ETaskType::None" },
		{ "Single.DisplayName", "Single" },
		{ "Single.Name", "ETaskType::Single" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETaskType::None", (int64)ETaskType::None },
		{ "ETaskType::Single", (int64)ETaskType::Single },
		{ "ETaskType::Count", (int64)ETaskType::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_QuestSystem_ETaskType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_QuestSystem,
	nullptr,
	"ETaskType",
	"ETaskType",
	Z_Construct_UEnum_QuestSystem_ETaskType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_QuestSystem_ETaskType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_QuestSystem_ETaskType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_QuestSystem_ETaskType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_QuestSystem_ETaskType()
{
	if (!Z_Registration_Info_UEnum_ETaskType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETaskType.InnerSingleton, Z_Construct_UEnum_QuestSystem_ETaskType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETaskType.InnerSingleton;
}
// ********** End Enum ETaskType *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_Enums_TaskType_h__Script_QuestSystem_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETaskType_StaticEnum, TEXT("ETaskType"), &Z_Registration_Info_UEnum_ETaskType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1834681441U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_Enums_TaskType_h__Script_QuestSystem_1317914658(TEXT("/Script/QuestSystem"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_Enums_TaskType_h__Script_QuestSystem_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_Enums_TaskType_h__Script_QuestSystem_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
