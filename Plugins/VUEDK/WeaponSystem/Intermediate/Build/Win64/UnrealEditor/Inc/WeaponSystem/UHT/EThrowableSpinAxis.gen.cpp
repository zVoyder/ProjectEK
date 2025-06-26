// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Thrower/Data/EThrowableSpinAxis.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEThrowableSpinAxis() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UEnum* Z_Construct_UEnum_WeaponSystem_EThrowableSpinAxis();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EThrowableSpinAxis ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EThrowableSpinAxis;
static UEnum* EThrowableSpinAxis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EThrowableSpinAxis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EThrowableSpinAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WeaponSystem_EThrowableSpinAxis, (UObject*)Z_Construct_UPackage__Script_WeaponSystem(), TEXT("EThrowableSpinAxis"));
	}
	return Z_Registration_Info_UEnum_EThrowableSpinAxis.OuterSingleton;
}
template<> WEAPONSYSTEM_API UEnum* StaticEnum<EThrowableSpinAxis>()
{
	return EThrowableSpinAxis_StaticEnum();
}
struct Z_Construct_UEnum_WeaponSystem_EThrowableSpinAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Thrower/Data/EThrowableSpinAxis.h" },
		{ "ThrowableSpinAxis_Backward.DisplayName", "Backward" },
		{ "ThrowableSpinAxis_Backward.Name", "ThrowableSpinAxis_Backward" },
		{ "ThrowableSpinAxis_Custom.DisplayName", "Custom" },
		{ "ThrowableSpinAxis_Custom.Name", "ThrowableSpinAxis_Custom" },
		{ "ThrowableSpinAxis_Down.DisplayName", "Down" },
		{ "ThrowableSpinAxis_Down.Name", "ThrowableSpinAxis_Down" },
		{ "ThrowableSpinAxis_Forward.DisplayName", "Forward" },
		{ "ThrowableSpinAxis_Forward.Name", "ThrowableSpinAxis_Forward" },
		{ "ThrowableSpinAxis_Left.DisplayName", "Left" },
		{ "ThrowableSpinAxis_Left.Name", "ThrowableSpinAxis_Left" },
		{ "ThrowableSpinAxis_Right.DisplayName", "Right" },
		{ "ThrowableSpinAxis_Right.Name", "ThrowableSpinAxis_Right" },
		{ "ThrowableSpinAxis_Up.DisplayName", "Up" },
		{ "ThrowableSpinAxis_Up.Name", "ThrowableSpinAxis_Up" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ThrowableSpinAxis_Up", (int64)ThrowableSpinAxis_Up },
		{ "ThrowableSpinAxis_Down", (int64)ThrowableSpinAxis_Down },
		{ "ThrowableSpinAxis_Left", (int64)ThrowableSpinAxis_Left },
		{ "ThrowableSpinAxis_Right", (int64)ThrowableSpinAxis_Right },
		{ "ThrowableSpinAxis_Forward", (int64)ThrowableSpinAxis_Forward },
		{ "ThrowableSpinAxis_Backward", (int64)ThrowableSpinAxis_Backward },
		{ "ThrowableSpinAxis_Custom", (int64)ThrowableSpinAxis_Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WeaponSystem_EThrowableSpinAxis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem,
	nullptr,
	"EThrowableSpinAxis",
	"EThrowableSpinAxis",
	Z_Construct_UEnum_WeaponSystem_EThrowableSpinAxis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystem_EThrowableSpinAxis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_WeaponSystem_EThrowableSpinAxis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_WeaponSystem_EThrowableSpinAxis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_WeaponSystem_EThrowableSpinAxis()
{
	if (!Z_Registration_Info_UEnum_EThrowableSpinAxis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EThrowableSpinAxis.InnerSingleton, Z_Construct_UEnum_WeaponSystem_EThrowableSpinAxis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EThrowableSpinAxis.InnerSingleton;
}
// ********** End Enum EThrowableSpinAxis **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Thrower_Data_EThrowableSpinAxis_h__Script_WeaponSystem_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EThrowableSpinAxis_StaticEnum, TEXT("EThrowableSpinAxis"), &Z_Registration_Info_UEnum_EThrowableSpinAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3462144218U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Thrower_Data_EThrowableSpinAxis_h__Script_WeaponSystem_3105338008(TEXT("/Script/WeaponSystem"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Thrower_Data_EThrowableSpinAxis_h__Script_WeaponSystem_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Thrower_Data_EThrowableSpinAxis_h__Script_WeaponSystem_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
