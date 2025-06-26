// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Projectiles/ProjectileBase.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeProjectileBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
OBJECTPOOL_API UClass* Z_Construct_UClass_APooledActorBase();
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AProjectileBase();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AProjectileBase_NoRegister();
WEAPONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_WeaponSystem_ProjectileHitDelegate__DelegateSignature();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FProjectileHitDelegate ************************************************
struct Z_Construct_UDelegateFunction_WeaponSystem_ProjectileHitDelegate__DelegateSignature_Statics
{
	struct _Script_WeaponSystem_eventProjectileHitDelegate_Parms
	{
		FHitResult ImpactResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Projectiles/ProjectileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_WeaponSystem_ProjectileHitDelegate__DelegateSignature_Statics::NewProp_ImpactResult = { "ImpactResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_WeaponSystem_eventProjectileHitDelegate_Parms, ImpactResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactResult_MetaData), NewProp_ImpactResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WeaponSystem_ProjectileHitDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystem_ProjectileHitDelegate__DelegateSignature_Statics::NewProp_ImpactResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_ProjectileHitDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_WeaponSystem_ProjectileHitDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem, nullptr, "ProjectileHitDelegate__DelegateSignature", Z_Construct_UDelegateFunction_WeaponSystem_ProjectileHitDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_ProjectileHitDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WeaponSystem_ProjectileHitDelegate__DelegateSignature_Statics::_Script_WeaponSystem_eventProjectileHitDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_ProjectileHitDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WeaponSystem_ProjectileHitDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_WeaponSystem_ProjectileHitDelegate__DelegateSignature_Statics::_Script_WeaponSystem_eventProjectileHitDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_WeaponSystem_ProjectileHitDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystem_ProjectileHitDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FProjectileHitDelegate_DelegateWrapper(const FMulticastScriptDelegate& ProjectileHitDelegate, FHitResult const& ImpactResult)
{
	struct _Script_WeaponSystem_eventProjectileHitDelegate_Parms
	{
		FHitResult ImpactResult;
	};
	_Script_WeaponSystem_eventProjectileHitDelegate_Parms Parms;
	Parms.ImpactResult=ImpactResult;
	ProjectileHitDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FProjectileHitDelegate **************************************************

// ********** Begin Class AProjectileBase Function CalculateLifeSpan *******************************
struct ProjectileBase_eventCalculateLifeSpan_Parms
{
	float InRange;
	float InSpeed;
	float ReturnValue;

	/** Constructor, initializes return property only **/
	ProjectileBase_eventCalculateLifeSpan_Parms()
		: ReturnValue(0)
	{
	}
};
static FName NAME_AProjectileBase_CalculateLifeSpan = FName(TEXT("CalculateLifeSpan"));
float AProjectileBase::CalculateLifeSpan(const float InRange, const float InSpeed) const
{
	UFunction* Func = FindFunctionChecked(NAME_AProjectileBase_CalculateLifeSpan);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ProjectileBase_eventCalculateLifeSpan_Parms Parms;
		Parms.InRange=InRange;
		Parms.InSpeed=InSpeed;
		const_cast<AProjectileBase*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<AProjectileBase*>(this)->CalculateLifeSpan_Implementation(InRange, InSpeed);
	}
}
struct Z_Construct_UFunction_AProjectileBase_CalculateLifeSpan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Projectiles/ProjectileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InRange_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectileBase_CalculateLifeSpan_Statics::NewProp_InRange = { "InRange", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileBase_eventCalculateLifeSpan_Parms, InRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InRange_MetaData), NewProp_InRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectileBase_CalculateLifeSpan_Statics::NewProp_InSpeed = { "InSpeed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileBase_eventCalculateLifeSpan_Parms, InSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSpeed_MetaData), NewProp_InSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectileBase_CalculateLifeSpan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileBase_eventCalculateLifeSpan_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectileBase_CalculateLifeSpan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileBase_CalculateLifeSpan_Statics::NewProp_InRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileBase_CalculateLifeSpan_Statics::NewProp_InSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileBase_CalculateLifeSpan_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_CalculateLifeSpan_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectileBase_CalculateLifeSpan_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectileBase, nullptr, "CalculateLifeSpan", Z_Construct_UFunction_AProjectileBase_CalculateLifeSpan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_CalculateLifeSpan_Statics::PropPointers), sizeof(ProjectileBase_eventCalculateLifeSpan_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_CalculateLifeSpan_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectileBase_CalculateLifeSpan_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ProjectileBase_eventCalculateLifeSpan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectileBase_CalculateLifeSpan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectileBase_CalculateLifeSpan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectileBase::execCalculateLifeSpan)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InRange);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->CalculateLifeSpan_Implementation(Z_Param_InRange,Z_Param_InSpeed);
	P_NATIVE_END;
}
// ********** End Class AProjectileBase Function CalculateLifeSpan *********************************

// ********** Begin Class AProjectileBase Function DisposeProjectile *******************************
struct Z_Construct_UFunction_AProjectileBase_DisposeProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Projectiles/ProjectileBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectileBase_DisposeProjectile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectileBase, nullptr, "DisposeProjectile", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_DisposeProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectileBase_DisposeProjectile_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AProjectileBase_DisposeProjectile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectileBase_DisposeProjectile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectileBase::execDisposeProjectile)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisposeProjectile();
	P_NATIVE_END;
}
// ********** End Class AProjectileBase Function DisposeProjectile *********************************

// ********** Begin Class AProjectileBase Function EndProjectileLifeSpan ***************************
struct Z_Construct_UFunction_AProjectileBase_EndProjectileLifeSpan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Projectiles/ProjectileBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectileBase_EndProjectileLifeSpan_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectileBase, nullptr, "EndProjectileLifeSpan", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_EndProjectileLifeSpan_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectileBase_EndProjectileLifeSpan_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AProjectileBase_EndProjectileLifeSpan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectileBase_EndProjectileLifeSpan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectileBase::execEndProjectileLifeSpan)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndProjectileLifeSpan();
	P_NATIVE_END;
}
// ********** End Class AProjectileBase Function EndProjectileLifeSpan *****************************

// ********** Begin Class AProjectileBase Function GetDamage ***************************************
struct Z_Construct_UFunction_AProjectileBase_GetDamage_Statics
{
	struct ProjectileBase_eventGetDamage_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Projectiles/ProjectileBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectileBase_GetDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileBase_eventGetDamage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectileBase_GetDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileBase_GetDamage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_GetDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectileBase_GetDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectileBase, nullptr, "GetDamage", Z_Construct_UFunction_AProjectileBase_GetDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_GetDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectileBase_GetDamage_Statics::ProjectileBase_eventGetDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_GetDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectileBase_GetDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AProjectileBase_GetDamage_Statics::ProjectileBase_eventGetDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectileBase_GetDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectileBase_GetDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectileBase::execGetDamage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDamage();
	P_NATIVE_END;
}
// ********** End Class AProjectileBase Function GetDamage *****************************************

// ********** Begin Class AProjectileBase Function GetProjectileInstigator *************************
struct Z_Construct_UFunction_AProjectileBase_GetProjectileInstigator_Statics
{
	struct ProjectileBase_eventGetProjectileInstigator_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Projectiles/ProjectileBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectileBase_GetProjectileInstigator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileBase_eventGetProjectileInstigator_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectileBase_GetProjectileInstigator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileBase_GetProjectileInstigator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_GetProjectileInstigator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectileBase_GetProjectileInstigator_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectileBase, nullptr, "GetProjectileInstigator", Z_Construct_UFunction_AProjectileBase_GetProjectileInstigator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_GetProjectileInstigator_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectileBase_GetProjectileInstigator_Statics::ProjectileBase_eventGetProjectileInstigator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_GetProjectileInstigator_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectileBase_GetProjectileInstigator_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AProjectileBase_GetProjectileInstigator_Statics::ProjectileBase_eventGetProjectileInstigator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectileBase_GetProjectileInstigator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectileBase_GetProjectileInstigator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectileBase::execGetProjectileInstigator)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetProjectileInstigator();
	P_NATIVE_END;
}
// ********** End Class AProjectileBase Function GetProjectileInstigator ***************************

// ********** Begin Class AProjectileBase Function GetProjectileVelocity ***************************
struct Z_Construct_UFunction_AProjectileBase_GetProjectileVelocity_Statics
{
	struct ProjectileBase_eventGetProjectileVelocity_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Projectiles/ProjectileBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectileBase_GetProjectileVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileBase_eventGetProjectileVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectileBase_GetProjectileVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileBase_GetProjectileVelocity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_GetProjectileVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectileBase_GetProjectileVelocity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectileBase, nullptr, "GetProjectileVelocity", Z_Construct_UFunction_AProjectileBase_GetProjectileVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_GetProjectileVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectileBase_GetProjectileVelocity_Statics::ProjectileBase_eventGetProjectileVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_GetProjectileVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectileBase_GetProjectileVelocity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AProjectileBase_GetProjectileVelocity_Statics::ProjectileBase_eventGetProjectileVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectileBase_GetProjectileVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectileBase_GetProjectileVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectileBase::execGetProjectileVelocity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetProjectileVelocity();
	P_NATIVE_END;
}
// ********** End Class AProjectileBase Function GetProjectileVelocity *****************************

// ********** Begin Class AProjectileBase Function GetRange ****************************************
struct Z_Construct_UFunction_AProjectileBase_GetRange_Statics
{
	struct ProjectileBase_eventGetRange_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Projectiles/ProjectileBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectileBase_GetRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileBase_eventGetRange_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectileBase_GetRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileBase_GetRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_GetRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectileBase_GetRange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectileBase, nullptr, "GetRange", Z_Construct_UFunction_AProjectileBase_GetRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_GetRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectileBase_GetRange_Statics::ProjectileBase_eventGetRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_GetRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectileBase_GetRange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AProjectileBase_GetRange_Statics::ProjectileBase_eventGetRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectileBase_GetRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectileBase_GetRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectileBase::execGetRange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRange();
	P_NATIVE_END;
}
// ********** End Class AProjectileBase Function GetRange ******************************************

// ********** Begin Class AProjectileBase Function InitVelocityAndLifeSpan *************************
struct ProjectileBase_eventInitVelocityAndLifeSpan_Parms
{
	float InRange;
	float InSpeed;
	FVector InDirection;
};
static FName NAME_AProjectileBase_InitVelocityAndLifeSpan = FName(TEXT("InitVelocityAndLifeSpan"));
void AProjectileBase::InitVelocityAndLifeSpan(float InRange, float InSpeed, FVector const& InDirection)
{
	UFunction* Func = FindFunctionChecked(NAME_AProjectileBase_InitVelocityAndLifeSpan);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ProjectileBase_eventInitVelocityAndLifeSpan_Parms Parms;
		Parms.InRange=InRange;
		Parms.InSpeed=InSpeed;
		Parms.InDirection=InDirection;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		InitVelocityAndLifeSpan_Implementation(InRange, InSpeed, InDirection);
	}
}
struct Z_Construct_UFunction_AProjectileBase_InitVelocityAndLifeSpan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Projectiles/ProjectileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectileBase_InitVelocityAndLifeSpan_Statics::NewProp_InRange = { "InRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileBase_eventInitVelocityAndLifeSpan_Parms, InRange), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectileBase_InitVelocityAndLifeSpan_Statics::NewProp_InSpeed = { "InSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileBase_eventInitVelocityAndLifeSpan_Parms, InSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectileBase_InitVelocityAndLifeSpan_Statics::NewProp_InDirection = { "InDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileBase_eventInitVelocityAndLifeSpan_Parms, InDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InDirection_MetaData), NewProp_InDirection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectileBase_InitVelocityAndLifeSpan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileBase_InitVelocityAndLifeSpan_Statics::NewProp_InRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileBase_InitVelocityAndLifeSpan_Statics::NewProp_InSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileBase_InitVelocityAndLifeSpan_Statics::NewProp_InDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_InitVelocityAndLifeSpan_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectileBase_InitVelocityAndLifeSpan_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectileBase, nullptr, "InitVelocityAndLifeSpan", Z_Construct_UFunction_AProjectileBase_InitVelocityAndLifeSpan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_InitVelocityAndLifeSpan_Statics::PropPointers), sizeof(ProjectileBase_eventInitVelocityAndLifeSpan_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_InitVelocityAndLifeSpan_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectileBase_InitVelocityAndLifeSpan_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ProjectileBase_eventInitVelocityAndLifeSpan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectileBase_InitVelocityAndLifeSpan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectileBase_InitVelocityAndLifeSpan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectileBase::execInitVelocityAndLifeSpan)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InRange);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InSpeed);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitVelocityAndLifeSpan_Implementation(Z_Param_InRange,Z_Param_InSpeed,Z_Param_Out_InDirection);
	P_NATIVE_END;
}
// ********** End Class AProjectileBase Function InitVelocityAndLifeSpan ***************************

// ********** Begin Class AProjectileBase Function OnInit ******************************************
static FName NAME_AProjectileBase_OnInit = FName(TEXT("OnInit"));
void AProjectileBase::OnInit()
{
	UFunction* Func = FindFunctionChecked(NAME_AProjectileBase_OnInit);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnInit_Implementation();
	}
}
struct Z_Construct_UFunction_AProjectileBase_OnInit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Projectiles/ProjectileBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectileBase_OnInit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectileBase, nullptr, "OnInit", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_OnInit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectileBase_OnInit_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AProjectileBase_OnInit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectileBase_OnInit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectileBase::execOnInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInit_Implementation();
	P_NATIVE_END;
}
// ********** End Class AProjectileBase Function OnInit ********************************************

// ********** Begin Class AProjectileBase Function OnProjectileHit *********************************
struct ProjectileBase_eventOnProjectileHit_Parms
{
	FHitResult ImpactResult;
	FVector ImpactVelocity;
};
static FName NAME_AProjectileBase_OnProjectileHit = FName(TEXT("OnProjectileHit"));
void AProjectileBase::OnProjectileHit(FHitResult const& ImpactResult, FVector const& ImpactVelocity)
{
	UFunction* Func = FindFunctionChecked(NAME_AProjectileBase_OnProjectileHit);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ProjectileBase_eventOnProjectileHit_Parms Parms;
		Parms.ImpactResult=ImpactResult;
		Parms.ImpactVelocity=ImpactVelocity;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnProjectileHit_Implementation(ImpactResult, ImpactVelocity);
	}
}
struct Z_Construct_UFunction_AProjectileBase_OnProjectileHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Projectiles/ProjectileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactResult_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectileBase_OnProjectileHit_Statics::NewProp_ImpactResult = { "ImpactResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileBase_eventOnProjectileHit_Parms, ImpactResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactResult_MetaData), NewProp_ImpactResult_MetaData) }; // 267591329
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectileBase_OnProjectileHit_Statics::NewProp_ImpactVelocity = { "ImpactVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileBase_eventOnProjectileHit_Parms, ImpactVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactVelocity_MetaData), NewProp_ImpactVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectileBase_OnProjectileHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileBase_OnProjectileHit_Statics::NewProp_ImpactResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileBase_OnProjectileHit_Statics::NewProp_ImpactVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_OnProjectileHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectileBase_OnProjectileHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectileBase, nullptr, "OnProjectileHit", Z_Construct_UFunction_AProjectileBase_OnProjectileHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_OnProjectileHit_Statics::PropPointers), sizeof(ProjectileBase_eventOnProjectileHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C80C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_OnProjectileHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectileBase_OnProjectileHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ProjectileBase_eventOnProjectileHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectileBase_OnProjectileHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectileBase_OnProjectileHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectileBase::execOnProjectileHit)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_ImpactResult);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpactVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnProjectileHit_Implementation(Z_Param_Out_ImpactResult,Z_Param_Out_ImpactVelocity);
	P_NATIVE_END;
}
// ********** End Class AProjectileBase Function OnProjectileHit ***********************************

// ********** Begin Class AProjectileBase Function OnProjectileLifeSpanEnd *************************
static FName NAME_AProjectileBase_OnProjectileLifeSpanEnd = FName(TEXT("OnProjectileLifeSpanEnd"));
void AProjectileBase::OnProjectileLifeSpanEnd()
{
	UFunction* Func = FindFunctionChecked(NAME_AProjectileBase_OnProjectileLifeSpanEnd);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnProjectileLifeSpanEnd_Implementation();
	}
}
struct Z_Construct_UFunction_AProjectileBase_OnProjectileLifeSpanEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Projectiles/ProjectileBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectileBase_OnProjectileLifeSpanEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectileBase, nullptr, "OnProjectileLifeSpanEnd", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_OnProjectileLifeSpanEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectileBase_OnProjectileLifeSpanEnd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AProjectileBase_OnProjectileLifeSpanEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectileBase_OnProjectileLifeSpanEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectileBase::execOnProjectileLifeSpanEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnProjectileLifeSpanEnd_Implementation();
	P_NATIVE_END;
}
// ********** End Class AProjectileBase Function OnProjectileLifeSpanEnd ***************************

// ********** Begin Class AProjectileBase Function ProjectileHit ***********************************
struct Z_Construct_UFunction_AProjectileBase_ProjectileHit_Statics
{
	struct ProjectileBase_eventProjectileHit_Parms
	{
		FHitResult ImpactResult;
		FVector ImpactVelocity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Projectiles/ProjectileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactResult_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectileBase_ProjectileHit_Statics::NewProp_ImpactResult = { "ImpactResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileBase_eventProjectileHit_Parms, ImpactResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactResult_MetaData), NewProp_ImpactResult_MetaData) }; // 267591329
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectileBase_ProjectileHit_Statics::NewProp_ImpactVelocity = { "ImpactVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileBase_eventProjectileHit_Parms, ImpactVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactVelocity_MetaData), NewProp_ImpactVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectileBase_ProjectileHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileBase_ProjectileHit_Statics::NewProp_ImpactResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileBase_ProjectileHit_Statics::NewProp_ImpactVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_ProjectileHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectileBase_ProjectileHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectileBase, nullptr, "ProjectileHit", Z_Construct_UFunction_AProjectileBase_ProjectileHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_ProjectileHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectileBase_ProjectileHit_Statics::ProjectileBase_eventProjectileHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_ProjectileHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectileBase_ProjectileHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AProjectileBase_ProjectileHit_Statics::ProjectileBase_eventProjectileHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectileBase_ProjectileHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectileBase_ProjectileHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectileBase::execProjectileHit)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_ImpactResult);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpactVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProjectileHit(Z_Param_Out_ImpactResult,Z_Param_Out_ImpactVelocity);
	P_NATIVE_END;
}
// ********** End Class AProjectileBase Function ProjectileHit *************************************

// ********** Begin Class AProjectileBase Function SetDamage ***************************************
struct Z_Construct_UFunction_AProjectileBase_SetDamage_Statics
{
	struct ProjectileBase_eventSetDamage_Parms
	{
		float InDamage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Projectiles/ProjectileBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectileBase_SetDamage_Statics::NewProp_InDamage = { "InDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileBase_eventSetDamage_Parms, InDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectileBase_SetDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileBase_SetDamage_Statics::NewProp_InDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_SetDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectileBase_SetDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectileBase, nullptr, "SetDamage", Z_Construct_UFunction_AProjectileBase_SetDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_SetDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectileBase_SetDamage_Statics::ProjectileBase_eventSetDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_SetDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectileBase_SetDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AProjectileBase_SetDamage_Statics::ProjectileBase_eventSetDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectileBase_SetDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectileBase_SetDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectileBase::execSetDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDamage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDamage(Z_Param_InDamage);
	P_NATIVE_END;
}
// ********** End Class AProjectileBase Function SetDamage *****************************************

// ********** Begin Class AProjectileBase Function SetProjectileInstigator *************************
struct Z_Construct_UFunction_AProjectileBase_SetProjectileInstigator_Statics
{
	struct ProjectileBase_eventSetProjectileInstigator_Parms
	{
		AActor* InInstigator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Projectiles/ProjectileBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InInstigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectileBase_SetProjectileInstigator_Statics::NewProp_InInstigator = { "InInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileBase_eventSetProjectileInstigator_Parms, InInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectileBase_SetProjectileInstigator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileBase_SetProjectileInstigator_Statics::NewProp_InInstigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_SetProjectileInstigator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectileBase_SetProjectileInstigator_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectileBase, nullptr, "SetProjectileInstigator", Z_Construct_UFunction_AProjectileBase_SetProjectileInstigator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_SetProjectileInstigator_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectileBase_SetProjectileInstigator_Statics::ProjectileBase_eventSetProjectileInstigator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_SetProjectileInstigator_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectileBase_SetProjectileInstigator_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AProjectileBase_SetProjectileInstigator_Statics::ProjectileBase_eventSetProjectileInstigator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectileBase_SetProjectileInstigator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectileBase_SetProjectileInstigator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectileBase::execSetProjectileInstigator)
{
	P_GET_OBJECT(AActor,Z_Param_InInstigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetProjectileInstigator(Z_Param_InInstigator);
	P_NATIVE_END;
}
// ********** End Class AProjectileBase Function SetProjectileInstigator ***************************

// ********** Begin Class AProjectileBase Function SetRange ****************************************
struct Z_Construct_UFunction_AProjectileBase_SetRange_Statics
{
	struct ProjectileBase_eventSetRange_Parms
	{
		float InRange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Projectiles/ProjectileBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProjectileBase_SetRange_Statics::NewProp_InRange = { "InRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileBase_eventSetRange_Parms, InRange), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectileBase_SetRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileBase_SetRange_Statics::NewProp_InRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_SetRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectileBase_SetRange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectileBase, nullptr, "SetRange", Z_Construct_UFunction_AProjectileBase_SetRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_SetRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectileBase_SetRange_Statics::ProjectileBase_eventSetRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_SetRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectileBase_SetRange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AProjectileBase_SetRange_Statics::ProjectileBase_eventSetRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectileBase_SetRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectileBase_SetRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectileBase::execSetRange)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InRange);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRange(Z_Param_InRange);
	P_NATIVE_END;
}
// ********** End Class AProjectileBase Function SetRange ******************************************

// ********** Begin Class AProjectileBase Function SetVelocity *************************************
struct Z_Construct_UFunction_AProjectileBase_SetVelocity_Statics
{
	struct ProjectileBase_eventSetVelocity_Parms
	{
		FVector NewVelocity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Shooter/Projectiles/ProjectileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectileBase_SetVelocity_Statics::NewProp_NewVelocity = { "NewVelocity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileBase_eventSetVelocity_Parms, NewVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewVelocity_MetaData), NewProp_NewVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectileBase_SetVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileBase_SetVelocity_Statics::NewProp_NewVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_SetVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectileBase_SetVelocity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AProjectileBase, nullptr, "SetVelocity", Z_Construct_UFunction_AProjectileBase_SetVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_SetVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectileBase_SetVelocity_Statics::ProjectileBase_eventSetVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileBase_SetVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectileBase_SetVelocity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AProjectileBase_SetVelocity_Statics::ProjectileBase_eventSetVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectileBase_SetVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectileBase_SetVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectileBase::execSetVelocity)
{
	P_GET_STRUCT(FVector,Z_Param_NewVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVelocity(Z_Param_NewVelocity);
	P_NATIVE_END;
}
// ********** End Class AProjectileBase Function SetVelocity ***************************************

// ********** Begin Class AProjectileBase **********************************************************
void AProjectileBase::StaticRegisterNativesAProjectileBase()
{
	UClass* Class = AProjectileBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateLifeSpan", &AProjectileBase::execCalculateLifeSpan },
		{ "DisposeProjectile", &AProjectileBase::execDisposeProjectile },
		{ "EndProjectileLifeSpan", &AProjectileBase::execEndProjectileLifeSpan },
		{ "GetDamage", &AProjectileBase::execGetDamage },
		{ "GetProjectileInstigator", &AProjectileBase::execGetProjectileInstigator },
		{ "GetProjectileVelocity", &AProjectileBase::execGetProjectileVelocity },
		{ "GetRange", &AProjectileBase::execGetRange },
		{ "InitVelocityAndLifeSpan", &AProjectileBase::execInitVelocityAndLifeSpan },
		{ "OnInit", &AProjectileBase::execOnInit },
		{ "OnProjectileHit", &AProjectileBase::execOnProjectileHit },
		{ "OnProjectileLifeSpanEnd", &AProjectileBase::execOnProjectileLifeSpanEnd },
		{ "ProjectileHit", &AProjectileBase::execProjectileHit },
		{ "SetDamage", &AProjectileBase::execSetDamage },
		{ "SetProjectileInstigator", &AProjectileBase::execSetProjectileInstigator },
		{ "SetRange", &AProjectileBase::execSetRange },
		{ "SetVelocity", &AProjectileBase::execSetVelocity },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AProjectileBase;
UClass* AProjectileBase::GetPrivateStaticClass()
{
	using TClass = AProjectileBase;
	if (!Z_Registration_Info_UClass_AProjectileBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ProjectileBase"),
			Z_Registration_Info_UClass_AProjectileBase.InnerSingleton,
			StaticRegisterNativesAProjectileBase,
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
	return Z_Registration_Info_UClass_AProjectileBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AProjectileBase_NoRegister()
{
	return AProjectileBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AProjectileBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Shooter/Projectiles/ProjectileBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Shooter/Projectiles/ProjectileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnProjectileHitEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Shooter/Projectiles/ProjectileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "ProjectileBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Shooter/Projectiles/ProjectileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComponent_MetaData[] = {
		{ "Category", "ProjectileBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Shooter/Projectiles/ProjectileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileInstigator_MetaData[] = {
		{ "ModuleRelativePath", "Public/Shooter/Projectiles/ProjectileBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageTypeClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Shooter/Projectiles/ProjectileBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProjectileHitEvent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileInstigator;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageTypeClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AProjectileBase_CalculateLifeSpan, "CalculateLifeSpan" }, // 730050927
		{ &Z_Construct_UFunction_AProjectileBase_DisposeProjectile, "DisposeProjectile" }, // 4224707248
		{ &Z_Construct_UFunction_AProjectileBase_EndProjectileLifeSpan, "EndProjectileLifeSpan" }, // 2287461906
		{ &Z_Construct_UFunction_AProjectileBase_GetDamage, "GetDamage" }, // 3673769284
		{ &Z_Construct_UFunction_AProjectileBase_GetProjectileInstigator, "GetProjectileInstigator" }, // 3415343780
		{ &Z_Construct_UFunction_AProjectileBase_GetProjectileVelocity, "GetProjectileVelocity" }, // 3218979543
		{ &Z_Construct_UFunction_AProjectileBase_GetRange, "GetRange" }, // 1206510959
		{ &Z_Construct_UFunction_AProjectileBase_InitVelocityAndLifeSpan, "InitVelocityAndLifeSpan" }, // 1796096507
		{ &Z_Construct_UFunction_AProjectileBase_OnInit, "OnInit" }, // 3273007037
		{ &Z_Construct_UFunction_AProjectileBase_OnProjectileHit, "OnProjectileHit" }, // 2720793767
		{ &Z_Construct_UFunction_AProjectileBase_OnProjectileLifeSpanEnd, "OnProjectileLifeSpanEnd" }, // 583312185
		{ &Z_Construct_UFunction_AProjectileBase_ProjectileHit, "ProjectileHit" }, // 527656113
		{ &Z_Construct_UFunction_AProjectileBase_SetDamage, "SetDamage" }, // 3135485533
		{ &Z_Construct_UFunction_AProjectileBase_SetProjectileInstigator, "SetProjectileInstigator" }, // 1976744564
		{ &Z_Construct_UFunction_AProjectileBase_SetRange, "SetRange" }, // 3720772379
		{ &Z_Construct_UFunction_AProjectileBase_SetVelocity, "SetVelocity" }, // 1294927393
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AProjectileBase_Statics::NewProp_OnProjectileHitEvent = { "OnProjectileHitEvent", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileBase, OnProjectileHitEvent), Z_Construct_UDelegateFunction_WeaponSystem_ProjectileHitDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnProjectileHitEvent_MetaData), NewProp_OnProjectileHitEvent_MetaData) }; // 1673418951
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileBase_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileBase, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileBase_Statics::NewProp_ProjectileMovementComponent = { "ProjectileMovementComponent", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileBase, ProjectileMovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMovementComponent_MetaData), NewProp_ProjectileMovementComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileBase_Statics::NewProp_ProjectileInstigator = { "ProjectileInstigator", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileBase, ProjectileInstigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileInstigator_MetaData), NewProp_ProjectileInstigator_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProjectileBase_Statics::NewProp_DamageTypeClass = { "DamageTypeClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileBase, DamageTypeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageTypeClass_MetaData), NewProp_DamageTypeClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectileBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileBase_Statics::NewProp_OnProjectileHitEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileBase_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileBase_Statics::NewProp_ProjectileMovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileBase_Statics::NewProp_ProjectileInstigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileBase_Statics::NewProp_DamageTypeClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProjectileBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APooledActorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectileBase_Statics::ClassParams = {
	&AProjectileBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AProjectileBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileBase_Statics::PropPointers),
	0,
	0x009001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectileBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectileBase()
{
	if (!Z_Registration_Info_UClass_AProjectileBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectileBase.OuterSingleton, Z_Construct_UClass_AProjectileBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectileBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileBase);
AProjectileBase::~AProjectileBase() {}
// ********** End Class AProjectileBase ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileBase_h__Script_WeaponSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectileBase, AProjectileBase::StaticClass, TEXT("AProjectileBase"), &Z_Registration_Info_UClass_AProjectileBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectileBase), 1914998940U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileBase_h__Script_WeaponSystem_3777921782(TEXT("/Script/WeaponSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileBase_h__Script_WeaponSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Projectiles_ProjectileBase_h__Script_WeaponSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
