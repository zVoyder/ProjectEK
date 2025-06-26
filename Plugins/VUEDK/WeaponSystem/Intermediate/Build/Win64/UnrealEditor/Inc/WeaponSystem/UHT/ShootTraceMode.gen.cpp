// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Data/ShootTraceMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeShootTraceMode() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UEnum* Z_Construct_UEnum_WeaponSystem_EShootTraceMode();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EShootTraceMode ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EShootTraceMode;
static UEnum* EShootTraceMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EShootTraceMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EShootTraceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WeaponSystem_EShootTraceMode, (UObject*)Z_Construct_UPackage__Script_WeaponSystem(), TEXT("EShootTraceMode"));
	}
	return Z_Registration_Info_UEnum_EShootTraceMode.OuterSingleton;
}
template<> WEAPONSYSTEM_API UEnum* StaticEnum<EShootTraceMode>()
{
	return EShootTraceMode_StaticEnum();
}
struct Z_Construct_UEnum_WeaponSystem_EShootTraceMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CameraSightTrace.Name", "CameraSightTrace" },
		{ "ModuleRelativePath", "Public/Shooter/Data/ShootTraceMode.h" },
		{ "ShootPointTrace.Name", "ShootPointTrace" },
		{ "TargetTrace.Name", "TargetTrace" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "CameraSightTrace", (int64)CameraSightTrace },
		{ "ShootPointTrace", (int64)ShootPointTrace },
		{ "TargetTrace", (int64)TargetTrace },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WeaponSystem_EShootTraceMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem,
	nullptr,
	"EShootTraceMode",
	"EShootTraceMode",
	Z_Construct_UEnum_WeaponSystem_EShootTraceMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystem_EShootTraceMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystem_EShootTraceMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WeaponSystem_EShootTraceMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WeaponSystem_EShootTraceMode()
{
	if (!Z_Registration_Info_UEnum_EShootTraceMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EShootTraceMode.InnerSingleton, Z_Construct_UEnum_WeaponSystem_EShootTraceMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EShootTraceMode.InnerSingleton;
}
// ********** End Enum EShootTraceMode *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Data_ShootTraceMode_h__Script_WeaponSystem_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EShootTraceMode_StaticEnum, TEXT("EShootTraceMode"), &Z_Registration_Info_UEnum_EShootTraceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3836960693U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Data_ShootTraceMode_h__Script_WeaponSystem_4266610976(TEXT("/Script/WeaponSystem"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Data_ShootTraceMode_h__Script_WeaponSystem_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Data_ShootTraceMode_h__Script_WeaponSystem_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
