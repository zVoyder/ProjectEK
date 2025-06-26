// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Data/ShootData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeShootData() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UEnum* Z_Construct_UEnum_WeaponSystem_EShootType();
WEAPONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FShootData();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FShootData ********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FShootData;
class UScriptStruct* FShootData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FShootData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FShootData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShootData, (UObject*)Z_Construct_UPackage__Script_WeaponSystem(), TEXT("ShootData"));
	}
	return Z_Registration_Info_UScriptStruct_FShootData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FShootData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Shooter/Data/ShootData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "ShootData" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Shooter/Data/ShootData.h" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[] = {
		{ "Category", "ShootData" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Shooter/Data/ShootData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "rounds/min" },
#endif
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootType_MetaData[] = {
		{ "Category", "ShootData" },
		{ "ModuleRelativePath", "Public/Shooter/Data/ShootData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[] = {
		{ "Category", "ShootData" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Shooter/Data/ShootData.h" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagSize_MetaData[] = {
		{ "Category", "ShootData" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Shooter/Data/ShootData.h" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasRecoil_MetaData[] = {
		{ "Category", "ShootData" },
		{ "ModuleRelativePath", "Public/Shooter/Data/ShootData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoilStrength_MetaData[] = {
		{ "Category", "ShootData" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bHasRecoil" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Shooter/Data/ShootData.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoilDuration_MetaData[] = {
		{ "Category", "ShootData" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bHasRecoil" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Shooter/Data/ShootData.h" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoilCurve_MetaData[] = {
		{ "Category", "ShootData" },
		{ "EditCondition", "bHasRecoil" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Shooter/Data/ShootData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Y (vertical recoil) and Z (horizontal recoil) graphs define recoil strength per shot (horizontal axis = shots, vertical axis = strength), while the X graph controls recoil decay over time." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasSpread_MetaData[] = {
		{ "Category", "ShootData" },
		{ "ModuleRelativePath", "Public/Shooter/Data/ShootData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpread_MetaData[] = {
		{ "Category", "ShootData" },
		{ "ClampMax", "360" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bHasSpread" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Shooter/Data/ShootData.h" },
		{ "UIMax", "360" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSpread_MetaData[] = {
		{ "Category", "ShootData" },
		{ "ClampMax", "360" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bHasSpread" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Shooter/Data/ShootData.h" },
		{ "UIMax", "360" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpreadChangeRate_MetaData[] = {
		{ "Category", "ShootData" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bHasSpread" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Shooter/Data/ShootData.h" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpreadRecoveryRate_MetaData[] = {
		{ "Category", "ShootData" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bHasSpread" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Shooter/Data/ShootData.h" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpreadCurve_MetaData[] = {
		{ "Category", "ShootData" },
		{ "EditCondition", "bHasSpread" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Shooter/Data/ShootData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The curve defines the spread over time. The horizontal axis represents the shot index, while the vertical axis represents the spread value." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ShootType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ShootType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MagSize;
	static void NewProp_bHasRecoil_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRecoil;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecoilStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecoilDuration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RecoilCurve;
	static void NewProp_bHasSpread_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasSpread;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpread;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultSpread;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadChangeRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadRecoveryRate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpreadCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShootData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FShootData_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShootData, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FShootData_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShootData, FireRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireRate_MetaData), NewProp_FireRate_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FShootData_Statics::NewProp_ShootType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FShootData_Statics::NewProp_ShootType = { "ShootType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShootData, ShootType), Z_Construct_UEnum_WeaponSystem_EShootType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootType_MetaData), NewProp_ShootType_MetaData) }; // 1661658870
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FShootData_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShootData, MaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRange_MetaData), NewProp_MaxRange_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FShootData_Statics::NewProp_MagSize = { "MagSize", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShootData, MagSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagSize_MetaData), NewProp_MagSize_MetaData) };
void Z_Construct_UScriptStruct_FShootData_Statics::NewProp_bHasRecoil_SetBit(void* Obj)
{
	((FShootData*)Obj)->bHasRecoil = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FShootData_Statics::NewProp_bHasRecoil = { "bHasRecoil", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FShootData), &Z_Construct_UScriptStruct_FShootData_Statics::NewProp_bHasRecoil_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasRecoil_MetaData), NewProp_bHasRecoil_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FShootData_Statics::NewProp_RecoilStrength = { "RecoilStrength", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShootData, RecoilStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoilStrength_MetaData), NewProp_RecoilStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FShootData_Statics::NewProp_RecoilDuration = { "RecoilDuration", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShootData, RecoilDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoilDuration_MetaData), NewProp_RecoilDuration_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FShootData_Statics::NewProp_RecoilCurve = { "RecoilCurve", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShootData, RecoilCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoilCurve_MetaData), NewProp_RecoilCurve_MetaData) };
void Z_Construct_UScriptStruct_FShootData_Statics::NewProp_bHasSpread_SetBit(void* Obj)
{
	((FShootData*)Obj)->bHasSpread = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FShootData_Statics::NewProp_bHasSpread = { "bHasSpread", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FShootData), &Z_Construct_UScriptStruct_FShootData_Statics::NewProp_bHasSpread_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasSpread_MetaData), NewProp_bHasSpread_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FShootData_Statics::NewProp_MaxSpread = { "MaxSpread", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShootData, MaxSpread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpread_MetaData), NewProp_MaxSpread_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FShootData_Statics::NewProp_DefaultSpread = { "DefaultSpread", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShootData, DefaultSpread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSpread_MetaData), NewProp_DefaultSpread_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FShootData_Statics::NewProp_SpreadChangeRate = { "SpreadChangeRate", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShootData, SpreadChangeRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpreadChangeRate_MetaData), NewProp_SpreadChangeRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FShootData_Statics::NewProp_SpreadRecoveryRate = { "SpreadRecoveryRate", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShootData, SpreadRecoveryRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpreadRecoveryRate_MetaData), NewProp_SpreadRecoveryRate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FShootData_Statics::NewProp_SpreadCurve = { "SpreadCurve", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShootData, SpreadCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpreadCurve_MetaData), NewProp_SpreadCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShootData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShootData_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShootData_Statics::NewProp_FireRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShootData_Statics::NewProp_ShootType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShootData_Statics::NewProp_ShootType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShootData_Statics::NewProp_MaxRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShootData_Statics::NewProp_MagSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShootData_Statics::NewProp_bHasRecoil,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShootData_Statics::NewProp_RecoilStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShootData_Statics::NewProp_RecoilDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShootData_Statics::NewProp_RecoilCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShootData_Statics::NewProp_bHasSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShootData_Statics::NewProp_MaxSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShootData_Statics::NewProp_DefaultSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShootData_Statics::NewProp_SpreadChangeRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShootData_Statics::NewProp_SpreadRecoveryRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShootData_Statics::NewProp_SpreadCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShootData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShootData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
	nullptr,
	&NewStructOps,
	"ShootData",
	Z_Construct_UScriptStruct_FShootData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShootData_Statics::PropPointers),
	sizeof(FShootData),
	alignof(FShootData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShootData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FShootData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FShootData()
{
	if (!Z_Registration_Info_UScriptStruct_FShootData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FShootData.InnerSingleton, Z_Construct_UScriptStruct_FShootData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FShootData.InnerSingleton;
}
// ********** End ScriptStruct FShootData **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Data_ShootData_h__Script_WeaponSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FShootData::StaticStruct, Z_Construct_UScriptStruct_FShootData_Statics::NewStructOps, TEXT("ShootData"), &Z_Registration_Info_UScriptStruct_FShootData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShootData), 39876529U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Data_ShootData_h__Script_WeaponSystem_653844997(TEXT("/Script/WeaponSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Data_ShootData_h__Script_WeaponSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Data_ShootData_h__Script_WeaponSystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
