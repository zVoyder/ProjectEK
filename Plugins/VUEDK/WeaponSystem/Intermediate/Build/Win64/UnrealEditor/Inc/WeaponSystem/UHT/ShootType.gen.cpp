// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Data/ShootType.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeShootType() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UEnum* Z_Construct_UEnum_WeaponSystem_EShootType();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EShootType ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EShootType;
static UEnum* EShootType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EShootType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EShootType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WeaponSystem_EShootType, (UObject*)Z_Construct_UPackage__Script_WeaponSystem(), TEXT("EShootType"));
	}
	return Z_Registration_Info_UEnum_EShootType.OuterSingleton;
}
template<> WEAPONSYSTEM_API UEnum* StaticEnum<EShootType>()
{
	return EShootType_StaticEnum();
}
struct Z_Construct_UEnum_WeaponSystem_EShootType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Shooter/Data/ShootType.h" },
		{ "Sequential.DisplayName", "Sequential" },
		{ "Sequential.Name", "EShootType::Sequential" },
		{ "Simultaneous.DisplayName", "Simultaneous" },
		{ "Simultaneous.Name", "EShootType::Simultaneous" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EShootType::Simultaneous", (int64)EShootType::Simultaneous },
		{ "EShootType::Sequential", (int64)EShootType::Sequential },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WeaponSystem_EShootType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem,
	nullptr,
	"EShootType",
	"EShootType",
	Z_Construct_UEnum_WeaponSystem_EShootType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystem_EShootType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystem_EShootType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WeaponSystem_EShootType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WeaponSystem_EShootType()
{
	if (!Z_Registration_Info_UEnum_EShootType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EShootType.InnerSingleton, Z_Construct_UEnum_WeaponSystem_EShootType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EShootType.InnerSingleton;
}
// ********** End Enum EShootType ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Data_ShootType_h__Script_WeaponSystem_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EShootType_StaticEnum, TEXT("EShootType"), &Z_Registration_Info_UEnum_EShootType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1661658870U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Data_ShootType_h__Script_WeaponSystem_1643718356(TEXT("/Script/WeaponSystem"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Data_ShootType_h__Script_WeaponSystem_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Data_ShootType_h__Script_WeaponSystem_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
