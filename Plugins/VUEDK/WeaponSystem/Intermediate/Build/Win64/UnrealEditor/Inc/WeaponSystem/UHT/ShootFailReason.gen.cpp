// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Data/ShootFailReason.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeShootFailReason() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UEnum* Z_Construct_UEnum_WeaponSystem_EShootFailReason();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EShootFailReason **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EShootFailReason;
static UEnum* EShootFailReason_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EShootFailReason.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EShootFailReason.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WeaponSystem_EShootFailReason, (UObject*)Z_Construct_UPackage__Script_WeaponSystem(), TEXT("EShootFailReason"));
	}
	return Z_Registration_Info_UEnum_EShootFailReason.OuterSingleton;
}
template<> WEAPONSYSTEM_API UEnum* StaticEnum<EShootFailReason>()
{
	return EShootFailReason_StaticEnum();
}
struct Z_Construct_UEnum_WeaponSystem_EShootFailReason_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Condition.DisplayName", "Condition" },
		{ "Condition.Name", "EShootFailReason::Condition" },
		{ "CoolDown.DisplayName", "CoolDown" },
		{ "CoolDown.Name", "EShootFailReason::CoolDown" },
		{ "Disabled.DisplayName", "BehaviourDisabled" },
		{ "Disabled.Name", "EShootFailReason::Disabled" },
		{ "Error.DisplayName", "Error" },
		{ "Error.Name", "EShootFailReason::Error" },
		{ "ModuleRelativePath", "Public/Shooter/Data/ShootFailReason.h" },
		{ "NoAmmo.DisplayName", "NoAmmo" },
		{ "NoAmmo.Name", "EShootFailReason::NoAmmo" },
		{ "NoShootPoints.DisplayName", "NoShootPoints" },
		{ "NoShootPoints.Name", "EShootFailReason::NoShootPoints" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EShootFailReason::Error", (int64)EShootFailReason::Error },
		{ "EShootFailReason::CoolDown", (int64)EShootFailReason::CoolDown },
		{ "EShootFailReason::NoAmmo", (int64)EShootFailReason::NoAmmo },
		{ "EShootFailReason::Condition", (int64)EShootFailReason::Condition },
		{ "EShootFailReason::NoShootPoints", (int64)EShootFailReason::NoShootPoints },
		{ "EShootFailReason::Disabled", (int64)EShootFailReason::Disabled },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WeaponSystem_EShootFailReason_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem,
	nullptr,
	"EShootFailReason",
	"EShootFailReason",
	Z_Construct_UEnum_WeaponSystem_EShootFailReason_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystem_EShootFailReason_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystem_EShootFailReason_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WeaponSystem_EShootFailReason_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WeaponSystem_EShootFailReason()
{
	if (!Z_Registration_Info_UEnum_EShootFailReason.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EShootFailReason.InnerSingleton, Z_Construct_UEnum_WeaponSystem_EShootFailReason_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EShootFailReason.InnerSingleton;
}
// ********** End Enum EShootFailReason ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Data_ShootFailReason_h__Script_WeaponSystem_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EShootFailReason_StaticEnum, TEXT("EShootFailReason"), &Z_Registration_Info_UEnum_EShootFailReason, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 854889244U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Data_ShootFailReason_h__Script_WeaponSystem_705992752(TEXT("/Script/WeaponSystem"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Data_ShootFailReason_h__Script_WeaponSystem_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Data_ShootFailReason_h__Script_WeaponSystem_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
