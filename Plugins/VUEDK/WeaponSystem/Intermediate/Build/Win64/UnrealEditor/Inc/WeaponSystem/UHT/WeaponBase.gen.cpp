// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Weapons/WeaponBase.h"
#include "Montages/Data/WeaponMontageData.h"
#include "Weapons/Data/WeaponData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWeaponBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AWeaponBase();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
WEAPONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnEndWeaponAttack__DelegateSignature();
WEAPONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnWeaponAttackFail__DelegateSignature();
WEAPONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnWeaponAttackSuccess__DelegateSignature();
WEAPONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnWeaponEquipped__DelegateSignature();
WEAPONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnWeaponUnequipped__DelegateSignature();
WEAPONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponData();
WEAPONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponMontageData();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnWeaponAttackSuccess ************************************************
struct Z_Construct_UDelegateFunction_WeaponSystem_OnWeaponAttackSuccess__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_WeaponSystem_OnWeaponAttackSuccess__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem, nullptr, "OnWeaponAttackSuccess__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnWeaponAttackSuccess__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WeaponSystem_OnWeaponAttackSuccess__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnWeaponAttackSuccess__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystem_OnWeaponAttackSuccess__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnWeaponAttackSuccess_DelegateWrapper(const FMulticastScriptDelegate& OnWeaponAttackSuccess)
{
	OnWeaponAttackSuccess.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnWeaponAttackSuccess **************************************************

// ********** Begin Delegate FOnWeaponAttackFail ***************************************************
struct Z_Construct_UDelegateFunction_WeaponSystem_OnWeaponAttackFail__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_WeaponSystem_OnWeaponAttackFail__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem, nullptr, "OnWeaponAttackFail__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnWeaponAttackFail__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WeaponSystem_OnWeaponAttackFail__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnWeaponAttackFail__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystem_OnWeaponAttackFail__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnWeaponAttackFail_DelegateWrapper(const FMulticastScriptDelegate& OnWeaponAttackFail)
{
	OnWeaponAttackFail.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnWeaponAttackFail *****************************************************

// ********** Begin Delegate FOnEndWeaponAttack ****************************************************
struct Z_Construct_UDelegateFunction_WeaponSystem_OnEndWeaponAttack__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_WeaponSystem_OnEndWeaponAttack__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem, nullptr, "OnEndWeaponAttack__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnEndWeaponAttack__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WeaponSystem_OnEndWeaponAttack__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnEndWeaponAttack__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystem_OnEndWeaponAttack__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEndWeaponAttack_DelegateWrapper(const FMulticastScriptDelegate& OnEndWeaponAttack)
{
	OnEndWeaponAttack.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnEndWeaponAttack ******************************************************

// ********** Begin Delegate FOnWeaponEquipped *****************************************************
struct Z_Construct_UDelegateFunction_WeaponSystem_OnWeaponEquipped__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_WeaponSystem_OnWeaponEquipped__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem, nullptr, "OnWeaponEquipped__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnWeaponEquipped__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WeaponSystem_OnWeaponEquipped__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnWeaponEquipped__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystem_OnWeaponEquipped__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnWeaponEquipped_DelegateWrapper(const FMulticastScriptDelegate& OnWeaponEquipped)
{
	OnWeaponEquipped.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnWeaponEquipped *******************************************************

// ********** Begin Delegate FOnWeaponUnequipped ***************************************************
struct Z_Construct_UDelegateFunction_WeaponSystem_OnWeaponUnequipped__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_WeaponSystem_OnWeaponUnequipped__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem, nullptr, "OnWeaponUnequipped__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnWeaponUnequipped__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WeaponSystem_OnWeaponUnequipped__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnWeaponUnequipped__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystem_OnWeaponUnequipped__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnWeaponUnequipped_DelegateWrapper(const FMulticastScriptDelegate& OnWeaponUnequipped)
{
	OnWeaponUnequipped.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnWeaponUnequipped *****************************************************

// ********** Begin Class AWeaponBase Function DeployWeaponAttack **********************************
struct WeaponBase_eventDeployWeaponAttack_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	WeaponBase_eventDeployWeaponAttack_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_AWeaponBase_DeployWeaponAttack = FName(TEXT("DeployWeaponAttack"));
bool AWeaponBase::DeployWeaponAttack()
{
	UFunction* Func = FindFunctionChecked(NAME_AWeaponBase_DeployWeaponAttack);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		WeaponBase_eventDeployWeaponAttack_Parms Parms;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return DeployWeaponAttack_Implementation();
	}
}
struct Z_Construct_UFunction_AWeaponBase_DeployWeaponAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AWeaponBase_DeployWeaponAttack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WeaponBase_eventDeployWeaponAttack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeaponBase_DeployWeaponAttack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponBase_eventDeployWeaponAttack_Parms), &Z_Construct_UFunction_AWeaponBase_DeployWeaponAttack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_DeployWeaponAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_DeployWeaponAttack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_DeployWeaponAttack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_DeployWeaponAttack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "DeployWeaponAttack", Z_Construct_UFunction_AWeaponBase_DeployWeaponAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_DeployWeaponAttack_Statics::PropPointers), sizeof(WeaponBase_eventDeployWeaponAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_DeployWeaponAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_DeployWeaponAttack_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(WeaponBase_eventDeployWeaponAttack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponBase_DeployWeaponAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_DeployWeaponAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execDeployWeaponAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DeployWeaponAttack_Implementation();
	P_NATIVE_END;
}
// ********** End Class AWeaponBase Function DeployWeaponAttack ************************************

// ********** Begin Class AWeaponBase Function EndWeaponAttack *************************************
struct Z_Construct_UFunction_AWeaponBase_EndWeaponAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_EndWeaponAttack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "EndWeaponAttack", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_EndWeaponAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_EndWeaponAttack_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWeaponBase_EndWeaponAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_EndWeaponAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execEndWeaponAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndWeaponAttack();
	P_NATIVE_END;
}
// ********** End Class AWeaponBase Function EndWeaponAttack ***************************************

// ********** Begin Class AWeaponBase Function Equip ***********************************************
struct Z_Construct_UFunction_AWeaponBase_Equip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Set the weapon in the equipped state.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Set the weapon in the equipped state." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_Equip_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "Equip", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_Equip_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_Equip_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWeaponBase_Equip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_Equip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execEquip)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Equip();
	P_NATIVE_END;
}
// ********** End Class AWeaponBase Function Equip *************************************************

// ********** Begin Class AWeaponBase Function GetOwnerAnimInstance ********************************
struct Z_Construct_UFunction_AWeaponBase_GetOwnerAnimInstance_Statics
{
	struct WeaponBase_eventGetOwnerAnimInstance_Parms
	{
		UAnimInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponBase_GetOwnerAnimInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponBase_eventGetOwnerAnimInstance_Parms, ReturnValue), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_GetOwnerAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_GetOwnerAnimInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetOwnerAnimInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_GetOwnerAnimInstance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "GetOwnerAnimInstance", Z_Construct_UFunction_AWeaponBase_GetOwnerAnimInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetOwnerAnimInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponBase_GetOwnerAnimInstance_Statics::WeaponBase_eventGetOwnerAnimInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetOwnerAnimInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_GetOwnerAnimInstance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponBase_GetOwnerAnimInstance_Statics::WeaponBase_eventGetOwnerAnimInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponBase_GetOwnerAnimInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_GetOwnerAnimInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execGetOwnerAnimInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAnimInstance**)Z_Param__Result=P_THIS->GetOwnerAnimInstance();
	P_NATIVE_END;
}
// ********** End Class AWeaponBase Function GetOwnerAnimInstance **********************************

// ********** Begin Class AWeaponBase Function GetPayload ******************************************
struct Z_Construct_UFunction_AWeaponBase_GetPayload_Statics
{
	struct WeaponBase_eventGetPayload_Parms
	{
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponBase_GetPayload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponBase_eventGetPayload_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_GetPayload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_GetPayload_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetPayload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_GetPayload_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "GetPayload", Z_Construct_UFunction_AWeaponBase_GetPayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetPayload_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponBase_GetPayload_Statics::WeaponBase_eventGetPayload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetPayload_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_GetPayload_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponBase_GetPayload_Statics::WeaponBase_eventGetPayload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponBase_GetPayload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_GetPayload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execGetPayload)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->GetPayload();
	P_NATIVE_END;
}
// ********** End Class AWeaponBase Function GetPayload ********************************************

// ********** Begin Class AWeaponBase Function GetWeaponAnimInstance *******************************
struct Z_Construct_UFunction_AWeaponBase_GetWeaponAnimInstance_Statics
{
	struct WeaponBase_eventGetWeaponAnimInstance_Parms
	{
		UAnimInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponBase_GetWeaponAnimInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponBase_eventGetWeaponAnimInstance_Parms, ReturnValue), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_GetWeaponAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_GetWeaponAnimInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetWeaponAnimInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_GetWeaponAnimInstance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "GetWeaponAnimInstance", Z_Construct_UFunction_AWeaponBase_GetWeaponAnimInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetWeaponAnimInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponBase_GetWeaponAnimInstance_Statics::WeaponBase_eventGetWeaponAnimInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetWeaponAnimInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_GetWeaponAnimInstance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponBase_GetWeaponAnimInstance_Statics::WeaponBase_eventGetWeaponAnimInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponBase_GetWeaponAnimInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_GetWeaponAnimInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execGetWeaponAnimInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAnimInstance**)Z_Param__Result=P_THIS->GetWeaponAnimInstance();
	P_NATIVE_END;
}
// ********** End Class AWeaponBase Function GetWeaponAnimInstance *********************************

// ********** Begin Class AWeaponBase Function GetWeaponDamage *************************************
struct Z_Construct_UFunction_AWeaponBase_GetWeaponDamage_Statics
{
	struct WeaponBase_eventGetWeaponDamage_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponBase_GetWeaponDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponBase_eventGetWeaponDamage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_GetWeaponDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_GetWeaponDamage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetWeaponDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_GetWeaponDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "GetWeaponDamage", Z_Construct_UFunction_AWeaponBase_GetWeaponDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetWeaponDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponBase_GetWeaponDamage_Statics::WeaponBase_eventGetWeaponDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetWeaponDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_GetWeaponDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponBase_GetWeaponDamage_Statics::WeaponBase_eventGetWeaponDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponBase_GetWeaponDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_GetWeaponDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execGetWeaponDamage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetWeaponDamage();
	P_NATIVE_END;
}
// ********** End Class AWeaponBase Function GetWeaponDamage ***************************************

// ********** Begin Class AWeaponBase Function GetWeaponData ***************************************
struct Z_Construct_UFunction_AWeaponBase_GetWeaponData_Statics
{
	struct WeaponBase_eventGetWeaponData_Parms
	{
		FWeaponData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeaponBase_GetWeaponData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponBase_eventGetWeaponData_Parms, ReturnValue), Z_Construct_UScriptStruct_FWeaponData, METADATA_PARAMS(0, nullptr) }; // 177794471
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_GetWeaponData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_GetWeaponData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetWeaponData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_GetWeaponData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "GetWeaponData", Z_Construct_UFunction_AWeaponBase_GetWeaponData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetWeaponData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponBase_GetWeaponData_Statics::WeaponBase_eventGetWeaponData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_GetWeaponData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_GetWeaponData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponBase_GetWeaponData_Statics::WeaponBase_eventGetWeaponData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponBase_GetWeaponData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_GetWeaponData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execGetWeaponData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWeaponData*)Z_Param__Result=P_THIS->GetWeaponData();
	P_NATIVE_END;
}
// ********** End Class AWeaponBase Function GetWeaponData *****************************************

// ********** Begin Class AWeaponBase Function Init ************************************************
struct Z_Construct_UFunction_AWeaponBase_Init_Statics
{
	struct WeaponBase_eventInit_Parms
	{
		APawn* InOwner;
		UObject* InPayload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_InPayload", "None" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InPayload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponBase_Init_Statics::NewProp_InOwner = { "InOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponBase_eventInit_Parms, InOwner), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponBase_Init_Statics::NewProp_InPayload = { "InPayload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponBase_eventInit_Parms, InPayload), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_Init_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_Init_Statics::NewProp_InOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_Init_Statics::NewProp_InPayload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_Init_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "Init", Z_Construct_UFunction_AWeaponBase_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_Init_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponBase_Init_Statics::WeaponBase_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_Init_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponBase_Init_Statics::WeaponBase_eventInit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponBase_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execInit)
{
	P_GET_OBJECT(APawn,Z_Param_InOwner);
	P_GET_OBJECT(UObject,Z_Param_InPayload);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init(Z_Param_InOwner,Z_Param_InPayload);
	P_NATIVE_END;
}
// ********** End Class AWeaponBase Function Init **************************************************

// ********** Begin Class AWeaponBase Function InterruptWeaponMontage ******************************
struct Z_Construct_UFunction_AWeaponBase_InterruptWeaponMontage_Statics
{
	struct WeaponBase_eventInterruptWeaponMontage_Parms
	{
		FWeaponMontageData WeaponMontageData;
		float CharacterBlendOutTime;
		float WeaponBlendOutTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeaponBase_InterruptWeaponMontage_Statics::NewProp_WeaponMontageData = { "WeaponMontageData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponBase_eventInterruptWeaponMontage_Parms, WeaponMontageData), Z_Construct_UScriptStruct_FWeaponMontageData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponMontageData_MetaData), NewProp_WeaponMontageData_MetaData) }; // 397967327
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponBase_InterruptWeaponMontage_Statics::NewProp_CharacterBlendOutTime = { "CharacterBlendOutTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponBase_eventInterruptWeaponMontage_Parms, CharacterBlendOutTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterBlendOutTime_MetaData), NewProp_CharacterBlendOutTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponBase_InterruptWeaponMontage_Statics::NewProp_WeaponBlendOutTime = { "WeaponBlendOutTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponBase_eventInterruptWeaponMontage_Parms, WeaponBlendOutTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponBlendOutTime_MetaData), NewProp_WeaponBlendOutTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_InterruptWeaponMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_InterruptWeaponMontage_Statics::NewProp_WeaponMontageData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_InterruptWeaponMontage_Statics::NewProp_CharacterBlendOutTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_InterruptWeaponMontage_Statics::NewProp_WeaponBlendOutTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_InterruptWeaponMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_InterruptWeaponMontage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "InterruptWeaponMontage", Z_Construct_UFunction_AWeaponBase_InterruptWeaponMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_InterruptWeaponMontage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponBase_InterruptWeaponMontage_Statics::WeaponBase_eventInterruptWeaponMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_InterruptWeaponMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_InterruptWeaponMontage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponBase_InterruptWeaponMontage_Statics::WeaponBase_eventInterruptWeaponMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponBase_InterruptWeaponMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_InterruptWeaponMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execInterruptWeaponMontage)
{
	P_GET_STRUCT_REF(FWeaponMontageData,Z_Param_Out_WeaponMontageData);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CharacterBlendOutTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_WeaponBlendOutTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InterruptWeaponMontage(Z_Param_Out_WeaponMontageData,Z_Param_CharacterBlendOutTime,Z_Param_WeaponBlendOutTime);
	P_NATIVE_END;
}
// ********** End Class AWeaponBase Function InterruptWeaponMontage ********************************

// ********** Begin Class AWeaponBase Function IsEquipped ******************************************
struct Z_Construct_UFunction_AWeaponBase_IsEquipped_Statics
{
	struct WeaponBase_eventIsEquipped_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AWeaponBase_IsEquipped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WeaponBase_eventIsEquipped_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeaponBase_IsEquipped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponBase_eventIsEquipped_Parms), &Z_Construct_UFunction_AWeaponBase_IsEquipped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_IsEquipped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_IsEquipped_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_IsEquipped_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_IsEquipped_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "IsEquipped", Z_Construct_UFunction_AWeaponBase_IsEquipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_IsEquipped_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponBase_IsEquipped_Statics::WeaponBase_eventIsEquipped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_IsEquipped_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_IsEquipped_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponBase_IsEquipped_Statics::WeaponBase_eventIsEquipped_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponBase_IsEquipped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_IsEquipped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execIsEquipped)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEquipped();
	P_NATIVE_END;
}
// ********** End Class AWeaponBase Function IsEquipped ********************************************

// ********** Begin Class AWeaponBase Function IsPlayingWeaponMontage ******************************
struct Z_Construct_UFunction_AWeaponBase_IsPlayingWeaponMontage_Statics
{
	struct WeaponBase_eventIsPlayingWeaponMontage_Parms
	{
		FWeaponMontageData WeaponMontageData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeaponBase_IsPlayingWeaponMontage_Statics::NewProp_WeaponMontageData = { "WeaponMontageData", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponBase_eventIsPlayingWeaponMontage_Parms, WeaponMontageData), Z_Construct_UScriptStruct_FWeaponMontageData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponMontageData_MetaData), NewProp_WeaponMontageData_MetaData) }; // 397967327
void Z_Construct_UFunction_AWeaponBase_IsPlayingWeaponMontage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WeaponBase_eventIsPlayingWeaponMontage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeaponBase_IsPlayingWeaponMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponBase_eventIsPlayingWeaponMontage_Parms), &Z_Construct_UFunction_AWeaponBase_IsPlayingWeaponMontage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_IsPlayingWeaponMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_IsPlayingWeaponMontage_Statics::NewProp_WeaponMontageData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_IsPlayingWeaponMontage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_IsPlayingWeaponMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_IsPlayingWeaponMontage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "IsPlayingWeaponMontage", Z_Construct_UFunction_AWeaponBase_IsPlayingWeaponMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_IsPlayingWeaponMontage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponBase_IsPlayingWeaponMontage_Statics::WeaponBase_eventIsPlayingWeaponMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_IsPlayingWeaponMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_IsPlayingWeaponMontage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponBase_IsPlayingWeaponMontage_Statics::WeaponBase_eventIsPlayingWeaponMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponBase_IsPlayingWeaponMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_IsPlayingWeaponMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execIsPlayingWeaponMontage)
{
	P_GET_STRUCT_REF(FWeaponMontageData,Z_Param_Out_WeaponMontageData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlayingWeaponMontage(Z_Param_Out_WeaponMontageData);
	P_NATIVE_END;
}
// ********** End Class AWeaponBase Function IsPlayingWeaponMontage ********************************

// ********** Begin Class AWeaponBase Function IsWeaponAttacking ***********************************
struct Z_Construct_UFunction_AWeaponBase_IsWeaponAttacking_Statics
{
	struct WeaponBase_eventIsWeaponAttacking_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AWeaponBase_IsWeaponAttacking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WeaponBase_eventIsWeaponAttacking_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeaponBase_IsWeaponAttacking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponBase_eventIsWeaponAttacking_Parms), &Z_Construct_UFunction_AWeaponBase_IsWeaponAttacking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_IsWeaponAttacking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_IsWeaponAttacking_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_IsWeaponAttacking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_IsWeaponAttacking_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "IsWeaponAttacking", Z_Construct_UFunction_AWeaponBase_IsWeaponAttacking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_IsWeaponAttacking_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponBase_IsWeaponAttacking_Statics::WeaponBase_eventIsWeaponAttacking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_IsWeaponAttacking_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_IsWeaponAttacking_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponBase_IsWeaponAttacking_Statics::WeaponBase_eventIsWeaponAttacking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponBase_IsWeaponAttacking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_IsWeaponAttacking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execIsWeaponAttacking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsWeaponAttacking();
	P_NATIVE_END;
}
// ********** End Class AWeaponBase Function IsWeaponAttacking *************************************

// ********** Begin Class AWeaponBase Function OnEndWeaponAttack ***********************************
static FName NAME_AWeaponBase_OnEndWeaponAttack = FName(TEXT("OnEndWeaponAttack"));
void AWeaponBase::OnEndWeaponAttack()
{
	UFunction* Func = FindFunctionChecked(NAME_AWeaponBase_OnEndWeaponAttack);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnEndWeaponAttack_Implementation();
	}
}
struct Z_Construct_UFunction_AWeaponBase_OnEndWeaponAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_OnEndWeaponAttack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "OnEndWeaponAttack", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_OnEndWeaponAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_OnEndWeaponAttack_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWeaponBase_OnEndWeaponAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_OnEndWeaponAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execOnEndWeaponAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEndWeaponAttack_Implementation();
	P_NATIVE_END;
}
// ********** End Class AWeaponBase Function OnEndWeaponAttack *************************************

// ********** Begin Class AWeaponBase Function OnMontageEnded **************************************
struct Z_Construct_UFunction_AWeaponBase_OnMontageEnded_Statics
{
	struct WeaponBase_eventOnMontageEnded_Parms
	{
		UAnimMontage* AnimMontage;
		bool bInterrupted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
	static void NewProp_bInterrupted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponBase_OnMontageEnded_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponBase_eventOnMontageEnded_Parms, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AWeaponBase_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
{
	((WeaponBase_eventOnMontageEnded_Parms*)Obj)->bInterrupted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeaponBase_OnMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponBase_eventOnMontageEnded_Parms), &Z_Construct_UFunction_AWeaponBase_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_OnMontageEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_OnMontageEnded_Statics::NewProp_AnimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_OnMontageEnded_Statics::NewProp_bInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_OnMontageEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_OnMontageEnded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "OnMontageEnded", Z_Construct_UFunction_AWeaponBase_OnMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_OnMontageEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponBase_OnMontageEnded_Statics::WeaponBase_eventOnMontageEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_OnMontageEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_OnMontageEnded_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponBase_OnMontageEnded_Statics::WeaponBase_eventOnMontageEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponBase_OnMontageEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_OnMontageEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execOnMontageEnded)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_AnimMontage);
	P_GET_UBOOL(Z_Param_bInterrupted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageEnded(Z_Param_AnimMontage,Z_Param_bInterrupted);
	P_NATIVE_END;
}
// ********** End Class AWeaponBase Function OnMontageEnded ****************************************

// ********** Begin Class AWeaponBase Function OnWeaponAttackFail **********************************
static FName NAME_AWeaponBase_OnWeaponAttackFail = FName(TEXT("OnWeaponAttackFail"));
void AWeaponBase::OnWeaponAttackFail()
{
	UFunction* Func = FindFunctionChecked(NAME_AWeaponBase_OnWeaponAttackFail);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnWeaponAttackFail_Implementation();
	}
}
struct Z_Construct_UFunction_AWeaponBase_OnWeaponAttackFail_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_OnWeaponAttackFail_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "OnWeaponAttackFail", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_OnWeaponAttackFail_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_OnWeaponAttackFail_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWeaponBase_OnWeaponAttackFail()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_OnWeaponAttackFail_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execOnWeaponAttackFail)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWeaponAttackFail_Implementation();
	P_NATIVE_END;
}
// ********** End Class AWeaponBase Function OnWeaponAttackFail ************************************

// ********** Begin Class AWeaponBase Function OnWeaponAttackSuccess *******************************
static FName NAME_AWeaponBase_OnWeaponAttackSuccess = FName(TEXT("OnWeaponAttackSuccess"));
void AWeaponBase::OnWeaponAttackSuccess()
{
	UFunction* Func = FindFunctionChecked(NAME_AWeaponBase_OnWeaponAttackSuccess);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnWeaponAttackSuccess_Implementation();
	}
}
struct Z_Construct_UFunction_AWeaponBase_OnWeaponAttackSuccess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_OnWeaponAttackSuccess_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "OnWeaponAttackSuccess", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_OnWeaponAttackSuccess_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_OnWeaponAttackSuccess_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWeaponBase_OnWeaponAttackSuccess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_OnWeaponAttackSuccess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execOnWeaponAttackSuccess)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWeaponAttackSuccess_Implementation();
	P_NATIVE_END;
}
// ********** End Class AWeaponBase Function OnWeaponAttackSuccess *********************************

// ********** Begin Class AWeaponBase Function OnWeaponEquipped ************************************
static FName NAME_AWeaponBase_OnWeaponEquipped = FName(TEXT("OnWeaponEquipped"));
void AWeaponBase::OnWeaponEquipped()
{
	UFunction* Func = FindFunctionChecked(NAME_AWeaponBase_OnWeaponEquipped);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnWeaponEquipped_Implementation();
	}
}
struct Z_Construct_UFunction_AWeaponBase_OnWeaponEquipped_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_OnWeaponEquipped_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "OnWeaponEquipped", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_OnWeaponEquipped_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_OnWeaponEquipped_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWeaponBase_OnWeaponEquipped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_OnWeaponEquipped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execOnWeaponEquipped)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWeaponEquipped_Implementation();
	P_NATIVE_END;
}
// ********** End Class AWeaponBase Function OnWeaponEquipped **************************************

// ********** Begin Class AWeaponBase Function OnWeaponUnequipped **********************************
static FName NAME_AWeaponBase_OnWeaponUnequipped = FName(TEXT("OnWeaponUnequipped"));
void AWeaponBase::OnWeaponUnequipped()
{
	UFunction* Func = FindFunctionChecked(NAME_AWeaponBase_OnWeaponUnequipped);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnWeaponUnequipped_Implementation();
	}
}
struct Z_Construct_UFunction_AWeaponBase_OnWeaponUnequipped_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_OnWeaponUnequipped_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "OnWeaponUnequipped", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_OnWeaponUnequipped_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_OnWeaponUnequipped_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWeaponBase_OnWeaponUnequipped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_OnWeaponUnequipped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execOnWeaponUnequipped)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWeaponUnequipped_Implementation();
	P_NATIVE_END;
}
// ********** End Class AWeaponBase Function OnWeaponUnequipped ************************************

// ********** Begin Class AWeaponBase Function SetPayload ******************************************
struct Z_Construct_UFunction_AWeaponBase_SetPayload_Statics
{
	struct WeaponBase_eventSetPayload_Parms
	{
		UObject* InPayload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InPayload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeaponBase_SetPayload_Statics::NewProp_InPayload = { "InPayload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponBase_eventSetPayload_Parms, InPayload), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_SetPayload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_SetPayload_Statics::NewProp_InPayload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_SetPayload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_SetPayload_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "SetPayload", Z_Construct_UFunction_AWeaponBase_SetPayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_SetPayload_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponBase_SetPayload_Statics::WeaponBase_eventSetPayload_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_SetPayload_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_SetPayload_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponBase_SetPayload_Statics::WeaponBase_eventSetPayload_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponBase_SetPayload()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_SetPayload_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execSetPayload)
{
	P_GET_OBJECT(UObject,Z_Param_InPayload);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPayload(Z_Param_InPayload);
	P_NATIVE_END;
}
// ********** End Class AWeaponBase Function SetPayload ********************************************

// ********** Begin Class AWeaponBase Function SetWeaponDamage *************************************
struct Z_Construct_UFunction_AWeaponBase_SetWeaponDamage_Statics
{
	struct WeaponBase_eventSetWeaponDamage_Parms
	{
		float NewDamage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewDamage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponBase_SetWeaponDamage_Statics::NewProp_NewDamage = { "NewDamage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponBase_eventSetWeaponDamage_Parms, NewDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewDamage_MetaData), NewProp_NewDamage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_SetWeaponDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_SetWeaponDamage_Statics::NewProp_NewDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_SetWeaponDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_SetWeaponDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "SetWeaponDamage", Z_Construct_UFunction_AWeaponBase_SetWeaponDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_SetWeaponDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponBase_SetWeaponDamage_Statics::WeaponBase_eventSetWeaponDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_SetWeaponDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_SetWeaponDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponBase_SetWeaponDamage_Statics::WeaponBase_eventSetWeaponDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponBase_SetWeaponDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_SetWeaponDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execSetWeaponDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewDamage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWeaponDamage(Z_Param_NewDamage);
	P_NATIVE_END;
}
// ********** End Class AWeaponBase Function SetWeaponDamage ***************************************

// ********** Begin Class AWeaponBase Function StartWeaponMontage **********************************
struct Z_Construct_UFunction_AWeaponBase_StartWeaponMontage_Statics
{
	struct WeaponBase_eventStartWeaponMontage_Parms
	{
		FWeaponMontageData WeaponMontageData;
		float WeaponPlayRate;
		float CharacterPlayRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponMontageData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponPlayRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CharacterPlayRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeaponBase_StartWeaponMontage_Statics::NewProp_WeaponMontageData = { "WeaponMontageData", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponBase_eventStartWeaponMontage_Parms, WeaponMontageData), Z_Construct_UScriptStruct_FWeaponMontageData, METADATA_PARAMS(0, nullptr) }; // 397967327
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponBase_StartWeaponMontage_Statics::NewProp_WeaponPlayRate = { "WeaponPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponBase_eventStartWeaponMontage_Parms, WeaponPlayRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWeaponBase_StartWeaponMontage_Statics::NewProp_CharacterPlayRate = { "CharacterPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeaponBase_eventStartWeaponMontage_Parms, CharacterPlayRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_StartWeaponMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_StartWeaponMontage_Statics::NewProp_WeaponMontageData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_StartWeaponMontage_Statics::NewProp_WeaponPlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_StartWeaponMontage_Statics::NewProp_CharacterPlayRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_StartWeaponMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_StartWeaponMontage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "StartWeaponMontage", Z_Construct_UFunction_AWeaponBase_StartWeaponMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_StartWeaponMontage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponBase_StartWeaponMontage_Statics::WeaponBase_eventStartWeaponMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_StartWeaponMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_StartWeaponMontage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponBase_StartWeaponMontage_Statics::WeaponBase_eventStartWeaponMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponBase_StartWeaponMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_StartWeaponMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execStartWeaponMontage)
{
	P_GET_STRUCT(FWeaponMontageData,Z_Param_WeaponMontageData);
	P_GET_PROPERTY(FFloatProperty,Z_Param_WeaponPlayRate);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CharacterPlayRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartWeaponMontage(Z_Param_WeaponMontageData,Z_Param_WeaponPlayRate,Z_Param_CharacterPlayRate);
	P_NATIVE_END;
}
// ********** End Class AWeaponBase Function StartWeaponMontage ************************************

// ********** Begin Class AWeaponBase Function Unequip *********************************************
struct Z_Construct_UFunction_AWeaponBase_Unequip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Set the weapon in the unequipped state.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Set the weapon in the unequipped state." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_Unequip_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "Unequip", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_Unequip_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_Unequip_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AWeaponBase_Unequip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_Unequip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execUnequip)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Unequip();
	P_NATIVE_END;
}
// ********** End Class AWeaponBase Function Unequip ***********************************************

// ********** Begin Class AWeaponBase Function WeaponAttack ****************************************
struct Z_Construct_UFunction_AWeaponBase_WeaponAttack_Statics
{
	struct WeaponBase_eventWeaponAttack_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AWeaponBase_WeaponAttack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WeaponBase_eventWeaponAttack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeaponBase_WeaponAttack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeaponBase_eventWeaponAttack_Parms), &Z_Construct_UFunction_AWeaponBase_WeaponAttack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeaponBase_WeaponAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeaponBase_WeaponAttack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_WeaponAttack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponBase_WeaponAttack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AWeaponBase, nullptr, "WeaponAttack", Z_Construct_UFunction_AWeaponBase_WeaponAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_WeaponAttack_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeaponBase_WeaponAttack_Statics::WeaponBase_eventWeaponAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponBase_WeaponAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeaponBase_WeaponAttack_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AWeaponBase_WeaponAttack_Statics::WeaponBase_eventWeaponAttack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeaponBase_WeaponAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponBase_WeaponAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeaponBase::execWeaponAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WeaponAttack();
	P_NATIVE_END;
}
// ********** End Class AWeaponBase Function WeaponAttack ******************************************

// ********** Begin Class AWeaponBase **************************************************************
void AWeaponBase::StaticRegisterNativesAWeaponBase()
{
	UClass* Class = AWeaponBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DeployWeaponAttack", &AWeaponBase::execDeployWeaponAttack },
		{ "EndWeaponAttack", &AWeaponBase::execEndWeaponAttack },
		{ "Equip", &AWeaponBase::execEquip },
		{ "GetOwnerAnimInstance", &AWeaponBase::execGetOwnerAnimInstance },
		{ "GetPayload", &AWeaponBase::execGetPayload },
		{ "GetWeaponAnimInstance", &AWeaponBase::execGetWeaponAnimInstance },
		{ "GetWeaponDamage", &AWeaponBase::execGetWeaponDamage },
		{ "GetWeaponData", &AWeaponBase::execGetWeaponData },
		{ "Init", &AWeaponBase::execInit },
		{ "InterruptWeaponMontage", &AWeaponBase::execInterruptWeaponMontage },
		{ "IsEquipped", &AWeaponBase::execIsEquipped },
		{ "IsPlayingWeaponMontage", &AWeaponBase::execIsPlayingWeaponMontage },
		{ "IsWeaponAttacking", &AWeaponBase::execIsWeaponAttacking },
		{ "OnEndWeaponAttack", &AWeaponBase::execOnEndWeaponAttack },
		{ "OnMontageEnded", &AWeaponBase::execOnMontageEnded },
		{ "OnWeaponAttackFail", &AWeaponBase::execOnWeaponAttackFail },
		{ "OnWeaponAttackSuccess", &AWeaponBase::execOnWeaponAttackSuccess },
		{ "OnWeaponEquipped", &AWeaponBase::execOnWeaponEquipped },
		{ "OnWeaponUnequipped", &AWeaponBase::execOnWeaponUnequipped },
		{ "SetPayload", &AWeaponBase::execSetPayload },
		{ "SetWeaponDamage", &AWeaponBase::execSetWeaponDamage },
		{ "StartWeaponMontage", &AWeaponBase::execStartWeaponMontage },
		{ "Unequip", &AWeaponBase::execUnequip },
		{ "WeaponAttack", &AWeaponBase::execWeaponAttack },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AWeaponBase;
UClass* AWeaponBase::GetPrivateStaticClass()
{
	using TClass = AWeaponBase;
	if (!Z_Registration_Info_UClass_AWeaponBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WeaponBase"),
			Z_Registration_Info_UClass_AWeaponBase.InnerSingleton,
			StaticRegisterNativesAWeaponBase,
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
	return Z_Registration_Info_UClass_AWeaponBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AWeaponBase_NoRegister()
{
	return AWeaponBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AWeaponBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Weapons/WeaponBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWeaponAttackSuccessEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWeaponAttackFailEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEndWeaponAttackEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWeaponEquippedEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWeaponUnequippedEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponData_MetaData[] = {
		{ "Category", "Weapon|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -- Data --\n" },
#endif
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-- Data --" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseTag_MetaData[] = {
		{ "Category", "Weapon|Montages" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -- Montages --\n" },
#endif
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-- Montages --" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimInstanceMeshTag_MetaData[] = {
		{ "Category", "Weapon|Montages" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to find the anim instance of the owner's mesh if it is not a character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMeshRoot_MetaData[] = {
		{ "Category", "WeaponBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -- Mesh --\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-- Mesh --" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[] = {
		{ "Category", "WeaponBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayingMontages_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerAnimInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardArrowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightArrowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpArrowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapons/WeaponBase.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWeaponAttackSuccessEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWeaponAttackFailEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndWeaponAttackEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWeaponEquippedEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWeaponUnequippedEvent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponData;
	static void NewProp_bUseTag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnimInstanceMeshTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMeshRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayingMontages_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayingMontages_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PlayingMontages;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerAnimInstance;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ForwardArrowComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightArrowComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UpArrowComponent;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponBase_DeployWeaponAttack, "DeployWeaponAttack" }, // 2213585195
		{ &Z_Construct_UFunction_AWeaponBase_EndWeaponAttack, "EndWeaponAttack" }, // 3114489938
		{ &Z_Construct_UFunction_AWeaponBase_Equip, "Equip" }, // 1532334302
		{ &Z_Construct_UFunction_AWeaponBase_GetOwnerAnimInstance, "GetOwnerAnimInstance" }, // 2972215112
		{ &Z_Construct_UFunction_AWeaponBase_GetPayload, "GetPayload" }, // 348231241
		{ &Z_Construct_UFunction_AWeaponBase_GetWeaponAnimInstance, "GetWeaponAnimInstance" }, // 3032250914
		{ &Z_Construct_UFunction_AWeaponBase_GetWeaponDamage, "GetWeaponDamage" }, // 1541992526
		{ &Z_Construct_UFunction_AWeaponBase_GetWeaponData, "GetWeaponData" }, // 2595349477
		{ &Z_Construct_UFunction_AWeaponBase_Init, "Init" }, // 2883251688
		{ &Z_Construct_UFunction_AWeaponBase_InterruptWeaponMontage, "InterruptWeaponMontage" }, // 2059293144
		{ &Z_Construct_UFunction_AWeaponBase_IsEquipped, "IsEquipped" }, // 3138054034
		{ &Z_Construct_UFunction_AWeaponBase_IsPlayingWeaponMontage, "IsPlayingWeaponMontage" }, // 1779837528
		{ &Z_Construct_UFunction_AWeaponBase_IsWeaponAttacking, "IsWeaponAttacking" }, // 917615153
		{ &Z_Construct_UFunction_AWeaponBase_OnEndWeaponAttack, "OnEndWeaponAttack" }, // 3977218352
		{ &Z_Construct_UFunction_AWeaponBase_OnMontageEnded, "OnMontageEnded" }, // 3155647194
		{ &Z_Construct_UFunction_AWeaponBase_OnWeaponAttackFail, "OnWeaponAttackFail" }, // 749717656
		{ &Z_Construct_UFunction_AWeaponBase_OnWeaponAttackSuccess, "OnWeaponAttackSuccess" }, // 1861698033
		{ &Z_Construct_UFunction_AWeaponBase_OnWeaponEquipped, "OnWeaponEquipped" }, // 2052474745
		{ &Z_Construct_UFunction_AWeaponBase_OnWeaponUnequipped, "OnWeaponUnequipped" }, // 1067826819
		{ &Z_Construct_UFunction_AWeaponBase_SetPayload, "SetPayload" }, // 2087789112
		{ &Z_Construct_UFunction_AWeaponBase_SetWeaponDamage, "SetWeaponDamage" }, // 4218835793
		{ &Z_Construct_UFunction_AWeaponBase_StartWeaponMontage, "StartWeaponMontage" }, // 3808244634
		{ &Z_Construct_UFunction_AWeaponBase_Unequip, "Unequip" }, // 770541670
		{ &Z_Construct_UFunction_AWeaponBase_WeaponAttack, "WeaponAttack" }, // 416374098
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_OnWeaponAttackSuccessEvent = { "OnWeaponAttackSuccessEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, OnWeaponAttackSuccessEvent), Z_Construct_UDelegateFunction_WeaponSystem_OnWeaponAttackSuccess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWeaponAttackSuccessEvent_MetaData), NewProp_OnWeaponAttackSuccessEvent_MetaData) }; // 1629070361
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_OnWeaponAttackFailEvent = { "OnWeaponAttackFailEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, OnWeaponAttackFailEvent), Z_Construct_UDelegateFunction_WeaponSystem_OnWeaponAttackFail__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWeaponAttackFailEvent_MetaData), NewProp_OnWeaponAttackFailEvent_MetaData) }; // 2126951786
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_OnEndWeaponAttackEvent = { "OnEndWeaponAttackEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, OnEndWeaponAttackEvent), Z_Construct_UDelegateFunction_WeaponSystem_OnEndWeaponAttack__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEndWeaponAttackEvent_MetaData), NewProp_OnEndWeaponAttackEvent_MetaData) }; // 1625682170
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_OnWeaponEquippedEvent = { "OnWeaponEquippedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, OnWeaponEquippedEvent), Z_Construct_UDelegateFunction_WeaponSystem_OnWeaponEquipped__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWeaponEquippedEvent_MetaData), NewProp_OnWeaponEquippedEvent_MetaData) }; // 302704478
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_OnWeaponUnequippedEvent = { "OnWeaponUnequippedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, OnWeaponUnequippedEvent), Z_Construct_UDelegateFunction_WeaponSystem_OnWeaponUnequipped__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWeaponUnequippedEvent_MetaData), NewProp_OnWeaponUnequippedEvent_MetaData) }; // 3220346262
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponData = { "WeaponData", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, WeaponData), Z_Construct_UScriptStruct_FWeaponData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponData_MetaData), NewProp_WeaponData_MetaData) }; // 177794471
void Z_Construct_UClass_AWeaponBase_Statics::NewProp_bUseTag_SetBit(void* Obj)
{
	((AWeaponBase*)Obj)->bUseTag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_bUseTag = { "bUseTag", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWeaponBase), &Z_Construct_UClass_AWeaponBase_Statics::NewProp_bUseTag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseTag_MetaData), NewProp_bUseTag_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_AnimInstanceMeshTag = { "AnimInstanceMeshTag", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, AnimInstanceMeshTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimInstanceMeshTag_MetaData), NewProp_AnimInstanceMeshTag_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponMeshRoot = { "WeaponMeshRoot", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, WeaponMeshRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponMeshRoot_MetaData), NewProp_WeaponMeshRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, WeaponMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponMesh_MetaData), NewProp_WeaponMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, Payload), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Payload_MetaData), NewProp_Payload_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_PlayingMontages_ValueProp = { "PlayingMontages", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FWeaponMontageData, METADATA_PARAMS(0, nullptr) }; // 397967327
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_PlayingMontages_Key_KeyProp = { "PlayingMontages_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_PlayingMontages = { "PlayingMontages", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, PlayingMontages), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayingMontages_MetaData), NewProp_PlayingMontages_MetaData) }; // 397967327
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_OwnerAnimInstance = { "OwnerAnimInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, OwnerAnimInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerAnimInstance_MetaData), NewProp_OwnerAnimInstance_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_ForwardArrowComponent = { "ForwardArrowComponent", nullptr, (EPropertyFlags)0x0040000800080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, ForwardArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardArrowComponent_MetaData), NewProp_ForwardArrowComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_RightArrowComponent = { "RightArrowComponent", nullptr, (EPropertyFlags)0x0040000800080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, RightArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightArrowComponent_MetaData), NewProp_RightArrowComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponBase_Statics::NewProp_UpArrowComponent = { "UpArrowComponent", nullptr, (EPropertyFlags)0x0040000800080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponBase, UpArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpArrowComponent_MetaData), NewProp_UpArrowComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_OnWeaponAttackSuccessEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_OnWeaponAttackFailEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_OnEndWeaponAttackEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_OnWeaponEquippedEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_OnWeaponUnequippedEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_bUseTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_AnimInstanceMeshTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponMeshRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_WeaponMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_Payload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_PlayingMontages_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_PlayingMontages_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_PlayingMontages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_OwnerAnimInstance,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_ForwardArrowComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_RightArrowComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponBase_Statics::NewProp_UpArrowComponent,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWeaponBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeaponBase_Statics::ClassParams = {
	&AWeaponBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWeaponBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::PropPointers),
	0,
	0x009001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeaponBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWeaponBase()
{
	if (!Z_Registration_Info_UClass_AWeaponBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeaponBase.OuterSingleton, Z_Construct_UClass_AWeaponBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWeaponBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponBase);
AWeaponBase::~AWeaponBase() {}
// ********** End Class AWeaponBase ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponBase_h__Script_WeaponSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeaponBase, AWeaponBase::StaticClass, TEXT("AWeaponBase"), &Z_Registration_Info_UClass_AWeaponBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeaponBase), 4250196226U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponBase_h__Script_WeaponSystem_4286267249(TEXT("/Script/WeaponSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponBase_h__Script_WeaponSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Weapons_WeaponBase_h__Script_WeaponSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
