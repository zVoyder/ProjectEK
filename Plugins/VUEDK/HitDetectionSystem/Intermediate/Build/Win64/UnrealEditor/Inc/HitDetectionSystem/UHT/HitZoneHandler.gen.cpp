// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HitZones/HitZoneHandler.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHitZoneHandler() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
HITDETECTIONSYSTEM_API UClass* Z_Construct_UClass_UHitZoneHandler();
HITDETECTIONSYSTEM_API UClass* Z_Construct_UClass_UHitZoneHandler_NoRegister();
HITDETECTIONSYSTEM_API UEnum* Z_Construct_UEnum_HitDetectionSystem_EHitZoneRedirectorMode();
HITDETECTIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitAnyDamage__DelegateSignature();
HITDETECTIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitPointDamage__DelegateSignature();
HITDETECTIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitRadialDamage__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_HitDetectionSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnZoneHitAnyDamage ***************************************************
struct Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitAnyDamage__DelegateSignature_Statics
{
	struct _Script_HitDetectionSystem_eventOnZoneHitAnyDamage_Parms
	{
		float BaseDamage;
		float TotalDamage;
		const UDamageType* DamageType;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HitZones/HitZoneHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalDamage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitAnyDamage__DelegateSignature_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnZoneHitAnyDamage_Parms, BaseDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitAnyDamage__DelegateSignature_Statics::NewProp_TotalDamage = { "TotalDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnZoneHitAnyDamage_Parms, TotalDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitAnyDamage__DelegateSignature_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnZoneHitAnyDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitAnyDamage__DelegateSignature_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnZoneHitAnyDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitAnyDamage__DelegateSignature_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnZoneHitAnyDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitAnyDamage__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitAnyDamage__DelegateSignature_Statics::NewProp_BaseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitAnyDamage__DelegateSignature_Statics::NewProp_TotalDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitAnyDamage__DelegateSignature_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitAnyDamage__DelegateSignature_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitAnyDamage__DelegateSignature_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitAnyDamage__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitAnyDamage__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_HitDetectionSystem, nullptr, "OnZoneHitAnyDamage__DelegateSignature", Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitAnyDamage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitAnyDamage__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitAnyDamage__DelegateSignature_Statics::_Script_HitDetectionSystem_eventOnZoneHitAnyDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitAnyDamage__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitAnyDamage__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitAnyDamage__DelegateSignature_Statics::_Script_HitDetectionSystem_eventOnZoneHitAnyDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitAnyDamage__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitAnyDamage__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnZoneHitAnyDamage_DelegateWrapper(const FMulticastScriptDelegate& OnZoneHitAnyDamage, float BaseDamage, float TotalDamage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	struct _Script_HitDetectionSystem_eventOnZoneHitAnyDamage_Parms
	{
		float BaseDamage;
		float TotalDamage;
		const UDamageType* DamageType;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
	_Script_HitDetectionSystem_eventOnZoneHitAnyDamage_Parms Parms;
	Parms.BaseDamage=BaseDamage;
	Parms.TotalDamage=TotalDamage;
	Parms.DamageType=DamageType;
	Parms.InstigatedBy=InstigatedBy;
	Parms.DamageCauser=DamageCauser;
	OnZoneHitAnyDamage.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnZoneHitAnyDamage *****************************************************

// ********** Begin Delegate FOnZoneHitPointDamage *************************************************
struct Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitPointDamage__DelegateSignature_Statics
{
	struct _Script_HitDetectionSystem_eventOnZoneHitPointDamage_Parms
	{
		float BaseDamage;
		float TotalDamage;
		FVector HitLocation;
		FVector HitNormal;
		FName BoneName;
		const UDamageType* DamageType;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HitZones/HitZoneHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalDamage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitNormal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitPointDamage__DelegateSignature_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnZoneHitPointDamage_Parms, BaseDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitPointDamage__DelegateSignature_Statics::NewProp_TotalDamage = { "TotalDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnZoneHitPointDamage_Parms, TotalDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitPointDamage__DelegateSignature_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnZoneHitPointDamage_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitPointDamage__DelegateSignature_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnZoneHitPointDamage_Parms, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitPointDamage__DelegateSignature_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnZoneHitPointDamage_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitPointDamage__DelegateSignature_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnZoneHitPointDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitPointDamage__DelegateSignature_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnZoneHitPointDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitPointDamage__DelegateSignature_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnZoneHitPointDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitPointDamage__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitPointDamage__DelegateSignature_Statics::NewProp_BaseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitPointDamage__DelegateSignature_Statics::NewProp_TotalDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitPointDamage__DelegateSignature_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitPointDamage__DelegateSignature_Statics::NewProp_HitNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitPointDamage__DelegateSignature_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitPointDamage__DelegateSignature_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitPointDamage__DelegateSignature_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitPointDamage__DelegateSignature_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitPointDamage__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitPointDamage__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_HitDetectionSystem, nullptr, "OnZoneHitPointDamage__DelegateSignature", Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitPointDamage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitPointDamage__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitPointDamage__DelegateSignature_Statics::_Script_HitDetectionSystem_eventOnZoneHitPointDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitPointDamage__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitPointDamage__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitPointDamage__DelegateSignature_Statics::_Script_HitDetectionSystem_eventOnZoneHitPointDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitPointDamage__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitPointDamage__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnZoneHitPointDamage_DelegateWrapper(const FMulticastScriptDelegate& OnZoneHitPointDamage, float BaseDamage, float TotalDamage, FVector HitLocation, FVector HitNormal, FName BoneName, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	struct _Script_HitDetectionSystem_eventOnZoneHitPointDamage_Parms
	{
		float BaseDamage;
		float TotalDamage;
		FVector HitLocation;
		FVector HitNormal;
		FName BoneName;
		const UDamageType* DamageType;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
	_Script_HitDetectionSystem_eventOnZoneHitPointDamage_Parms Parms;
	Parms.BaseDamage=BaseDamage;
	Parms.TotalDamage=TotalDamage;
	Parms.HitLocation=HitLocation;
	Parms.HitNormal=HitNormal;
	Parms.BoneName=BoneName;
	Parms.DamageType=DamageType;
	Parms.InstigatedBy=InstigatedBy;
	Parms.DamageCauser=DamageCauser;
	OnZoneHitPointDamage.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnZoneHitPointDamage ***************************************************

// ********** Begin Delegate FOnZoneHitRadialDamage ************************************************
struct Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitRadialDamage__DelegateSignature_Statics
{
	struct _Script_HitDetectionSystem_eventOnZoneHitRadialDamage_Parms
	{
		float BaseDamage;
		float TotalDamage;
		const UDamageType* DamageType;
		FVector Origin;
		FHitResult HitInfo;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HitZones/HitZoneHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalDamage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitRadialDamage__DelegateSignature_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnZoneHitRadialDamage_Parms, BaseDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitRadialDamage__DelegateSignature_Statics::NewProp_TotalDamage = { "TotalDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnZoneHitRadialDamage_Parms, TotalDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitRadialDamage__DelegateSignature_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnZoneHitRadialDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitRadialDamage__DelegateSignature_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnZoneHitRadialDamage_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitRadialDamage__DelegateSignature_Statics::NewProp_HitInfo = { "HitInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnZoneHitRadialDamage_Parms, HitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitInfo_MetaData), NewProp_HitInfo_MetaData) }; // 267591329
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitRadialDamage__DelegateSignature_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnZoneHitRadialDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitRadialDamage__DelegateSignature_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnZoneHitRadialDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitRadialDamage__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitRadialDamage__DelegateSignature_Statics::NewProp_BaseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitRadialDamage__DelegateSignature_Statics::NewProp_TotalDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitRadialDamage__DelegateSignature_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitRadialDamage__DelegateSignature_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitRadialDamage__DelegateSignature_Statics::NewProp_HitInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitRadialDamage__DelegateSignature_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitRadialDamage__DelegateSignature_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitRadialDamage__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitRadialDamage__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_HitDetectionSystem, nullptr, "OnZoneHitRadialDamage__DelegateSignature", Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitRadialDamage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitRadialDamage__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitRadialDamage__DelegateSignature_Statics::_Script_HitDetectionSystem_eventOnZoneHitRadialDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitRadialDamage__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitRadialDamage__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitRadialDamage__DelegateSignature_Statics::_Script_HitDetectionSystem_eventOnZoneHitRadialDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitRadialDamage__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitRadialDamage__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnZoneHitRadialDamage_DelegateWrapper(const FMulticastScriptDelegate& OnZoneHitRadialDamage, float BaseDamage, float TotalDamage, const UDamageType* DamageType, FVector Origin, FHitResult const& HitInfo, AController* InstigatedBy, AActor* DamageCauser)
{
	struct _Script_HitDetectionSystem_eventOnZoneHitRadialDamage_Parms
	{
		float BaseDamage;
		float TotalDamage;
		const UDamageType* DamageType;
		FVector Origin;
		FHitResult HitInfo;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
	_Script_HitDetectionSystem_eventOnZoneHitRadialDamage_Parms Parms;
	Parms.BaseDamage=BaseDamage;
	Parms.TotalDamage=TotalDamage;
	Parms.DamageType=DamageType;
	Parms.Origin=Origin;
	Parms.HitInfo=HitInfo;
	Parms.InstigatedBy=InstigatedBy;
	Parms.DamageCauser=DamageCauser;
	OnZoneHitRadialDamage.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnZoneHitRadialDamage **************************************************

// ********** Begin Class UHitZoneHandler Function OnTakePointDamage *******************************
struct Z_Construct_UFunction_UHitZoneHandler_OnTakePointDamage_Statics
{
	struct HitZoneHandler_eventOnTakePointDamage_Parms
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
		{ "ModuleRelativePath", "Public/HitZones/HitZoneHandler.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitZoneHandler_OnTakePointDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitZoneHandler_eventOnTakePointDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHitZoneHandler_OnTakePointDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitZoneHandler_eventOnTakePointDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitZoneHandler_OnTakePointDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitZoneHandler_eventOnTakePointDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHitZoneHandler_OnTakePointDamage_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitZoneHandler_eventOnTakePointDamage_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitZoneHandler_OnTakePointDamage_Statics::NewProp_FHitComponent = { "FHitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitZoneHandler_eventOnTakePointDamage_Parms, FHitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FHitComponent_MetaData), NewProp_FHitComponent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHitZoneHandler_OnTakePointDamage_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitZoneHandler_eventOnTakePointDamage_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHitZoneHandler_OnTakePointDamage_Statics::NewProp_ShotFromDirection = { "ShotFromDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitZoneHandler_eventOnTakePointDamage_Parms, ShotFromDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitZoneHandler_OnTakePointDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitZoneHandler_eventOnTakePointDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitZoneHandler_OnTakePointDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitZoneHandler_eventOnTakePointDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHitZoneHandler_OnTakePointDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitZoneHandler_OnTakePointDamage_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitZoneHandler_OnTakePointDamage_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitZoneHandler_OnTakePointDamage_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitZoneHandler_OnTakePointDamage_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitZoneHandler_OnTakePointDamage_Statics::NewProp_FHitComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitZoneHandler_OnTakePointDamage_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitZoneHandler_OnTakePointDamage_Statics::NewProp_ShotFromDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitZoneHandler_OnTakePointDamage_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitZoneHandler_OnTakePointDamage_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHitZoneHandler_OnTakePointDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitZoneHandler_OnTakePointDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHitZoneHandler, nullptr, "OnTakePointDamage", Z_Construct_UFunction_UHitZoneHandler_OnTakePointDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitZoneHandler_OnTakePointDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHitZoneHandler_OnTakePointDamage_Statics::HitZoneHandler_eventOnTakePointDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHitZoneHandler_OnTakePointDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHitZoneHandler_OnTakePointDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHitZoneHandler_OnTakePointDamage_Statics::HitZoneHandler_eventOnTakePointDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHitZoneHandler_OnTakePointDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHitZoneHandler_OnTakePointDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHitZoneHandler::execOnTakePointDamage)
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
	P_THIS->OnTakePointDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_InstigatedBy,Z_Param_HitLocation,Z_Param_FHitComponent,Z_Param_BoneName,Z_Param_ShotFromDirection,Z_Param_DamageType,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// ********** End Class UHitZoneHandler Function OnTakePointDamage *********************************

// ********** Begin Class UHitZoneHandler Function OnTakeRadialDamage ******************************
struct Z_Construct_UFunction_UHitZoneHandler_OnTakeRadialDamage_Statics
{
	struct HitZoneHandler_eventOnTakeRadialDamage_Parms
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
		{ "ModuleRelativePath", "Public/HitZones/HitZoneHandler.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitZoneHandler_OnTakeRadialDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitZoneHandler_eventOnTakeRadialDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHitZoneHandler_OnTakeRadialDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitZoneHandler_eventOnTakeRadialDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitZoneHandler_OnTakeRadialDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitZoneHandler_eventOnTakeRadialDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHitZoneHandler_OnTakeRadialDamage_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitZoneHandler_eventOnTakeRadialDamage_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHitZoneHandler_OnTakeRadialDamage_Statics::NewProp_HitInfo = { "HitInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitZoneHandler_eventOnTakeRadialDamage_Parms, HitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitInfo_MetaData), NewProp_HitInfo_MetaData) }; // 267591329
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitZoneHandler_OnTakeRadialDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitZoneHandler_eventOnTakeRadialDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitZoneHandler_OnTakeRadialDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitZoneHandler_eventOnTakeRadialDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHitZoneHandler_OnTakeRadialDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitZoneHandler_OnTakeRadialDamage_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitZoneHandler_OnTakeRadialDamage_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitZoneHandler_OnTakeRadialDamage_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitZoneHandler_OnTakeRadialDamage_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitZoneHandler_OnTakeRadialDamage_Statics::NewProp_HitInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitZoneHandler_OnTakeRadialDamage_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitZoneHandler_OnTakeRadialDamage_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHitZoneHandler_OnTakeRadialDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitZoneHandler_OnTakeRadialDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHitZoneHandler, nullptr, "OnTakeRadialDamage", Z_Construct_UFunction_UHitZoneHandler_OnTakeRadialDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitZoneHandler_OnTakeRadialDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHitZoneHandler_OnTakeRadialDamage_Statics::HitZoneHandler_eventOnTakeRadialDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHitZoneHandler_OnTakeRadialDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHitZoneHandler_OnTakeRadialDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHitZoneHandler_OnTakeRadialDamage_Statics::HitZoneHandler_eventOnTakeRadialDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHitZoneHandler_OnTakeRadialDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHitZoneHandler_OnTakeRadialDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHitZoneHandler::execOnTakeRadialDamage)
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
	P_THIS->OnTakeRadialDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_Origin,Z_Param_Out_HitInfo,Z_Param_InstigatedBy,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// ********** End Class UHitZoneHandler Function OnTakeRadialDamage ********************************

// ********** Begin Class UHitZoneHandler **********************************************************
void UHitZoneHandler::StaticRegisterNativesUHitZoneHandler()
{
	UClass* Class = UHitZoneHandler::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnTakePointDamage", &UHitZoneHandler::execOnTakePointDamage },
		{ "OnTakeRadialDamage", &UHitZoneHandler::execOnTakeRadialDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHitZoneHandler;
UClass* UHitZoneHandler::GetPrivateStaticClass()
{
	using TClass = UHitZoneHandler;
	if (!Z_Registration_Info_UClass_UHitZoneHandler.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HitZoneHandler"),
			Z_Registration_Info_UClass_UHitZoneHandler.InnerSingleton,
			StaticRegisterNativesUHitZoneHandler,
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
	return Z_Registration_Info_UClass_UHitZoneHandler.InnerSingleton;
}
UClass* Z_Construct_UClass_UHitZoneHandler_NoRegister()
{
	return UHitZoneHandler::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHitZoneHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HitZones/HitZoneHandler.h" },
		{ "ModuleRelativePath", "Public/HitZones/HitZoneHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnZoneHitAnyDamage_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/HitZones/HitZoneHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnZoneHitPointDamage_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/HitZones/HitZoneHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnZoneHitRadialDamage_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/HitZones/HitZoneHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReceiveRadialDamage_MetaData[] = {
		{ "Category", "HitZone" },
		{ "ModuleRelativePath", "Public/HitZones/HitZoneHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[] = {
		{ "Category", "HitZone" },
		{ "ModuleRelativePath", "Public/HitZones/HitZoneHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneRedirectorMode_MetaData[] = {
		{ "Category", "HitZone" },
		{ "ModuleRelativePath", "Public/HitZones/HitZoneHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneRedirector_MetaData[] = {
		{ "Category", "HitZone" },
		{ "EditCondition", "BoneRedirectorMode == EHitZoneRedirectorMode::CustomName" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/HitZones/HitZoneHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Public/HitZones/HitZoneHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HitZones/HitZoneHandler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnZoneHitAnyDamage;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnZoneHitPointDamage;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnZoneHitRadialDamage;
	static void NewProp_bReceiveRadialDamage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceiveRadialDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BoneRedirectorMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneRedirectorMode;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneRedirector;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHitZoneHandler_OnTakePointDamage, "OnTakePointDamage" }, // 3147309708
		{ &Z_Construct_UFunction_UHitZoneHandler_OnTakeRadialDamage, "OnTakeRadialDamage" }, // 127214782
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHitZoneHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHitZoneHandler_Statics::NewProp_OnZoneHitAnyDamage = { "OnZoneHitAnyDamage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitZoneHandler, OnZoneHitAnyDamage), Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitAnyDamage__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnZoneHitAnyDamage_MetaData), NewProp_OnZoneHitAnyDamage_MetaData) }; // 1589009129
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHitZoneHandler_Statics::NewProp_OnZoneHitPointDamage = { "OnZoneHitPointDamage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitZoneHandler, OnZoneHitPointDamage), Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitPointDamage__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnZoneHitPointDamage_MetaData), NewProp_OnZoneHitPointDamage_MetaData) }; // 887056554
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHitZoneHandler_Statics::NewProp_OnZoneHitRadialDamage = { "OnZoneHitRadialDamage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitZoneHandler, OnZoneHitRadialDamage), Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitRadialDamage__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnZoneHitRadialDamage_MetaData), NewProp_OnZoneHitRadialDamage_MetaData) }; // 2935899552
void Z_Construct_UClass_UHitZoneHandler_Statics::NewProp_bReceiveRadialDamage_SetBit(void* Obj)
{
	((UHitZoneHandler*)Obj)->bReceiveRadialDamage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHitZoneHandler_Statics::NewProp_bReceiveRadialDamage = { "bReceiveRadialDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHitZoneHandler), &Z_Construct_UClass_UHitZoneHandler_Statics::NewProp_bReceiveRadialDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReceiveRadialDamage_MetaData), NewProp_bReceiveRadialDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHitZoneHandler_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitZoneHandler, Multiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Multiplier_MetaData), NewProp_Multiplier_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHitZoneHandler_Statics::NewProp_BoneRedirectorMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHitZoneHandler_Statics::NewProp_BoneRedirectorMode = { "BoneRedirectorMode", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitZoneHandler, BoneRedirectorMode), Z_Construct_UEnum_HitDetectionSystem_EHitZoneRedirectorMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneRedirectorMode_MetaData), NewProp_BoneRedirectorMode_MetaData) }; // 2992047394
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHitZoneHandler_Statics::NewProp_BoneRedirector = { "BoneRedirector", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitZoneHandler, BoneRedirector), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneRedirector_MetaData), NewProp_BoneRedirector_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHitZoneHandler_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitZoneHandler, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHitZoneHandler_Statics::NewProp_HitBox = { "HitBox", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitZoneHandler, HitBox), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitBox_MetaData), NewProp_HitBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHitZoneHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitZoneHandler_Statics::NewProp_OnZoneHitAnyDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitZoneHandler_Statics::NewProp_OnZoneHitPointDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitZoneHandler_Statics::NewProp_OnZoneHitRadialDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitZoneHandler_Statics::NewProp_bReceiveRadialDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitZoneHandler_Statics::NewProp_Multiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitZoneHandler_Statics::NewProp_BoneRedirectorMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitZoneHandler_Statics::NewProp_BoneRedirectorMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitZoneHandler_Statics::NewProp_BoneRedirector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitZoneHandler_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitZoneHandler_Statics::NewProp_HitBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHitZoneHandler_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHitZoneHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_HitDetectionSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHitZoneHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHitZoneHandler_Statics::ClassParams = {
	&UHitZoneHandler::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHitZoneHandler_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHitZoneHandler_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHitZoneHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_UHitZoneHandler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHitZoneHandler()
{
	if (!Z_Registration_Info_UClass_UHitZoneHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHitZoneHandler.OuterSingleton, Z_Construct_UClass_UHitZoneHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHitZoneHandler.OuterSingleton;
}
UHitZoneHandler::UHitZoneHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHitZoneHandler);
UHitZoneHandler::~UHitZoneHandler() {}
// ********** End Class UHitZoneHandler ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneHandler_h__Script_HitDetectionSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHitZoneHandler, UHitZoneHandler::StaticClass, TEXT("UHitZoneHandler"), &Z_Registration_Info_UClass_UHitZoneHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHitZoneHandler), 2532666316U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneHandler_h__Script_HitDetectionSystem_577021235(TEXT("/Script/HitDetectionSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneHandler_h__Script_HitDetectionSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneHandler_h__Script_HitDetectionSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
