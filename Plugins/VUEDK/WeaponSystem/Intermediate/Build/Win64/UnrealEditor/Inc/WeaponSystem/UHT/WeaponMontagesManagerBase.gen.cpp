// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Montages/Base/WeaponMontagesManagerBase.h"
#include "Montages/Data/WeaponMontageData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWeaponMontagesManagerBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UWeaponMontagesManagerBase();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UWeaponMontagesManagerBase_NoRegister();
WEAPONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponMontageData();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWeaponMontagesManagerBase Function InterruptWeaponMontage ***************
struct Z_Construct_UFunction_UWeaponMontagesManagerBase_InterruptWeaponMontage_Statics
{
	struct WeaponMontagesManagerBase_eventInterruptWeaponMontage_Parms
	{
		FWeaponMontageData WeaponMontageData;
		float CharacterBlendOutTime;
		float WeaponBlendOutTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Montages/Base/WeaponMontagesManagerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMontageData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterBlendOutTime_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponBlendOutTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponMontageData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CharacterBlendOutTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponBlendOutTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeaponMontagesManagerBase_InterruptWeaponMontage_Statics::NewProp_WeaponMontageData = { "WeaponMontageData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponMontagesManagerBase_eventInterruptWeaponMontage_Parms, WeaponMontageData), Z_Construct_UScriptStruct_FWeaponMontageData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponMontageData_MetaData), NewProp_WeaponMontageData_MetaData) }; // 397967327
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWeaponMontagesManagerBase_InterruptWeaponMontage_Statics::NewProp_CharacterBlendOutTime = { "CharacterBlendOutTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponMontagesManagerBase_eventInterruptWeaponMontage_Parms, CharacterBlendOutTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterBlendOutTime_MetaData), NewProp_CharacterBlendOutTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWeaponMontagesManagerBase_InterruptWeaponMontage_Statics::NewProp_WeaponBlendOutTime = { "WeaponBlendOutTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponMontagesManagerBase_eventInterruptWeaponMontage_Parms, WeaponBlendOutTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponBlendOutTime_MetaData), NewProp_WeaponBlendOutTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponMontagesManagerBase_InterruptWeaponMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponMontagesManagerBase_InterruptWeaponMontage_Statics::NewProp_WeaponMontageData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponMontagesManagerBase_InterruptWeaponMontage_Statics::NewProp_CharacterBlendOutTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponMontagesManagerBase_InterruptWeaponMontage_Statics::NewProp_WeaponBlendOutTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponMontagesManagerBase_InterruptWeaponMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponMontagesManagerBase_InterruptWeaponMontage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponMontagesManagerBase, nullptr, "InterruptWeaponMontage", Z_Construct_UFunction_UWeaponMontagesManagerBase_InterruptWeaponMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponMontagesManagerBase_InterruptWeaponMontage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponMontagesManagerBase_InterruptWeaponMontage_Statics::WeaponMontagesManagerBase_eventInterruptWeaponMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponMontagesManagerBase_InterruptWeaponMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponMontagesManagerBase_InterruptWeaponMontage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWeaponMontagesManagerBase_InterruptWeaponMontage_Statics::WeaponMontagesManagerBase_eventInterruptWeaponMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponMontagesManagerBase_InterruptWeaponMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponMontagesManagerBase_InterruptWeaponMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponMontagesManagerBase::execInterruptWeaponMontage)
{
	P_GET_STRUCT_REF(FWeaponMontageData,Z_Param_Out_WeaponMontageData);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CharacterBlendOutTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_WeaponBlendOutTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InterruptWeaponMontage(Z_Param_Out_WeaponMontageData,Z_Param_CharacterBlendOutTime,Z_Param_WeaponBlendOutTime);
	P_NATIVE_END;
}
// ********** End Class UWeaponMontagesManagerBase Function InterruptWeaponMontage *****************

// ********** Begin Class UWeaponMontagesManagerBase Function IsPlayingWeaponMontage ***************
struct Z_Construct_UFunction_UWeaponMontagesManagerBase_IsPlayingWeaponMontage_Statics
{
	struct WeaponMontagesManagerBase_eventIsPlayingWeaponMontage_Parms
	{
		FWeaponMontageData WeaponMontageData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Montages/Base/WeaponMontagesManagerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMontageData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponMontageData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeaponMontagesManagerBase_IsPlayingWeaponMontage_Statics::NewProp_WeaponMontageData = { "WeaponMontageData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponMontagesManagerBase_eventIsPlayingWeaponMontage_Parms, WeaponMontageData), Z_Construct_UScriptStruct_FWeaponMontageData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponMontageData_MetaData), NewProp_WeaponMontageData_MetaData) }; // 397967327
void Z_Construct_UFunction_UWeaponMontagesManagerBase_IsPlayingWeaponMontage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WeaponMontagesManagerBase_eventIsPlayingWeaponMontage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponMontagesManagerBase_IsPlayingWeaponMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponMontagesManagerBase_eventIsPlayingWeaponMontage_Parms), &Z_Construct_UFunction_UWeaponMontagesManagerBase_IsPlayingWeaponMontage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponMontagesManagerBase_IsPlayingWeaponMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponMontagesManagerBase_IsPlayingWeaponMontage_Statics::NewProp_WeaponMontageData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponMontagesManagerBase_IsPlayingWeaponMontage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponMontagesManagerBase_IsPlayingWeaponMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponMontagesManagerBase_IsPlayingWeaponMontage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponMontagesManagerBase, nullptr, "IsPlayingWeaponMontage", Z_Construct_UFunction_UWeaponMontagesManagerBase_IsPlayingWeaponMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponMontagesManagerBase_IsPlayingWeaponMontage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponMontagesManagerBase_IsPlayingWeaponMontage_Statics::WeaponMontagesManagerBase_eventIsPlayingWeaponMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponMontagesManagerBase_IsPlayingWeaponMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponMontagesManagerBase_IsPlayingWeaponMontage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWeaponMontagesManagerBase_IsPlayingWeaponMontage_Statics::WeaponMontagesManagerBase_eventIsPlayingWeaponMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponMontagesManagerBase_IsPlayingWeaponMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponMontagesManagerBase_IsPlayingWeaponMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponMontagesManagerBase::execIsPlayingWeaponMontage)
{
	P_GET_STRUCT_REF(FWeaponMontageData,Z_Param_Out_WeaponMontageData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlayingWeaponMontage(Z_Param_Out_WeaponMontageData);
	P_NATIVE_END;
}
// ********** End Class UWeaponMontagesManagerBase Function IsPlayingWeaponMontage *****************

// ********** Begin Class UWeaponMontagesManagerBase Function IsWeaponReadyToUse *******************
struct Z_Construct_UFunction_UWeaponMontagesManagerBase_IsWeaponReadyToUse_Statics
{
	struct WeaponMontagesManagerBase_eventIsWeaponReadyToUse_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if the weapon is ready to use, meaning that it is not currently playing an equip or unequip montage.\n\x09 * @return True if the weapon is ready to use, false otherwise.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Montages/Base/WeaponMontagesManagerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the weapon is ready to use, meaning that it is not currently playing an equip or unequip montage.\n@return True if the weapon is ready to use, false otherwise." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWeaponMontagesManagerBase_IsWeaponReadyToUse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WeaponMontagesManagerBase_eventIsWeaponReadyToUse_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponMontagesManagerBase_IsWeaponReadyToUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponMontagesManagerBase_eventIsWeaponReadyToUse_Parms), &Z_Construct_UFunction_UWeaponMontagesManagerBase_IsWeaponReadyToUse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponMontagesManagerBase_IsWeaponReadyToUse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponMontagesManagerBase_IsWeaponReadyToUse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponMontagesManagerBase_IsWeaponReadyToUse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponMontagesManagerBase_IsWeaponReadyToUse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponMontagesManagerBase, nullptr, "IsWeaponReadyToUse", Z_Construct_UFunction_UWeaponMontagesManagerBase_IsWeaponReadyToUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponMontagesManagerBase_IsWeaponReadyToUse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponMontagesManagerBase_IsWeaponReadyToUse_Statics::WeaponMontagesManagerBase_eventIsWeaponReadyToUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponMontagesManagerBase_IsWeaponReadyToUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponMontagesManagerBase_IsWeaponReadyToUse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWeaponMontagesManagerBase_IsWeaponReadyToUse_Statics::WeaponMontagesManagerBase_eventIsWeaponReadyToUse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponMontagesManagerBase_IsWeaponReadyToUse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponMontagesManagerBase_IsWeaponReadyToUse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponMontagesManagerBase::execIsWeaponReadyToUse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsWeaponReadyToUse();
	P_NATIVE_END;
}
// ********** End Class UWeaponMontagesManagerBase Function IsWeaponReadyToUse *********************

// ********** Begin Class UWeaponMontagesManagerBase Function OnWeaponAttackFail *******************
struct Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponAttackFail_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Montages/Base/WeaponMontagesManagerBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponAttackFail_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponMontagesManagerBase, nullptr, "OnWeaponAttackFail", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponAttackFail_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponAttackFail_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponAttackFail()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponAttackFail_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponMontagesManagerBase::execOnWeaponAttackFail)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWeaponAttackFail();
	P_NATIVE_END;
}
// ********** End Class UWeaponMontagesManagerBase Function OnWeaponAttackFail *********************

// ********** Begin Class UWeaponMontagesManagerBase Function OnWeaponAttackSuccess ****************
struct Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponAttackSuccess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Montages/Base/WeaponMontagesManagerBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponAttackSuccess_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponMontagesManagerBase, nullptr, "OnWeaponAttackSuccess", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponAttackSuccess_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponAttackSuccess_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponAttackSuccess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponAttackSuccess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponMontagesManagerBase::execOnWeaponAttackSuccess)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWeaponAttackSuccess();
	P_NATIVE_END;
}
// ********** End Class UWeaponMontagesManagerBase Function OnWeaponAttackSuccess ******************

// ********** Begin Class UWeaponMontagesManagerBase Function OnWeaponEndAttack ********************
struct Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponEndAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Montages/Base/WeaponMontagesManagerBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponEndAttack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponMontagesManagerBase, nullptr, "OnWeaponEndAttack", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponEndAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponEndAttack_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponEndAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponEndAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponMontagesManagerBase::execOnWeaponEndAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWeaponEndAttack();
	P_NATIVE_END;
}
// ********** End Class UWeaponMontagesManagerBase Function OnWeaponEndAttack **********************

// ********** Begin Class UWeaponMontagesManagerBase Function OnWeaponEquipped *********************
struct Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponEquipped_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Montages/Base/WeaponMontagesManagerBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponEquipped_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponMontagesManagerBase, nullptr, "OnWeaponEquipped", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponEquipped_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponEquipped_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponEquipped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponEquipped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponMontagesManagerBase::execOnWeaponEquipped)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWeaponEquipped();
	P_NATIVE_END;
}
// ********** End Class UWeaponMontagesManagerBase Function OnWeaponEquipped ***********************

// ********** Begin Class UWeaponMontagesManagerBase Function OnWeaponReadyToUse *******************
struct Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponReadyToUse_Statics
{
	struct WeaponMontagesManagerBase_eventOnWeaponReadyToUse_Parms
	{
		bool bInterrupted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Montages/Base/WeaponMontagesManagerBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bInterrupted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponReadyToUse_Statics::NewProp_bInterrupted_SetBit(void* Obj)
{
	((WeaponMontagesManagerBase_eventOnWeaponReadyToUse_Parms*)Obj)->bInterrupted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponReadyToUse_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponMontagesManagerBase_eventOnWeaponReadyToUse_Parms), &Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponReadyToUse_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponReadyToUse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponReadyToUse_Statics::NewProp_bInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponReadyToUse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponReadyToUse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponMontagesManagerBase, nullptr, "OnWeaponReadyToUse", Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponReadyToUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponReadyToUse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponReadyToUse_Statics::WeaponMontagesManagerBase_eventOnWeaponReadyToUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponReadyToUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponReadyToUse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponReadyToUse_Statics::WeaponMontagesManagerBase_eventOnWeaponReadyToUse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponReadyToUse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponReadyToUse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponMontagesManagerBase::execOnWeaponReadyToUse)
{
	P_GET_UBOOL(Z_Param_bInterrupted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWeaponReadyToUse(Z_Param_bInterrupted);
	P_NATIVE_END;
}
// ********** End Class UWeaponMontagesManagerBase Function OnWeaponReadyToUse *********************

// ********** Begin Class UWeaponMontagesManagerBase Function OnWeaponUnequipped *******************
struct Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponUnequipped_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Montages/Base/WeaponMontagesManagerBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponUnequipped_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponMontagesManagerBase, nullptr, "OnWeaponUnequipped", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponUnequipped_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponUnequipped_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponUnequipped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponUnequipped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponMontagesManagerBase::execOnWeaponUnequipped)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWeaponUnequipped();
	P_NATIVE_END;
}
// ********** End Class UWeaponMontagesManagerBase Function OnWeaponUnequipped *********************

// ********** Begin Class UWeaponMontagesManagerBase Function StartWeaponMontage *******************
struct Z_Construct_UFunction_UWeaponMontagesManagerBase_StartWeaponMontage_Statics
{
	struct WeaponMontagesManagerBase_eventStartWeaponMontage_Parms
	{
		FWeaponMontageData WeaponMontageData;
		float WeaponPlayRate;
		float CharacterPlayRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Montages/Base/WeaponMontagesManagerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponPlayRate_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterPlayRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponMontageData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponPlayRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CharacterPlayRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeaponMontagesManagerBase_StartWeaponMontage_Statics::NewProp_WeaponMontageData = { "WeaponMontageData", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponMontagesManagerBase_eventStartWeaponMontage_Parms, WeaponMontageData), Z_Construct_UScriptStruct_FWeaponMontageData, METADATA_PARAMS(0, nullptr) }; // 397967327
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWeaponMontagesManagerBase_StartWeaponMontage_Statics::NewProp_WeaponPlayRate = { "WeaponPlayRate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponMontagesManagerBase_eventStartWeaponMontage_Parms, WeaponPlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponPlayRate_MetaData), NewProp_WeaponPlayRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWeaponMontagesManagerBase_StartWeaponMontage_Statics::NewProp_CharacterPlayRate = { "CharacterPlayRate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponMontagesManagerBase_eventStartWeaponMontage_Parms, CharacterPlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterPlayRate_MetaData), NewProp_CharacterPlayRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponMontagesManagerBase_StartWeaponMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponMontagesManagerBase_StartWeaponMontage_Statics::NewProp_WeaponMontageData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponMontagesManagerBase_StartWeaponMontage_Statics::NewProp_WeaponPlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponMontagesManagerBase_StartWeaponMontage_Statics::NewProp_CharacterPlayRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponMontagesManagerBase_StartWeaponMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponMontagesManagerBase_StartWeaponMontage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWeaponMontagesManagerBase, nullptr, "StartWeaponMontage", Z_Construct_UFunction_UWeaponMontagesManagerBase_StartWeaponMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponMontagesManagerBase_StartWeaponMontage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeaponMontagesManagerBase_StartWeaponMontage_Statics::WeaponMontagesManagerBase_eventStartWeaponMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponMontagesManagerBase_StartWeaponMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeaponMontagesManagerBase_StartWeaponMontage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWeaponMontagesManagerBase_StartWeaponMontage_Statics::WeaponMontagesManagerBase_eventStartWeaponMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeaponMontagesManagerBase_StartWeaponMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeaponMontagesManagerBase_StartWeaponMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeaponMontagesManagerBase::execStartWeaponMontage)
{
	P_GET_STRUCT(FWeaponMontageData,Z_Param_WeaponMontageData);
	P_GET_PROPERTY(FFloatProperty,Z_Param_WeaponPlayRate);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CharacterPlayRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartWeaponMontage(Z_Param_WeaponMontageData,Z_Param_WeaponPlayRate,Z_Param_CharacterPlayRate);
	P_NATIVE_END;
}
// ********** End Class UWeaponMontagesManagerBase Function StartWeaponMontage *********************

// ********** Begin Class UWeaponMontagesManagerBase ***********************************************
void UWeaponMontagesManagerBase::StaticRegisterNativesUWeaponMontagesManagerBase()
{
	UClass* Class = UWeaponMontagesManagerBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InterruptWeaponMontage", &UWeaponMontagesManagerBase::execInterruptWeaponMontage },
		{ "IsPlayingWeaponMontage", &UWeaponMontagesManagerBase::execIsPlayingWeaponMontage },
		{ "IsWeaponReadyToUse", &UWeaponMontagesManagerBase::execIsWeaponReadyToUse },
		{ "OnWeaponAttackFail", &UWeaponMontagesManagerBase::execOnWeaponAttackFail },
		{ "OnWeaponAttackSuccess", &UWeaponMontagesManagerBase::execOnWeaponAttackSuccess },
		{ "OnWeaponEndAttack", &UWeaponMontagesManagerBase::execOnWeaponEndAttack },
		{ "OnWeaponEquipped", &UWeaponMontagesManagerBase::execOnWeaponEquipped },
		{ "OnWeaponReadyToUse", &UWeaponMontagesManagerBase::execOnWeaponReadyToUse },
		{ "OnWeaponUnequipped", &UWeaponMontagesManagerBase::execOnWeaponUnequipped },
		{ "StartWeaponMontage", &UWeaponMontagesManagerBase::execStartWeaponMontage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWeaponMontagesManagerBase;
UClass* UWeaponMontagesManagerBase::GetPrivateStaticClass()
{
	using TClass = UWeaponMontagesManagerBase;
	if (!Z_Registration_Info_UClass_UWeaponMontagesManagerBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WeaponMontagesManagerBase"),
			Z_Registration_Info_UClass_UWeaponMontagesManagerBase.InnerSingleton,
			StaticRegisterNativesUWeaponMontagesManagerBase,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UWeaponMontagesManagerBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UWeaponMontagesManagerBase_NoRegister()
{
	return UWeaponMontagesManagerBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWeaponMontagesManagerBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Montages/Base/WeaponMontagesManagerBase.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Montages/Base/WeaponMontagesManagerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipMontageData_MetaData[] = {
		{ "Category", "Weapon|Equip" },
		{ "ModuleRelativePath", "Public/Montages/Base/WeaponMontagesManagerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnequipMontageData_MetaData[] = {
		{ "Category", "Weapon|Equip" },
		{ "ModuleRelativePath", "Public/Montages/Base/WeaponMontagesManagerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[] = {
		{ "ModuleRelativePath", "Public/Montages/Base/WeaponMontagesManagerBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EquipMontageData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UnequipMontageData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponMontagesManagerBase_InterruptWeaponMontage, "InterruptWeaponMontage" }, // 2276538172
		{ &Z_Construct_UFunction_UWeaponMontagesManagerBase_IsPlayingWeaponMontage, "IsPlayingWeaponMontage" }, // 4138568612
		{ &Z_Construct_UFunction_UWeaponMontagesManagerBase_IsWeaponReadyToUse, "IsWeaponReadyToUse" }, // 2535086147
		{ &Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponAttackFail, "OnWeaponAttackFail" }, // 4273227176
		{ &Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponAttackSuccess, "OnWeaponAttackSuccess" }, // 2413457516
		{ &Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponEndAttack, "OnWeaponEndAttack" }, // 181868912
		{ &Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponEquipped, "OnWeaponEquipped" }, // 2889509517
		{ &Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponReadyToUse, "OnWeaponReadyToUse" }, // 3750545960
		{ &Z_Construct_UFunction_UWeaponMontagesManagerBase_OnWeaponUnequipped, "OnWeaponUnequipped" }, // 1466484660
		{ &Z_Construct_UFunction_UWeaponMontagesManagerBase_StartWeaponMontage, "StartWeaponMontage" }, // 2898955012
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponMontagesManagerBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponMontagesManagerBase_Statics::NewProp_EquipMontageData = { "EquipMontageData", nullptr, (EPropertyFlags)0x0010008000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponMontagesManagerBase, EquipMontageData), Z_Construct_UScriptStruct_FWeaponMontageData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipMontageData_MetaData), NewProp_EquipMontageData_MetaData) }; // 397967327
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponMontagesManagerBase_Statics::NewProp_UnequipMontageData = { "UnequipMontageData", nullptr, (EPropertyFlags)0x0010008000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponMontagesManagerBase, UnequipMontageData), Z_Construct_UScriptStruct_FWeaponMontageData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnequipMontageData_MetaData), NewProp_UnequipMontageData_MetaData) }; // 397967327
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponMontagesManagerBase_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponMontagesManagerBase, Weapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weapon_MetaData), NewProp_Weapon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponMontagesManagerBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponMontagesManagerBase_Statics::NewProp_EquipMontageData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponMontagesManagerBase_Statics::NewProp_UnequipMontageData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponMontagesManagerBase_Statics::NewProp_Weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponMontagesManagerBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWeaponMontagesManagerBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponMontagesManagerBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponMontagesManagerBase_Statics::ClassParams = {
	&UWeaponMontagesManagerBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWeaponMontagesManagerBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponMontagesManagerBase_Statics::PropPointers),
	0,
	0x00B000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponMontagesManagerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponMontagesManagerBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeaponMontagesManagerBase()
{
	if (!Z_Registration_Info_UClass_UWeaponMontagesManagerBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponMontagesManagerBase.OuterSingleton, Z_Construct_UClass_UWeaponMontagesManagerBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeaponMontagesManagerBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponMontagesManagerBase);
UWeaponMontagesManagerBase::~UWeaponMontagesManagerBase() {}
// ********** End Class UWeaponMontagesManagerBase *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Base_WeaponMontagesManagerBase_h__Script_WeaponSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponMontagesManagerBase, UWeaponMontagesManagerBase::StaticClass, TEXT("UWeaponMontagesManagerBase"), &Z_Registration_Info_UClass_UWeaponMontagesManagerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponMontagesManagerBase), 1367361044U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Base_WeaponMontagesManagerBase_h__Script_WeaponSystem_3733581971(TEXT("/Script/WeaponSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Base_WeaponMontagesManagerBase_h__Script_WeaponSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Base_WeaponMontagesManagerBase_h__Script_WeaponSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
