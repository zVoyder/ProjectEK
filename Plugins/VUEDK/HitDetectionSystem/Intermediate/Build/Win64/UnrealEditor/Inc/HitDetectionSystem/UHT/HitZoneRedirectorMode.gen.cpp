// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/HitZoneRedirectorMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHitZoneRedirectorMode() {}

// ********** Begin Cross Module References ********************************************************
HITDETECTIONSYSTEM_API UEnum* Z_Construct_UEnum_HitDetectionSystem_EHitZoneRedirectorMode();
UPackage* Z_Construct_UPackage__Script_HitDetectionSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EHitZoneRedirectorMode ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHitZoneRedirectorMode;
static UEnum* EHitZoneRedirectorMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHitZoneRedirectorMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHitZoneRedirectorMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HitDetectionSystem_EHitZoneRedirectorMode, (UObject*)Z_Construct_UPackage__Script_HitDetectionSystem(), TEXT("EHitZoneRedirectorMode"));
	}
	return Z_Registration_Info_UEnum_EHitZoneRedirectorMode.OuterSingleton;
}
template<> HITDETECTIONSYSTEM_API UEnum* StaticEnum<EHitZoneRedirectorMode>()
{
	return EHitZoneRedirectorMode_StaticEnum();
}
struct Z_Construct_UEnum_HitDetectionSystem_EHitZoneRedirectorMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AttachedBoneName.DisplayName", "Attached Bone Name" },
		{ "AttachedBoneName.Name", "EHitZoneRedirectorMode::AttachedBoneName" },
		{ "BlueprintType", "true" },
		{ "CustomName.DisplayName", "Custom Name" },
		{ "CustomName.Name", "EHitZoneRedirectorMode::CustomName" },
		{ "ModuleRelativePath", "Public/Data/HitZoneRedirectorMode.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EHitZoneRedirectorMode::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHitZoneRedirectorMode::None", (int64)EHitZoneRedirectorMode::None },
		{ "EHitZoneRedirectorMode::CustomName", (int64)EHitZoneRedirectorMode::CustomName },
		{ "EHitZoneRedirectorMode::AttachedBoneName", (int64)EHitZoneRedirectorMode::AttachedBoneName },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HitDetectionSystem_EHitZoneRedirectorMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HitDetectionSystem,
	nullptr,
	"EHitZoneRedirectorMode",
	"EHitZoneRedirectorMode",
	Z_Construct_UEnum_HitDetectionSystem_EHitZoneRedirectorMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HitDetectionSystem_EHitZoneRedirectorMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HitDetectionSystem_EHitZoneRedirectorMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HitDetectionSystem_EHitZoneRedirectorMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HitDetectionSystem_EHitZoneRedirectorMode()
{
	if (!Z_Registration_Info_UEnum_EHitZoneRedirectorMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHitZoneRedirectorMode.InnerSingleton, Z_Construct_UEnum_HitDetectionSystem_EHitZoneRedirectorMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHitZoneRedirectorMode.InnerSingleton;
}
// ********** End Enum EHitZoneRedirectorMode ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_Data_HitZoneRedirectorMode_h__Script_HitDetectionSystem_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHitZoneRedirectorMode_StaticEnum, TEXT("EHitZoneRedirectorMode"), &Z_Registration_Info_UEnum_EHitZoneRedirectorMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2992047394U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_Data_HitZoneRedirectorMode_h__Script_HitDetectionSystem_501442738(TEXT("/Script/HitDetectionSystem"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_Data_HitZoneRedirectorMode_h__Script_HitDetectionSystem_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_Data_HitZoneRedirectorMode_h__Script_HitDetectionSystem_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
