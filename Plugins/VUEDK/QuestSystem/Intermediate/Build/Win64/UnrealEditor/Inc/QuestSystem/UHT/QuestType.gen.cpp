// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/Enums/QuestType.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeQuestType() {}

// ********** Begin Cross Module References ********************************************************
QUESTSYSTEM_API UEnum* Z_Construct_UEnum_QuestSystem_EQuestType();
UPackage* Z_Construct_UPackage__Script_QuestSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EQuestType ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQuestType;
static UEnum* EQuestType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EQuestType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EQuestType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_QuestSystem_EQuestType, (UObject*)Z_Construct_UPackage__Script_QuestSystem(), TEXT("EQuestType"));
	}
	return Z_Registration_Info_UEnum_EQuestType.OuterSingleton;
}
template<> QUESTSYSTEM_API UEnum* StaticEnum<EQuestType>()
{
	return EQuestType_StaticEnum();
}
struct Z_Construct_UEnum_QuestSystem_EQuestType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/Enums/QuestType.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EQuestType::None" },
		{ "Parallel.DisplayName", "Parallel" },
		{ "Parallel.Name", "EQuestType::Parallel" },
		{ "Sequential.DisplayName", "Sequential" },
		{ "Sequential.Name", "EQuestType::Sequential" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EQuestType::None", (int64)EQuestType::None },
		{ "EQuestType::Parallel", (int64)EQuestType::Parallel },
		{ "EQuestType::Sequential", (int64)EQuestType::Sequential },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_QuestSystem_EQuestType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_QuestSystem,
	nullptr,
	"EQuestType",
	"EQuestType",
	Z_Construct_UEnum_QuestSystem_EQuestType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_QuestSystem_EQuestType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_QuestSystem_EQuestType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_QuestSystem_EQuestType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_QuestSystem_EQuestType()
{
	if (!Z_Registration_Info_UEnum_EQuestType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQuestType.InnerSingleton, Z_Construct_UEnum_QuestSystem_EQuestType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EQuestType.InnerSingleton;
}
// ********** End Enum EQuestType ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_Enums_QuestType_h__Script_QuestSystem_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EQuestType_StaticEnum, TEXT("EQuestType"), &Z_Registration_Info_UEnum_EQuestType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3095288182U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_Enums_QuestType_h__Script_QuestSystem_201232978(TEXT("/Script/QuestSystem"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_Enums_QuestType_h__Script_QuestSystem_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_Enums_QuestType_h__Script_QuestSystem_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
