// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weapons/WeaponFirearm.h"
#include "Montages/Data/WeaponMontageData.h"
#include "Weapons/Data/ReloadEventData.h"
#include "Weapons/Data/WeaponFirearmData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWeaponFirearm() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AWeaponBase();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AWeaponFirearm();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AWeaponFirearm_NoRegister();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UAmmoTypeData_NoRegister();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UFirearmMontagesManager_NoRegister();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShootBarrel_NoRegister();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShooter_NoRegister();
WEAPONSYSTEM_API UEnum* Z_Construct_UEnum_WeaponSystem_EShootType();
WEAPONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnAimDisabled__DelegateSignature();
WEAPONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnAimEnabled__DelegateSignature();
WEAPONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnReloadEnded__DelegateSignature();
WEAPONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnReloadInsertedAmmo__DelegateSignature();
WEAPONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnReloadInterrupted__DelegateSignature();
WEAPONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnReloadStarted__DelegateSignature();
WEAPONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FReloadEventData();
WEAPONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponFirearmData();
WEAPONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponMontageData();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnReloadStarted ******************************************************
struct Z_Construct_UDelegateFunction_WeaponSystem_OnReloadStarted__DelegateSignature_Statics
{
	struct _Script_WeaponSystem_eventOnReloadStarted_Parms
	{
		FReloadEventData ReloadPayload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReloadPayload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_WeaponSystem_OnReloadStarted__DelegateSignature_Statics::NewProp_ReloadPayload = { "ReloadPayload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WeaponSystem_eventOnReloadStarted_Parms, ReloadPayload), Z_Construct_UScriptStruct_FReloadEventData, METADATA_PARAMS(0, nullptr) }; // 1060695821
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WeaponSystem_OnReloadStarted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystem_OnReloadStarted__DelegateSignature_Statics::NewProp_ReloadPayload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnReloadStarted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_WeaponSystem_OnReloadStarted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem, nullptr, "OnReloadStarted__DelegateSignature", Z_Construct_UDelegateFunction_WeaponSystem_OnReloadStarted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnReloadStarted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WeaponSystem_OnReloadStarted__DelegateSignature_Statics::_Script_WeaponSystem_eventOnReloadStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnReloadStarted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WeaponSystem_OnReloadStarted__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_WeaponSystem_OnReloadStarted__DelegateSignature_Statics::_Script_WeaponSystem_eventOnReloadStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnReloadStarted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystem_OnReloadStarted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnReloadStarted_DelegateWrapper(const FMulticastScriptDelegate& OnReloadStarted, FReloadEventData ReloadPayload)
{
	struct _Script_WeaponSystem_eventOnReloadStarted_Parms
	{
		FReloadEventData ReloadPayload;
	};
	_Script_WeaponSystem_eventOnReloadStarted_Parms Parms;
	Parms.ReloadPayload=ReloadPayload;
	OnReloadStarted.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnReloadStarted ********************************************************

// ********** Begin Delegate FOnReloadInsertedAmmo *************************************************
struct Z_Construct_UDelegateFunction_WeaponSystem_OnReloadInsertedAmmo__DelegateSignature_Statics
{
	struct _Script_WeaponSystem_eventOnReloadInsertedAmmo_Parms
	{
		FReloadEventData ReloadPayload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReloadPayload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_WeaponSystem_OnReloadInsertedAmmo__DelegateSignature_Statics::NewProp_ReloadPayload = { "ReloadPayload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WeaponSystem_eventOnReloadInsertedAmmo_Parms, ReloadPayload), Z_Construct_UScriptStruct_FReloadEventData, METADATA_PARAMS(0, nullptr) }; // 1060695821
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WeaponSystem_OnReloadInsertedAmmo__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystem_OnReloadInsertedAmmo__DelegateSignature_Statics::NewProp_ReloadPayload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnReloadInsertedAmmo__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_WeaponSystem_OnReloadInsertedAmmo__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem, nullptr, "OnReloadInsertedAmmo__DelegateSignature", Z_Construct_UDelegateFunction_WeaponSystem_OnReloadInsertedAmmo__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnReloadInsertedAmmo__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WeaponSystem_OnReloadInsertedAmmo__DelegateSignature_Statics::_Script_WeaponSystem_eventOnReloadInsertedAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnReloadInsertedAmmo__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WeaponSystem_OnReloadInsertedAmmo__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_WeaponSystem_OnReloadInsertedAmmo__DelegateSignature_Statics::_Script_WeaponSystem_eventOnReloadInsertedAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnReloadInsertedAmmo__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystem_OnReloadInsertedAmmo__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnReloadInsertedAmmo_DelegateWrapper(const FMulticastScriptDelegate& OnReloadInsertedAmmo, FReloadEventData ReloadPayload)
{
	struct _Script_WeaponSystem_eventOnReloadInsertedAmmo_Parms
	{
		FReloadEventData ReloadPayload;
	};
	_Script_WeaponSystem_eventOnReloadInsertedAmmo_Parms Parms;
	Parms.ReloadPayload=ReloadPayload;
	OnReloadInsertedAmmo.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnReloadInsertedAmmo ***************************************************

// ********** Begin Delegate FOnReloadEnded ********************************************************
struct Z_Construct_UDelegateFunction_WeaponSystem_OnReloadEnded__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_WeaponSystem_OnReloadEnded__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem, nullptr, "OnReloadEnded__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnReloadEnded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WeaponSystem_OnReloadEnded__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnReloadEnded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystem_OnReloadEnded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnReloadEnded_DelegateWrapper(const FMulticastScriptDelegate& OnReloadEnded)
{
	OnReloadEnded.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnReloadEnded **********************************************************

// ********** Begin Delegate FOnReloadInterrupted **************************************************
struct Z_Construct_UDelegateFunction_WeaponSystem_OnReloadInterrupted__DelegateSignature_Statics
{
	struct _Script_WeaponSystem_eventOnReloadInterrupted_Parms
	{
		FReloadEventData ReloadPayload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReloadPayload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_WeaponSystem_OnReloadInterrupted__DelegateSignature_Statics::NewProp_ReloadPayload = { "ReloadPayload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WeaponSystem_eventOnReloadInterrupted_Parms, ReloadPayload), Z_Construct_UScriptStruct_FReloadEventData, METADATA_PARAMS(0, nullptr) }; // 1060695821
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WeaponSystem_OnReloadInterrupted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystem_OnReloadInterrupted__DelegateSignature_Statics::NewProp_ReloadPayload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnReloadInterrupted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_WeaponSystem_OnReloadInterrupted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem, nullptr, "OnReloadInterrupted__DelegateSignature", Z_Construct_UDelegateFunction_WeaponSystem_OnReloadInterrupted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnReloadInterrupted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WeaponSystem_OnReloadInterrupted__DelegateSignature_Statics::_Script_WeaponSystem_eventOnReloadInterrupted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnReloadInterrupted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WeaponSystem_OnReloadInterrupted__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_WeaponSystem_OnReloadInterrupted__DelegateSignature_Statics::_Script_WeaponSystem_eventOnReloadInterrupted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnReloadInterrupted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystem_OnReloadInterrupted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnReloadInterrupted_DelegateWrapper(const FMulticastScriptDelegate& OnReloadInterrupted, FReloadEventData ReloadPayload)
{
	struct _Script_WeaponSystem_eventOnReloadInterrupted_Parms
	{
		FReloadEventData ReloadPayload;
	};
	_Script_WeaponSystem_eventOnReloadInterrupted_Parms Parms;
	Parms.ReloadPayload=ReloadPayload;
	OnReloadInterrupted.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnReloadInterrupted ****************************************************

// ********** Begin Delegate FOnAimEnabled *********************************************************
struct Z_Construct_UDelegateFunction_WeaponSystem_OnAimEnabled__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_WeaponSystem_OnAimEnabled__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem, nullptr, "OnAimEnabled__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnAimEnabled__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WeaponSystem_OnAimEnabled__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnAimEnabled__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystem_OnAimEnabled__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAimEnabled_DelegateWrapper(const FMulticastScriptDelegate& OnAimEnabled)
{
	OnAimEnabled.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnAimEnabled ***********************************************************

// ********** Begin Delegate FOnAimDisabled ********************************************************
struct Z_Construct_UDelegateFunction_WeaponSystem_OnAimDisabled__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_WeaponSystem_OnAimDisabled__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem, nullptr, "OnAimDisabled__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnAimDisabled__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WeaponSystem_OnAimDisabled__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnAimDisabled__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystem_OnAimDisabled__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAimDisabled_DelegateWrapper(const FMulticastScriptDelegate& OnAimDisabled)
{
	OnAimDisabled.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnAimDisabled **********************************************************

// ********** Begin Class AWeaponFirearm Function AddWeaponDynamicSpread ***************************
struct Z_Construct_UFunction_AWeaponFirearm_AddWeaponDynamicSpread_Statics
{
	struct WeaponFirearm_eventAddWeaponDynamicSpread_Parms
	{
		float AddSpread;
		float ChangeRate;
		float RecoveryRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_ChangeRate", "1.000000" },
		{ "CPP_Default_RecoveryRate", "1.000000" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddSpread_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChangeRate_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoveryRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AddSpread;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChangeRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecoveryRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponFirearm_AddWeaponDynamicSpread_Statics::NewProp_AddSpread = { "AddSpread", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFirearm_eventAddWeaponDynamicSpread_Parms, AddSpread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddSpread_MetaData), NewProp_AddSpread_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponFirearm_AddWeaponDynamicSpread_Statics::NewProp_ChangeRate = { "ChangeRate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFirearm_eventAddWeaponDynamicSpread_Parms, ChangeRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChangeRate_MetaData), NewProp_ChangeRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponFirearm_AddWeaponDynamicSpread_Statics::NewProp_RecoveryRate = { "RecoveryRate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFirearm_eventAddWeaponDynamicSpread_Parms, RecoveryRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoveryRate_MetaData), NewProp_RecoveryRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponFirearm_AddWeaponDynamicSpread_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_AddWeaponDynamicSpread_Statics::NewProp_AddSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_AddWeaponDynamicSpread_Statics::NewProp_ChangeRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_AddWeaponDynamicSpread_Statics::NewProp_RecoveryRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_AddWeaponDynamicSpread_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_AddWeaponDynamicSpread_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "AddWeaponDynamicSpread", Z_Construct_UFunction_AWeaponFirearm_AddWeaponDynamicSpread_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_AddWeaponDynamicSpread_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponFirearm_AddWeaponDynamicSpread_Statics::WeaponFirearm_eventAddWeaponDynamicSpread_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_AddWeaponDynamicSpread_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_AddWeaponDynamicSpread_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponFirearm_AddWeaponDynamicSpread_Statics::WeaponFirearm_eventAddWeaponDynamicSpread_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponFirearm_AddWeaponDynamicSpread()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_AddWeaponDynamicSpread_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execAddWeaponDynamicSpread)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AddSpread);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ChangeRate);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RecoveryRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddWeaponDynamicSpread(Z_Param_AddSpread,Z_Param_ChangeRate,Z_Param_RecoveryRate);
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function AddWeaponDynamicSpread *****************************

// ********** Begin Class AWeaponFirearm Function CanReload ****************************************
struct WeaponFirearm_eventCanReload_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	WeaponFirearm_eventCanReload_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_AWeaponFirearm_CanReload = FName(TEXT("CanReload"));
bool AWeaponFirearm::CanReload() const
{
	UFunction* Func = FindFunctionChecked(NAME_AWeaponFirearm_CanReload);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		WeaponFirearm_eventCanReload_Parms Parms;
		const_cast<AWeaponFirearm*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<AWeaponFirearm*>(this)->CanReload_Implementation();
	}
}
struct Z_Construct_UFunction_AWeaponFirearm_CanReload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AWeaponFirearm_CanReload_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WeaponFirearm_eventCanReload_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeaponFirearm_CanReload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponFirearm_eventCanReload_Parms), &Z_Construct_UFunction_AWeaponFirearm_CanReload_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponFirearm_CanReload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_CanReload_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_CanReload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_CanReload_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "CanReload", Z_Construct_UFunction_AWeaponFirearm_CanReload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_CanReload_Statics::PropPointers), sizeof(WeaponFirearm_eventCanReload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_CanReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_CanReload_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(WeaponFirearm_eventCanReload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponFirearm_CanReload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_CanReload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execCanReload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanReload_Implementation();
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function CanReload ******************************************

// ********** Begin Class AWeaponFirearm Function GetCurrentAmmo ***********************************
struct Z_Construct_UFunction_AWeaponFirearm_GetCurrentAmmo_Statics
{
	struct WeaponFirearm_eventGetCurrentAmmo_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWeaponFirearm_GetCurrentAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFirearm_eventGetCurrentAmmo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponFirearm_GetCurrentAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_GetCurrentAmmo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetCurrentAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_GetCurrentAmmo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "GetCurrentAmmo", Z_Construct_UFunction_AWeaponFirearm_GetCurrentAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetCurrentAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponFirearm_GetCurrentAmmo_Statics::WeaponFirearm_eventGetCurrentAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetCurrentAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_GetCurrentAmmo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponFirearm_GetCurrentAmmo_Statics::WeaponFirearm_eventGetCurrentAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponFirearm_GetCurrentAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_GetCurrentAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execGetCurrentAmmo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentAmmo();
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function GetCurrentAmmo *************************************

// ********** Begin Class AWeaponFirearm Function GetDefaultSpread *********************************
struct Z_Construct_UFunction_AWeaponFirearm_GetDefaultSpread_Statics
{
	struct WeaponFirearm_eventGetDefaultSpread_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponFirearm_GetDefaultSpread_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFirearm_eventGetDefaultSpread_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponFirearm_GetDefaultSpread_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_GetDefaultSpread_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetDefaultSpread_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_GetDefaultSpread_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "GetDefaultSpread", Z_Construct_UFunction_AWeaponFirearm_GetDefaultSpread_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetDefaultSpread_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponFirearm_GetDefaultSpread_Statics::WeaponFirearm_eventGetDefaultSpread_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetDefaultSpread_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_GetDefaultSpread_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponFirearm_GetDefaultSpread_Statics::WeaponFirearm_eventGetDefaultSpread_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponFirearm_GetDefaultSpread()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_GetDefaultSpread_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execGetDefaultSpread)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDefaultSpread();
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function GetDefaultSpread ***********************************

// ********** Begin Class AWeaponFirearm Function GetNeededAmmo ************************************
struct Z_Construct_UFunction_AWeaponFirearm_GetNeededAmmo_Statics
{
	struct WeaponFirearm_eventGetNeededAmmo_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWeaponFirearm_GetNeededAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFirearm_eventGetNeededAmmo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponFirearm_GetNeededAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_GetNeededAmmo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetNeededAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_GetNeededAmmo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "GetNeededAmmo", Z_Construct_UFunction_AWeaponFirearm_GetNeededAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetNeededAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponFirearm_GetNeededAmmo_Statics::WeaponFirearm_eventGetNeededAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetNeededAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_GetNeededAmmo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponFirearm_GetNeededAmmo_Statics::WeaponFirearm_eventGetNeededAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponFirearm_GetNeededAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_GetNeededAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execGetNeededAmmo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNeededAmmo();
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function GetNeededAmmo **************************************

// ********** Begin Class AWeaponFirearm Function GetWeaponAmmoType ********************************
struct Z_Construct_UFunction_AWeaponFirearm_GetWeaponAmmoType_Statics
{
	struct WeaponFirearm_eventGetWeaponAmmoType_Parms
	{
		UAmmoTypeData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponFirearm_GetWeaponAmmoType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFirearm_eventGetWeaponAmmoType_Parms, ReturnValue), Z_Construct_UClass_UAmmoTypeData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponFirearm_GetWeaponAmmoType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_GetWeaponAmmoType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetWeaponAmmoType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_GetWeaponAmmoType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "GetWeaponAmmoType", Z_Construct_UFunction_AWeaponFirearm_GetWeaponAmmoType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetWeaponAmmoType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponFirearm_GetWeaponAmmoType_Statics::WeaponFirearm_eventGetWeaponAmmoType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetWeaponAmmoType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_GetWeaponAmmoType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponFirearm_GetWeaponAmmoType_Statics::WeaponFirearm_eventGetWeaponAmmoType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponFirearm_GetWeaponAmmoType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_GetWeaponAmmoType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execGetWeaponAmmoType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAmmoTypeData**)Z_Param__Result=P_THIS->GetWeaponAmmoType();
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function GetWeaponAmmoType **********************************

// ********** Begin Class AWeaponFirearm Function GetWeaponFirearmData *****************************
struct Z_Construct_UFunction_AWeaponFirearm_GetWeaponFirearmData_Statics
{
	struct WeaponFirearm_eventGetWeaponFirearmData_Parms
	{
		FWeaponFirearmData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeaponFirearm_GetWeaponFirearmData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFirearm_eventGetWeaponFirearmData_Parms, ReturnValue), Z_Construct_UScriptStruct_FWeaponFirearmData, METADATA_PARAMS(0, nullptr) }; // 4125335618
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponFirearm_GetWeaponFirearmData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_GetWeaponFirearmData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetWeaponFirearmData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_GetWeaponFirearmData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "GetWeaponFirearmData", Z_Construct_UFunction_AWeaponFirearm_GetWeaponFirearmData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetWeaponFirearmData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponFirearm_GetWeaponFirearmData_Statics::WeaponFirearm_eventGetWeaponFirearmData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetWeaponFirearmData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_GetWeaponFirearmData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponFirearm_GetWeaponFirearmData_Statics::WeaponFirearm_eventGetWeaponFirearmData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponFirearm_GetWeaponFirearmData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_GetWeaponFirearmData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execGetWeaponFirearmData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWeaponFirearmData*)Z_Param__Result=P_THIS->GetWeaponFirearmData();
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function GetWeaponFirearmData *******************************

// ********** Begin Class AWeaponFirearm Function GetWeaponFireRate ********************************
struct Z_Construct_UFunction_AWeaponFirearm_GetWeaponFireRate_Statics
{
	struct WeaponFirearm_eventGetWeaponFireRate_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponFirearm_GetWeaponFireRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFirearm_eventGetWeaponFireRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponFirearm_GetWeaponFireRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_GetWeaponFireRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetWeaponFireRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_GetWeaponFireRate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "GetWeaponFireRate", Z_Construct_UFunction_AWeaponFirearm_GetWeaponFireRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetWeaponFireRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponFirearm_GetWeaponFireRate_Statics::WeaponFirearm_eventGetWeaponFireRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetWeaponFireRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_GetWeaponFireRate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponFirearm_GetWeaponFireRate_Statics::WeaponFirearm_eventGetWeaponFireRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponFirearm_GetWeaponFireRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_GetWeaponFireRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execGetWeaponFireRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetWeaponFireRate();
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function GetWeaponFireRate **********************************

// ********** Begin Class AWeaponFirearm Function GetWeaponMagSize *********************************
struct Z_Construct_UFunction_AWeaponFirearm_GetWeaponMagSize_Statics
{
	struct WeaponFirearm_eventGetWeaponMagSize_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponFirearm_GetWeaponMagSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFirearm_eventGetWeaponMagSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponFirearm_GetWeaponMagSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_GetWeaponMagSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetWeaponMagSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_GetWeaponMagSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "GetWeaponMagSize", Z_Construct_UFunction_AWeaponFirearm_GetWeaponMagSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetWeaponMagSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponFirearm_GetWeaponMagSize_Statics::WeaponFirearm_eventGetWeaponMagSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetWeaponMagSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_GetWeaponMagSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponFirearm_GetWeaponMagSize_Statics::WeaponFirearm_eventGetWeaponMagSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponFirearm_GetWeaponMagSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_GetWeaponMagSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execGetWeaponMagSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetWeaponMagSize();
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function GetWeaponMagSize ***********************************

// ********** Begin Class AWeaponFirearm Function GetWeaponMaxRange ********************************
struct Z_Construct_UFunction_AWeaponFirearm_GetWeaponMaxRange_Statics
{
	struct WeaponFirearm_eventGetWeaponMaxRange_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponFirearm_GetWeaponMaxRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFirearm_eventGetWeaponMaxRange_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponFirearm_GetWeaponMaxRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_GetWeaponMaxRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetWeaponMaxRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_GetWeaponMaxRange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "GetWeaponMaxRange", Z_Construct_UFunction_AWeaponFirearm_GetWeaponMaxRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetWeaponMaxRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponFirearm_GetWeaponMaxRange_Statics::WeaponFirearm_eventGetWeaponMaxRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetWeaponMaxRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_GetWeaponMaxRange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponFirearm_GetWeaponMaxRange_Statics::WeaponFirearm_eventGetWeaponMaxRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponFirearm_GetWeaponMaxRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_GetWeaponMaxRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execGetWeaponMaxRange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetWeaponMaxRange();
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function GetWeaponMaxRange **********************************

// ********** Begin Class AWeaponFirearm Function GetWeaponMaxSpread *******************************
struct Z_Construct_UFunction_AWeaponFirearm_GetWeaponMaxSpread_Statics
{
	struct WeaponFirearm_eventGetWeaponMaxSpread_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponFirearm_GetWeaponMaxSpread_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFirearm_eventGetWeaponMaxSpread_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponFirearm_GetWeaponMaxSpread_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_GetWeaponMaxSpread_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetWeaponMaxSpread_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_GetWeaponMaxSpread_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "GetWeaponMaxSpread", Z_Construct_UFunction_AWeaponFirearm_GetWeaponMaxSpread_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetWeaponMaxSpread_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponFirearm_GetWeaponMaxSpread_Statics::WeaponFirearm_eventGetWeaponMaxSpread_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetWeaponMaxSpread_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_GetWeaponMaxSpread_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponFirearm_GetWeaponMaxSpread_Statics::WeaponFirearm_eventGetWeaponMaxSpread_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponFirearm_GetWeaponMaxSpread()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_GetWeaponMaxSpread_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execGetWeaponMaxSpread)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetWeaponMaxSpread();
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function GetWeaponMaxSpread *********************************

// ********** Begin Class AWeaponFirearm Function GetWeaponRecoilStrength **************************
struct Z_Construct_UFunction_AWeaponFirearm_GetWeaponRecoilStrength_Statics
{
	struct WeaponFirearm_eventGetWeaponRecoilStrength_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponFirearm_GetWeaponRecoilStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFirearm_eventGetWeaponRecoilStrength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponFirearm_GetWeaponRecoilStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_GetWeaponRecoilStrength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetWeaponRecoilStrength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_GetWeaponRecoilStrength_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "GetWeaponRecoilStrength", Z_Construct_UFunction_AWeaponFirearm_GetWeaponRecoilStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetWeaponRecoilStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponFirearm_GetWeaponRecoilStrength_Statics::WeaponFirearm_eventGetWeaponRecoilStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetWeaponRecoilStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_GetWeaponRecoilStrength_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponFirearm_GetWeaponRecoilStrength_Statics::WeaponFirearm_eventGetWeaponRecoilStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponFirearm_GetWeaponRecoilStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_GetWeaponRecoilStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execGetWeaponRecoilStrength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetWeaponRecoilStrength();
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function GetWeaponRecoilStrength ****************************

// ********** Begin Class AWeaponFirearm Function GetWeaponReloadTime ******************************
struct Z_Construct_UFunction_AWeaponFirearm_GetWeaponReloadTime_Statics
{
	struct WeaponFirearm_eventGetWeaponReloadTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponFirearm_GetWeaponReloadTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFirearm_eventGetWeaponReloadTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponFirearm_GetWeaponReloadTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_GetWeaponReloadTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetWeaponReloadTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_GetWeaponReloadTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "GetWeaponReloadTime", Z_Construct_UFunction_AWeaponFirearm_GetWeaponReloadTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetWeaponReloadTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponFirearm_GetWeaponReloadTime_Statics::WeaponFirearm_eventGetWeaponReloadTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetWeaponReloadTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_GetWeaponReloadTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponFirearm_GetWeaponReloadTime_Statics::WeaponFirearm_eventGetWeaponReloadTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponFirearm_GetWeaponReloadTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_GetWeaponReloadTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execGetWeaponReloadTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetWeaponReloadTime();
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function GetWeaponReloadTime ********************************

// ********** Begin Class AWeaponFirearm Function GetWeaponShootType *******************************
struct Z_Construct_UFunction_AWeaponFirearm_GetWeaponShootType_Statics
{
	struct WeaponFirearm_eventGetWeaponShootType_Parms
	{
		EShootType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AWeaponFirearm_GetWeaponShootType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AWeaponFirearm_GetWeaponShootType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFirearm_eventGetWeaponShootType_Parms, ReturnValue), Z_Construct_UEnum_WeaponSystem_EShootType, METADATA_PARAMS(0, nullptr) }; // 1661658870
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponFirearm_GetWeaponShootType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_GetWeaponShootType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_GetWeaponShootType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetWeaponShootType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_GetWeaponShootType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "GetWeaponShootType", Z_Construct_UFunction_AWeaponFirearm_GetWeaponShootType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetWeaponShootType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponFirearm_GetWeaponShootType_Statics::WeaponFirearm_eventGetWeaponShootType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetWeaponShootType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_GetWeaponShootType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponFirearm_GetWeaponShootType_Statics::WeaponFirearm_eventGetWeaponShootType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponFirearm_GetWeaponShootType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_GetWeaponShootType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execGetWeaponShootType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EShootType*)Z_Param__Result=P_THIS->GetWeaponShootType();
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function GetWeaponShootType *********************************

// ********** Begin Class AWeaponFirearm Function GetWeaponSpread **********************************
struct Z_Construct_UFunction_AWeaponFirearm_GetWeaponSpread_Statics
{
	struct WeaponFirearm_eventGetWeaponSpread_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponFirearm_GetWeaponSpread_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFirearm_eventGetWeaponSpread_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponFirearm_GetWeaponSpread_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_GetWeaponSpread_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetWeaponSpread_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_GetWeaponSpread_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "GetWeaponSpread", Z_Construct_UFunction_AWeaponFirearm_GetWeaponSpread_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetWeaponSpread_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponFirearm_GetWeaponSpread_Statics::WeaponFirearm_eventGetWeaponSpread_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_GetWeaponSpread_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_GetWeaponSpread_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponFirearm_GetWeaponSpread_Statics::WeaponFirearm_eventGetWeaponSpread_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponFirearm_GetWeaponSpread()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_GetWeaponSpread_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execGetWeaponSpread)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetWeaponSpread();
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function GetWeaponSpread ************************************

// ********** Begin Class AWeaponFirearm Function HasJustShot **************************************
struct Z_Construct_UFunction_AWeaponFirearm_HasJustShot_Statics
{
	struct WeaponFirearm_eventHasJustShot_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AWeaponFirearm_HasJustShot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WeaponFirearm_eventHasJustShot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeaponFirearm_HasJustShot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponFirearm_eventHasJustShot_Parms), &Z_Construct_UFunction_AWeaponFirearm_HasJustShot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponFirearm_HasJustShot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_HasJustShot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_HasJustShot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_HasJustShot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "HasJustShot", Z_Construct_UFunction_AWeaponFirearm_HasJustShot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_HasJustShot_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponFirearm_HasJustShot_Statics::WeaponFirearm_eventHasJustShot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_HasJustShot_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_HasJustShot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponFirearm_HasJustShot_Statics::WeaponFirearm_eventHasJustShot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponFirearm_HasJustShot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_HasJustShot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execHasJustShot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasJustShot();
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function HasJustShot ****************************************

// ********** Begin Class AWeaponFirearm Function InstantSetSpread *********************************
struct Z_Construct_UFunction_AWeaponFirearm_InstantSetSpread_Statics
{
	struct WeaponFirearm_eventInstantSetSpread_Parms
	{
		float InSpread;
		bool bOverrideDefault;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_bOverrideDefault", "true" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSpread_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDefault_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InSpread;
	static void NewProp_bOverrideDefault_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDefault;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponFirearm_InstantSetSpread_Statics::NewProp_InSpread = { "InSpread", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFirearm_eventInstantSetSpread_Parms, InSpread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSpread_MetaData), NewProp_InSpread_MetaData) };
void Z_Construct_UFunction_AWeaponFirearm_InstantSetSpread_Statics::NewProp_bOverrideDefault_SetBit(void* Obj)
{
	((WeaponFirearm_eventInstantSetSpread_Parms*)Obj)->bOverrideDefault = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeaponFirearm_InstantSetSpread_Statics::NewProp_bOverrideDefault = { "bOverrideDefault", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponFirearm_eventInstantSetSpread_Parms), &Z_Construct_UFunction_AWeaponFirearm_InstantSetSpread_Statics::NewProp_bOverrideDefault_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideDefault_MetaData), NewProp_bOverrideDefault_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponFirearm_InstantSetSpread_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_InstantSetSpread_Statics::NewProp_InSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_InstantSetSpread_Statics::NewProp_bOverrideDefault,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_InstantSetSpread_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_InstantSetSpread_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "InstantSetSpread", Z_Construct_UFunction_AWeaponFirearm_InstantSetSpread_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_InstantSetSpread_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponFirearm_InstantSetSpread_Statics::WeaponFirearm_eventInstantSetSpread_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_InstantSetSpread_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_InstantSetSpread_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponFirearm_InstantSetSpread_Statics::WeaponFirearm_eventInstantSetSpread_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponFirearm_InstantSetSpread()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_InstantSetSpread_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execInstantSetSpread)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InSpread);
	P_GET_UBOOL(Z_Param_bOverrideDefault);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InstantSetSpread(Z_Param_InSpread,Z_Param_bOverrideDefault);
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function InstantSetSpread ***********************************

// ********** Begin Class AWeaponFirearm Function InterruptReload **********************************
struct Z_Construct_UFunction_AWeaponFirearm_InterruptReload_Statics
{
	struct WeaponFirearm_eventInterruptReload_Parms
	{
		float CharacterBlendOutTime;
		float WeaponBlendOutTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_CharacterBlendOutTime", "0.000000" },
		{ "CPP_Default_WeaponBlendOutTime", "0.000000" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CharacterBlendOutTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponBlendOutTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponFirearm_InterruptReload_Statics::NewProp_CharacterBlendOutTime = { "CharacterBlendOutTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFirearm_eventInterruptReload_Parms, CharacterBlendOutTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponFirearm_InterruptReload_Statics::NewProp_WeaponBlendOutTime = { "WeaponBlendOutTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFirearm_eventInterruptReload_Parms, WeaponBlendOutTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponFirearm_InterruptReload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_InterruptReload_Statics::NewProp_CharacterBlendOutTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_InterruptReload_Statics::NewProp_WeaponBlendOutTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_InterruptReload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_InterruptReload_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "InterruptReload", Z_Construct_UFunction_AWeaponFirearm_InterruptReload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_InterruptReload_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponFirearm_InterruptReload_Statics::WeaponFirearm_eventInterruptReload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_InterruptReload_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_InterruptReload_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponFirearm_InterruptReload_Statics::WeaponFirearm_eventInterruptReload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponFirearm_InterruptReload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_InterruptReload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execInterruptReload)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_CharacterBlendOutTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_WeaponBlendOutTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InterruptReload(Z_Param_CharacterBlendOutTime,Z_Param_WeaponBlendOutTime);
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function InterruptReload ************************************

// ********** Begin Class AWeaponFirearm Function IsAiming *****************************************
struct Z_Construct_UFunction_AWeaponFirearm_IsAiming_Statics
{
	struct WeaponFirearm_eventIsAiming_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AWeaponFirearm_IsAiming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WeaponFirearm_eventIsAiming_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeaponFirearm_IsAiming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponFirearm_eventIsAiming_Parms), &Z_Construct_UFunction_AWeaponFirearm_IsAiming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponFirearm_IsAiming_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_IsAiming_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_IsAiming_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_IsAiming_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "IsAiming", Z_Construct_UFunction_AWeaponFirearm_IsAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_IsAiming_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponFirearm_IsAiming_Statics::WeaponFirearm_eventIsAiming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_IsAiming_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_IsAiming_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponFirearm_IsAiming_Statics::WeaponFirearm_eventIsAiming_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponFirearm_IsAiming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_IsAiming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execIsAiming)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAiming();
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function IsAiming *******************************************

// ********** Begin Class AWeaponFirearm Function IsReloading **************************************
struct Z_Construct_UFunction_AWeaponFirearm_IsReloading_Statics
{
	struct WeaponFirearm_eventIsReloading_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AWeaponFirearm_IsReloading_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WeaponFirearm_eventIsReloading_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeaponFirearm_IsReloading_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponFirearm_eventIsReloading_Parms), &Z_Construct_UFunction_AWeaponFirearm_IsReloading_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponFirearm_IsReloading_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_IsReloading_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_IsReloading_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_IsReloading_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "IsReloading", Z_Construct_UFunction_AWeaponFirearm_IsReloading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_IsReloading_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponFirearm_IsReloading_Statics::WeaponFirearm_eventIsReloading_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_IsReloading_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_IsReloading_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponFirearm_IsReloading_Statics::WeaponFirearm_eventIsReloading_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponFirearm_IsReloading()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_IsReloading_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execIsReloading)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsReloading();
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function IsReloading ****************************************

// ********** Begin Class AWeaponFirearm Function OnCurrentAmmoChanged *****************************
struct WeaponFirearm_eventOnCurrentAmmoChanged_Parms
{
	int32 CurrentAmmo;
	int32 MagSize;
};
static FName NAME_AWeaponFirearm_OnCurrentAmmoChanged = FName(TEXT("OnCurrentAmmoChanged"));
void AWeaponFirearm::OnCurrentAmmoChanged(int32 CurrentAmmo, int32 MagSize)
{
	UFunction* Func = FindFunctionChecked(NAME_AWeaponFirearm_OnCurrentAmmoChanged);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		WeaponFirearm_eventOnCurrentAmmoChanged_Parms Parms;
		Parms.CurrentAmmo=CurrentAmmo;
		Parms.MagSize=MagSize;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnCurrentAmmoChanged_Implementation(CurrentAmmo, MagSize);
	}
}
struct Z_Construct_UFunction_AWeaponFirearm_OnCurrentAmmoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MagSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWeaponFirearm_OnCurrentAmmoChanged_Statics::NewProp_CurrentAmmo = { "CurrentAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFirearm_eventOnCurrentAmmoChanged_Parms, CurrentAmmo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWeaponFirearm_OnCurrentAmmoChanged_Statics::NewProp_MagSize = { "MagSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFirearm_eventOnCurrentAmmoChanged_Parms, MagSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponFirearm_OnCurrentAmmoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_OnCurrentAmmoChanged_Statics::NewProp_CurrentAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_OnCurrentAmmoChanged_Statics::NewProp_MagSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_OnCurrentAmmoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_OnCurrentAmmoChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "OnCurrentAmmoChanged", Z_Construct_UFunction_AWeaponFirearm_OnCurrentAmmoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_OnCurrentAmmoChanged_Statics::PropPointers), sizeof(WeaponFirearm_eventOnCurrentAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_OnCurrentAmmoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_OnCurrentAmmoChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(WeaponFirearm_eventOnCurrentAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponFirearm_OnCurrentAmmoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_OnCurrentAmmoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execOnCurrentAmmoChanged)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CurrentAmmo);
	P_GET_PROPERTY(FIntProperty,Z_Param_MagSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCurrentAmmoChanged_Implementation(Z_Param_CurrentAmmo,Z_Param_MagSize);
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function OnCurrentAmmoChanged *******************************

// ********** Begin Class AWeaponFirearm Function OnDisableAim *************************************
static FName NAME_AWeaponFirearm_OnDisableAim = FName(TEXT("OnDisableAim"));
void AWeaponFirearm::OnDisableAim()
{
	UFunction* Func = FindFunctionChecked(NAME_AWeaponFirearm_OnDisableAim);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnDisableAim_Implementation();
	}
}
struct Z_Construct_UFunction_AWeaponFirearm_OnDisableAim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_OnDisableAim_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "OnDisableAim", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_OnDisableAim_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_OnDisableAim_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWeaponFirearm_OnDisableAim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_OnDisableAim_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execOnDisableAim)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDisableAim_Implementation();
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function OnDisableAim ***************************************

// ********** Begin Class AWeaponFirearm Function OnEnableAim **************************************
static FName NAME_AWeaponFirearm_OnEnableAim = FName(TEXT("OnEnableAim"));
void AWeaponFirearm::OnEnableAim()
{
	UFunction* Func = FindFunctionChecked(NAME_AWeaponFirearm_OnEnableAim);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnEnableAim_Implementation();
	}
}
struct Z_Construct_UFunction_AWeaponFirearm_OnEnableAim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_OnEnableAim_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "OnEnableAim", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_OnEnableAim_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_OnEnableAim_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWeaponFirearm_OnEnableAim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_OnEnableAim_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execOnEnableAim)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEnableAim_Implementation();
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function OnEnableAim ****************************************

// ********** Begin Class AWeaponFirearm Function OnEndShootSequence *******************************
static FName NAME_AWeaponFirearm_OnEndShootSequence = FName(TEXT("OnEndShootSequence"));
void AWeaponFirearm::OnEndShootSequence()
{
	UFunction* Func = FindFunctionChecked(NAME_AWeaponFirearm_OnEndShootSequence);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnEndShootSequence_Implementation();
	}
}
struct Z_Construct_UFunction_AWeaponFirearm_OnEndShootSequence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_OnEndShootSequence_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "OnEndShootSequence", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_OnEndShootSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_OnEndShootSequence_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWeaponFirearm_OnEndShootSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_OnEndShootSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execOnEndShootSequence)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEndShootSequence_Implementation();
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function OnEndShootSequence *********************************

// ********** Begin Class AWeaponFirearm Function OnMagEmpty ***************************************
static FName NAME_AWeaponFirearm_OnMagEmpty = FName(TEXT("OnMagEmpty"));
void AWeaponFirearm::OnMagEmpty()
{
	UFunction* Func = FindFunctionChecked(NAME_AWeaponFirearm_OnMagEmpty);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnMagEmpty_Implementation();
	}
}
struct Z_Construct_UFunction_AWeaponFirearm_OnMagEmpty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_OnMagEmpty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "OnMagEmpty", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_OnMagEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_OnMagEmpty_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWeaponFirearm_OnMagEmpty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_OnMagEmpty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execOnMagEmpty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMagEmpty_Implementation();
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function OnMagEmpty *****************************************

// ********** Begin Class AWeaponFirearm Function OnReloadFail *************************************
static FName NAME_AWeaponFirearm_OnReloadFail = FName(TEXT("OnReloadFail"));
void AWeaponFirearm::OnReloadFail()
{
	UFunction* Func = FindFunctionChecked(NAME_AWeaponFirearm_OnReloadFail);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnReloadFail_Implementation();
	}
}
struct Z_Construct_UFunction_AWeaponFirearm_OnReloadFail_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_OnReloadFail_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "OnReloadFail", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_OnReloadFail_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_OnReloadFail_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWeaponFirearm_OnReloadFail()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_OnReloadFail_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execOnReloadFail)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnReloadFail_Implementation();
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function OnReloadFail ***************************************

// ********** Begin Class AWeaponFirearm Function OnReloadMontageEnded *****************************
struct Z_Construct_UFunction_AWeaponFirearm_OnReloadMontageEnded_Statics
{
	struct WeaponFirearm_eventOnReloadMontageEnded_Parms
	{
		bool bInterrupted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInterrupted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bInterrupted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AWeaponFirearm_OnReloadMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
{
	((WeaponFirearm_eventOnReloadMontageEnded_Parms*)Obj)->bInterrupted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeaponFirearm_OnReloadMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponFirearm_eventOnReloadMontageEnded_Parms), &Z_Construct_UFunction_AWeaponFirearm_OnReloadMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInterrupted_MetaData), NewProp_bInterrupted_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponFirearm_OnReloadMontageEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_OnReloadMontageEnded_Statics::NewProp_bInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_OnReloadMontageEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_OnReloadMontageEnded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "OnReloadMontageEnded", Z_Construct_UFunction_AWeaponFirearm_OnReloadMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_OnReloadMontageEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponFirearm_OnReloadMontageEnded_Statics::WeaponFirearm_eventOnReloadMontageEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_OnReloadMontageEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_OnReloadMontageEnded_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponFirearm_OnReloadMontageEnded_Statics::WeaponFirearm_eventOnReloadMontageEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponFirearm_OnReloadMontageEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_OnReloadMontageEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execOnReloadMontageEnded)
{
	P_GET_UBOOL(Z_Param_bInterrupted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnReloadMontageEnded(Z_Param_bInterrupted);
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function OnReloadMontageEnded *******************************

// ********** Begin Class AWeaponFirearm Function OnReloadSuccess **********************************
struct WeaponFirearm_eventOnReloadSuccess_Parms
{
	float Remain;
	float ReloadedAmmo;
};
static FName NAME_AWeaponFirearm_OnReloadSuccess = FName(TEXT("OnReloadSuccess"));
void AWeaponFirearm::OnReloadSuccess(float Remain, float ReloadedAmmo)
{
	UFunction* Func = FindFunctionChecked(NAME_AWeaponFirearm_OnReloadSuccess);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		WeaponFirearm_eventOnReloadSuccess_Parms Parms;
		Parms.Remain=Remain;
		Parms.ReloadedAmmo=ReloadedAmmo;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnReloadSuccess_Implementation(Remain, ReloadedAmmo);
	}
}
struct Z_Construct_UFunction_AWeaponFirearm_OnReloadSuccess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Remain;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReloadedAmmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponFirearm_OnReloadSuccess_Statics::NewProp_Remain = { "Remain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFirearm_eventOnReloadSuccess_Parms, Remain), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponFirearm_OnReloadSuccess_Statics::NewProp_ReloadedAmmo = { "ReloadedAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFirearm_eventOnReloadSuccess_Parms, ReloadedAmmo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponFirearm_OnReloadSuccess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_OnReloadSuccess_Statics::NewProp_Remain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_OnReloadSuccess_Statics::NewProp_ReloadedAmmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_OnReloadSuccess_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_OnReloadSuccess_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "OnReloadSuccess", Z_Construct_UFunction_AWeaponFirearm_OnReloadSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_OnReloadSuccess_Statics::PropPointers), sizeof(WeaponFirearm_eventOnReloadSuccess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_OnReloadSuccess_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_OnReloadSuccess_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(WeaponFirearm_eventOnReloadSuccess_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponFirearm_OnReloadSuccess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_OnReloadSuccess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execOnReloadSuccess)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Remain);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ReloadedAmmo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnReloadSuccess_Implementation(Z_Param_Remain,Z_Param_ReloadedAmmo);
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function OnReloadSuccess ************************************

// ********** Begin Class AWeaponFirearm Function Refill *******************************************
struct Z_Construct_UFunction_AWeaponFirearm_Refill_Statics
{
	struct WeaponFirearm_eventRefill_Parms
	{
		int32 Ammo;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Ammo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWeaponFirearm_Refill_Statics::NewProp_Ammo = { "Ammo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFirearm_eventRefill_Parms, Ammo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWeaponFirearm_Refill_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFirearm_eventRefill_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponFirearm_Refill_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_Refill_Statics::NewProp_Ammo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_Refill_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_Refill_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_Refill_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "Refill", Z_Construct_UFunction_AWeaponFirearm_Refill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_Refill_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponFirearm_Refill_Statics::WeaponFirearm_eventRefill_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_Refill_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_Refill_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponFirearm_Refill_Statics::WeaponFirearm_eventRefill_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponFirearm_Refill()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_Refill_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execRefill)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Ammo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Refill(Z_Param_Ammo);
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function Refill *********************************************

// ********** Begin Class AWeaponFirearm Function RefillAllMagazine ********************************
struct Z_Construct_UFunction_AWeaponFirearm_RefillAllMagazine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_RefillAllMagazine_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "RefillAllMagazine", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_RefillAllMagazine_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_RefillAllMagazine_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWeaponFirearm_RefillAllMagazine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_RefillAllMagazine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execRefillAllMagazine)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefillAllMagazine();
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function RefillAllMagazine **********************************

// ********** Begin Class AWeaponFirearm Function ReloadWithMontage ********************************
struct Z_Construct_UFunction_AWeaponFirearm_ReloadWithMontage_Statics
{
	struct WeaponFirearm_eventReloadWithMontage_Parms
	{
		UAmmoTypeData* AmmoData;
		int32 Ammo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ammo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AmmoData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Ammo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponFirearm_ReloadWithMontage_Statics::NewProp_AmmoData = { "AmmoData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFirearm_eventReloadWithMontage_Parms, AmmoData), Z_Construct_UClass_UAmmoTypeData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWeaponFirearm_ReloadWithMontage_Statics::NewProp_Ammo = { "Ammo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFirearm_eventReloadWithMontage_Parms, Ammo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ammo_MetaData), NewProp_Ammo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponFirearm_ReloadWithMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_ReloadWithMontage_Statics::NewProp_AmmoData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_ReloadWithMontage_Statics::NewProp_Ammo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_ReloadWithMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_ReloadWithMontage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "ReloadWithMontage", Z_Construct_UFunction_AWeaponFirearm_ReloadWithMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_ReloadWithMontage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponFirearm_ReloadWithMontage_Statics::WeaponFirearm_eventReloadWithMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_ReloadWithMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_ReloadWithMontage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponFirearm_ReloadWithMontage_Statics::WeaponFirearm_eventReloadWithMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponFirearm_ReloadWithMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_ReloadWithMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execReloadWithMontage)
{
	P_GET_OBJECT(UAmmoTypeData,Z_Param_AmmoData);
	P_GET_PROPERTY(FIntProperty,Z_Param_Ammo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReloadWithMontage(Z_Param_AmmoData,Z_Param_Ammo);
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function ReloadWithMontage **********************************

// ********** Begin Class AWeaponFirearm Function ResetCooldown ************************************
struct Z_Construct_UFunction_AWeaponFirearm_ResetCooldown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_ResetCooldown_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "ResetCooldown", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_ResetCooldown_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_ResetCooldown_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWeaponFirearm_ResetCooldown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_ResetCooldown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execResetCooldown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetCooldown();
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function ResetCooldown **************************************

// ********** Begin Class AWeaponFirearm Function ResetSpread **************************************
struct Z_Construct_UFunction_AWeaponFirearm_ResetSpread_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_ResetSpread_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "ResetSpread", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_ResetSpread_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_ResetSpread_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWeaponFirearm_ResetSpread()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_ResetSpread_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execResetSpread)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetSpread();
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function ResetSpread ****************************************

// ********** Begin Class AWeaponFirearm Function ResetToDefaultShootType **************************
struct Z_Construct_UFunction_AWeaponFirearm_ResetToDefaultShootType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_ResetToDefaultShootType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "ResetToDefaultShootType", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_ResetToDefaultShootType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_ResetToDefaultShootType_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWeaponFirearm_ResetToDefaultShootType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_ResetToDefaultShootType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execResetToDefaultShootType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetToDefaultShootType();
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function ResetToDefaultShootType ****************************

// ********** Begin Class AWeaponFirearm Function SetAim *******************************************
struct Z_Construct_UFunction_AWeaponFirearm_SetAim_Statics
{
	struct WeaponFirearm_eventSetAim_Parms
	{
		bool bIsEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AWeaponFirearm_SetAim_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
{
	((WeaponFirearm_eventSetAim_Parms*)Obj)->bIsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeaponFirearm_SetAim_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponFirearm_eventSetAim_Parms), &Z_Construct_UFunction_AWeaponFirearm_SetAim_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponFirearm_SetAim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_SetAim_Statics::NewProp_bIsEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_SetAim_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_SetAim_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "SetAim", Z_Construct_UFunction_AWeaponFirearm_SetAim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_SetAim_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponFirearm_SetAim_Statics::WeaponFirearm_eventSetAim_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_SetAim_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_SetAim_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponFirearm_SetAim_Statics::WeaponFirearm_eventSetAim_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponFirearm_SetAim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_SetAim_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execSetAim)
{
	P_GET_UBOOL(Z_Param_bIsEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAim(Z_Param_bIsEnabled);
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function SetAim *********************************************

// ********** Begin Class AWeaponFirearm Function SetCurrentAmmo ***********************************
struct Z_Construct_UFunction_AWeaponFirearm_SetCurrentAmmo_Statics
{
	struct WeaponFirearm_eventSetCurrentAmmo_Parms
	{
		int32 NewAmmo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewAmmo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewAmmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWeaponFirearm_SetCurrentAmmo_Statics::NewProp_NewAmmo = { "NewAmmo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFirearm_eventSetCurrentAmmo_Parms, NewAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewAmmo_MetaData), NewProp_NewAmmo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponFirearm_SetCurrentAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_SetCurrentAmmo_Statics::NewProp_NewAmmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_SetCurrentAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_SetCurrentAmmo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "SetCurrentAmmo", Z_Construct_UFunction_AWeaponFirearm_SetCurrentAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_SetCurrentAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponFirearm_SetCurrentAmmo_Statics::WeaponFirearm_eventSetCurrentAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_SetCurrentAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_SetCurrentAmmo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponFirearm_SetCurrentAmmo_Statics::WeaponFirearm_eventSetCurrentAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponFirearm_SetCurrentAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_SetCurrentAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execSetCurrentAmmo)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewAmmo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentAmmo(Z_Param_NewAmmo);
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function SetCurrentAmmo *************************************

// ********** Begin Class AWeaponFirearm Function SetWeaponAmmoType ********************************
struct Z_Construct_UFunction_AWeaponFirearm_SetWeaponAmmoType_Statics
{
	struct WeaponFirearm_eventSetWeaponAmmoType_Parms
	{
		UAmmoTypeData* NewAmmoType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAmmoType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponFirearm_SetWeaponAmmoType_Statics::NewProp_NewAmmoType = { "NewAmmoType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFirearm_eventSetWeaponAmmoType_Parms, NewAmmoType), Z_Construct_UClass_UAmmoTypeData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponFirearm_SetWeaponAmmoType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_SetWeaponAmmoType_Statics::NewProp_NewAmmoType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_SetWeaponAmmoType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_SetWeaponAmmoType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "SetWeaponAmmoType", Z_Construct_UFunction_AWeaponFirearm_SetWeaponAmmoType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_SetWeaponAmmoType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponFirearm_SetWeaponAmmoType_Statics::WeaponFirearm_eventSetWeaponAmmoType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_SetWeaponAmmoType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_SetWeaponAmmoType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponFirearm_SetWeaponAmmoType_Statics::WeaponFirearm_eventSetWeaponAmmoType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponFirearm_SetWeaponAmmoType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_SetWeaponAmmoType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execSetWeaponAmmoType)
{
	P_GET_OBJECT(UAmmoTypeData,Z_Param_NewAmmoType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWeaponAmmoType(Z_Param_NewAmmoType);
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function SetWeaponAmmoType **********************************

// ********** Begin Class AWeaponFirearm Function SetWeaponFireRate ********************************
struct Z_Construct_UFunction_AWeaponFirearm_SetWeaponFireRate_Statics
{
	struct WeaponFirearm_eventSetWeaponFireRate_Parms
	{
		float NewFireRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewFireRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewFireRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponFirearm_SetWeaponFireRate_Statics::NewProp_NewFireRate = { "NewFireRate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFirearm_eventSetWeaponFireRate_Parms, NewFireRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewFireRate_MetaData), NewProp_NewFireRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponFirearm_SetWeaponFireRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_SetWeaponFireRate_Statics::NewProp_NewFireRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_SetWeaponFireRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_SetWeaponFireRate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "SetWeaponFireRate", Z_Construct_UFunction_AWeaponFirearm_SetWeaponFireRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_SetWeaponFireRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponFirearm_SetWeaponFireRate_Statics::WeaponFirearm_eventSetWeaponFireRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_SetWeaponFireRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_SetWeaponFireRate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponFirearm_SetWeaponFireRate_Statics::WeaponFirearm_eventSetWeaponFireRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponFirearm_SetWeaponFireRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_SetWeaponFireRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execSetWeaponFireRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewFireRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWeaponFireRate(Z_Param_NewFireRate);
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function SetWeaponFireRate **********************************

// ********** Begin Class AWeaponFirearm Function SetWeaponMagSize *********************************
struct Z_Construct_UFunction_AWeaponFirearm_SetWeaponMagSize_Statics
{
	struct WeaponFirearm_eventSetWeaponMagSize_Parms
	{
		int32 NewMagSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewMagSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewMagSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWeaponFirearm_SetWeaponMagSize_Statics::NewProp_NewMagSize = { "NewMagSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFirearm_eventSetWeaponMagSize_Parms, NewMagSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewMagSize_MetaData), NewProp_NewMagSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponFirearm_SetWeaponMagSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_SetWeaponMagSize_Statics::NewProp_NewMagSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_SetWeaponMagSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_SetWeaponMagSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "SetWeaponMagSize", Z_Construct_UFunction_AWeaponFirearm_SetWeaponMagSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_SetWeaponMagSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponFirearm_SetWeaponMagSize_Statics::WeaponFirearm_eventSetWeaponMagSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_SetWeaponMagSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_SetWeaponMagSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponFirearm_SetWeaponMagSize_Statics::WeaponFirearm_eventSetWeaponMagSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponFirearm_SetWeaponMagSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_SetWeaponMagSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execSetWeaponMagSize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewMagSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWeaponMagSize(Z_Param_NewMagSize);
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function SetWeaponMagSize ***********************************

// ********** Begin Class AWeaponFirearm Function SetWeaponMaxRange ********************************
struct Z_Construct_UFunction_AWeaponFirearm_SetWeaponMaxRange_Statics
{
	struct WeaponFirearm_eventSetWeaponMaxRange_Parms
	{
		float NewRange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponFirearm_SetWeaponMaxRange_Statics::NewProp_NewRange = { "NewRange", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFirearm_eventSetWeaponMaxRange_Parms, NewRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewRange_MetaData), NewProp_NewRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponFirearm_SetWeaponMaxRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_SetWeaponMaxRange_Statics::NewProp_NewRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_SetWeaponMaxRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_SetWeaponMaxRange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "SetWeaponMaxRange", Z_Construct_UFunction_AWeaponFirearm_SetWeaponMaxRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_SetWeaponMaxRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponFirearm_SetWeaponMaxRange_Statics::WeaponFirearm_eventSetWeaponMaxRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_SetWeaponMaxRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_SetWeaponMaxRange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponFirearm_SetWeaponMaxRange_Statics::WeaponFirearm_eventSetWeaponMaxRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponFirearm_SetWeaponMaxRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_SetWeaponMaxRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execSetWeaponMaxRange)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewRange);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWeaponMaxRange(Z_Param_NewRange);
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function SetWeaponMaxRange **********************************

// ********** Begin Class AWeaponFirearm Function SetWeaponRecoilStrength **************************
struct Z_Construct_UFunction_AWeaponFirearm_SetWeaponRecoilStrength_Statics
{
	struct WeaponFirearm_eventSetWeaponRecoilStrength_Parms
	{
		float NewRecoilStrength;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewRecoilStrength_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRecoilStrength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponFirearm_SetWeaponRecoilStrength_Statics::NewProp_NewRecoilStrength = { "NewRecoilStrength", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFirearm_eventSetWeaponRecoilStrength_Parms, NewRecoilStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewRecoilStrength_MetaData), NewProp_NewRecoilStrength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponFirearm_SetWeaponRecoilStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_SetWeaponRecoilStrength_Statics::NewProp_NewRecoilStrength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_SetWeaponRecoilStrength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_SetWeaponRecoilStrength_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "SetWeaponRecoilStrength", Z_Construct_UFunction_AWeaponFirearm_SetWeaponRecoilStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_SetWeaponRecoilStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponFirearm_SetWeaponRecoilStrength_Statics::WeaponFirearm_eventSetWeaponRecoilStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_SetWeaponRecoilStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_SetWeaponRecoilStrength_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponFirearm_SetWeaponRecoilStrength_Statics::WeaponFirearm_eventSetWeaponRecoilStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponFirearm_SetWeaponRecoilStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_SetWeaponRecoilStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execSetWeaponRecoilStrength)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewRecoilStrength);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWeaponRecoilStrength(Z_Param_NewRecoilStrength);
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function SetWeaponRecoilStrength ****************************

// ********** Begin Class AWeaponFirearm Function SetWeaponReloadTime ******************************
struct Z_Construct_UFunction_AWeaponFirearm_SetWeaponReloadTime_Statics
{
	struct WeaponFirearm_eventSetWeaponReloadTime_Parms
	{
		float NewReloadTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewReloadTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewReloadTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponFirearm_SetWeaponReloadTime_Statics::NewProp_NewReloadTime = { "NewReloadTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFirearm_eventSetWeaponReloadTime_Parms, NewReloadTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewReloadTime_MetaData), NewProp_NewReloadTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponFirearm_SetWeaponReloadTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_SetWeaponReloadTime_Statics::NewProp_NewReloadTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_SetWeaponReloadTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_SetWeaponReloadTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "SetWeaponReloadTime", Z_Construct_UFunction_AWeaponFirearm_SetWeaponReloadTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_SetWeaponReloadTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponFirearm_SetWeaponReloadTime_Statics::WeaponFirearm_eventSetWeaponReloadTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_SetWeaponReloadTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_SetWeaponReloadTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponFirearm_SetWeaponReloadTime_Statics::WeaponFirearm_eventSetWeaponReloadTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponFirearm_SetWeaponReloadTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_SetWeaponReloadTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execSetWeaponReloadTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewReloadTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWeaponReloadTime(Z_Param_NewReloadTime);
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function SetWeaponReloadTime ********************************

// ********** Begin Class AWeaponFirearm Function SetWeaponShootType *******************************
struct Z_Construct_UFunction_AWeaponFirearm_SetWeaponShootType_Statics
{
	struct WeaponFirearm_eventSetWeaponShootType_Parms
	{
		EShootType NewShootType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewShootType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewShootType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewShootType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AWeaponFirearm_SetWeaponShootType_Statics::NewProp_NewShootType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AWeaponFirearm_SetWeaponShootType_Statics::NewProp_NewShootType = { "NewShootType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFirearm_eventSetWeaponShootType_Parms, NewShootType), Z_Construct_UEnum_WeaponSystem_EShootType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewShootType_MetaData), NewProp_NewShootType_MetaData) }; // 1661658870
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponFirearm_SetWeaponShootType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_SetWeaponShootType_Statics::NewProp_NewShootType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_SetWeaponShootType_Statics::NewProp_NewShootType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_SetWeaponShootType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_SetWeaponShootType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "SetWeaponShootType", Z_Construct_UFunction_AWeaponFirearm_SetWeaponShootType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_SetWeaponShootType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponFirearm_SetWeaponShootType_Statics::WeaponFirearm_eventSetWeaponShootType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_SetWeaponShootType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_SetWeaponShootType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponFirearm_SetWeaponShootType_Statics::WeaponFirearm_eventSetWeaponShootType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponFirearm_SetWeaponShootType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_SetWeaponShootType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execSetWeaponShootType)
{
	P_GET_ENUM(EShootType,Z_Param_NewShootType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWeaponShootType(EShootType(Z_Param_NewShootType));
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function SetWeaponShootType *********************************

// ********** Begin Class AWeaponFirearm Function SetWeaponSpread **********************************
struct Z_Construct_UFunction_AWeaponFirearm_SetWeaponSpread_Statics
{
	struct WeaponFirearm_eventSetWeaponSpread_Parms
	{
		float InSpread;
		bool bOverrideDefault;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_bOverrideDefault", "true" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSpread_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDefault_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InSpread;
	static void NewProp_bOverrideDefault_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDefault;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponFirearm_SetWeaponSpread_Statics::NewProp_InSpread = { "InSpread", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponFirearm_eventSetWeaponSpread_Parms, InSpread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSpread_MetaData), NewProp_InSpread_MetaData) };
void Z_Construct_UFunction_AWeaponFirearm_SetWeaponSpread_Statics::NewProp_bOverrideDefault_SetBit(void* Obj)
{
	((WeaponFirearm_eventSetWeaponSpread_Parms*)Obj)->bOverrideDefault = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeaponFirearm_SetWeaponSpread_Statics::NewProp_bOverrideDefault = { "bOverrideDefault", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponFirearm_eventSetWeaponSpread_Parms), &Z_Construct_UFunction_AWeaponFirearm_SetWeaponSpread_Statics::NewProp_bOverrideDefault_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideDefault_MetaData), NewProp_bOverrideDefault_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponFirearm_SetWeaponSpread_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_SetWeaponSpread_Statics::NewProp_InSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponFirearm_SetWeaponSpread_Statics::NewProp_bOverrideDefault,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_SetWeaponSpread_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponFirearm_SetWeaponSpread_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponFirearm, nullptr, "SetWeaponSpread", Z_Construct_UFunction_AWeaponFirearm_SetWeaponSpread_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_SetWeaponSpread_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponFirearm_SetWeaponSpread_Statics::WeaponFirearm_eventSetWeaponSpread_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponFirearm_SetWeaponSpread_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponFirearm_SetWeaponSpread_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponFirearm_SetWeaponSpread_Statics::WeaponFirearm_eventSetWeaponSpread_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponFirearm_SetWeaponSpread()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponFirearm_SetWeaponSpread_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponFirearm::execSetWeaponSpread)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InSpread);
	P_GET_UBOOL(Z_Param_bOverrideDefault);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWeaponSpread(Z_Param_InSpread,Z_Param_bOverrideDefault);
	P_NATIVE_END;
}
// ********** End Class AWeaponFirearm Function SetWeaponSpread ************************************

// ********** Begin Class AWeaponFirearm ***********************************************************
void AWeaponFirearm::StaticRegisterNativesAWeaponFirearm()
{
	UClass* Class = AWeaponFirearm::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddWeaponDynamicSpread", &AWeaponFirearm::execAddWeaponDynamicSpread },
		{ "CanReload", &AWeaponFirearm::execCanReload },
		{ "GetCurrentAmmo", &AWeaponFirearm::execGetCurrentAmmo },
		{ "GetDefaultSpread", &AWeaponFirearm::execGetDefaultSpread },
		{ "GetNeededAmmo", &AWeaponFirearm::execGetNeededAmmo },
		{ "GetWeaponAmmoType", &AWeaponFirearm::execGetWeaponAmmoType },
		{ "GetWeaponFirearmData", &AWeaponFirearm::execGetWeaponFirearmData },
		{ "GetWeaponFireRate", &AWeaponFirearm::execGetWeaponFireRate },
		{ "GetWeaponMagSize", &AWeaponFirearm::execGetWeaponMagSize },
		{ "GetWeaponMaxRange", &AWeaponFirearm::execGetWeaponMaxRange },
		{ "GetWeaponMaxSpread", &AWeaponFirearm::execGetWeaponMaxSpread },
		{ "GetWeaponRecoilStrength", &AWeaponFirearm::execGetWeaponRecoilStrength },
		{ "GetWeaponReloadTime", &AWeaponFirearm::execGetWeaponReloadTime },
		{ "GetWeaponShootType", &AWeaponFirearm::execGetWeaponShootType },
		{ "GetWeaponSpread", &AWeaponFirearm::execGetWeaponSpread },
		{ "HasJustShot", &AWeaponFirearm::execHasJustShot },
		{ "InstantSetSpread", &AWeaponFirearm::execInstantSetSpread },
		{ "InterruptReload", &AWeaponFirearm::execInterruptReload },
		{ "IsAiming", &AWeaponFirearm::execIsAiming },
		{ "IsReloading", &AWeaponFirearm::execIsReloading },
		{ "OnCurrentAmmoChanged", &AWeaponFirearm::execOnCurrentAmmoChanged },
		{ "OnDisableAim", &AWeaponFirearm::execOnDisableAim },
		{ "OnEnableAim", &AWeaponFirearm::execOnEnableAim },
		{ "OnEndShootSequence", &AWeaponFirearm::execOnEndShootSequence },
		{ "OnMagEmpty", &AWeaponFirearm::execOnMagEmpty },
		{ "OnReloadFail", &AWeaponFirearm::execOnReloadFail },
		{ "OnReloadMontageEnded", &AWeaponFirearm::execOnReloadMontageEnded },
		{ "OnReloadSuccess", &AWeaponFirearm::execOnReloadSuccess },
		{ "Refill", &AWeaponFirearm::execRefill },
		{ "RefillAllMagazine", &AWeaponFirearm::execRefillAllMagazine },
		{ "ReloadWithMontage", &AWeaponFirearm::execReloadWithMontage },
		{ "ResetCooldown", &AWeaponFirearm::execResetCooldown },
		{ "ResetSpread", &AWeaponFirearm::execResetSpread },
		{ "ResetToDefaultShootType", &AWeaponFirearm::execResetToDefaultShootType },
		{ "SetAim", &AWeaponFirearm::execSetAim },
		{ "SetCurrentAmmo", &AWeaponFirearm::execSetCurrentAmmo },
		{ "SetWeaponAmmoType", &AWeaponFirearm::execSetWeaponAmmoType },
		{ "SetWeaponFireRate", &AWeaponFirearm::execSetWeaponFireRate },
		{ "SetWeaponMagSize", &AWeaponFirearm::execSetWeaponMagSize },
		{ "SetWeaponMaxRange", &AWeaponFirearm::execSetWeaponMaxRange },
		{ "SetWeaponRecoilStrength", &AWeaponFirearm::execSetWeaponRecoilStrength },
		{ "SetWeaponReloadTime", &AWeaponFirearm::execSetWeaponReloadTime },
		{ "SetWeaponShootType", &AWeaponFirearm::execSetWeaponShootType },
		{ "SetWeaponSpread", &AWeaponFirearm::execSetWeaponSpread },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AWeaponFirearm;
UClass* AWeaponFirearm::GetPrivateStaticClass()
{
	using TClass = AWeaponFirearm;
	if (!Z_Registration_Info_UClass_AWeaponFirearm.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WeaponFirearm"),
			Z_Registration_Info_UClass_AWeaponFirearm.InnerSingleton,
			StaticRegisterNativesAWeaponFirearm,
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
	return Z_Registration_Info_UClass_AWeaponFirearm.InnerSingleton;
}
UClass* Z_Construct_UClass_AWeaponFirearm_NoRegister()
{
	return AWeaponFirearm::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AWeaponFirearm_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/WeaponFirearm.h" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReloadStarted_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReloadEnded_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReloadInsertedAmmo_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnReloadInterrupted_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAimEnabled_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAimDisabled_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shooter_MetaData[] = {
		{ "Category", "WeaponFirearm" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirearmMontagesManager_MetaData[] = {
		{ "Category", "WeaponFirearm" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponFirearmData_MetaData[] = {
		{ "Category", "Weapon|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -- Data --\n" },
#endif
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-- Data --" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultShootType_MetaData[] = {
		{ "Category", "Weapon|Configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -- Configuration --\n" },
#endif
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-- Configuration --" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootBarrelSocketName_MetaData[] = {
		{ "Category", "Weapon|Configuration" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadMontage_MetaData[] = {
		{ "Category", "Weapon|Montages" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -- Montages --\n" },
#endif
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-- Montages --" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanDeployAttackIfReloading_MetaData[] = {
		{ "Category", "Weapon|Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -- Advanced --\n" },
#endif
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-- Advanced --" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootBarrel_MetaData[] = {
		{ "Category", "WeaponFirearm" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponFirearm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReloadStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReloadEnded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReloadInsertedAmmo;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReloadInterrupted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAimEnabled;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAimDisabled;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Shooter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirearmMontagesManager;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponFirearmData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultShootType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultShootType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ShootBarrelSocketName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReloadMontage;
	static void NewProp_bCanDeployAttackIfReloading_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanDeployAttackIfReloading;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShootBarrel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponFirearm_AddWeaponDynamicSpread, "AddWeaponDynamicSpread" }, // 4259250153
		{ &Z_Construct_UFunction_AWeaponFirearm_CanReload, "CanReload" }, // 1621338067
		{ &Z_Construct_UFunction_AWeaponFirearm_GetCurrentAmmo, "GetCurrentAmmo" }, // 2677924136
		{ &Z_Construct_UFunction_AWeaponFirearm_GetDefaultSpread, "GetDefaultSpread" }, // 1135958625
		{ &Z_Construct_UFunction_AWeaponFirearm_GetNeededAmmo, "GetNeededAmmo" }, // 3933636056
		{ &Z_Construct_UFunction_AWeaponFirearm_GetWeaponAmmoType, "GetWeaponAmmoType" }, // 1835186809
		{ &Z_Construct_UFunction_AWeaponFirearm_GetWeaponFirearmData, "GetWeaponFirearmData" }, // 1667516073
		{ &Z_Construct_UFunction_AWeaponFirearm_GetWeaponFireRate, "GetWeaponFireRate" }, // 2716424466
		{ &Z_Construct_UFunction_AWeaponFirearm_GetWeaponMagSize, "GetWeaponMagSize" }, // 1417483697
		{ &Z_Construct_UFunction_AWeaponFirearm_GetWeaponMaxRange, "GetWeaponMaxRange" }, // 2285914532
		{ &Z_Construct_UFunction_AWeaponFirearm_GetWeaponMaxSpread, "GetWeaponMaxSpread" }, // 2496008823
		{ &Z_Construct_UFunction_AWeaponFirearm_GetWeaponRecoilStrength, "GetWeaponRecoilStrength" }, // 2309668447
		{ &Z_Construct_UFunction_AWeaponFirearm_GetWeaponReloadTime, "GetWeaponReloadTime" }, // 412124217
		{ &Z_Construct_UFunction_AWeaponFirearm_GetWeaponShootType, "GetWeaponShootType" }, // 2344658396
		{ &Z_Construct_UFunction_AWeaponFirearm_GetWeaponSpread, "GetWeaponSpread" }, // 3627745351
		{ &Z_Construct_UFunction_AWeaponFirearm_HasJustShot, "HasJustShot" }, // 9820929
		{ &Z_Construct_UFunction_AWeaponFirearm_InstantSetSpread, "InstantSetSpread" }, // 2162839859
		{ &Z_Construct_UFunction_AWeaponFirearm_InterruptReload, "InterruptReload" }, // 1091574844
		{ &Z_Construct_UFunction_AWeaponFirearm_IsAiming, "IsAiming" }, // 95000250
		{ &Z_Construct_UFunction_AWeaponFirearm_IsReloading, "IsReloading" }, // 3797489945
		{ &Z_Construct_UFunction_AWeaponFirearm_OnCurrentAmmoChanged, "OnCurrentAmmoChanged" }, // 3808760121
		{ &Z_Construct_UFunction_AWeaponFirearm_OnDisableAim, "OnDisableAim" }, // 2474583620
		{ &Z_Construct_UFunction_AWeaponFirearm_OnEnableAim, "OnEnableAim" }, // 331110787
		{ &Z_Construct_UFunction_AWeaponFirearm_OnEndShootSequence, "OnEndShootSequence" }, // 153383394
		{ &Z_Construct_UFunction_AWeaponFirearm_OnMagEmpty, "OnMagEmpty" }, // 3074570706
		{ &Z_Construct_UFunction_AWeaponFirearm_OnReloadFail, "OnReloadFail" }, // 1682234703
		{ &Z_Construct_UFunction_AWeaponFirearm_OnReloadMontageEnded, "OnReloadMontageEnded" }, // 681554304
		{ &Z_Construct_UFunction_AWeaponFirearm_OnReloadSuccess, "OnReloadSuccess" }, // 1098983879
		{ &Z_Construct_UFunction_AWeaponFirearm_Refill, "Refill" }, // 3040091859
		{ &Z_Construct_UFunction_AWeaponFirearm_RefillAllMagazine, "RefillAllMagazine" }, // 3714635407
		{ &Z_Construct_UFunction_AWeaponFirearm_ReloadWithMontage, "ReloadWithMontage" }, // 147949139
		{ &Z_Construct_UFunction_AWeaponFirearm_ResetCooldown, "ResetCooldown" }, // 3905632439
		{ &Z_Construct_UFunction_AWeaponFirearm_ResetSpread, "ResetSpread" }, // 4090984859
		{ &Z_Construct_UFunction_AWeaponFirearm_ResetToDefaultShootType, "ResetToDefaultShootType" }, // 3826524208
		{ &Z_Construct_UFunction_AWeaponFirearm_SetAim, "SetAim" }, // 1553519770
		{ &Z_Construct_UFunction_AWeaponFirearm_SetCurrentAmmo, "SetCurrentAmmo" }, // 2515277969
		{ &Z_Construct_UFunction_AWeaponFirearm_SetWeaponAmmoType, "SetWeaponAmmoType" }, // 1687189958
		{ &Z_Construct_UFunction_AWeaponFirearm_SetWeaponFireRate, "SetWeaponFireRate" }, // 139708269
		{ &Z_Construct_UFunction_AWeaponFirearm_SetWeaponMagSize, "SetWeaponMagSize" }, // 1882866022
		{ &Z_Construct_UFunction_AWeaponFirearm_SetWeaponMaxRange, "SetWeaponMaxRange" }, // 2173264138
		{ &Z_Construct_UFunction_AWeaponFirearm_SetWeaponRecoilStrength, "SetWeaponRecoilStrength" }, // 1399603111
		{ &Z_Construct_UFunction_AWeaponFirearm_SetWeaponReloadTime, "SetWeaponReloadTime" }, // 3998012379
		{ &Z_Construct_UFunction_AWeaponFirearm_SetWeaponShootType, "SetWeaponShootType" }, // 3503165561
		{ &Z_Construct_UFunction_AWeaponFirearm_SetWeaponSpread, "SetWeaponSpread" }, // 4086926466
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponFirearm>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWeaponFirearm_Statics::NewProp_OnReloadStarted = { "OnReloadStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponFirearm, OnReloadStarted), Z_Construct_UDelegateFunction_WeaponSystem_OnReloadStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReloadStarted_MetaData), NewProp_OnReloadStarted_MetaData) }; // 2553255173
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWeaponFirearm_Statics::NewProp_OnReloadEnded = { "OnReloadEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponFirearm, OnReloadEnded), Z_Construct_UDelegateFunction_WeaponSystem_OnReloadEnded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReloadEnded_MetaData), NewProp_OnReloadEnded_MetaData) }; // 2721940498
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWeaponFirearm_Statics::NewProp_OnReloadInsertedAmmo = { "OnReloadInsertedAmmo", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponFirearm, OnReloadInsertedAmmo), Z_Construct_UDelegateFunction_WeaponSystem_OnReloadInsertedAmmo__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReloadInsertedAmmo_MetaData), NewProp_OnReloadInsertedAmmo_MetaData) }; // 27903620
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWeaponFirearm_Statics::NewProp_OnReloadInterrupted = { "OnReloadInterrupted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponFirearm, OnReloadInterrupted), Z_Construct_UDelegateFunction_WeaponSystem_OnReloadInterrupted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnReloadInterrupted_MetaData), NewProp_OnReloadInterrupted_MetaData) }; // 2504111251
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWeaponFirearm_Statics::NewProp_OnAimEnabled = { "OnAimEnabled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponFirearm, OnAimEnabled), Z_Construct_UDelegateFunction_WeaponSystem_OnAimEnabled__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAimEnabled_MetaData), NewProp_OnAimEnabled_MetaData) }; // 3294506592
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWeaponFirearm_Statics::NewProp_OnAimDisabled = { "OnAimDisabled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponFirearm, OnAimDisabled), Z_Construct_UDelegateFunction_WeaponSystem_OnAimDisabled__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAimDisabled_MetaData), NewProp_OnAimDisabled_MetaData) }; // 594886418
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponFirearm_Statics::NewProp_Shooter = { "Shooter", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponFirearm, Shooter), Z_Construct_UClass_UShooter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shooter_MetaData), NewProp_Shooter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponFirearm_Statics::NewProp_FirearmMontagesManager = { "FirearmMontagesManager", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponFirearm, FirearmMontagesManager), Z_Construct_UClass_UFirearmMontagesManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirearmMontagesManager_MetaData), NewProp_FirearmMontagesManager_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponFirearm_Statics::NewProp_WeaponFirearmData = { "WeaponFirearmData", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponFirearm, WeaponFirearmData), Z_Construct_UScriptStruct_FWeaponFirearmData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponFirearmData_MetaData), NewProp_WeaponFirearmData_MetaData) }; // 4125335618
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWeaponFirearm_Statics::NewProp_DefaultShootType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWeaponFirearm_Statics::NewProp_DefaultShootType = { "DefaultShootType", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponFirearm, DefaultShootType), Z_Construct_UEnum_WeaponSystem_EShootType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultShootType_MetaData), NewProp_DefaultShootType_MetaData) }; // 1661658870
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWeaponFirearm_Statics::NewProp_ShootBarrelSocketName = { "ShootBarrelSocketName", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponFirearm, ShootBarrelSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootBarrelSocketName_MetaData), NewProp_ShootBarrelSocketName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponFirearm_Statics::NewProp_ReloadMontage = { "ReloadMontage", nullptr, (EPropertyFlags)0x0020088000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponFirearm, ReloadMontage), Z_Construct_UScriptStruct_FWeaponMontageData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadMontage_MetaData), NewProp_ReloadMontage_MetaData) }; // 397967327
void Z_Construct_UClass_AWeaponFirearm_Statics::NewProp_bCanDeployAttackIfReloading_SetBit(void* Obj)
{
	((AWeaponFirearm*)Obj)->bCanDeployAttackIfReloading = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponFirearm_Statics::NewProp_bCanDeployAttackIfReloading = { "bCanDeployAttackIfReloading", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWeaponFirearm), &Z_Construct_UClass_AWeaponFirearm_Statics::NewProp_bCanDeployAttackIfReloading_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanDeployAttackIfReloading_MetaData), NewProp_bCanDeployAttackIfReloading_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponFirearm_Statics::NewProp_ShootBarrel = { "ShootBarrel", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponFirearm, ShootBarrel), Z_Construct_UClass_UShootBarrel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootBarrel_MetaData), NewProp_ShootBarrel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponFirearm_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponFirearm_Statics::NewProp_OnReloadStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponFirearm_Statics::NewProp_OnReloadEnded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponFirearm_Statics::NewProp_OnReloadInsertedAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponFirearm_Statics::NewProp_OnReloadInterrupted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponFirearm_Statics::NewProp_OnAimEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponFirearm_Statics::NewProp_OnAimDisabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponFirearm_Statics::NewProp_Shooter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponFirearm_Statics::NewProp_FirearmMontagesManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponFirearm_Statics::NewProp_WeaponFirearmData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponFirearm_Statics::NewProp_DefaultShootType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponFirearm_Statics::NewProp_DefaultShootType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponFirearm_Statics::NewProp_ShootBarrelSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponFirearm_Statics::NewProp_ReloadMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponFirearm_Statics::NewProp_bCanDeployAttackIfReloading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponFirearm_Statics::NewProp_ShootBarrel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponFirearm_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWeaponFirearm_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWeaponBase,
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponFirearm_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeaponFirearm_Statics::ClassParams = {
	&AWeaponFirearm::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWeaponFirearm_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponFirearm_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponFirearm_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeaponFirearm_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWeaponFirearm()
{
	if (!Z_Registration_Info_UClass_AWeaponFirearm.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeaponFirearm.OuterSingleton, Z_Construct_UClass_AWeaponFirearm_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWeaponFirearm.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponFirearm);
AWeaponFirearm::~AWeaponFirearm() {}
// ********** End Class AWeaponFirearm *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponFirearm_h__Script_WeaponSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeaponFirearm, AWeaponFirearm::StaticClass, TEXT("AWeaponFirearm"), &Z_Registration_Info_UClass_AWeaponFirearm, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeaponFirearm), 1687660919U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponFirearm_h__Script_WeaponSystem_2920543155(TEXT("/Script/WeaponSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponFirearm_h__Script_WeaponSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponFirearm_h__Script_WeaponSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
