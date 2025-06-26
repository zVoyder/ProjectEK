// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DismemberedLimb.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDismemberedLimb() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DISMEMBERERSYSTEM_API UClass* Z_Construct_UClass_ADismemberedLimb();
DISMEMBERERSYSTEM_API UClass* Z_Construct_UClass_ADismemberedLimb_NoRegister();
DISMEMBERERSYSTEM_API UClass* Z_Construct_UClass_UDismemberer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPoseableMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParticleCallbackHandler_NoRegister();
UPackage* Z_Construct_UPackage__Script_DismembererSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADismemberedLimb Function OnAnyDamage ************************************
struct Z_Construct_UFunction_ADismemberedLimb_OnAnyDamage_Statics
{
	struct DismemberedLimb_eventOnAnyDamage_Parms
	{
		AActor* DamagedActor;
		float Damage;
		const UDamageType* DamageType;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DismemberedLimb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADismemberedLimb_OnAnyDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismemberedLimb_eventOnAnyDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADismemberedLimb_OnAnyDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismemberedLimb_eventOnAnyDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADismemberedLimb_OnAnyDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismemberedLimb_eventOnAnyDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADismemberedLimb_OnAnyDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismemberedLimb_eventOnAnyDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADismemberedLimb_OnAnyDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismemberedLimb_eventOnAnyDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADismemberedLimb_OnAnyDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADismemberedLimb_OnAnyDamage_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADismemberedLimb_OnAnyDamage_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADismemberedLimb_OnAnyDamage_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADismemberedLimb_OnAnyDamage_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADismemberedLimb_OnAnyDamage_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADismemberedLimb_OnAnyDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADismemberedLimb_OnAnyDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADismemberedLimb, nullptr, "OnAnyDamage", Z_Construct_UFunction_ADismemberedLimb_OnAnyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADismemberedLimb_OnAnyDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADismemberedLimb_OnAnyDamage_Statics::DismemberedLimb_eventOnAnyDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADismemberedLimb_OnAnyDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADismemberedLimb_OnAnyDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADismemberedLimb_OnAnyDamage_Statics::DismemberedLimb_eventOnAnyDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADismemberedLimb_OnAnyDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADismemberedLimb_OnAnyDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADismemberedLimb::execOnAnyDamage)
{
	P_GET_OBJECT(AActor,Z_Param_DamagedActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_OBJECT(UDamageType,Z_Param_DamageType);
	P_GET_OBJECT(AController,Z_Param_InstigatedBy);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAnyDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// ********** End Class ADismemberedLimb Function OnAnyDamage **************************************

// ********** Begin Class ADismemberedLimb Function OnPointDamage **********************************
struct Z_Construct_UFunction_ADismemberedLimb_OnPointDamage_Statics
{
	struct DismemberedLimb_eventOnPointDamage_Parms
	{
		AActor* DamagedActor;
		float Damage;
		AController* InstigatedBy;
		FVector HitLocation;
		UPrimitiveComponent* FHitComponent;
		FName BoneName;
		FVector ShotFromDirection;
		const UDamageType* DamageType;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DismemberedLimb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FHitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FHitComponent;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShotFromDirection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADismemberedLimb_OnPointDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismemberedLimb_eventOnPointDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADismemberedLimb_OnPointDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismemberedLimb_eventOnPointDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADismemberedLimb_OnPointDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismemberedLimb_eventOnPointDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADismemberedLimb_OnPointDamage_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismemberedLimb_eventOnPointDamage_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADismemberedLimb_OnPointDamage_Statics::NewProp_FHitComponent = { "FHitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismemberedLimb_eventOnPointDamage_Parms, FHitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FHitComponent_MetaData), NewProp_FHitComponent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ADismemberedLimb_OnPointDamage_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismemberedLimb_eventOnPointDamage_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADismemberedLimb_OnPointDamage_Statics::NewProp_ShotFromDirection = { "ShotFromDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismemberedLimb_eventOnPointDamage_Parms, ShotFromDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADismemberedLimb_OnPointDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismemberedLimb_eventOnPointDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADismemberedLimb_OnPointDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismemberedLimb_eventOnPointDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADismemberedLimb_OnPointDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADismemberedLimb_OnPointDamage_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADismemberedLimb_OnPointDamage_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADismemberedLimb_OnPointDamage_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADismemberedLimb_OnPointDamage_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADismemberedLimb_OnPointDamage_Statics::NewProp_FHitComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADismemberedLimb_OnPointDamage_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADismemberedLimb_OnPointDamage_Statics::NewProp_ShotFromDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADismemberedLimb_OnPointDamage_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADismemberedLimb_OnPointDamage_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADismemberedLimb_OnPointDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADismemberedLimb_OnPointDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADismemberedLimb, nullptr, "OnPointDamage", Z_Construct_UFunction_ADismemberedLimb_OnPointDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADismemberedLimb_OnPointDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADismemberedLimb_OnPointDamage_Statics::DismemberedLimb_eventOnPointDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADismemberedLimb_OnPointDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADismemberedLimb_OnPointDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADismemberedLimb_OnPointDamage_Statics::DismemberedLimb_eventOnPointDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADismemberedLimb_OnPointDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADismemberedLimb_OnPointDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADismemberedLimb::execOnPointDamage)
{
	P_GET_OBJECT(AActor,Z_Param_DamagedActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_OBJECT(AController,Z_Param_InstigatedBy);
	P_GET_STRUCT(FVector,Z_Param_HitLocation);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_FHitComponent);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_STRUCT(FVector,Z_Param_ShotFromDirection);
	P_GET_OBJECT(UDamageType,Z_Param_DamageType);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPointDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_InstigatedBy,Z_Param_HitLocation,Z_Param_FHitComponent,Z_Param_BoneName,Z_Param_ShotFromDirection,Z_Param_DamageType,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// ********** End Class ADismemberedLimb Function OnPointDamage ************************************

// ********** Begin Class ADismemberedLimb Function OnRadialDamage *********************************
struct Z_Construct_UFunction_ADismemberedLimb_OnRadialDamage_Statics
{
	struct DismemberedLimb_eventOnRadialDamage_Parms
	{
		AActor* DamagedActor;
		float Damage;
		const UDamageType* DamageType;
		FVector Origin;
		FHitResult HitInfo;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DismemberedLimb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADismemberedLimb_OnRadialDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismemberedLimb_eventOnRadialDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADismemberedLimb_OnRadialDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismemberedLimb_eventOnRadialDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADismemberedLimb_OnRadialDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismemberedLimb_eventOnRadialDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADismemberedLimb_OnRadialDamage_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismemberedLimb_eventOnRadialDamage_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADismemberedLimb_OnRadialDamage_Statics::NewProp_HitInfo = { "HitInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismemberedLimb_eventOnRadialDamage_Parms, HitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitInfo_MetaData), NewProp_HitInfo_MetaData) }; // 267591329
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADismemberedLimb_OnRadialDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismemberedLimb_eventOnRadialDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADismemberedLimb_OnRadialDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DismemberedLimb_eventOnRadialDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADismemberedLimb_OnRadialDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADismemberedLimb_OnRadialDamage_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADismemberedLimb_OnRadialDamage_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADismemberedLimb_OnRadialDamage_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADismemberedLimb_OnRadialDamage_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADismemberedLimb_OnRadialDamage_Statics::NewProp_HitInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADismemberedLimb_OnRadialDamage_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADismemberedLimb_OnRadialDamage_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADismemberedLimb_OnRadialDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADismemberedLimb_OnRadialDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ADismemberedLimb, nullptr, "OnRadialDamage", Z_Construct_UFunction_ADismemberedLimb_OnRadialDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADismemberedLimb_OnRadialDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADismemberedLimb_OnRadialDamage_Statics::DismemberedLimb_eventOnRadialDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADismemberedLimb_OnRadialDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADismemberedLimb_OnRadialDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ADismemberedLimb_OnRadialDamage_Statics::DismemberedLimb_eventOnRadialDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADismemberedLimb_OnRadialDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADismemberedLimb_OnRadialDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADismemberedLimb::execOnRadialDamage)
{
	P_GET_OBJECT(AActor,Z_Param_DamagedActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_OBJECT(UDamageType,Z_Param_DamageType);
	P_GET_STRUCT(FVector,Z_Param_Origin);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitInfo);
	P_GET_OBJECT(AController,Z_Param_InstigatedBy);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRadialDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_Origin,Z_Param_Out_HitInfo,Z_Param_InstigatedBy,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// ********** End Class ADismemberedLimb Function OnRadialDamage ***********************************

// ********** Begin Class ADismemberedLimb *********************************************************
void ADismemberedLimb::StaticRegisterNativesADismemberedLimb()
{
	UClass* Class = ADismemberedLimb::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnAnyDamage", &ADismemberedLimb::execOnAnyDamage },
		{ "OnPointDamage", &ADismemberedLimb::execOnPointDamage },
		{ "OnRadialDamage", &ADismemberedLimb::execOnRadialDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADismemberedLimb;
UClass* ADismemberedLimb::GetPrivateStaticClass()
{
	using TClass = ADismemberedLimb;
	if (!Z_Registration_Info_UClass_ADismemberedLimb.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DismemberedLimb"),
			Z_Registration_Info_UClass_ADismemberedLimb.InnerSingleton,
			StaticRegisterNativesADismemberedLimb,
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
	return Z_Registration_Info_UClass_ADismemberedLimb.InnerSingleton;
}
UClass* Z_Construct_UClass_ADismemberedLimb_NoRegister()
{
	return ADismemberedLimb::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADismemberedLimb_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DismemberedLimb.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/DismemberedLimb.h" },
		{ "NotBlueprintType", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicRootComponent_MetaData[] = {
		{ "Category", "DismemberedLimb" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DismemberedLimb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseableMesh_MetaData[] = {
		{ "Category", "DismemberedLimb" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DismemberedLimb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dismemberer_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DismemberedLimb.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetSkelatalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DismemberedLimb.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicRootComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PoseableMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dismemberer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetSkelatalMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADismemberedLimb_OnAnyDamage, "OnAnyDamage" }, // 695189935
		{ &Z_Construct_UFunction_ADismemberedLimb_OnPointDamage, "OnPointDamage" }, // 1108467101
		{ &Z_Construct_UFunction_ADismemberedLimb_OnRadialDamage, "OnRadialDamage" }, // 1795773313
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADismemberedLimb>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADismemberedLimb_Statics::NewProp_PhysicRootComponent = { "PhysicRootComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADismemberedLimb, PhysicRootComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicRootComponent_MetaData), NewProp_PhysicRootComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADismemberedLimb_Statics::NewProp_PoseableMesh = { "PoseableMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADismemberedLimb, PoseableMesh), Z_Construct_UClass_UPoseableMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseableMesh_MetaData), NewProp_PoseableMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADismemberedLimb_Statics::NewProp_Dismemberer = { "Dismemberer", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADismemberedLimb, Dismemberer), Z_Construct_UClass_UDismemberer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dismemberer_MetaData), NewProp_Dismemberer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADismemberedLimb_Statics::NewProp_TargetSkelatalMeshComponent = { "TargetSkelatalMeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADismemberedLimb, TargetSkelatalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetSkelatalMeshComponent_MetaData), NewProp_TargetSkelatalMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADismemberedLimb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADismemberedLimb_Statics::NewProp_PhysicRootComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADismemberedLimb_Statics::NewProp_PoseableMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADismemberedLimb_Statics::NewProp_Dismemberer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADismemberedLimb_Statics::NewProp_TargetSkelatalMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADismemberedLimb_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADismemberedLimb_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DismembererSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADismemberedLimb_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADismemberedLimb_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNiagaraParticleCallbackHandler_NoRegister, (int32)VTABLE_OFFSET(ADismemberedLimb, INiagaraParticleCallbackHandler), false },  // 501724942
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADismemberedLimb_Statics::ClassParams = {
	&ADismemberedLimb::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADismemberedLimb_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADismemberedLimb_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADismemberedLimb_Statics::Class_MetaDataParams), Z_Construct_UClass_ADismemberedLimb_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADismemberedLimb()
{
	if (!Z_Registration_Info_UClass_ADismemberedLimb.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADismemberedLimb.OuterSingleton, Z_Construct_UClass_ADismemberedLimb_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADismemberedLimb.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADismemberedLimb);
ADismemberedLimb::~ADismemberedLimb() {}
// ********** End Class ADismemberedLimb ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_DismemberedLimb_h__Script_DismembererSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADismemberedLimb, ADismemberedLimb::StaticClass, TEXT("ADismemberedLimb"), &Z_Registration_Info_UClass_ADismemberedLimb, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADismemberedLimb), 96384330U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_DismemberedLimb_h__Script_DismembererSystem_1479040017(TEXT("/Script/DismembererSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_DismemberedLimb_h__Script_DismembererSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_DismemberedLimb_h__Script_DismembererSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
