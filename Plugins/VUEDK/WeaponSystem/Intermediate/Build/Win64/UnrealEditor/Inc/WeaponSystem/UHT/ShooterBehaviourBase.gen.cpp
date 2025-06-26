// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Behaviours/ShooterBehaviourBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeShooterBehaviourBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UCooldownHandler_NoRegister();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_URecoilHandler_NoRegister();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShootBarrel_NoRegister();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShooter_NoRegister();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShooterBehaviour_NoRegister();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShooterBehaviourBase();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShooterBehaviourBase_NoRegister();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShootPoint_NoRegister();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_USpreadHandler_NoRegister();
WEAPONSYSTEM_API UEnum* Z_Construct_UEnum_WeaponSystem_EShootFailReason();
WEAPONSYSTEM_API UEnum* Z_Construct_UEnum_WeaponSystem_EShootType();
WEAPONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourDisabled__DelegateSignature();
WEAPONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourEnabled__DelegateSignature();
WEAPONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourRefill__DelegateSignature();
WEAPONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourShootFail__DelegateSignature();
WEAPONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourShootSuccess__DelegateSignature();
WEAPONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnCurrentAmmoChanged__DelegateSignature();
WEAPONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnEndShootSequence__DelegateSignature();
WEAPONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnMagEmpty__DelegateSignature();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnBehaviourEnabled ***************************************************
struct Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourEnabled__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourEnabled__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem, nullptr, "OnBehaviourEnabled__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourEnabled__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourEnabled__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourEnabled__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourEnabled__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnBehaviourEnabled_DelegateWrapper(const FMulticastScriptDelegate& OnBehaviourEnabled)
{
	OnBehaviourEnabled.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnBehaviourEnabled *****************************************************

// ********** Begin Delegate FOnBehaviourDisabled **************************************************
struct Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourDisabled__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourDisabled__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem, nullptr, "OnBehaviourDisabled__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourDisabled__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourDisabled__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourDisabled__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourDisabled__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnBehaviourDisabled_DelegateWrapper(const FMulticastScriptDelegate& OnBehaviourDisabled)
{
	OnBehaviourDisabled.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnBehaviourDisabled ****************************************************

// ********** Begin Delegate FOnBehaviourShootSuccess **********************************************
struct Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourShootSuccess__DelegateSignature_Statics
{
	struct _Script_WeaponSystem_eventOnBehaviourShootSuccess_Parms
	{
		UShootBarrel* ShootBarrel;
		int32 ShotIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootBarrel_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShootBarrel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShotIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourShootSuccess__DelegateSignature_Statics::NewProp_ShootBarrel = { "ShootBarrel", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WeaponSystem_eventOnBehaviourShootSuccess_Parms, ShootBarrel), Z_Construct_UClass_UShootBarrel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootBarrel_MetaData), NewProp_ShootBarrel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourShootSuccess__DelegateSignature_Statics::NewProp_ShotIndex = { "ShotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WeaponSystem_eventOnBehaviourShootSuccess_Parms, ShotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourShootSuccess__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourShootSuccess__DelegateSignature_Statics::NewProp_ShootBarrel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourShootSuccess__DelegateSignature_Statics::NewProp_ShotIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourShootSuccess__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourShootSuccess__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem, nullptr, "OnBehaviourShootSuccess__DelegateSignature", Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourShootSuccess__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourShootSuccess__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourShootSuccess__DelegateSignature_Statics::_Script_WeaponSystem_eventOnBehaviourShootSuccess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourShootSuccess__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourShootSuccess__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourShootSuccess__DelegateSignature_Statics::_Script_WeaponSystem_eventOnBehaviourShootSuccess_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourShootSuccess__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourShootSuccess__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnBehaviourShootSuccess_DelegateWrapper(const FMulticastScriptDelegate& OnBehaviourShootSuccess, UShootBarrel* ShootBarrel, int32 ShotIndex)
{
	struct _Script_WeaponSystem_eventOnBehaviourShootSuccess_Parms
	{
		UShootBarrel* ShootBarrel;
		int32 ShotIndex;
	};
	_Script_WeaponSystem_eventOnBehaviourShootSuccess_Parms Parms;
	Parms.ShootBarrel=ShootBarrel;
	Parms.ShotIndex=ShotIndex;
	OnBehaviourShootSuccess.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnBehaviourShootSuccess ************************************************

// ********** Begin Delegate FOnBehaviourShootFail *************************************************
struct Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourShootFail__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourShootFail__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem, nullptr, "OnBehaviourShootFail__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourShootFail__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourShootFail__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourShootFail__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourShootFail__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnBehaviourShootFail_DelegateWrapper(const FMulticastScriptDelegate& OnBehaviourShootFail)
{
	OnBehaviourShootFail.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnBehaviourShootFail ***************************************************

// ********** Begin Delegate FOnEndShootSequence ***************************************************
struct Z_Construct_UDelegateFunction_WeaponSystem_OnEndShootSequence__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_WeaponSystem_OnEndShootSequence__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem, nullptr, "OnEndShootSequence__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnEndShootSequence__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WeaponSystem_OnEndShootSequence__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnEndShootSequence__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystem_OnEndShootSequence__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEndShootSequence_DelegateWrapper(const FMulticastScriptDelegate& OnEndShootSequence)
{
	OnEndShootSequence.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnEndShootSequence *****************************************************

// ********** Begin Delegate FOnBehaviourRefill ****************************************************
struct Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourRefill__DelegateSignature_Statics
{
	struct _Script_WeaponSystem_eventOnBehaviourRefill_Parms
	{
		int32 CurrentAmmo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentAmmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourRefill__DelegateSignature_Statics::NewProp_CurrentAmmo = { "CurrentAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WeaponSystem_eventOnBehaviourRefill_Parms, CurrentAmmo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourRefill__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourRefill__DelegateSignature_Statics::NewProp_CurrentAmmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourRefill__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourRefill__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem, nullptr, "OnBehaviourRefill__DelegateSignature", Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourRefill__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourRefill__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourRefill__DelegateSignature_Statics::_Script_WeaponSystem_eventOnBehaviourRefill_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourRefill__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourRefill__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourRefill__DelegateSignature_Statics::_Script_WeaponSystem_eventOnBehaviourRefill_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourRefill__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourRefill__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnBehaviourRefill_DelegateWrapper(const FMulticastScriptDelegate& OnBehaviourRefill, int32 CurrentAmmo)
{
	struct _Script_WeaponSystem_eventOnBehaviourRefill_Parms
	{
		int32 CurrentAmmo;
	};
	_Script_WeaponSystem_eventOnBehaviourRefill_Parms Parms;
	Parms.CurrentAmmo=CurrentAmmo;
	OnBehaviourRefill.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnBehaviourRefill ******************************************************

// ********** Begin Delegate FOnCurrentAmmoChanged *************************************************
struct Z_Construct_UDelegateFunction_WeaponSystem_OnCurrentAmmoChanged__DelegateSignature_Statics
{
	struct _Script_WeaponSystem_eventOnCurrentAmmoChanged_Parms
	{
		int32 CurrentAmmo;
		int32 MagSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MagSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_WeaponSystem_OnCurrentAmmoChanged__DelegateSignature_Statics::NewProp_CurrentAmmo = { "CurrentAmmo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WeaponSystem_eventOnCurrentAmmoChanged_Parms, CurrentAmmo), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_WeaponSystem_OnCurrentAmmoChanged__DelegateSignature_Statics::NewProp_MagSize = { "MagSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WeaponSystem_eventOnCurrentAmmoChanged_Parms, MagSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WeaponSystem_OnCurrentAmmoChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystem_OnCurrentAmmoChanged__DelegateSignature_Statics::NewProp_CurrentAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystem_OnCurrentAmmoChanged__DelegateSignature_Statics::NewProp_MagSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnCurrentAmmoChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_WeaponSystem_OnCurrentAmmoChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem, nullptr, "OnCurrentAmmoChanged__DelegateSignature", Z_Construct_UDelegateFunction_WeaponSystem_OnCurrentAmmoChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnCurrentAmmoChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WeaponSystem_OnCurrentAmmoChanged__DelegateSignature_Statics::_Script_WeaponSystem_eventOnCurrentAmmoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnCurrentAmmoChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WeaponSystem_OnCurrentAmmoChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_WeaponSystem_OnCurrentAmmoChanged__DelegateSignature_Statics::_Script_WeaponSystem_eventOnCurrentAmmoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnCurrentAmmoChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystem_OnCurrentAmmoChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCurrentAmmoChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCurrentAmmoChanged, int32 CurrentAmmo, int32 MagSize)
{
	struct _Script_WeaponSystem_eventOnCurrentAmmoChanged_Parms
	{
		int32 CurrentAmmo;
		int32 MagSize;
	};
	_Script_WeaponSystem_eventOnCurrentAmmoChanged_Parms Parms;
	Parms.CurrentAmmo=CurrentAmmo;
	Parms.MagSize=MagSize;
	OnCurrentAmmoChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnCurrentAmmoChanged ***************************************************

// ********** Begin Delegate FOnMagEmpty ***********************************************************
struct Z_Construct_UDelegateFunction_WeaponSystem_OnMagEmpty__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_WeaponSystem_OnMagEmpty__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem, nullptr, "OnMagEmpty__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnMagEmpty__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WeaponSystem_OnMagEmpty__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnMagEmpty__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystem_OnMagEmpty__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMagEmpty_DelegateWrapper(const FMulticastScriptDelegate& OnMagEmpty)
{
	OnMagEmpty.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnMagEmpty *************************************************************

// ********** Begin Class UShooterBehaviourBase Function AddDynamicSpread **************************
struct Z_Construct_UFunction_UShooterBehaviourBase_AddDynamicSpread_Statics
{
	struct ShooterBehaviourBase_eventAddDynamicSpread_Parms
	{
		float AddSpread;
		float ChangeRate;
		float RecoveryRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_ChangeRate", "1.000000" },
		{ "CPP_Default_RecoveryRate", "1.000000" },
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_AddDynamicSpread_Statics::NewProp_AddSpread = { "AddSpread", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventAddDynamicSpread_Parms, AddSpread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddSpread_MetaData), NewProp_AddSpread_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_AddDynamicSpread_Statics::NewProp_ChangeRate = { "ChangeRate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventAddDynamicSpread_Parms, ChangeRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChangeRate_MetaData), NewProp_ChangeRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_AddDynamicSpread_Statics::NewProp_RecoveryRate = { "RecoveryRate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventAddDynamicSpread_Parms, RecoveryRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoveryRate_MetaData), NewProp_RecoveryRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_AddDynamicSpread_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_AddDynamicSpread_Statics::NewProp_AddSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_AddDynamicSpread_Statics::NewProp_ChangeRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_AddDynamicSpread_Statics::NewProp_RecoveryRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_AddDynamicSpread_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_AddDynamicSpread_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "AddDynamicSpread", Z_Construct_UFunction_UShooterBehaviourBase_AddDynamicSpread_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_AddDynamicSpread_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShooterBehaviourBase_AddDynamicSpread_Statics::ShooterBehaviourBase_eventAddDynamicSpread_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_AddDynamicSpread_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_AddDynamicSpread_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShooterBehaviourBase_AddDynamicSpread_Statics::ShooterBehaviourBase_eventAddDynamicSpread_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_AddDynamicSpread()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_AddDynamicSpread_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execAddDynamicSpread)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AddSpread);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ChangeRate);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RecoveryRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddDynamicSpread(Z_Param_AddSpread,Z_Param_ChangeRate,Z_Param_RecoveryRate);
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function AddDynamicSpread ****************************

// ********** Begin Class UShooterBehaviourBase Function DisableBehaviour **************************
struct Z_Construct_UFunction_UShooterBehaviourBase_DisableBehaviour_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_DisableBehaviour_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "DisableBehaviour", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_DisableBehaviour_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_DisableBehaviour_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_DisableBehaviour()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_DisableBehaviour_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execDisableBehaviour)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableBehaviour();
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function DisableBehaviour ****************************

// ********** Begin Class UShooterBehaviourBase Function EnableBehaviour ***************************
struct Z_Construct_UFunction_UShooterBehaviourBase_EnableBehaviour_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_EnableBehaviour_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "EnableBehaviour", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_EnableBehaviour_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_EnableBehaviour_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_EnableBehaviour()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_EnableBehaviour_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execEnableBehaviour)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableBehaviour();
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function EnableBehaviour *****************************

// ********** Begin Class UShooterBehaviourBase Function EndShootSequence **************************
struct Z_Construct_UFunction_UShooterBehaviourBase_EndShootSequence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_EndShootSequence_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "EndShootSequence", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_EndShootSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_EndShootSequence_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_EndShootSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_EndShootSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execEndShootSequence)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndShootSequence();
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function EndShootSequence ****************************

// ********** Begin Class UShooterBehaviourBase Function GetAmmoToConsume **************************
struct Z_Construct_UFunction_UShooterBehaviourBase_GetAmmoToConsume_Statics
{
	struct ShooterBehaviourBase_eventGetAmmoToConsume_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_GetAmmoToConsume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventGetAmmoToConsume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_GetAmmoToConsume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_GetAmmoToConsume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetAmmoToConsume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_GetAmmoToConsume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "GetAmmoToConsume", Z_Construct_UFunction_UShooterBehaviourBase_GetAmmoToConsume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetAmmoToConsume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShooterBehaviourBase_GetAmmoToConsume_Statics::ShooterBehaviourBase_eventGetAmmoToConsume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetAmmoToConsume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_GetAmmoToConsume_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShooterBehaviourBase_GetAmmoToConsume_Statics::ShooterBehaviourBase_eventGetAmmoToConsume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_GetAmmoToConsume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_GetAmmoToConsume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execGetAmmoToConsume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAmmoToConsume();
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function GetAmmoToConsume ****************************

// ********** Begin Class UShooterBehaviourBase Function GetCooldownHandler ************************
struct Z_Construct_UFunction_UShooterBehaviourBase_GetCooldownHandler_Statics
{
	struct ShooterBehaviourBase_eventGetCooldownHandler_Parms
	{
		UCooldownHandler* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_GetCooldownHandler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventGetCooldownHandler_Parms, ReturnValue), Z_Construct_UClass_UCooldownHandler_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_GetCooldownHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_GetCooldownHandler_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetCooldownHandler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_GetCooldownHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "GetCooldownHandler", Z_Construct_UFunction_UShooterBehaviourBase_GetCooldownHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetCooldownHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShooterBehaviourBase_GetCooldownHandler_Statics::ShooterBehaviourBase_eventGetCooldownHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetCooldownHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_GetCooldownHandler_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShooterBehaviourBase_GetCooldownHandler_Statics::ShooterBehaviourBase_eventGetCooldownHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_GetCooldownHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_GetCooldownHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execGetCooldownHandler)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCooldownHandler**)Z_Param__Result=P_THIS->GetCooldownHandler();
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function GetCooldownHandler **************************

// ********** Begin Class UShooterBehaviourBase Function GetCurrentAmmo ****************************
struct Z_Construct_UFunction_UShooterBehaviourBase_GetCurrentAmmo_Statics
{
	struct ShooterBehaviourBase_eventGetCurrentAmmo_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_GetCurrentAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventGetCurrentAmmo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_GetCurrentAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_GetCurrentAmmo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetCurrentAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_GetCurrentAmmo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "GetCurrentAmmo", Z_Construct_UFunction_UShooterBehaviourBase_GetCurrentAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetCurrentAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShooterBehaviourBase_GetCurrentAmmo_Statics::ShooterBehaviourBase_eventGetCurrentAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetCurrentAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_GetCurrentAmmo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShooterBehaviourBase_GetCurrentAmmo_Statics::ShooterBehaviourBase_eventGetCurrentAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_GetCurrentAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_GetCurrentAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execGetCurrentAmmo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentAmmo();
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function GetCurrentAmmo ******************************

// ********** Begin Class UShooterBehaviourBase Function GetDamage *********************************
struct ShooterBehaviourBase_eventGetDamage_Parms
{
	float ReturnValue;

	/** Constructor, initializes return property only **/
	ShooterBehaviourBase_eventGetDamage_Parms()
		: ReturnValue(0)
	{
	}
};
static FName NAME_UShooterBehaviourBase_GetDamage = FName(TEXT("GetDamage"));
float UShooterBehaviourBase::GetDamage() const
{
	UFunction* Func = FindFunctionChecked(NAME_UShooterBehaviourBase_GetDamage);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ShooterBehaviourBase_eventGetDamage_Parms Parms;
		const_cast<UShooterBehaviourBase*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UShooterBehaviourBase*>(this)->GetDamage_Implementation();
	}
}
struct Z_Construct_UFunction_UShooterBehaviourBase_GetDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_GetDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventGetDamage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_GetDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_GetDamage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_GetDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "GetDamage", Z_Construct_UFunction_UShooterBehaviourBase_GetDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetDamage_Statics::PropPointers), sizeof(ShooterBehaviourBase_eventGetDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_GetDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ShooterBehaviourBase_eventGetDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_GetDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_GetDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execGetDamage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDamage_Implementation();
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function GetDamage ***********************************

// ********** Begin Class UShooterBehaviourBase Function GetFireRate *******************************
struct ShooterBehaviourBase_eventGetFireRate_Parms
{
	float ReturnValue;

	/** Constructor, initializes return property only **/
	ShooterBehaviourBase_eventGetFireRate_Parms()
		: ReturnValue(0)
	{
	}
};
static FName NAME_UShooterBehaviourBase_GetFireRate = FName(TEXT("GetFireRate"));
float UShooterBehaviourBase::GetFireRate() const
{
	UFunction* Func = FindFunctionChecked(NAME_UShooterBehaviourBase_GetFireRate);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ShooterBehaviourBase_eventGetFireRate_Parms Parms;
		const_cast<UShooterBehaviourBase*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UShooterBehaviourBase*>(this)->GetFireRate_Implementation();
	}
}
struct Z_Construct_UFunction_UShooterBehaviourBase_GetFireRate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the fire rate of the shooter (rounds per minute).\n\x09 * @return The fire rate in rounds per minute.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the fire rate of the shooter (rounds per minute).\n@return The fire rate in rounds per minute." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_GetFireRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventGetFireRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_GetFireRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_GetFireRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetFireRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_GetFireRate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "GetFireRate", Z_Construct_UFunction_UShooterBehaviourBase_GetFireRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetFireRate_Statics::PropPointers), sizeof(ShooterBehaviourBase_eventGetFireRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetFireRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_GetFireRate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ShooterBehaviourBase_eventGetFireRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_GetFireRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_GetFireRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execGetFireRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFireRate_Implementation();
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function GetFireRate *********************************

// ********** Begin Class UShooterBehaviourBase Function GetMagSize ********************************
struct ShooterBehaviourBase_eventGetMagSize_Parms
{
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	ShooterBehaviourBase_eventGetMagSize_Parms()
		: ReturnValue(0)
	{
	}
};
static FName NAME_UShooterBehaviourBase_GetMagSize = FName(TEXT("GetMagSize"));
int32 UShooterBehaviourBase::GetMagSize() const
{
	UFunction* Func = FindFunctionChecked(NAME_UShooterBehaviourBase_GetMagSize);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ShooterBehaviourBase_eventGetMagSize_Parms Parms;
		const_cast<UShooterBehaviourBase*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UShooterBehaviourBase*>(this)->GetMagSize_Implementation();
	}
}
struct Z_Construct_UFunction_UShooterBehaviourBase_GetMagSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_GetMagSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventGetMagSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_GetMagSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_GetMagSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetMagSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_GetMagSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "GetMagSize", Z_Construct_UFunction_UShooterBehaviourBase_GetMagSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetMagSize_Statics::PropPointers), sizeof(ShooterBehaviourBase_eventGetMagSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetMagSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_GetMagSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ShooterBehaviourBase_eventGetMagSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_GetMagSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_GetMagSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execGetMagSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMagSize_Implementation();
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function GetMagSize **********************************

// ********** Begin Class UShooterBehaviourBase Function GetMaxRange *******************************
struct ShooterBehaviourBase_eventGetMaxRange_Parms
{
	float ReturnValue;

	/** Constructor, initializes return property only **/
	ShooterBehaviourBase_eventGetMaxRange_Parms()
		: ReturnValue(0)
	{
	}
};
static FName NAME_UShooterBehaviourBase_GetMaxRange = FName(TEXT("GetMaxRange"));
float UShooterBehaviourBase::GetMaxRange() const
{
	UFunction* Func = FindFunctionChecked(NAME_UShooterBehaviourBase_GetMaxRange);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ShooterBehaviourBase_eventGetMaxRange_Parms Parms;
		const_cast<UShooterBehaviourBase*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UShooterBehaviourBase*>(this)->GetMaxRange_Implementation();
	}
}
struct Z_Construct_UFunction_UShooterBehaviourBase_GetMaxRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_GetMaxRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventGetMaxRange_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_GetMaxRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_GetMaxRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetMaxRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_GetMaxRange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "GetMaxRange", Z_Construct_UFunction_UShooterBehaviourBase_GetMaxRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetMaxRange_Statics::PropPointers), sizeof(ShooterBehaviourBase_eventGetMaxRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetMaxRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_GetMaxRange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ShooterBehaviourBase_eventGetMaxRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_GetMaxRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_GetMaxRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execGetMaxRange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxRange_Implementation();
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function GetMaxRange *********************************

// ********** Begin Class UShooterBehaviourBase Function GetOwner **********************************
struct Z_Construct_UFunction_UShooterBehaviourBase_GetOwner_Statics
{
	struct ShooterBehaviourBase_eventGetOwner_Parms
	{
		APawn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_GetOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventGetOwner_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_GetOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_GetOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_GetOwner_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "GetOwner", Z_Construct_UFunction_UShooterBehaviourBase_GetOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShooterBehaviourBase_GetOwner_Statics::ShooterBehaviourBase_eventGetOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_GetOwner_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShooterBehaviourBase_GetOwner_Statics::ShooterBehaviourBase_eventGetOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_GetOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_GetOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execGetOwner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APawn**)Z_Param__Result=P_THIS->GetOwner();
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function GetOwner ************************************

// ********** Begin Class UShooterBehaviourBase Function GetRecoilHandler **************************
struct Z_Construct_UFunction_UShooterBehaviourBase_GetRecoilHandler_Statics
{
	struct ShooterBehaviourBase_eventGetRecoilHandler_Parms
	{
		URecoilHandler* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_GetRecoilHandler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventGetRecoilHandler_Parms, ReturnValue), Z_Construct_UClass_URecoilHandler_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_GetRecoilHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_GetRecoilHandler_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetRecoilHandler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_GetRecoilHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "GetRecoilHandler", Z_Construct_UFunction_UShooterBehaviourBase_GetRecoilHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetRecoilHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShooterBehaviourBase_GetRecoilHandler_Statics::ShooterBehaviourBase_eventGetRecoilHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetRecoilHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_GetRecoilHandler_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShooterBehaviourBase_GetRecoilHandler_Statics::ShooterBehaviourBase_eventGetRecoilHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_GetRecoilHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_GetRecoilHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execGetRecoilHandler)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URecoilHandler**)Z_Param__Result=P_THIS->GetRecoilHandler();
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function GetRecoilHandler ****************************

// ********** Begin Class UShooterBehaviourBase Function GetRecoilStrength *************************
struct ShooterBehaviourBase_eventGetRecoilStrength_Parms
{
	float ReturnValue;

	/** Constructor, initializes return property only **/
	ShooterBehaviourBase_eventGetRecoilStrength_Parms()
		: ReturnValue(0)
	{
	}
};
static FName NAME_UShooterBehaviourBase_GetRecoilStrength = FName(TEXT("GetRecoilStrength"));
float UShooterBehaviourBase::GetRecoilStrength() const
{
	UFunction* Func = FindFunctionChecked(NAME_UShooterBehaviourBase_GetRecoilStrength);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ShooterBehaviourBase_eventGetRecoilStrength_Parms Parms;
		const_cast<UShooterBehaviourBase*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UShooterBehaviourBase*>(this)->GetRecoilStrength_Implementation();
	}
}
struct Z_Construct_UFunction_UShooterBehaviourBase_GetRecoilStrength_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_GetRecoilStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventGetRecoilStrength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_GetRecoilStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_GetRecoilStrength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetRecoilStrength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_GetRecoilStrength_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "GetRecoilStrength", Z_Construct_UFunction_UShooterBehaviourBase_GetRecoilStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetRecoilStrength_Statics::PropPointers), sizeof(ShooterBehaviourBase_eventGetRecoilStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetRecoilStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_GetRecoilStrength_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ShooterBehaviourBase_eventGetRecoilStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_GetRecoilStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_GetRecoilStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execGetRecoilStrength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRecoilStrength_Implementation();
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function GetRecoilStrength ***************************

// ********** Begin Class UShooterBehaviourBase Function GetShootBarrel ****************************
struct Z_Construct_UFunction_UShooterBehaviourBase_GetShootBarrel_Statics
{
	struct ShooterBehaviourBase_eventGetShootBarrel_Parms
	{
		UShootBarrel* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_GetShootBarrel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventGetShootBarrel_Parms, ReturnValue), Z_Construct_UClass_UShootBarrel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_GetShootBarrel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_GetShootBarrel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetShootBarrel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_GetShootBarrel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "GetShootBarrel", Z_Construct_UFunction_UShooterBehaviourBase_GetShootBarrel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetShootBarrel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShooterBehaviourBase_GetShootBarrel_Statics::ShooterBehaviourBase_eventGetShootBarrel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetShootBarrel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_GetShootBarrel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShooterBehaviourBase_GetShootBarrel_Statics::ShooterBehaviourBase_eventGetShootBarrel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_GetShootBarrel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_GetShootBarrel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execGetShootBarrel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UShootBarrel**)Z_Param__Result=P_THIS->GetShootBarrel();
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function GetShootBarrel ******************************

// ********** Begin Class UShooterBehaviourBase Function GetShooterTargetLocation ******************
struct ShooterBehaviourBase_eventGetShooterTargetLocation_Parms
{
	FVector ReturnValue;

	/** Constructor, initializes return property only **/
	ShooterBehaviourBase_eventGetShooterTargetLocation_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
static FName NAME_UShooterBehaviourBase_GetShooterTargetLocation = FName(TEXT("GetShooterTargetLocation"));
FVector UShooterBehaviourBase::GetShooterTargetLocation() const
{
	UFunction* Func = FindFunctionChecked(NAME_UShooterBehaviourBase_GetShooterTargetLocation);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ShooterBehaviourBase_eventGetShooterTargetLocation_Parms Parms;
		const_cast<UShooterBehaviourBase*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UShooterBehaviourBase*>(this)->GetShooterTargetLocation_Implementation();
	}
}
struct Z_Construct_UFunction_UShooterBehaviourBase_GetShooterTargetLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the location of the target the shooter is aiming at. By default, it returns the location of the camera hit point." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_GetShooterTargetLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventGetShooterTargetLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_GetShooterTargetLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_GetShooterTargetLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetShooterTargetLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_GetShooterTargetLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "GetShooterTargetLocation", Z_Construct_UFunction_UShooterBehaviourBase_GetShooterTargetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetShooterTargetLocation_Statics::PropPointers), sizeof(ShooterBehaviourBase_eventGetShooterTargetLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48880C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetShooterTargetLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_GetShooterTargetLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ShooterBehaviourBase_eventGetShooterTargetLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_GetShooterTargetLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_GetShooterTargetLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execGetShooterTargetLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetShooterTargetLocation_Implementation();
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function GetShooterTargetLocation ********************

// ********** Begin Class UShooterBehaviourBase Function GetShootType ******************************
struct Z_Construct_UFunction_UShooterBehaviourBase_GetShootType_Statics
{
	struct ShooterBehaviourBase_eventGetShootType_Parms
	{
		EShootType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UShooterBehaviourBase_GetShootType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_GetShootType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventGetShootType_Parms, ReturnValue), Z_Construct_UEnum_WeaponSystem_EShootType, METADATA_PARAMS(0, nullptr) }; // 1661658870
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_GetShootType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_GetShootType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_GetShootType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetShootType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_GetShootType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "GetShootType", Z_Construct_UFunction_UShooterBehaviourBase_GetShootType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetShootType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShooterBehaviourBase_GetShootType_Statics::ShooterBehaviourBase_eventGetShootType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetShootType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_GetShootType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShooterBehaviourBase_GetShootType_Statics::ShooterBehaviourBase_eventGetShootType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_GetShootType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_GetShootType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execGetShootType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EShootType*)Z_Param__Result=P_THIS->GetShootType();
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function GetShootType ********************************

// ********** Begin Class UShooterBehaviourBase Function GetShotsFired *****************************
struct Z_Construct_UFunction_UShooterBehaviourBase_GetShotsFired_Statics
{
	struct ShooterBehaviourBase_eventGetShotsFired_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_GetShotsFired_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventGetShotsFired_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_GetShotsFired_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_GetShotsFired_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetShotsFired_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_GetShotsFired_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "GetShotsFired", Z_Construct_UFunction_UShooterBehaviourBase_GetShotsFired_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetShotsFired_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShooterBehaviourBase_GetShotsFired_Statics::ShooterBehaviourBase_eventGetShotsFired_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetShotsFired_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_GetShotsFired_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShooterBehaviourBase_GetShotsFired_Statics::ShooterBehaviourBase_eventGetShotsFired_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_GetShotsFired()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_GetShotsFired_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execGetShotsFired)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetShotsFired();
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function GetShotsFired *******************************

// ********** Begin Class UShooterBehaviourBase Function GetSpread *********************************
struct Z_Construct_UFunction_UShooterBehaviourBase_GetSpread_Statics
{
	struct ShooterBehaviourBase_eventGetSpread_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_GetSpread_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventGetSpread_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_GetSpread_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_GetSpread_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetSpread_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_GetSpread_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "GetSpread", Z_Construct_UFunction_UShooterBehaviourBase_GetSpread_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetSpread_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShooterBehaviourBase_GetSpread_Statics::ShooterBehaviourBase_eventGetSpread_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetSpread_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_GetSpread_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShooterBehaviourBase_GetSpread_Statics::ShooterBehaviourBase_eventGetSpread_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_GetSpread()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_GetSpread_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execGetSpread)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSpread();
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function GetSpread ***********************************

// ********** Begin Class UShooterBehaviourBase Function GetSpreadHandler **************************
struct Z_Construct_UFunction_UShooterBehaviourBase_GetSpreadHandler_Statics
{
	struct ShooterBehaviourBase_eventGetSpreadHandler_Parms
	{
		USpreadHandler* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_GetSpreadHandler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventGetSpreadHandler_Parms, ReturnValue), Z_Construct_UClass_USpreadHandler_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_GetSpreadHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_GetSpreadHandler_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetSpreadHandler_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_GetSpreadHandler_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "GetSpreadHandler", Z_Construct_UFunction_UShooterBehaviourBase_GetSpreadHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetSpreadHandler_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShooterBehaviourBase_GetSpreadHandler_Statics::ShooterBehaviourBase_eventGetSpreadHandler_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_GetSpreadHandler_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_GetSpreadHandler_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShooterBehaviourBase_GetSpreadHandler_Statics::ShooterBehaviourBase_eventGetSpreadHandler_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_GetSpreadHandler()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_GetSpreadHandler_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execGetSpreadHandler)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USpreadHandler**)Z_Param__Result=P_THIS->GetSpreadHandler();
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function GetSpreadHandler ****************************

// ********** Begin Class UShooterBehaviourBase Function HasJustShot *******************************
struct Z_Construct_UFunction_UShooterBehaviourBase_HasJustShot_Statics
{
	struct ShooterBehaviourBase_eventHasJustShot_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UShooterBehaviourBase_HasJustShot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ShooterBehaviourBase_eventHasJustShot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_HasJustShot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ShooterBehaviourBase_eventHasJustShot_Parms), &Z_Construct_UFunction_UShooterBehaviourBase_HasJustShot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_HasJustShot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_HasJustShot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_HasJustShot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_HasJustShot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "HasJustShot", Z_Construct_UFunction_UShooterBehaviourBase_HasJustShot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_HasJustShot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShooterBehaviourBase_HasJustShot_Statics::ShooterBehaviourBase_eventHasJustShot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_HasJustShot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_HasJustShot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShooterBehaviourBase_HasJustShot_Statics::ShooterBehaviourBase_eventHasJustShot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_HasJustShot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_HasJustShot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execHasJustShot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasJustShot();
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function HasJustShot *********************************

// ********** Begin Class UShooterBehaviourBase Function InstantSetSpread **************************
struct Z_Construct_UFunction_UShooterBehaviourBase_InstantSetSpread_Statics
{
	struct ShooterBehaviourBase_eventInstantSetSpread_Parms
	{
		float InSpread;
		bool bOverrideDefault;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_bOverrideDefault", "false" },
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_InstantSetSpread_Statics::NewProp_InSpread = { "InSpread", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventInstantSetSpread_Parms, InSpread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSpread_MetaData), NewProp_InSpread_MetaData) };
void Z_Construct_UFunction_UShooterBehaviourBase_InstantSetSpread_Statics::NewProp_bOverrideDefault_SetBit(void* Obj)
{
	((ShooterBehaviourBase_eventInstantSetSpread_Parms*)Obj)->bOverrideDefault = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_InstantSetSpread_Statics::NewProp_bOverrideDefault = { "bOverrideDefault", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ShooterBehaviourBase_eventInstantSetSpread_Parms), &Z_Construct_UFunction_UShooterBehaviourBase_InstantSetSpread_Statics::NewProp_bOverrideDefault_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideDefault_MetaData), NewProp_bOverrideDefault_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_InstantSetSpread_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_InstantSetSpread_Statics::NewProp_InSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_InstantSetSpread_Statics::NewProp_bOverrideDefault,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_InstantSetSpread_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_InstantSetSpread_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "InstantSetSpread", Z_Construct_UFunction_UShooterBehaviourBase_InstantSetSpread_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_InstantSetSpread_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShooterBehaviourBase_InstantSetSpread_Statics::ShooterBehaviourBase_eventInstantSetSpread_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_InstantSetSpread_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_InstantSetSpread_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShooterBehaviourBase_InstantSetSpread_Statics::ShooterBehaviourBase_eventInstantSetSpread_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_InstantSetSpread()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_InstantSetSpread_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execInstantSetSpread)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InSpread);
	P_GET_UBOOL(Z_Param_bOverrideDefault);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InstantSetSpread(Z_Param_InSpread,Z_Param_bOverrideDefault);
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function InstantSetSpread ****************************

// ********** Begin Class UShooterBehaviourBase Function IsBehaviourActive *************************
struct Z_Construct_UFunction_UShooterBehaviourBase_IsBehaviourActive_Statics
{
	struct ShooterBehaviourBase_eventIsBehaviourActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UShooterBehaviourBase_IsBehaviourActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ShooterBehaviourBase_eventIsBehaviourActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_IsBehaviourActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ShooterBehaviourBase_eventIsBehaviourActive_Parms), &Z_Construct_UFunction_UShooterBehaviourBase_IsBehaviourActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_IsBehaviourActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_IsBehaviourActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_IsBehaviourActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_IsBehaviourActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "IsBehaviourActive", Z_Construct_UFunction_UShooterBehaviourBase_IsBehaviourActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_IsBehaviourActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShooterBehaviourBase_IsBehaviourActive_Statics::ShooterBehaviourBase_eventIsBehaviourActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_IsBehaviourActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_IsBehaviourActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShooterBehaviourBase_IsBehaviourActive_Statics::ShooterBehaviourBase_eventIsBehaviourActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_IsBehaviourActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_IsBehaviourActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execIsBehaviourActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsBehaviourActive();
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function IsBehaviourActive ***************************

// ********** Begin Class UShooterBehaviourBase Function IsInLineOfSight ***************************
struct Z_Construct_UFunction_UShooterBehaviourBase_IsInLineOfSight_Statics
{
	struct ShooterBehaviourBase_eventIsInLineOfSight_Parms
	{
		FVector StartPoint;
		FVector TargetPoint;
		float Tolerance;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_Tolerance", "50.000000" },
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPoint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_IsInLineOfSight_Statics::NewProp_StartPoint = { "StartPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventIsInLineOfSight_Parms, StartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPoint_MetaData), NewProp_StartPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_IsInLineOfSight_Statics::NewProp_TargetPoint = { "TargetPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventIsInLineOfSight_Parms, TargetPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPoint_MetaData), NewProp_TargetPoint_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_IsInLineOfSight_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventIsInLineOfSight_Parms, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
void Z_Construct_UFunction_UShooterBehaviourBase_IsInLineOfSight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ShooterBehaviourBase_eventIsInLineOfSight_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_IsInLineOfSight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ShooterBehaviourBase_eventIsInLineOfSight_Parms), &Z_Construct_UFunction_UShooterBehaviourBase_IsInLineOfSight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_IsInLineOfSight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_IsInLineOfSight_Statics::NewProp_StartPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_IsInLineOfSight_Statics::NewProp_TargetPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_IsInLineOfSight_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_IsInLineOfSight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_IsInLineOfSight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_IsInLineOfSight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "IsInLineOfSight", Z_Construct_UFunction_UShooterBehaviourBase_IsInLineOfSight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_IsInLineOfSight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShooterBehaviourBase_IsInLineOfSight_Statics::ShooterBehaviourBase_eventIsInLineOfSight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_IsInLineOfSight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_IsInLineOfSight_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShooterBehaviourBase_IsInLineOfSight_Statics::ShooterBehaviourBase_eventIsInLineOfSight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_IsInLineOfSight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_IsInLineOfSight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execIsInLineOfSight)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_StartPoint);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetPoint);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInLineOfSight(Z_Param_Out_StartPoint,Z_Param_Out_TargetPoint,Z_Param_Tolerance);
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function IsInLineOfSight *****************************

// ********** Begin Class UShooterBehaviourBase Function ModifyCurrentAmmo *************************
struct Z_Construct_UFunction_UShooterBehaviourBase_ModifyCurrentAmmo_Statics
{
	struct ShooterBehaviourBase_eventModifyCurrentAmmo_Parms
	{
		int32 AmmoValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmmoValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AmmoValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_ModifyCurrentAmmo_Statics::NewProp_AmmoValue = { "AmmoValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventModifyCurrentAmmo_Parms, AmmoValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmmoValue_MetaData), NewProp_AmmoValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_ModifyCurrentAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_ModifyCurrentAmmo_Statics::NewProp_AmmoValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_ModifyCurrentAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_ModifyCurrentAmmo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "ModifyCurrentAmmo", Z_Construct_UFunction_UShooterBehaviourBase_ModifyCurrentAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_ModifyCurrentAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShooterBehaviourBase_ModifyCurrentAmmo_Statics::ShooterBehaviourBase_eventModifyCurrentAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_ModifyCurrentAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_ModifyCurrentAmmo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShooterBehaviourBase_ModifyCurrentAmmo_Statics::ShooterBehaviourBase_eventModifyCurrentAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_ModifyCurrentAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_ModifyCurrentAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execModifyCurrentAmmo)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AmmoValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ModifyCurrentAmmo(Z_Param_AmmoValue);
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function ModifyCurrentAmmo ***************************

// ********** Begin Class UShooterBehaviourBase Function NextTickHasJustShot ***********************
struct Z_Construct_UFunction_UShooterBehaviourBase_NextTickHasJustShot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_NextTickHasJustShot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "NextTickHasJustShot", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_NextTickHasJustShot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_NextTickHasJustShot_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_NextTickHasJustShot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_NextTickHasJustShot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execNextTickHasJustShot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NextTickHasJustShot();
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function NextTickHasJustShot *************************

// ********** Begin Class UShooterBehaviourBase Function OnDeployShoot *****************************
struct ShooterBehaviourBase_eventOnDeployShoot_Parms
{
	UShootPoint* ShootPoint;
	FVector TargetLocation;
	FVector DirectionToTarget;
	FVector DirectionToTargetSpreaded;
};
static FName NAME_UShooterBehaviourBase_OnDeployShoot = FName(TEXT("OnDeployShoot"));
void UShooterBehaviourBase::OnDeployShoot(UShootPoint* ShootPoint, FVector const& TargetLocation, FVector const& DirectionToTarget, FVector const& DirectionToTargetSpreaded) const
{
	UFunction* Func = FindFunctionChecked(NAME_UShooterBehaviourBase_OnDeployShoot);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ShooterBehaviourBase_eventOnDeployShoot_Parms Parms;
		Parms.ShootPoint=ShootPoint;
		Parms.TargetLocation=TargetLocation;
		Parms.DirectionToTarget=DirectionToTarget;
		Parms.DirectionToTargetSpreaded=DirectionToTargetSpreaded;
		const_cast<UShooterBehaviourBase*>(this)->ProcessEvent(Func,&Parms);
	}
	else
	{
		const_cast<UShooterBehaviourBase*>(this)->OnDeployShoot_Implementation(ShootPoint, TargetLocation, DirectionToTarget, DirectionToTargetSpreaded);
	}
}
struct Z_Construct_UFunction_UShooterBehaviourBase_OnDeployShoot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootPoint_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionToTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionToTargetSpreaded_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShootPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionToTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionToTargetSpreaded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_OnDeployShoot_Statics::NewProp_ShootPoint = { "ShootPoint", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventOnDeployShoot_Parms, ShootPoint), Z_Construct_UClass_UShootPoint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootPoint_MetaData), NewProp_ShootPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_OnDeployShoot_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventOnDeployShoot_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_OnDeployShoot_Statics::NewProp_DirectionToTarget = { "DirectionToTarget", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventOnDeployShoot_Parms, DirectionToTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionToTarget_MetaData), NewProp_DirectionToTarget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_OnDeployShoot_Statics::NewProp_DirectionToTargetSpreaded = { "DirectionToTargetSpreaded", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventOnDeployShoot_Parms, DirectionToTargetSpreaded), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionToTargetSpreaded_MetaData), NewProp_DirectionToTargetSpreaded_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_OnDeployShoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_OnDeployShoot_Statics::NewProp_ShootPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_OnDeployShoot_Statics::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_OnDeployShoot_Statics::NewProp_DirectionToTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_OnDeployShoot_Statics::NewProp_DirectionToTargetSpreaded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_OnDeployShoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_OnDeployShoot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "OnDeployShoot", Z_Construct_UFunction_UShooterBehaviourBase_OnDeployShoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_OnDeployShoot_Statics::PropPointers), sizeof(ShooterBehaviourBase_eventOnDeployShoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C80C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_OnDeployShoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_OnDeployShoot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ShooterBehaviourBase_eventOnDeployShoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_OnDeployShoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_OnDeployShoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execOnDeployShoot)
{
	P_GET_OBJECT(UShootPoint,Z_Param_ShootPoint);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_DirectionToTarget);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_DirectionToTargetSpreaded);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDeployShoot_Implementation(Z_Param_ShootPoint,Z_Param_Out_TargetLocation,Z_Param_Out_DirectionToTarget,Z_Param_Out_DirectionToTargetSpreaded);
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function OnDeployShoot *******************************

// ********** Begin Class UShooterBehaviourBase Function OnDisabled ********************************
static FName NAME_UShooterBehaviourBase_OnDisabled = FName(TEXT("OnDisabled"));
void UShooterBehaviourBase::OnDisabled()
{
	UFunction* Func = FindFunctionChecked(NAME_UShooterBehaviourBase_OnDisabled);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnDisabled_Implementation();
	}
}
struct Z_Construct_UFunction_UShooterBehaviourBase_OnDisabled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_OnDisabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "OnDisabled", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_OnDisabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_OnDisabled_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_OnDisabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_OnDisabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execOnDisabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDisabled_Implementation();
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function OnDisabled **********************************

// ********** Begin Class UShooterBehaviourBase Function OnEnabled *********************************
static FName NAME_UShooterBehaviourBase_OnEnabled = FName(TEXT("OnEnabled"));
void UShooterBehaviourBase::OnEnabled()
{
	UFunction* Func = FindFunctionChecked(NAME_UShooterBehaviourBase_OnEnabled);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnEnabled_Implementation();
	}
}
struct Z_Construct_UFunction_UShooterBehaviourBase_OnEnabled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_OnEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "OnEnabled", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_OnEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_OnEnabled_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_OnEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_OnEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execOnEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEnabled_Implementation();
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function OnEnabled ***********************************

// ********** Begin Class UShooterBehaviourBase Function OnInit ************************************
static FName NAME_UShooterBehaviourBase_OnInit = FName(TEXT("OnInit"));
void UShooterBehaviourBase::OnInit()
{
	UFunction* Func = FindFunctionChecked(NAME_UShooterBehaviourBase_OnInit);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnInit_Implementation();
	}
}
struct Z_Construct_UFunction_UShooterBehaviourBase_OnInit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_OnInit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "OnInit", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_OnInit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_OnInit_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_OnInit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_OnInit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execOnInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInit_Implementation();
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function OnInit **************************************

// ********** Begin Class UShooterBehaviourBase Function OnMagEmptied ******************************
static FName NAME_UShooterBehaviourBase_OnMagEmptied = FName(TEXT("OnMagEmptied"));
void UShooterBehaviourBase::OnMagEmptied()
{
	UFunction* Func = FindFunctionChecked(NAME_UShooterBehaviourBase_OnMagEmptied);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnMagEmptied_Implementation();
	}
}
struct Z_Construct_UFunction_UShooterBehaviourBase_OnMagEmptied_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_OnMagEmptied_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "OnMagEmptied", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_OnMagEmptied_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_OnMagEmptied_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_OnMagEmptied()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_OnMagEmptied_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execOnMagEmptied)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMagEmptied_Implementation();
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function OnMagEmptied ********************************

// ********** Begin Class UShooterBehaviourBase Function OnRefill **********************************
static FName NAME_UShooterBehaviourBase_OnRefill = FName(TEXT("OnRefill"));
void UShooterBehaviourBase::OnRefill()
{
	UFunction* Func = FindFunctionChecked(NAME_UShooterBehaviourBase_OnRefill);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnRefill_Implementation();
	}
}
struct Z_Construct_UFunction_UShooterBehaviourBase_OnRefill_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_OnRefill_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "OnRefill", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_OnRefill_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_OnRefill_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_OnRefill()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_OnRefill_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execOnRefill)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRefill_Implementation();
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function OnRefill ************************************

// ********** Begin Class UShooterBehaviourBase Function OnShootCondition **************************
struct ShooterBehaviourBase_eventOnShootCondition_Parms
{
	UShootBarrel* OutShootBarrel;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	ShooterBehaviourBase_eventOnShootCondition_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UShooterBehaviourBase_OnShootCondition = FName(TEXT("OnShootCondition"));
bool UShooterBehaviourBase::OnShootCondition(UShootBarrel* OutShootBarrel) const
{
	UFunction* Func = FindFunctionChecked(NAME_UShooterBehaviourBase_OnShootCondition);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ShooterBehaviourBase_eventOnShootCondition_Parms Parms;
		Parms.OutShootBarrel=OutShootBarrel;
		const_cast<UShooterBehaviourBase*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UShooterBehaviourBase*>(this)->OnShootCondition_Implementation(OutShootBarrel);
	}
}
struct Z_Construct_UFunction_UShooterBehaviourBase_OnShootCondition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Additional condition to check before shooting.\n\x09 * @return True if the condition is met, false otherwise.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional condition to check before shooting.\n@return True if the condition is met, false otherwise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutShootBarrel_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutShootBarrel;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_OnShootCondition_Statics::NewProp_OutShootBarrel = { "OutShootBarrel", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventOnShootCondition_Parms, OutShootBarrel), Z_Construct_UClass_UShootBarrel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutShootBarrel_MetaData), NewProp_OutShootBarrel_MetaData) };
void Z_Construct_UFunction_UShooterBehaviourBase_OnShootCondition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ShooterBehaviourBase_eventOnShootCondition_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_OnShootCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ShooterBehaviourBase_eventOnShootCondition_Parms), &Z_Construct_UFunction_UShooterBehaviourBase_OnShootCondition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_OnShootCondition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_OnShootCondition_Statics::NewProp_OutShootBarrel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_OnShootCondition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_OnShootCondition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_OnShootCondition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "OnShootCondition", Z_Construct_UFunction_UShooterBehaviourBase_OnShootCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_OnShootCondition_Statics::PropPointers), sizeof(ShooterBehaviourBase_eventOnShootCondition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_OnShootCondition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_OnShootCondition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ShooterBehaviourBase_eventOnShootCondition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_OnShootCondition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_OnShootCondition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execOnShootCondition)
{
	P_GET_OBJECT(UShootBarrel,Z_Param_OutShootBarrel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OnShootCondition_Implementation(Z_Param_OutShootBarrel);
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function OnShootCondition ****************************

// ********** Begin Class UShooterBehaviourBase Function OnShootFail *******************************
struct ShooterBehaviourBase_eventOnShootFail_Parms
{
	EShootFailReason FailReason;
};
static FName NAME_UShooterBehaviourBase_OnShootFail = FName(TEXT("OnShootFail"));
void UShooterBehaviourBase::OnShootFail(const EShootFailReason FailReason)
{
	UFunction* Func = FindFunctionChecked(NAME_UShooterBehaviourBase_OnShootFail);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ShooterBehaviourBase_eventOnShootFail_Parms Parms;
		Parms.FailReason=FailReason;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnShootFail_Implementation(FailReason);
	}
}
struct Z_Construct_UFunction_UShooterBehaviourBase_OnShootFail_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FailReason_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FailReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UShooterBehaviourBase_OnShootFail_Statics::NewProp_FailReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_OnShootFail_Statics::NewProp_FailReason = { "FailReason", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventOnShootFail_Parms, FailReason), Z_Construct_UEnum_WeaponSystem_EShootFailReason, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailReason_MetaData), NewProp_FailReason_MetaData) }; // 854889244
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_OnShootFail_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_OnShootFail_Statics::NewProp_FailReason_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_OnShootFail_Statics::NewProp_FailReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_OnShootFail_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_OnShootFail_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "OnShootFail", Z_Construct_UFunction_UShooterBehaviourBase_OnShootFail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_OnShootFail_Statics::PropPointers), sizeof(ShooterBehaviourBase_eventOnShootFail_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_OnShootFail_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_OnShootFail_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ShooterBehaviourBase_eventOnShootFail_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_OnShootFail()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_OnShootFail_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execOnShootFail)
{
	P_GET_ENUM(EShootFailReason,Z_Param_FailReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnShootFail_Implementation(EShootFailReason(Z_Param_FailReason));
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function OnShootFail *********************************

// ********** Begin Class UShooterBehaviourBase Function OnShootSuccess ****************************
struct ShooterBehaviourBase_eventOnShootSuccess_Parms
{
	const UShootBarrel* OutShootBarrel;
};
static FName NAME_UShooterBehaviourBase_OnShootSuccess = FName(TEXT("OnShootSuccess"));
void UShooterBehaviourBase::OnShootSuccess(const UShootBarrel* OutShootBarrel)
{
	UFunction* Func = FindFunctionChecked(NAME_UShooterBehaviourBase_OnShootSuccess);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ShooterBehaviourBase_eventOnShootSuccess_Parms Parms;
		Parms.OutShootBarrel=OutShootBarrel;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnShootSuccess_Implementation(OutShootBarrel);
	}
}
struct Z_Construct_UFunction_UShooterBehaviourBase_OnShootSuccess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutShootBarrel_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutShootBarrel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_OnShootSuccess_Statics::NewProp_OutShootBarrel = { "OutShootBarrel", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventOnShootSuccess_Parms, OutShootBarrel), Z_Construct_UClass_UShootBarrel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutShootBarrel_MetaData), NewProp_OutShootBarrel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_OnShootSuccess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_OnShootSuccess_Statics::NewProp_OutShootBarrel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_OnShootSuccess_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_OnShootSuccess_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "OnShootSuccess", Z_Construct_UFunction_UShooterBehaviourBase_OnShootSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_OnShootSuccess_Statics::PropPointers), sizeof(ShooterBehaviourBase_eventOnShootSuccess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_OnShootSuccess_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_OnShootSuccess_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ShooterBehaviourBase_eventOnShootSuccess_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_OnShootSuccess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_OnShootSuccess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execOnShootSuccess)
{
	P_GET_OBJECT(UShootBarrel,Z_Param_OutShootBarrel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnShootSuccess_Implementation(Z_Param_OutShootBarrel);
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function OnShootSuccess ******************************

// ********** Begin Class UShooterBehaviourBase Function OnTickBehaviour ***************************
struct ShooterBehaviourBase_eventOnTickBehaviour_Parms
{
	float DeltaTime;
};
static FName NAME_UShooterBehaviourBase_OnTickBehaviour = FName(TEXT("OnTickBehaviour"));
void UShooterBehaviourBase::OnTickBehaviour(const float DeltaTime)
{
	UFunction* Func = FindFunctionChecked(NAME_UShooterBehaviourBase_OnTickBehaviour);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ShooterBehaviourBase_eventOnTickBehaviour_Parms Parms;
		Parms.DeltaTime=DeltaTime;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnTickBehaviour_Implementation(DeltaTime);
	}
}
struct Z_Construct_UFunction_UShooterBehaviourBase_OnTickBehaviour_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_OnTickBehaviour_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventOnTickBehaviour_Parms, DeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaTime_MetaData), NewProp_DeltaTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_OnTickBehaviour_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_OnTickBehaviour_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_OnTickBehaviour_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_OnTickBehaviour_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "OnTickBehaviour", Z_Construct_UFunction_UShooterBehaviourBase_OnTickBehaviour_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_OnTickBehaviour_Statics::PropPointers), sizeof(ShooterBehaviourBase_eventOnTickBehaviour_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_OnTickBehaviour_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_OnTickBehaviour_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ShooterBehaviourBase_eventOnTickBehaviour_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_OnTickBehaviour()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_OnTickBehaviour_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execOnTickBehaviour)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTickBehaviour_Implementation(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function OnTickBehaviour *****************************

// ********** Begin Class UShooterBehaviourBase Function Refill ************************************
struct Z_Construct_UFunction_UShooterBehaviourBase_Refill_Statics
{
	struct ShooterBehaviourBase_eventRefill_Parms
	{
		int32 Ammo;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ammo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Ammo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_Refill_Statics::NewProp_Ammo = { "Ammo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventRefill_Parms, Ammo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ammo_MetaData), NewProp_Ammo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_Refill_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventRefill_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_Refill_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_Refill_Statics::NewProp_Ammo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_Refill_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_Refill_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_Refill_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "Refill", Z_Construct_UFunction_UShooterBehaviourBase_Refill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_Refill_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShooterBehaviourBase_Refill_Statics::ShooterBehaviourBase_eventRefill_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_Refill_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_Refill_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShooterBehaviourBase_Refill_Statics::ShooterBehaviourBase_eventRefill_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_Refill()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_Refill_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execRefill)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Ammo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Refill(Z_Param_Ammo);
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function Refill **************************************

// ********** Begin Class UShooterBehaviourBase Function RefillAllMagazine *************************
struct Z_Construct_UFunction_UShooterBehaviourBase_RefillAllMagazine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_RefillAllMagazine_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "RefillAllMagazine", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_RefillAllMagazine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_RefillAllMagazine_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_RefillAllMagazine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_RefillAllMagazine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execRefillAllMagazine)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefillAllMagazine();
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function RefillAllMagazine ***************************

// ********** Begin Class UShooterBehaviourBase Function ResetCooldown *****************************
struct Z_Construct_UFunction_UShooterBehaviourBase_ResetCooldown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_ResetCooldown_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "ResetCooldown", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_ResetCooldown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_ResetCooldown_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_ResetCooldown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_ResetCooldown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execResetCooldown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetCooldown();
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function ResetCooldown *******************************

// ********** Begin Class UShooterBehaviourBase Function ResetHasJustShot **************************
struct Z_Construct_UFunction_UShooterBehaviourBase_ResetHasJustShot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_ResetHasJustShot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "ResetHasJustShot", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_ResetHasJustShot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_ResetHasJustShot_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_ResetHasJustShot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_ResetHasJustShot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execResetHasJustShot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetHasJustShot();
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function ResetHasJustShot ****************************

// ********** Begin Class UShooterBehaviourBase Function ResetSpread *******************************
struct Z_Construct_UFunction_UShooterBehaviourBase_ResetSpread_Statics
{
	struct ShooterBehaviourBase_eventResetSpread_Parms
	{
		float ChangeRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_ChangeRate", "1.000000" },
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChangeRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChangeRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_ResetSpread_Statics::NewProp_ChangeRate = { "ChangeRate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventResetSpread_Parms, ChangeRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChangeRate_MetaData), NewProp_ChangeRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_ResetSpread_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_ResetSpread_Statics::NewProp_ChangeRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_ResetSpread_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_ResetSpread_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "ResetSpread", Z_Construct_UFunction_UShooterBehaviourBase_ResetSpread_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_ResetSpread_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShooterBehaviourBase_ResetSpread_Statics::ShooterBehaviourBase_eventResetSpread_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_ResetSpread_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_ResetSpread_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShooterBehaviourBase_ResetSpread_Statics::ShooterBehaviourBase_eventResetSpread_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_ResetSpread()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_ResetSpread_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execResetSpread)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ChangeRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetSpread(Z_Param_ChangeRate);
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function ResetSpread *********************************

// ********** Begin Class UShooterBehaviourBase Function SetBehaviourEnabled ***********************
struct Z_Construct_UFunction_UShooterBehaviourBase_SetBehaviourEnabled_Statics
{
	struct ShooterBehaviourBase_eventSetBehaviourEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UShooterBehaviourBase_SetBehaviourEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((ShooterBehaviourBase_eventSetBehaviourEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_SetBehaviourEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ShooterBehaviourBase_eventSetBehaviourEnabled_Parms), &Z_Construct_UFunction_UShooterBehaviourBase_SetBehaviourEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_SetBehaviourEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_SetBehaviourEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_SetBehaviourEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_SetBehaviourEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "SetBehaviourEnabled", Z_Construct_UFunction_UShooterBehaviourBase_SetBehaviourEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_SetBehaviourEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShooterBehaviourBase_SetBehaviourEnabled_Statics::ShooterBehaviourBase_eventSetBehaviourEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_SetBehaviourEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_SetBehaviourEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShooterBehaviourBase_SetBehaviourEnabled_Statics::ShooterBehaviourBase_eventSetBehaviourEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_SetBehaviourEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_SetBehaviourEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execSetBehaviourEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBehaviourEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function SetBehaviourEnabled *************************

// ********** Begin Class UShooterBehaviourBase Function SetCurrentAmmo ****************************
struct Z_Construct_UFunction_UShooterBehaviourBase_SetCurrentAmmo_Statics
{
	struct ShooterBehaviourBase_eventSetCurrentAmmo_Parms
	{
		int32 NewAmmo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewAmmo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewAmmo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_SetCurrentAmmo_Statics::NewProp_NewAmmo = { "NewAmmo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventSetCurrentAmmo_Parms, NewAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewAmmo_MetaData), NewProp_NewAmmo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_SetCurrentAmmo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_SetCurrentAmmo_Statics::NewProp_NewAmmo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_SetCurrentAmmo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_SetCurrentAmmo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "SetCurrentAmmo", Z_Construct_UFunction_UShooterBehaviourBase_SetCurrentAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_SetCurrentAmmo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShooterBehaviourBase_SetCurrentAmmo_Statics::ShooterBehaviourBase_eventSetCurrentAmmo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_SetCurrentAmmo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_SetCurrentAmmo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShooterBehaviourBase_SetCurrentAmmo_Statics::ShooterBehaviourBase_eventSetCurrentAmmo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_SetCurrentAmmo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_SetCurrentAmmo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execSetCurrentAmmo)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewAmmo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentAmmo(Z_Param_NewAmmo);
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function SetCurrentAmmo ******************************

// ********** Begin Class UShooterBehaviourBase Function SetDamage *********************************
struct Z_Construct_UFunction_UShooterBehaviourBase_SetDamage_Statics
{
	struct ShooterBehaviourBase_eventSetDamage_Parms
	{
		float NewDamage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewDamage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_SetDamage_Statics::NewProp_NewDamage = { "NewDamage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventSetDamage_Parms, NewDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewDamage_MetaData), NewProp_NewDamage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_SetDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_SetDamage_Statics::NewProp_NewDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_SetDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_SetDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "SetDamage", Z_Construct_UFunction_UShooterBehaviourBase_SetDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_SetDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShooterBehaviourBase_SetDamage_Statics::ShooterBehaviourBase_eventSetDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_SetDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_SetDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShooterBehaviourBase_SetDamage_Statics::ShooterBehaviourBase_eventSetDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_SetDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_SetDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execSetDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewDamage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDamage(Z_Param_NewDamage);
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function SetDamage ***********************************

// ********** Begin Class UShooterBehaviourBase Function SetFireRate *******************************
struct Z_Construct_UFunction_UShooterBehaviourBase_SetFireRate_Statics
{
	struct ShooterBehaviourBase_eventSetFireRate_Parms
	{
		float NewFireRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewFireRate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewFireRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_SetFireRate_Statics::NewProp_NewFireRate = { "NewFireRate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventSetFireRate_Parms, NewFireRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewFireRate_MetaData), NewProp_NewFireRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_SetFireRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_SetFireRate_Statics::NewProp_NewFireRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_SetFireRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_SetFireRate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "SetFireRate", Z_Construct_UFunction_UShooterBehaviourBase_SetFireRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_SetFireRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShooterBehaviourBase_SetFireRate_Statics::ShooterBehaviourBase_eventSetFireRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_SetFireRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_SetFireRate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShooterBehaviourBase_SetFireRate_Statics::ShooterBehaviourBase_eventSetFireRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_SetFireRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_SetFireRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execSetFireRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewFireRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFireRate(Z_Param_NewFireRate);
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function SetFireRate *********************************

// ********** Begin Class UShooterBehaviourBase Function SetMagSize ********************************
struct Z_Construct_UFunction_UShooterBehaviourBase_SetMagSize_Statics
{
	struct ShooterBehaviourBase_eventSetMagSize_Parms
	{
		int32 NewMagSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewMagSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewMagSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_SetMagSize_Statics::NewProp_NewMagSize = { "NewMagSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventSetMagSize_Parms, NewMagSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewMagSize_MetaData), NewProp_NewMagSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_SetMagSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_SetMagSize_Statics::NewProp_NewMagSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_SetMagSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_SetMagSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "SetMagSize", Z_Construct_UFunction_UShooterBehaviourBase_SetMagSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_SetMagSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShooterBehaviourBase_SetMagSize_Statics::ShooterBehaviourBase_eventSetMagSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_SetMagSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_SetMagSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShooterBehaviourBase_SetMagSize_Statics::ShooterBehaviourBase_eventSetMagSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_SetMagSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_SetMagSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execSetMagSize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewMagSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMagSize(Z_Param_NewMagSize);
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function SetMagSize **********************************

// ********** Begin Class UShooterBehaviourBase Function SetMaxRange *******************************
struct Z_Construct_UFunction_UShooterBehaviourBase_SetMaxRange_Statics
{
	struct ShooterBehaviourBase_eventSetMaxRange_Parms
	{
		float NewRange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_SetMaxRange_Statics::NewProp_NewRange = { "NewRange", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventSetMaxRange_Parms, NewRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewRange_MetaData), NewProp_NewRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_SetMaxRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_SetMaxRange_Statics::NewProp_NewRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_SetMaxRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_SetMaxRange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "SetMaxRange", Z_Construct_UFunction_UShooterBehaviourBase_SetMaxRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_SetMaxRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShooterBehaviourBase_SetMaxRange_Statics::ShooterBehaviourBase_eventSetMaxRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_SetMaxRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_SetMaxRange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShooterBehaviourBase_SetMaxRange_Statics::ShooterBehaviourBase_eventSetMaxRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_SetMaxRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_SetMaxRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execSetMaxRange)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewRange);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaxRange(Z_Param_NewRange);
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function SetMaxRange *********************************

// ********** Begin Class UShooterBehaviourBase Function SetRecoilStrength *************************
struct Z_Construct_UFunction_UShooterBehaviourBase_SetRecoilStrength_Statics
{
	struct ShooterBehaviourBase_eventSetRecoilStrength_Parms
	{
		float NewRecoilStrength;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRecoilStrength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_SetRecoilStrength_Statics::NewProp_NewRecoilStrength = { "NewRecoilStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventSetRecoilStrength_Parms, NewRecoilStrength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_SetRecoilStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_SetRecoilStrength_Statics::NewProp_NewRecoilStrength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_SetRecoilStrength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_SetRecoilStrength_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "SetRecoilStrength", Z_Construct_UFunction_UShooterBehaviourBase_SetRecoilStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_SetRecoilStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShooterBehaviourBase_SetRecoilStrength_Statics::ShooterBehaviourBase_eventSetRecoilStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_SetRecoilStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_SetRecoilStrength_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShooterBehaviourBase_SetRecoilStrength_Statics::ShooterBehaviourBase_eventSetRecoilStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_SetRecoilStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_SetRecoilStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execSetRecoilStrength)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewRecoilStrength);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRecoilStrength(Z_Param_NewRecoilStrength);
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function SetRecoilStrength ***************************

// ********** Begin Class UShooterBehaviourBase Function SetShootParams ****************************
struct Z_Construct_UFunction_UShooterBehaviourBase_SetShootParams_Statics
{
	struct ShooterBehaviourBase_eventSetShootParams_Parms
	{
		float NewDamage;
		float NewFireRate;
		float NewRange;
		int32 NewMagSize;
		int32 NewRecoilStrength;
		float NewDefaultSpread;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewDamage_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewFireRate_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewRange_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewMagSize_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewRecoilStrength_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewDefaultSpread_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewFireRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRange;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewMagSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewRecoilStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewDefaultSpread;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_SetShootParams_Statics::NewProp_NewDamage = { "NewDamage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventSetShootParams_Parms, NewDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewDamage_MetaData), NewProp_NewDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_SetShootParams_Statics::NewProp_NewFireRate = { "NewFireRate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventSetShootParams_Parms, NewFireRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewFireRate_MetaData), NewProp_NewFireRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_SetShootParams_Statics::NewProp_NewRange = { "NewRange", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventSetShootParams_Parms, NewRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewRange_MetaData), NewProp_NewRange_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_SetShootParams_Statics::NewProp_NewMagSize = { "NewMagSize", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventSetShootParams_Parms, NewMagSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewMagSize_MetaData), NewProp_NewMagSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_SetShootParams_Statics::NewProp_NewRecoilStrength = { "NewRecoilStrength", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventSetShootParams_Parms, NewRecoilStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewRecoilStrength_MetaData), NewProp_NewRecoilStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_SetShootParams_Statics::NewProp_NewDefaultSpread = { "NewDefaultSpread", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventSetShootParams_Parms, NewDefaultSpread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewDefaultSpread_MetaData), NewProp_NewDefaultSpread_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_SetShootParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_SetShootParams_Statics::NewProp_NewDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_SetShootParams_Statics::NewProp_NewFireRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_SetShootParams_Statics::NewProp_NewRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_SetShootParams_Statics::NewProp_NewMagSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_SetShootParams_Statics::NewProp_NewRecoilStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_SetShootParams_Statics::NewProp_NewDefaultSpread,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_SetShootParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_SetShootParams_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "SetShootParams", Z_Construct_UFunction_UShooterBehaviourBase_SetShootParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_SetShootParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShooterBehaviourBase_SetShootParams_Statics::ShooterBehaviourBase_eventSetShootParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_SetShootParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_SetShootParams_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShooterBehaviourBase_SetShootParams_Statics::ShooterBehaviourBase_eventSetShootParams_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_SetShootParams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_SetShootParams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execSetShootParams)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewDamage);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewFireRate);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewRange);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewMagSize);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewRecoilStrength);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewDefaultSpread);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShootParams(Z_Param_NewDamage,Z_Param_NewFireRate,Z_Param_NewRange,Z_Param_NewMagSize,Z_Param_NewRecoilStrength,Z_Param_NewDefaultSpread);
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function SetShootParams ******************************

// ********** Begin Class UShooterBehaviourBase Function SetShootType ******************************
struct Z_Construct_UFunction_UShooterBehaviourBase_SetShootType_Statics
{
	struct ShooterBehaviourBase_eventSetShootType_Parms
	{
		EShootType NewShootType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UShooterBehaviourBase_SetShootType_Statics::NewProp_NewShootType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_SetShootType_Statics::NewProp_NewShootType = { "NewShootType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventSetShootType_Parms, NewShootType), Z_Construct_UEnum_WeaponSystem_EShootType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewShootType_MetaData), NewProp_NewShootType_MetaData) }; // 1661658870
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_SetShootType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_SetShootType_Statics::NewProp_NewShootType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_SetShootType_Statics::NewProp_NewShootType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_SetShootType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_SetShootType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "SetShootType", Z_Construct_UFunction_UShooterBehaviourBase_SetShootType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_SetShootType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShooterBehaviourBase_SetShootType_Statics::ShooterBehaviourBase_eventSetShootType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_SetShootType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_SetShootType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShooterBehaviourBase_SetShootType_Statics::ShooterBehaviourBase_eventSetShootType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_SetShootType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_SetShootType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execSetShootType)
{
	P_GET_ENUM(EShootType,Z_Param_NewShootType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShootType(EShootType(Z_Param_NewShootType));
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function SetShootType ********************************

// ********** Begin Class UShooterBehaviourBase Function SetSpread *********************************
struct Z_Construct_UFunction_UShooterBehaviourBase_SetSpread_Statics
{
	struct ShooterBehaviourBase_eventSetSpread_Parms
	{
		float NewSpread;
		float NewSpreadChangeRate;
		bool bOverrideDefault;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_bOverrideDefault", "false" },
		{ "CPP_Default_NewSpreadChangeRate", "1.000000" },
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewSpread_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewSpreadChangeRate_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDefault_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSpread;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSpreadChangeRate;
	static void NewProp_bOverrideDefault_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDefault;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_SetSpread_Statics::NewProp_NewSpread = { "NewSpread", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventSetSpread_Parms, NewSpread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewSpread_MetaData), NewProp_NewSpread_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_SetSpread_Statics::NewProp_NewSpreadChangeRate = { "NewSpreadChangeRate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventSetSpread_Parms, NewSpreadChangeRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewSpreadChangeRate_MetaData), NewProp_NewSpreadChangeRate_MetaData) };
void Z_Construct_UFunction_UShooterBehaviourBase_SetSpread_Statics::NewProp_bOverrideDefault_SetBit(void* Obj)
{
	((ShooterBehaviourBase_eventSetSpread_Parms*)Obj)->bOverrideDefault = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_SetSpread_Statics::NewProp_bOverrideDefault = { "bOverrideDefault", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ShooterBehaviourBase_eventSetSpread_Parms), &Z_Construct_UFunction_UShooterBehaviourBase_SetSpread_Statics::NewProp_bOverrideDefault_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideDefault_MetaData), NewProp_bOverrideDefault_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_SetSpread_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_SetSpread_Statics::NewProp_NewSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_SetSpread_Statics::NewProp_NewSpreadChangeRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_SetSpread_Statics::NewProp_bOverrideDefault,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_SetSpread_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_SetSpread_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "SetSpread", Z_Construct_UFunction_UShooterBehaviourBase_SetSpread_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_SetSpread_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShooterBehaviourBase_SetSpread_Statics::ShooterBehaviourBase_eventSetSpread_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_SetSpread_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_SetSpread_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShooterBehaviourBase_SetSpread_Statics::ShooterBehaviourBase_eventSetSpread_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_SetSpread()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_SetSpread_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execSetSpread)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewSpread);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewSpreadChangeRate);
	P_GET_UBOOL(Z_Param_bOverrideDefault);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSpread(Z_Param_NewSpread,Z_Param_NewSpreadChangeRate,Z_Param_bOverrideDefault);
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function SetSpread ***********************************

// ********** Begin Class UShooterBehaviourBase Function Shoot *************************************
struct Z_Construct_UFunction_UShooterBehaviourBase_Shoot_Statics
{
	struct ShooterBehaviourBase_eventShoot_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UShooterBehaviourBase_Shoot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ShooterBehaviourBase_eventShoot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_Shoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ShooterBehaviourBase_eventShoot_Parms), &Z_Construct_UFunction_UShooterBehaviourBase_Shoot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_Shoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_Shoot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_Shoot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_Shoot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "Shoot", Z_Construct_UFunction_UShooterBehaviourBase_Shoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_Shoot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShooterBehaviourBase_Shoot_Statics::ShooterBehaviourBase_eventShoot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_Shoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_Shoot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShooterBehaviourBase_Shoot_Statics::ShooterBehaviourBase_eventShoot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_Shoot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_Shoot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execShoot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Shoot();
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function Shoot ***************************************

// ********** Begin Class UShooterBehaviourBase Function TryGetCameraPoints ************************
struct Z_Construct_UFunction_UShooterBehaviourBase_TryGetCameraPoints_Statics
{
	struct ShooterBehaviourBase_eventTryGetCameraPoints_Parms
	{
		FVector OutStartPoint;
		FVector OutEndPoint;
		FVector OutHitPoint;
		FRotator OutRotation;
		FVector StartPointOffset;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_StartPointOffset", "" },
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutStartPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutEndPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHitPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPointOffset;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_TryGetCameraPoints_Statics::NewProp_OutStartPoint = { "OutStartPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventTryGetCameraPoints_Parms, OutStartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_TryGetCameraPoints_Statics::NewProp_OutEndPoint = { "OutEndPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventTryGetCameraPoints_Parms, OutEndPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_TryGetCameraPoints_Statics::NewProp_OutHitPoint = { "OutHitPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventTryGetCameraPoints_Parms, OutHitPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_TryGetCameraPoints_Statics::NewProp_OutRotation = { "OutRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventTryGetCameraPoints_Parms, OutRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_TryGetCameraPoints_Statics::NewProp_StartPointOffset = { "StartPointOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBehaviourBase_eventTryGetCameraPoints_Parms, StartPointOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UShooterBehaviourBase_TryGetCameraPoints_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ShooterBehaviourBase_eventTryGetCameraPoints_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UShooterBehaviourBase_TryGetCameraPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ShooterBehaviourBase_eventTryGetCameraPoints_Parms), &Z_Construct_UFunction_UShooterBehaviourBase_TryGetCameraPoints_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterBehaviourBase_TryGetCameraPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_TryGetCameraPoints_Statics::NewProp_OutStartPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_TryGetCameraPoints_Statics::NewProp_OutEndPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_TryGetCameraPoints_Statics::NewProp_OutHitPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_TryGetCameraPoints_Statics::NewProp_OutRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_TryGetCameraPoints_Statics::NewProp_StartPointOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterBehaviourBase_TryGetCameraPoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_TryGetCameraPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterBehaviourBase_TryGetCameraPoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterBehaviourBase, nullptr, "TryGetCameraPoints", Z_Construct_UFunction_UShooterBehaviourBase_TryGetCameraPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_TryGetCameraPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UShooterBehaviourBase_TryGetCameraPoints_Statics::ShooterBehaviourBase_eventTryGetCameraPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterBehaviourBase_TryGetCameraPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterBehaviourBase_TryGetCameraPoints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UShooterBehaviourBase_TryGetCameraPoints_Statics::ShooterBehaviourBase_eventTryGetCameraPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterBehaviourBase_TryGetCameraPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterBehaviourBase_TryGetCameraPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterBehaviourBase::execTryGetCameraPoints)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutStartPoint);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutEndPoint);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutHitPoint);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRotation);
	P_GET_STRUCT(FVector,Z_Param_StartPointOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryGetCameraPoints(Z_Param_Out_OutStartPoint,Z_Param_Out_OutEndPoint,Z_Param_Out_OutHitPoint,Z_Param_Out_OutRotation,Z_Param_StartPointOffset);
	P_NATIVE_END;
}
// ********** End Class UShooterBehaviourBase Function TryGetCameraPoints **************************

// ********** Begin Class UShooterBehaviourBase ****************************************************
void UShooterBehaviourBase::StaticRegisterNativesUShooterBehaviourBase()
{
	UClass* Class = UShooterBehaviourBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddDynamicSpread", &UShooterBehaviourBase::execAddDynamicSpread },
		{ "DisableBehaviour", &UShooterBehaviourBase::execDisableBehaviour },
		{ "EnableBehaviour", &UShooterBehaviourBase::execEnableBehaviour },
		{ "EndShootSequence", &UShooterBehaviourBase::execEndShootSequence },
		{ "GetAmmoToConsume", &UShooterBehaviourBase::execGetAmmoToConsume },
		{ "GetCooldownHandler", &UShooterBehaviourBase::execGetCooldownHandler },
		{ "GetCurrentAmmo", &UShooterBehaviourBase::execGetCurrentAmmo },
		{ "GetDamage", &UShooterBehaviourBase::execGetDamage },
		{ "GetFireRate", &UShooterBehaviourBase::execGetFireRate },
		{ "GetMagSize", &UShooterBehaviourBase::execGetMagSize },
		{ "GetMaxRange", &UShooterBehaviourBase::execGetMaxRange },
		{ "GetOwner", &UShooterBehaviourBase::execGetOwner },
		{ "GetRecoilHandler", &UShooterBehaviourBase::execGetRecoilHandler },
		{ "GetRecoilStrength", &UShooterBehaviourBase::execGetRecoilStrength },
		{ "GetShootBarrel", &UShooterBehaviourBase::execGetShootBarrel },
		{ "GetShooterTargetLocation", &UShooterBehaviourBase::execGetShooterTargetLocation },
		{ "GetShootType", &UShooterBehaviourBase::execGetShootType },
		{ "GetShotsFired", &UShooterBehaviourBase::execGetShotsFired },
		{ "GetSpread", &UShooterBehaviourBase::execGetSpread },
		{ "GetSpreadHandler", &UShooterBehaviourBase::execGetSpreadHandler },
		{ "HasJustShot", &UShooterBehaviourBase::execHasJustShot },
		{ "InstantSetSpread", &UShooterBehaviourBase::execInstantSetSpread },
		{ "IsBehaviourActive", &UShooterBehaviourBase::execIsBehaviourActive },
		{ "IsInLineOfSight", &UShooterBehaviourBase::execIsInLineOfSight },
		{ "ModifyCurrentAmmo", &UShooterBehaviourBase::execModifyCurrentAmmo },
		{ "NextTickHasJustShot", &UShooterBehaviourBase::execNextTickHasJustShot },
		{ "OnDeployShoot", &UShooterBehaviourBase::execOnDeployShoot },
		{ "OnDisabled", &UShooterBehaviourBase::execOnDisabled },
		{ "OnEnabled", &UShooterBehaviourBase::execOnEnabled },
		{ "OnInit", &UShooterBehaviourBase::execOnInit },
		{ "OnMagEmptied", &UShooterBehaviourBase::execOnMagEmptied },
		{ "OnRefill", &UShooterBehaviourBase::execOnRefill },
		{ "OnShootCondition", &UShooterBehaviourBase::execOnShootCondition },
		{ "OnShootFail", &UShooterBehaviourBase::execOnShootFail },
		{ "OnShootSuccess", &UShooterBehaviourBase::execOnShootSuccess },
		{ "OnTickBehaviour", &UShooterBehaviourBase::execOnTickBehaviour },
		{ "Refill", &UShooterBehaviourBase::execRefill },
		{ "RefillAllMagazine", &UShooterBehaviourBase::execRefillAllMagazine },
		{ "ResetCooldown", &UShooterBehaviourBase::execResetCooldown },
		{ "ResetHasJustShot", &UShooterBehaviourBase::execResetHasJustShot },
		{ "ResetSpread", &UShooterBehaviourBase::execResetSpread },
		{ "SetBehaviourEnabled", &UShooterBehaviourBase::execSetBehaviourEnabled },
		{ "SetCurrentAmmo", &UShooterBehaviourBase::execSetCurrentAmmo },
		{ "SetDamage", &UShooterBehaviourBase::execSetDamage },
		{ "SetFireRate", &UShooterBehaviourBase::execSetFireRate },
		{ "SetMagSize", &UShooterBehaviourBase::execSetMagSize },
		{ "SetMaxRange", &UShooterBehaviourBase::execSetMaxRange },
		{ "SetRecoilStrength", &UShooterBehaviourBase::execSetRecoilStrength },
		{ "SetShootParams", &UShooterBehaviourBase::execSetShootParams },
		{ "SetShootType", &UShooterBehaviourBase::execSetShootType },
		{ "SetSpread", &UShooterBehaviourBase::execSetSpread },
		{ "Shoot", &UShooterBehaviourBase::execShoot },
		{ "TryGetCameraPoints", &UShooterBehaviourBase::execTryGetCameraPoints },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UShooterBehaviourBase;
UClass* UShooterBehaviourBase::GetPrivateStaticClass()
{
	using TClass = UShooterBehaviourBase;
	if (!Z_Registration_Info_UClass_UShooterBehaviourBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ShooterBehaviourBase"),
			Z_Registration_Info_UClass_UShooterBehaviourBase.InnerSingleton,
			StaticRegisterNativesUShooterBehaviourBase,
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
	return Z_Registration_Info_UClass_UShooterBehaviourBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UShooterBehaviourBase_NoRegister()
{
	return UShooterBehaviourBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UShooterBehaviourBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Shooter/Behaviours/ShooterBehaviourBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBehaviourEnabled_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBehaviourDisabled_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBehaviourShootSuccess_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBehaviourShootFail_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEndShootSequence_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBehaviourRefill_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCurrentAmmoChanged_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMagEmpty_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SightTraceChannel_MetaData[] = {
		{ "Category", "Shooter|Configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -- Configuration --\n" },
#endif
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-- Configuration --" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageTypeClass_MetaData[] = {
		{ "Category", "Shooter|Configuration" },
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasInfiniteAmmo_MetaData[] = {
		{ "Category", "Shooter|Configuration" },
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmmoToConsumePerShot_MetaData[] = {
		{ "Category", "Shooter|Configuration" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shooter_MetaData[] = {
		{ "Category", "ShooterBehaviourBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "Category", "ShooterBehaviourBase" },
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootPoints_MetaData[] = {
		{ "Category", "ShooterBehaviourBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownHandler_MetaData[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoilHandler_MetaData[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpreadHandler_MetaData[] = {
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootBarrel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterBehaviourBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBehaviourEnabled;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBehaviourDisabled;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBehaviourShootSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBehaviourShootFail;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndShootSequence;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBehaviourRefill;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCurrentAmmoChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMagEmpty;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SightTraceChannel;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageTypeClass;
	static void NewProp_bHasInfiniteAmmo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasInfiniteAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AmmoToConsumePerShot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Shooter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShootPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ShootPoints;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CooldownHandler;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RecoilHandler;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpreadHandler;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShootBarrel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UShooterBehaviourBase_AddDynamicSpread, "AddDynamicSpread" }, // 350102192
		{ &Z_Construct_UFunction_UShooterBehaviourBase_DisableBehaviour, "DisableBehaviour" }, // 1806330205
		{ &Z_Construct_UFunction_UShooterBehaviourBase_EnableBehaviour, "EnableBehaviour" }, // 3044883102
		{ &Z_Construct_UFunction_UShooterBehaviourBase_EndShootSequence, "EndShootSequence" }, // 2886614427
		{ &Z_Construct_UFunction_UShooterBehaviourBase_GetAmmoToConsume, "GetAmmoToConsume" }, // 3580858618
		{ &Z_Construct_UFunction_UShooterBehaviourBase_GetCooldownHandler, "GetCooldownHandler" }, // 3553985530
		{ &Z_Construct_UFunction_UShooterBehaviourBase_GetCurrentAmmo, "GetCurrentAmmo" }, // 3198851663
		{ &Z_Construct_UFunction_UShooterBehaviourBase_GetDamage, "GetDamage" }, // 2471550347
		{ &Z_Construct_UFunction_UShooterBehaviourBase_GetFireRate, "GetFireRate" }, // 2522156189
		{ &Z_Construct_UFunction_UShooterBehaviourBase_GetMagSize, "GetMagSize" }, // 2843445241
		{ &Z_Construct_UFunction_UShooterBehaviourBase_GetMaxRange, "GetMaxRange" }, // 172494051
		{ &Z_Construct_UFunction_UShooterBehaviourBase_GetOwner, "GetOwner" }, // 3763296962
		{ &Z_Construct_UFunction_UShooterBehaviourBase_GetRecoilHandler, "GetRecoilHandler" }, // 2492168364
		{ &Z_Construct_UFunction_UShooterBehaviourBase_GetRecoilStrength, "GetRecoilStrength" }, // 4207451633
		{ &Z_Construct_UFunction_UShooterBehaviourBase_GetShootBarrel, "GetShootBarrel" }, // 1321562634
		{ &Z_Construct_UFunction_UShooterBehaviourBase_GetShooterTargetLocation, "GetShooterTargetLocation" }, // 3546173628
		{ &Z_Construct_UFunction_UShooterBehaviourBase_GetShootType, "GetShootType" }, // 2502853288
		{ &Z_Construct_UFunction_UShooterBehaviourBase_GetShotsFired, "GetShotsFired" }, // 827599355
		{ &Z_Construct_UFunction_UShooterBehaviourBase_GetSpread, "GetSpread" }, // 1967930555
		{ &Z_Construct_UFunction_UShooterBehaviourBase_GetSpreadHandler, "GetSpreadHandler" }, // 590995160
		{ &Z_Construct_UFunction_UShooterBehaviourBase_HasJustShot, "HasJustShot" }, // 2343712846
		{ &Z_Construct_UFunction_UShooterBehaviourBase_InstantSetSpread, "InstantSetSpread" }, // 2870974218
		{ &Z_Construct_UFunction_UShooterBehaviourBase_IsBehaviourActive, "IsBehaviourActive" }, // 1300033417
		{ &Z_Construct_UFunction_UShooterBehaviourBase_IsInLineOfSight, "IsInLineOfSight" }, // 2610703408
		{ &Z_Construct_UFunction_UShooterBehaviourBase_ModifyCurrentAmmo, "ModifyCurrentAmmo" }, // 3756106751
		{ &Z_Construct_UFunction_UShooterBehaviourBase_NextTickHasJustShot, "NextTickHasJustShot" }, // 2522648387
		{ &Z_Construct_UFunction_UShooterBehaviourBase_OnDeployShoot, "OnDeployShoot" }, // 3842377241
		{ &Z_Construct_UFunction_UShooterBehaviourBase_OnDisabled, "OnDisabled" }, // 1178076147
		{ &Z_Construct_UFunction_UShooterBehaviourBase_OnEnabled, "OnEnabled" }, // 3019973910
		{ &Z_Construct_UFunction_UShooterBehaviourBase_OnInit, "OnInit" }, // 4010696874
		{ &Z_Construct_UFunction_UShooterBehaviourBase_OnMagEmptied, "OnMagEmptied" }, // 1742935544
		{ &Z_Construct_UFunction_UShooterBehaviourBase_OnRefill, "OnRefill" }, // 3801301464
		{ &Z_Construct_UFunction_UShooterBehaviourBase_OnShootCondition, "OnShootCondition" }, // 604822358
		{ &Z_Construct_UFunction_UShooterBehaviourBase_OnShootFail, "OnShootFail" }, // 1515656569
		{ &Z_Construct_UFunction_UShooterBehaviourBase_OnShootSuccess, "OnShootSuccess" }, // 18512325
		{ &Z_Construct_UFunction_UShooterBehaviourBase_OnTickBehaviour, "OnTickBehaviour" }, // 1281746466
		{ &Z_Construct_UFunction_UShooterBehaviourBase_Refill, "Refill" }, // 737581377
		{ &Z_Construct_UFunction_UShooterBehaviourBase_RefillAllMagazine, "RefillAllMagazine" }, // 470622780
		{ &Z_Construct_UFunction_UShooterBehaviourBase_ResetCooldown, "ResetCooldown" }, // 116384863
		{ &Z_Construct_UFunction_UShooterBehaviourBase_ResetHasJustShot, "ResetHasJustShot" }, // 1017137101
		{ &Z_Construct_UFunction_UShooterBehaviourBase_ResetSpread, "ResetSpread" }, // 2152800408
		{ &Z_Construct_UFunction_UShooterBehaviourBase_SetBehaviourEnabled, "SetBehaviourEnabled" }, // 659825692
		{ &Z_Construct_UFunction_UShooterBehaviourBase_SetCurrentAmmo, "SetCurrentAmmo" }, // 1678670988
		{ &Z_Construct_UFunction_UShooterBehaviourBase_SetDamage, "SetDamage" }, // 2033984884
		{ &Z_Construct_UFunction_UShooterBehaviourBase_SetFireRate, "SetFireRate" }, // 1749576735
		{ &Z_Construct_UFunction_UShooterBehaviourBase_SetMagSize, "SetMagSize" }, // 3197944019
		{ &Z_Construct_UFunction_UShooterBehaviourBase_SetMaxRange, "SetMaxRange" }, // 2179961292
		{ &Z_Construct_UFunction_UShooterBehaviourBase_SetRecoilStrength, "SetRecoilStrength" }, // 3343585371
		{ &Z_Construct_UFunction_UShooterBehaviourBase_SetShootParams, "SetShootParams" }, // 2994467719
		{ &Z_Construct_UFunction_UShooterBehaviourBase_SetShootType, "SetShootType" }, // 1609191014
		{ &Z_Construct_UFunction_UShooterBehaviourBase_SetSpread, "SetSpread" }, // 3549660328
		{ &Z_Construct_UFunction_UShooterBehaviourBase_Shoot, "Shoot" }, // 4239370573
		{ &Z_Construct_UFunction_UShooterBehaviourBase_TryGetCameraPoints, "TryGetCameraPoints" }, // 2628063979
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterBehaviourBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_OnBehaviourEnabled = { "OnBehaviourEnabled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterBehaviourBase, OnBehaviourEnabled), Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourEnabled__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBehaviourEnabled_MetaData), NewProp_OnBehaviourEnabled_MetaData) }; // 3501872806
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_OnBehaviourDisabled = { "OnBehaviourDisabled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterBehaviourBase, OnBehaviourDisabled), Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourDisabled__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBehaviourDisabled_MetaData), NewProp_OnBehaviourDisabled_MetaData) }; // 2045228290
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_OnBehaviourShootSuccess = { "OnBehaviourShootSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterBehaviourBase, OnBehaviourShootSuccess), Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourShootSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBehaviourShootSuccess_MetaData), NewProp_OnBehaviourShootSuccess_MetaData) }; // 2868968069
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_OnBehaviourShootFail = { "OnBehaviourShootFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterBehaviourBase, OnBehaviourShootFail), Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourShootFail__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBehaviourShootFail_MetaData), NewProp_OnBehaviourShootFail_MetaData) }; // 4206493470
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_OnEndShootSequence = { "OnEndShootSequence", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterBehaviourBase, OnEndShootSequence), Z_Construct_UDelegateFunction_WeaponSystem_OnEndShootSequence__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEndShootSequence_MetaData), NewProp_OnEndShootSequence_MetaData) }; // 1342054785
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_OnBehaviourRefill = { "OnBehaviourRefill", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterBehaviourBase, OnBehaviourRefill), Z_Construct_UDelegateFunction_WeaponSystem_OnBehaviourRefill__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBehaviourRefill_MetaData), NewProp_OnBehaviourRefill_MetaData) }; // 3631429455
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_OnCurrentAmmoChanged = { "OnCurrentAmmoChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterBehaviourBase, OnCurrentAmmoChanged), Z_Construct_UDelegateFunction_WeaponSystem_OnCurrentAmmoChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCurrentAmmoChanged_MetaData), NewProp_OnCurrentAmmoChanged_MetaData) }; // 1653149513
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_OnMagEmpty = { "OnMagEmpty", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterBehaviourBase, OnMagEmpty), Z_Construct_UDelegateFunction_WeaponSystem_OnMagEmpty__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMagEmpty_MetaData), NewProp_OnMagEmpty_MetaData) }; // 4262935342
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_SightTraceChannel = { "SightTraceChannel", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterBehaviourBase, SightTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightTraceChannel_MetaData), NewProp_SightTraceChannel_MetaData) }; // 756624936
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_DamageTypeClass = { "DamageTypeClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterBehaviourBase, DamageTypeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageTypeClass_MetaData), NewProp_DamageTypeClass_MetaData) };
void Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_bHasInfiniteAmmo_SetBit(void* Obj)
{
	((UShooterBehaviourBase*)Obj)->bHasInfiniteAmmo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_bHasInfiniteAmmo = { "bHasInfiniteAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UShooterBehaviourBase), &Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_bHasInfiniteAmmo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasInfiniteAmmo_MetaData), NewProp_bHasInfiniteAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_AmmoToConsumePerShot = { "AmmoToConsumePerShot", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterBehaviourBase, AmmoToConsumePerShot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmmoToConsumePerShot_MetaData), NewProp_AmmoToConsumePerShot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_Shooter = { "Shooter", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterBehaviourBase, Shooter), Z_Construct_UClass_UShooter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shooter_MetaData), NewProp_Shooter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterBehaviourBase, Owner), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_ShootPoints_Inner = { "ShootPoints", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UShootPoint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_ShootPoints = { "ShootPoints", nullptr, (EPropertyFlags)0x002008800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterBehaviourBase, ShootPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootPoints_MetaData), NewProp_ShootPoints_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_CooldownHandler = { "CooldownHandler", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterBehaviourBase, CooldownHandler), Z_Construct_UClass_UCooldownHandler_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownHandler_MetaData), NewProp_CooldownHandler_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_RecoilHandler = { "RecoilHandler", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterBehaviourBase, RecoilHandler), Z_Construct_UClass_URecoilHandler_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoilHandler_MetaData), NewProp_RecoilHandler_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_SpreadHandler = { "SpreadHandler", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterBehaviourBase, SpreadHandler), Z_Construct_UClass_USpreadHandler_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpreadHandler_MetaData), NewProp_SpreadHandler_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_ShootBarrel = { "ShootBarrel", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterBehaviourBase, ShootBarrel), Z_Construct_UClass_UShootBarrel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootBarrel_MetaData), NewProp_ShootBarrel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShooterBehaviourBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_OnBehaviourEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_OnBehaviourDisabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_OnBehaviourShootSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_OnBehaviourShootFail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_OnEndShootSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_OnBehaviourRefill,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_OnCurrentAmmoChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_OnMagEmpty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_SightTraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_DamageTypeClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_bHasInfiniteAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_AmmoToConsumePerShot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_Shooter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_ShootPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_ShootPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_CooldownHandler,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_RecoilHandler,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_SpreadHandler,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterBehaviourBase_Statics::NewProp_ShootBarrel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShooterBehaviourBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UShooterBehaviourBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShooterBehaviourBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UShooterBehaviourBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UShooterBehaviour_NoRegister, (int32)VTABLE_OFFSET(UShooterBehaviourBase, IShooterBehaviour), false },  // 4169035516
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UShooterBehaviourBase_Statics::ClassParams = {
	&UShooterBehaviourBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UShooterBehaviourBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UShooterBehaviourBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShooterBehaviourBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UShooterBehaviourBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UShooterBehaviourBase()
{
	if (!Z_Registration_Info_UClass_UShooterBehaviourBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShooterBehaviourBase.OuterSingleton, Z_Construct_UClass_UShooterBehaviourBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UShooterBehaviourBase.OuterSingleton;
}
UShooterBehaviourBase::UShooterBehaviourBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterBehaviourBase);
UShooterBehaviourBase::~UShooterBehaviourBase() {}
// ********** End Class UShooterBehaviourBase ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterBehaviourBase_h__Script_WeaponSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UShooterBehaviourBase, UShooterBehaviourBase::StaticClass, TEXT("UShooterBehaviourBase"), &Z_Registration_Info_UClass_UShooterBehaviourBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShooterBehaviourBase), 3769392695U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterBehaviourBase_h__Script_WeaponSystem_659812085(TEXT("/Script/WeaponSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterBehaviourBase_h__Script_WeaponSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterBehaviourBase_h__Script_WeaponSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
