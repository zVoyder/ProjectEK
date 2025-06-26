// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Montages/Data/MontageEndPriority.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMontageEndPriority() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UEnum* Z_Construct_UEnum_WeaponSystem_EMontageEndPriority();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EMontageEndPriority *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMontageEndPriority;
static UEnum* EMontageEndPriority_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMontageEndPriority.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMontageEndPriority.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WeaponSystem_EMontageEndPriority, (UObject*)Z_Construct_UPackage__Script_WeaponSystem(), TEXT("EMontageEndPriority"));
	}
	return Z_Registration_Info_UEnum_EMontageEndPriority.OuterSingleton;
}
template<> WEAPONSYSTEM_API UEnum* StaticEnum<EMontageEndPriority>()
{
	return EMontageEndPriority_StaticEnum();
}
struct Z_Construct_UEnum_WeaponSystem_EMontageEndPriority_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CharacterPriority.Name", "CharacterPriority" },
		{ "ModuleRelativePath", "Public/Montages/Data/MontageEndPriority.h" },
		{ "WeaponPriority.Name", "WeaponPriority" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "CharacterPriority", (int64)CharacterPriority },
		{ "WeaponPriority", (int64)WeaponPriority },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WeaponSystem_EMontageEndPriority_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem,
	nullptr,
	"EMontageEndPriority",
	"EMontageEndPriority",
	Z_Construct_UEnum_WeaponSystem_EMontageEndPriority_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystem_EMontageEndPriority_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystem_EMontageEndPriority_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WeaponSystem_EMontageEndPriority_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WeaponSystem_EMontageEndPriority()
{
	if (!Z_Registration_Info_UEnum_EMontageEndPriority.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMontageEndPriority.InnerSingleton, Z_Construct_UEnum_WeaponSystem_EMontageEndPriority_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMontageEndPriority.InnerSingleton;
}
// ********** End Enum EMontageEndPriority *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Data_MontageEndPriority_h__Script_WeaponSystem_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMontageEndPriority_StaticEnum, TEXT("EMontageEndPriority"), &Z_Registration_Info_UEnum_EMontageEndPriority, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1085634118U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Data_MontageEndPriority_h__Script_WeaponSystem_3342135339(TEXT("/Script/WeaponSystem"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Data_MontageEndPriority_h__Script_WeaponSystem_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Data_MontageEndPriority_h__Script_WeaponSystem_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
