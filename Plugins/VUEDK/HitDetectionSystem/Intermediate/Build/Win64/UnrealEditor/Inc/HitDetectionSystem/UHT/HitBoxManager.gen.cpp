// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HitBoxManager.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHitBoxManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
HITDETECTIONSYSTEM_API UClass* Z_Construct_UClass_UHitBoxBonesData_NoRegister();
HITDETECTIONSYSTEM_API UClass* Z_Construct_UClass_UHitBoxManager();
HITDETECTIONSYSTEM_API UClass* Z_Construct_UClass_UHitBoxManager_NoRegister();
HITDETECTIONSYSTEM_API UClass* Z_Construct_UClass_UHitDetectionSubsystem_NoRegister();
HITDETECTIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxAnyDamage__DelegateSignature();
HITDETECTIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxPointDamage__DelegateSignature();
HITDETECTIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxRadialDamage__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_HitDetectionSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnHitBoxAnyDamage ****************************************************
struct Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxAnyDamage__DelegateSignature_Statics
{
	struct _Script_HitDetectionSystem_eventOnHitBoxAnyDamage_Parms
	{
		float BaseDamage;
		float TotalDamage;
		const UDamageType* DamageType;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HitBoxManager.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnHitBoxAnyDamage_Parms, BaseDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::NewProp_TotalDamage = { "TotalDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnHitBoxAnyDamage_Parms, TotalDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnHitBoxAnyDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnHitBoxAnyDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnHitBoxAnyDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::NewProp_BaseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::NewProp_TotalDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_HitDetectionSystem, nullptr, "OnHitBoxAnyDamage__DelegateSignature", Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::_Script_HitDetectionSystem_eventOnHitBoxAnyDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::_Script_HitDetectionSystem_eventOnHitBoxAnyDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxAnyDamage__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHitBoxAnyDamage_DelegateWrapper(const FMulticastScriptDelegate& OnHitBoxAnyDamage, float BaseDamage, float TotalDamage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	struct _Script_HitDetectionSystem_eventOnHitBoxAnyDamage_Parms
	{
		float BaseDamage;
		float TotalDamage;
		const UDamageType* DamageType;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
	_Script_HitDetectionSystem_eventOnHitBoxAnyDamage_Parms Parms;
	Parms.BaseDamage=BaseDamage;
	Parms.TotalDamage=TotalDamage;
	Parms.DamageType=DamageType;
	Parms.InstigatedBy=InstigatedBy;
	Parms.DamageCauser=DamageCauser;
	OnHitBoxAnyDamage.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnHitBoxAnyDamage ******************************************************

// ********** Begin Delegate FOnHitBoxPointDamage **************************************************
struct Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxPointDamage__DelegateSignature_Statics
{
	struct _Script_HitDetectionSystem_eventOnHitBoxPointDamage_Parms
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
		{ "ModuleRelativePath", "Public/HitBoxManager.h" },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxPointDamage__DelegateSignature_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnHitBoxPointDamage_Parms, BaseDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxPointDamage__DelegateSignature_Statics::NewProp_TotalDamage = { "TotalDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnHitBoxPointDamage_Parms, TotalDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxPointDamage__DelegateSignature_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnHitBoxPointDamage_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxPointDamage__DelegateSignature_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnHitBoxPointDamage_Parms, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxPointDamage__DelegateSignature_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnHitBoxPointDamage_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxPointDamage__DelegateSignature_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnHitBoxPointDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxPointDamage__DelegateSignature_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnHitBoxPointDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxPointDamage__DelegateSignature_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnHitBoxPointDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxPointDamage__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxPointDamage__DelegateSignature_Statics::NewProp_BaseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxPointDamage__DelegateSignature_Statics::NewProp_TotalDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxPointDamage__DelegateSignature_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxPointDamage__DelegateSignature_Statics::NewProp_HitNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxPointDamage__DelegateSignature_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxPointDamage__DelegateSignature_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxPointDamage__DelegateSignature_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxPointDamage__DelegateSignature_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxPointDamage__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxPointDamage__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_HitDetectionSystem, nullptr, "OnHitBoxPointDamage__DelegateSignature", Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxPointDamage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxPointDamage__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxPointDamage__DelegateSignature_Statics::_Script_HitDetectionSystem_eventOnHitBoxPointDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxPointDamage__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxPointDamage__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxPointDamage__DelegateSignature_Statics::_Script_HitDetectionSystem_eventOnHitBoxPointDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxPointDamage__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxPointDamage__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHitBoxPointDamage_DelegateWrapper(const FMulticastScriptDelegate& OnHitBoxPointDamage, float BaseDamage, float TotalDamage, FVector HitLocation, FVector HitNormal, FName BoneName, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	struct _Script_HitDetectionSystem_eventOnHitBoxPointDamage_Parms
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
	_Script_HitDetectionSystem_eventOnHitBoxPointDamage_Parms Parms;
	Parms.BaseDamage=BaseDamage;
	Parms.TotalDamage=TotalDamage;
	Parms.HitLocation=HitLocation;
	Parms.HitNormal=HitNormal;
	Parms.BoneName=BoneName;
	Parms.DamageType=DamageType;
	Parms.InstigatedBy=InstigatedBy;
	Parms.DamageCauser=DamageCauser;
	OnHitBoxPointDamage.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnHitBoxPointDamage ****************************************************

// ********** Begin Delegate FOnHitBoxRadialDamage *************************************************
struct Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxRadialDamage__DelegateSignature_Statics
{
	struct _Script_HitDetectionSystem_eventOnHitBoxRadialDamage_Parms
	{
		float BaseDamage;
		float TotalDamage;
		const UDamageType* DamageType;
		FVector Origin;
		FHitResult HitInfo;
		AController* InstigatedBy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HitBoxManager.h" },
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
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnHitBoxRadialDamage_Parms, BaseDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::NewProp_TotalDamage = { "TotalDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnHitBoxRadialDamage_Parms, TotalDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnHitBoxRadialDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnHitBoxRadialDamage_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::NewProp_HitInfo = { "HitInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnHitBoxRadialDamage_Parms, HitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitInfo_MetaData), NewProp_HitInfo_MetaData) }; // 267591329
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventOnHitBoxRadialDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::NewProp_BaseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::NewProp_TotalDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::NewProp_HitInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::NewProp_InstigatedBy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_HitDetectionSystem, nullptr, "OnHitBoxRadialDamage__DelegateSignature", Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::_Script_HitDetectionSystem_eventOnHitBoxRadialDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::_Script_HitDetectionSystem_eventOnHitBoxRadialDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxRadialDamage__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHitBoxRadialDamage_DelegateWrapper(const FMulticastScriptDelegate& OnHitBoxRadialDamage, float BaseDamage, float TotalDamage, const UDamageType* DamageType, FVector Origin, FHitResult const& HitInfo, AController* InstigatedBy)
{
	struct _Script_HitDetectionSystem_eventOnHitBoxRadialDamage_Parms
	{
		float BaseDamage;
		float TotalDamage;
		const UDamageType* DamageType;
		FVector Origin;
		FHitResult HitInfo;
		AController* InstigatedBy;
	};
	_Script_HitDetectionSystem_eventOnHitBoxRadialDamage_Parms Parms;
	Parms.BaseDamage=BaseDamage;
	Parms.TotalDamage=TotalDamage;
	Parms.DamageType=DamageType;
	Parms.Origin=Origin;
	Parms.HitInfo=HitInfo;
	Parms.InstigatedBy=InstigatedBy;
	OnHitBoxRadialDamage.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnHitBoxRadialDamage ***************************************************

// ********** Begin Class UHitBoxManager Function HasHitBoxPerBones ********************************
struct Z_Construct_UFunction_UHitBoxManager_HasHitBoxPerBones_Statics
{
	struct HitBoxManager_eventHasHitBoxPerBones_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HitBox" },
		{ "ModuleRelativePath", "Public/HitBoxManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHitBoxManager_HasHitBoxPerBones_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HitBoxManager_eventHasHitBoxPerBones_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHitBoxManager_HasHitBoxPerBones_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HitBoxManager_eventHasHitBoxPerBones_Parms), &Z_Construct_UFunction_UHitBoxManager_HasHitBoxPerBones_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHitBoxManager_HasHitBoxPerBones_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_HasHitBoxPerBones_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHitBoxManager_HasHitBoxPerBones_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitBoxManager_HasHitBoxPerBones_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHitBoxManager, nullptr, "HasHitBoxPerBones", Z_Construct_UFunction_UHitBoxManager_HasHitBoxPerBones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitBoxManager_HasHitBoxPerBones_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHitBoxManager_HasHitBoxPerBones_Statics::HitBoxManager_eventHasHitBoxPerBones_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHitBoxManager_HasHitBoxPerBones_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHitBoxManager_HasHitBoxPerBones_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHitBoxManager_HasHitBoxPerBones_Statics::HitBoxManager_eventHasHitBoxPerBones_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHitBoxManager_HasHitBoxPerBones()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHitBoxManager_HasHitBoxPerBones_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHitBoxManager::execHasHitBoxPerBones)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasHitBoxPerBones();
	P_NATIVE_END;
}
// ********** End Class UHitBoxManager Function HasHitBoxPerBones **********************************

// ********** Begin Class UHitBoxManager Function OnTakeAnyDamage **********************************
struct Z_Construct_UFunction_UHitBoxManager_OnTakeAnyDamage_Statics
{
	struct HitBoxManager_eventOnTakeAnyDamage_Parms
	{
		AActor* DamagedActor;
		float Damage;
		const UDamageType* DamageType;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HitBoxManager.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitBoxManager_OnTakeAnyDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnTakeAnyDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHitBoxManager_OnTakeAnyDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnTakeAnyDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitBoxManager_OnTakeAnyDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnTakeAnyDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitBoxManager_OnTakeAnyDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnTakeAnyDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitBoxManager_OnTakeAnyDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnTakeAnyDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHitBoxManager_OnTakeAnyDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnTakeAnyDamage_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnTakeAnyDamage_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnTakeAnyDamage_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnTakeAnyDamage_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnTakeAnyDamage_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHitBoxManager_OnTakeAnyDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitBoxManager_OnTakeAnyDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHitBoxManager, nullptr, "OnTakeAnyDamage", Z_Construct_UFunction_UHitBoxManager_OnTakeAnyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitBoxManager_OnTakeAnyDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHitBoxManager_OnTakeAnyDamage_Statics::HitBoxManager_eventOnTakeAnyDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHitBoxManager_OnTakeAnyDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHitBoxManager_OnTakeAnyDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHitBoxManager_OnTakeAnyDamage_Statics::HitBoxManager_eventOnTakeAnyDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHitBoxManager_OnTakeAnyDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHitBoxManager_OnTakeAnyDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHitBoxManager::execOnTakeAnyDamage)
{
	P_GET_OBJECT(AActor,Z_Param_DamagedActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_OBJECT(UDamageType,Z_Param_DamageType);
	P_GET_OBJECT(AController,Z_Param_InstigatedBy);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTakeAnyDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// ********** End Class UHitBoxManager Function OnTakeAnyDamage ************************************

// ********** Begin Class UHitBoxManager Function OnTakePointDamage ********************************
struct Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage_Statics
{
	struct HitBoxManager_eventOnTakePointDamage_Parms
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
		{ "ModuleRelativePath", "Public/HitBoxManager.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnTakePointDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnTakePointDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnTakePointDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnTakePointDamage_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage_Statics::NewProp_FHitComponent = { "FHitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnTakePointDamage_Parms, FHitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FHitComponent_MetaData), NewProp_FHitComponent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnTakePointDamage_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage_Statics::NewProp_ShotFromDirection = { "ShotFromDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnTakePointDamage_Parms, ShotFromDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnTakePointDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnTakePointDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage_Statics::NewProp_FHitComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage_Statics::NewProp_ShotFromDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHitBoxManager, nullptr, "OnTakePointDamage", Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage_Statics::HitBoxManager_eventOnTakePointDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage_Statics::HitBoxManager_eventOnTakePointDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHitBoxManager::execOnTakePointDamage)
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
// ********** End Class UHitBoxManager Function OnTakePointDamage **********************************

// ********** Begin Class UHitBoxManager Function OnTakeRadialDamage *******************************
struct Z_Construct_UFunction_UHitBoxManager_OnTakeRadialDamage_Statics
{
	struct HitBoxManager_eventOnTakeRadialDamage_Parms
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
		{ "ModuleRelativePath", "Public/HitBoxManager.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitBoxManager_OnTakeRadialDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnTakeRadialDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHitBoxManager_OnTakeRadialDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnTakeRadialDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitBoxManager_OnTakeRadialDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnTakeRadialDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHitBoxManager_OnTakeRadialDamage_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnTakeRadialDamage_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHitBoxManager_OnTakeRadialDamage_Statics::NewProp_HitInfo = { "HitInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnTakeRadialDamage_Parms, HitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitInfo_MetaData), NewProp_HitInfo_MetaData) }; // 267591329
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitBoxManager_OnTakeRadialDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnTakeRadialDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitBoxManager_OnTakeRadialDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnTakeRadialDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHitBoxManager_OnTakeRadialDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnTakeRadialDamage_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnTakeRadialDamage_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnTakeRadialDamage_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnTakeRadialDamage_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnTakeRadialDamage_Statics::NewProp_HitInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnTakeRadialDamage_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnTakeRadialDamage_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHitBoxManager_OnTakeRadialDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitBoxManager_OnTakeRadialDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHitBoxManager, nullptr, "OnTakeRadialDamage", Z_Construct_UFunction_UHitBoxManager_OnTakeRadialDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitBoxManager_OnTakeRadialDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHitBoxManager_OnTakeRadialDamage_Statics::HitBoxManager_eventOnTakeRadialDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHitBoxManager_OnTakeRadialDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHitBoxManager_OnTakeRadialDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHitBoxManager_OnTakeRadialDamage_Statics::HitBoxManager_eventOnTakeRadialDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHitBoxManager_OnTakeRadialDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHitBoxManager_OnTakeRadialDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHitBoxManager::execOnTakeRadialDamage)
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
// ********** End Class UHitBoxManager Function OnTakeRadialDamage *********************************

// ********** Begin Class UHitBoxManager Function OnZoneHitPointDamage *****************************
struct Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics
{
	struct HitBoxManager_eventOnZoneHitPointDamage_Parms
	{
		float BaseDamage;
		float TotalDamage;
		FVector HitLocation;
		FVector ShotFromDirection;
		FName BoneName;
		const UDamageType* DamageType;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HitBoxManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalDamage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShotFromDirection;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnZoneHitPointDamage_Parms, BaseDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::NewProp_TotalDamage = { "TotalDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnZoneHitPointDamage_Parms, TotalDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnZoneHitPointDamage_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::NewProp_ShotFromDirection = { "ShotFromDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnZoneHitPointDamage_Parms, ShotFromDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnZoneHitPointDamage_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnZoneHitPointDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnZoneHitPointDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnZoneHitPointDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::NewProp_BaseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::NewProp_TotalDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::NewProp_ShotFromDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHitBoxManager, nullptr, "OnZoneHitPointDamage", Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::HitBoxManager_eventOnZoneHitPointDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::HitBoxManager_eventOnZoneHitPointDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHitBoxManager::execOnZoneHitPointDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_BaseDamage);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TotalDamage);
	P_GET_STRUCT(FVector,Z_Param_HitLocation);
	P_GET_STRUCT(FVector,Z_Param_ShotFromDirection);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_OBJECT(UDamageType,Z_Param_DamageType);
	P_GET_OBJECT(AController,Z_Param_InstigatedBy);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnZoneHitPointDamage(Z_Param_BaseDamage,Z_Param_TotalDamage,Z_Param_HitLocation,Z_Param_ShotFromDirection,Z_Param_BoneName,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// ********** End Class UHitBoxManager Function OnZoneHitPointDamage *******************************

// ********** Begin Class UHitBoxManager Function OnZoneHitRadialDamage ****************************
struct Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics
{
	struct HitBoxManager_eventOnZoneHitRadialDamage_Parms
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
		{ "ModuleRelativePath", "Public/HitBoxManager.h" },
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
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnZoneHitRadialDamage_Parms, BaseDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::NewProp_TotalDamage = { "TotalDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnZoneHitRadialDamage_Parms, TotalDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnZoneHitRadialDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnZoneHitRadialDamage_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::NewProp_HitInfo = { "HitInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnZoneHitRadialDamage_Parms, HitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitInfo_MetaData), NewProp_HitInfo_MetaData) }; // 267591329
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnZoneHitRadialDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnZoneHitRadialDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::NewProp_BaseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::NewProp_TotalDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::NewProp_HitInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHitBoxManager, nullptr, "OnZoneHitRadialDamage", Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::HitBoxManager_eventOnZoneHitRadialDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::HitBoxManager_eventOnZoneHitRadialDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHitBoxManager::execOnZoneHitRadialDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_BaseDamage);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TotalDamage);
	P_GET_OBJECT(UDamageType,Z_Param_DamageType);
	P_GET_STRUCT(FVector,Z_Param_Origin);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitInfo);
	P_GET_OBJECT(AController,Z_Param_InstigatedBy);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnZoneHitRadialDamage(Z_Param_BaseDamage,Z_Param_TotalDamage,Z_Param_DamageType,Z_Param_Origin,Z_Param_Out_HitInfo,Z_Param_InstigatedBy,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// ********** End Class UHitBoxManager Function OnZoneHitRadialDamage ******************************

// ********** Begin Class UHitBoxManager ***********************************************************
void UHitBoxManager::StaticRegisterNativesUHitBoxManager()
{
	UClass* Class = UHitBoxManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HasHitBoxPerBones", &UHitBoxManager::execHasHitBoxPerBones },
		{ "OnTakeAnyDamage", &UHitBoxManager::execOnTakeAnyDamage },
		{ "OnTakePointDamage", &UHitBoxManager::execOnTakePointDamage },
		{ "OnTakeRadialDamage", &UHitBoxManager::execOnTakeRadialDamage },
		{ "OnZoneHitPointDamage", &UHitBoxManager::execOnZoneHitPointDamage },
		{ "OnZoneHitRadialDamage", &UHitBoxManager::execOnZoneHitRadialDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHitBoxManager;
UClass* UHitBoxManager::GetPrivateStaticClass()
{
	using TClass = UHitBoxManager;
	if (!Z_Registration_Info_UClass_UHitBoxManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HitBoxManager"),
			Z_Registration_Info_UClass_UHitBoxManager.InnerSingleton,
			StaticRegisterNativesUHitBoxManager,
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
	return Z_Registration_Info_UClass_UHitBoxManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UHitBoxManager_NoRegister()
{
	return UHitBoxManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHitBoxManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "HitBoxManager.h" },
		{ "ModuleRelativePath", "Public/HitBoxManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHitBoxAnyDamage_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/HitBoxManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHitBoxPointDamage_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/HitBoxManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHitBoxRadialDamage_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/HitBoxManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHitBoxPerBones_MetaData[] = {
		{ "Category", "HitBox" },
		{ "ModuleRelativePath", "Public/HitBoxManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitBoxBonesData_MetaData[] = {
		{ "Category", "HitBox" },
		{ "EditCondition", "bUseHitBoxPerBones" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/HitBoxManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReceiveDamageCooldown_MetaData[] = {
		{ "Category", "HitBox" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/HitBoxManager.h" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitDetectionSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/HitBoxManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecentlyDamageInstigators_MetaData[] = {
		{ "ModuleRelativePath", "Public/HitBoxManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHitBoxAnyDamage;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHitBoxPointDamage;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHitBoxRadialDamage;
	static void NewProp_bUseHitBoxPerBones_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHitBoxPerBones;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitBoxBonesData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReceiveDamageCooldown;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitDetectionSubsystem;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_RecentlyDamageInstigators_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_RecentlyDamageInstigators;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHitBoxManager_HasHitBoxPerBones, "HasHitBoxPerBones" }, // 2959787606
		{ &Z_Construct_UFunction_UHitBoxManager_OnTakeAnyDamage, "OnTakeAnyDamage" }, // 2380531633
		{ &Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage, "OnTakePointDamage" }, // 1405671615
		{ &Z_Construct_UFunction_UHitBoxManager_OnTakeRadialDamage, "OnTakeRadialDamage" }, // 2433077860
		{ &Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage, "OnZoneHitPointDamage" }, // 3448159502
		{ &Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage, "OnZoneHitRadialDamage" }, // 1709079734
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHitBoxManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHitBoxManager_Statics::NewProp_OnHitBoxAnyDamage = { "OnHitBoxAnyDamage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitBoxManager, OnHitBoxAnyDamage), Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxAnyDamage__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHitBoxAnyDamage_MetaData), NewProp_OnHitBoxAnyDamage_MetaData) }; // 1126341070
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHitBoxManager_Statics::NewProp_OnHitBoxPointDamage = { "OnHitBoxPointDamage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitBoxManager, OnHitBoxPointDamage), Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxPointDamage__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHitBoxPointDamage_MetaData), NewProp_OnHitBoxPointDamage_MetaData) }; // 2578350697
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHitBoxManager_Statics::NewProp_OnHitBoxRadialDamage = { "OnHitBoxRadialDamage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitBoxManager, OnHitBoxRadialDamage), Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxRadialDamage__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHitBoxRadialDamage_MetaData), NewProp_OnHitBoxRadialDamage_MetaData) }; // 2340002632
void Z_Construct_UClass_UHitBoxManager_Statics::NewProp_bUseHitBoxPerBones_SetBit(void* Obj)
{
	((UHitBoxManager*)Obj)->bUseHitBoxPerBones = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHitBoxManager_Statics::NewProp_bUseHitBoxPerBones = { "bUseHitBoxPerBones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHitBoxManager), &Z_Construct_UClass_UHitBoxManager_Statics::NewProp_bUseHitBoxPerBones_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHitBoxPerBones_MetaData), NewProp_bUseHitBoxPerBones_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHitBoxManager_Statics::NewProp_HitBoxBonesData = { "HitBoxBonesData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitBoxManager, HitBoxBonesData), Z_Construct_UClass_UHitBoxBonesData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitBoxBonesData_MetaData), NewProp_HitBoxBonesData_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHitBoxManager_Statics::NewProp_ReceiveDamageCooldown = { "ReceiveDamageCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitBoxManager, ReceiveDamageCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReceiveDamageCooldown_MetaData), NewProp_ReceiveDamageCooldown_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHitBoxManager_Statics::NewProp_HitDetectionSubsystem = { "HitDetectionSubsystem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitBoxManager, HitDetectionSubsystem), Z_Construct_UClass_UHitDetectionSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitDetectionSubsystem_MetaData), NewProp_HitDetectionSubsystem_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UHitBoxManager_Statics::NewProp_RecentlyDamageInstigators_ElementProp = { "RecentlyDamageInstigators", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UHitBoxManager_Statics::NewProp_RecentlyDamageInstigators = { "RecentlyDamageInstigators", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitBoxManager, RecentlyDamageInstigators), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecentlyDamageInstigators_MetaData), NewProp_RecentlyDamageInstigators_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHitBoxManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitBoxManager_Statics::NewProp_OnHitBoxAnyDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitBoxManager_Statics::NewProp_OnHitBoxPointDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitBoxManager_Statics::NewProp_OnHitBoxRadialDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitBoxManager_Statics::NewProp_bUseHitBoxPerBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitBoxManager_Statics::NewProp_HitBoxBonesData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitBoxManager_Statics::NewProp_ReceiveDamageCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitBoxManager_Statics::NewProp_HitDetectionSubsystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitBoxManager_Statics::NewProp_RecentlyDamageInstigators_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitBoxManager_Statics::NewProp_RecentlyDamageInstigators,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHitBoxManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHitBoxManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HitDetectionSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHitBoxManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHitBoxManager_Statics::ClassParams = {
	&UHitBoxManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHitBoxManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHitBoxManager_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHitBoxManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UHitBoxManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHitBoxManager()
{
	if (!Z_Registration_Info_UClass_UHitBoxManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHitBoxManager.OuterSingleton, Z_Construct_UClass_UHitBoxManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHitBoxManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHitBoxManager);
UHitBoxManager::~UHitBoxManager() {}
// ********** End Class UHitBoxManager *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitBoxManager_h__Script_HitDetectionSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHitBoxManager, UHitBoxManager::StaticClass, TEXT("UHitBoxManager"), &Z_Registration_Info_UClass_UHitBoxManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHitBoxManager), 1768827971U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitBoxManager_h__Script_HitDetectionSystem_3083091539(TEXT("/Script/HitDetectionSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitBoxManager_h__Script_HitDetectionSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitBoxManager_h__Script_HitDetectionSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
