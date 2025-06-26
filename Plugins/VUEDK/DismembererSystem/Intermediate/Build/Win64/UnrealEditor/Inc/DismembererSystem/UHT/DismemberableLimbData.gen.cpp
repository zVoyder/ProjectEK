// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/DismemberableLimbData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDismemberableLimbData() {}

// ********** Begin Cross Module References ********************************************************
DISMEMBERERSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDismemberableLimbData();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_DismembererSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FDismemberableLimbData ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDismemberableLimbData;
class UScriptStruct* FDismemberableLimbData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDismemberableLimbData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDismemberableLimbData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDismemberableLimbData, (UObject*)Z_Construct_UPackage__Script_DismembererSystem(), TEXT("DismemberableLimbData"));
	}
	return Z_Registration_Info_UScriptStruct_FDismemberableLimbData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FDismemberableLimbData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/DismemberableLimbData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "Category", "DismemberableLimbData" },
		{ "ModuleRelativePath", "Public/Data/DismemberableLimbData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanExplode_MetaData[] = {
		{ "Category", "DismemberableLimbData" },
		{ "ModuleRelativePath", "Public/Data/DismemberableLimbData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageToExplode_MetaData[] = {
		{ "Category", "DismemberableLimbData" },
		{ "EditCondition", "bCanExplode" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Data/DismemberableLimbData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The damage threshold required to explode the limb." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimbExplosionFX_MetaData[] = {
		{ "Category", "DismemberableLimbData" },
		{ "EditCondition", "bCanExplode" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Data/DismemberableLimbData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Niagara system to spawn when the limb explodes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimbMass_MetaData[] = {
		{ "Category", "DismemberableLimbData" },
		{ "ModuleRelativePath", "Public/Data/DismemberableLimbData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static void NewProp_bCanExplode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanExplode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageToExplode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LimbExplosionFX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LimbMass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDismemberableLimbData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDismemberableLimbData_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDismemberableLimbData, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
void Z_Construct_UScriptStruct_FDismemberableLimbData_Statics::NewProp_bCanExplode_SetBit(void* Obj)
{
	((FDismemberableLimbData*)Obj)->bCanExplode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDismemberableLimbData_Statics::NewProp_bCanExplode = { "bCanExplode", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDismemberableLimbData), &Z_Construct_UScriptStruct_FDismemberableLimbData_Statics::NewProp_bCanExplode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanExplode_MetaData), NewProp_bCanExplode_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDismemberableLimbData_Statics::NewProp_DamageToExplode = { "DamageToExplode", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDismemberableLimbData, DamageToExplode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageToExplode_MetaData), NewProp_DamageToExplode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDismemberableLimbData_Statics::NewProp_LimbExplosionFX = { "LimbExplosionFX", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDismemberableLimbData, LimbExplosionFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimbExplosionFX_MetaData), NewProp_LimbExplosionFX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDismemberableLimbData_Statics::NewProp_LimbMass = { "LimbMass", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDismemberableLimbData, LimbMass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimbMass_MetaData), NewProp_LimbMass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDismemberableLimbData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDismemberableLimbData_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDismemberableLimbData_Statics::NewProp_bCanExplode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDismemberableLimbData_Statics::NewProp_DamageToExplode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDismemberableLimbData_Statics::NewProp_LimbExplosionFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDismemberableLimbData_Statics::NewProp_LimbMass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDismemberableLimbData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDismemberableLimbData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DismembererSystem,
	nullptr,
	&NewStructOps,
	"DismemberableLimbData",
	Z_Construct_UScriptStruct_FDismemberableLimbData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDismemberableLimbData_Statics::PropPointers),
	sizeof(FDismemberableLimbData),
	alignof(FDismemberableLimbData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDismemberableLimbData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDismemberableLimbData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDismemberableLimbData()
{
	if (!Z_Registration_Info_UScriptStruct_FDismemberableLimbData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDismemberableLimbData.InnerSingleton, Z_Construct_UScriptStruct_FDismemberableLimbData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FDismemberableLimbData.InnerSingleton;
}
// ********** End ScriptStruct FDismemberableLimbData **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Data_DismemberableLimbData_h__Script_DismembererSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDismemberableLimbData::StaticStruct, Z_Construct_UScriptStruct_FDismemberableLimbData_Statics::NewStructOps, TEXT("DismemberableLimbData"), &Z_Registration_Info_UScriptStruct_FDismemberableLimbData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDismemberableLimbData), 28519379U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Data_DismemberableLimbData_h__Script_DismembererSystem_381260724(TEXT("/Script/DismembererSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Data_DismemberableLimbData_h__Script_DismembererSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Data_DismemberableLimbData_h__Script_DismembererSystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
