// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HitBoxSystem/Public/HitBoxManager.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitBoxManager() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
HITBOXSYSTEM_API UClass* Z_Construct_UClass_UHitBoxBonesData_NoRegister();
HITBOXSYSTEM_API UClass* Z_Construct_UClass_UHitBoxManager();
HITBOXSYSTEM_API UClass* Z_Construct_UClass_UHitBoxManager_NoRegister();
HITBOXSYSTEM_API UFunction* Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxAnyDamage__DelegateSignature();
HITBOXSYSTEM_API UFunction* Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxPointDamage__DelegateSignature();
HITBOXSYSTEM_API UFunction* Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxRadialDamage__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_HitBoxSystem();
// End Cross Module References

// Begin Delegate FOnHitBoxAnyDamage
struct Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxAnyDamage__DelegateSignature_Statics
{
	struct _Script_HitBoxSystem_eventOnHitBoxAnyDamage_Parms
	{
		float PureDamage;
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
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PureDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalDamage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::NewProp_PureDamage = { "PureDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitBoxSystem_eventOnHitBoxAnyDamage_Parms, PureDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::NewProp_TotalDamage = { "TotalDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitBoxSystem_eventOnHitBoxAnyDamage_Parms, TotalDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitBoxSystem_eventOnHitBoxAnyDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitBoxSystem_eventOnHitBoxAnyDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitBoxSystem_eventOnHitBoxAnyDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::NewProp_PureDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::NewProp_TotalDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HitBoxSystem, nullptr, "OnHitBoxAnyDamage__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::_Script_HitBoxSystem_eventOnHitBoxAnyDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::_Script_HitBoxSystem_eventOnHitBoxAnyDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxAnyDamage__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxAnyDamage__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHitBoxAnyDamage_DelegateWrapper(const FMulticastScriptDelegate& OnHitBoxAnyDamage, float PureDamage, float TotalDamage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	struct _Script_HitBoxSystem_eventOnHitBoxAnyDamage_Parms
	{
		float PureDamage;
		float TotalDamage;
		const UDamageType* DamageType;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
	_Script_HitBoxSystem_eventOnHitBoxAnyDamage_Parms Parms;
	Parms.PureDamage=PureDamage;
	Parms.TotalDamage=TotalDamage;
	Parms.DamageType=DamageType;
	Parms.InstigatedBy=InstigatedBy;
	Parms.DamageCauser=DamageCauser;
	OnHitBoxAnyDamage.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnHitBoxAnyDamage

// Begin Delegate FOnHitBoxPointDamage
struct Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxPointDamage__DelegateSignature_Statics
{
	struct _Script_HitBoxSystem_eventOnHitBoxPointDamage_Parms
	{
		float PureDamage;
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
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PureDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalDamage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitNormal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxPointDamage__DelegateSignature_Statics::NewProp_PureDamage = { "PureDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitBoxSystem_eventOnHitBoxPointDamage_Parms, PureDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxPointDamage__DelegateSignature_Statics::NewProp_TotalDamage = { "TotalDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitBoxSystem_eventOnHitBoxPointDamage_Parms, TotalDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxPointDamage__DelegateSignature_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitBoxSystem_eventOnHitBoxPointDamage_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxPointDamage__DelegateSignature_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitBoxSystem_eventOnHitBoxPointDamage_Parms, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxPointDamage__DelegateSignature_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitBoxSystem_eventOnHitBoxPointDamage_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxPointDamage__DelegateSignature_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitBoxSystem_eventOnHitBoxPointDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxPointDamage__DelegateSignature_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitBoxSystem_eventOnHitBoxPointDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxPointDamage__DelegateSignature_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitBoxSystem_eventOnHitBoxPointDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxPointDamage__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxPointDamage__DelegateSignature_Statics::NewProp_PureDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxPointDamage__DelegateSignature_Statics::NewProp_TotalDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxPointDamage__DelegateSignature_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxPointDamage__DelegateSignature_Statics::NewProp_HitNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxPointDamage__DelegateSignature_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxPointDamage__DelegateSignature_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxPointDamage__DelegateSignature_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxPointDamage__DelegateSignature_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxPointDamage__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxPointDamage__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HitBoxSystem, nullptr, "OnHitBoxPointDamage__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxPointDamage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxPointDamage__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxPointDamage__DelegateSignature_Statics::_Script_HitBoxSystem_eventOnHitBoxPointDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxPointDamage__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxPointDamage__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxPointDamage__DelegateSignature_Statics::_Script_HitBoxSystem_eventOnHitBoxPointDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxPointDamage__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxPointDamage__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHitBoxPointDamage_DelegateWrapper(const FMulticastScriptDelegate& OnHitBoxPointDamage, float PureDamage, float TotalDamage, FVector HitLocation, FVector HitNormal, FName BoneName, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	struct _Script_HitBoxSystem_eventOnHitBoxPointDamage_Parms
	{
		float PureDamage;
		float TotalDamage;
		FVector HitLocation;
		FVector HitNormal;
		FName BoneName;
		const UDamageType* DamageType;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
	_Script_HitBoxSystem_eventOnHitBoxPointDamage_Parms Parms;
	Parms.PureDamage=PureDamage;
	Parms.TotalDamage=TotalDamage;
	Parms.HitLocation=HitLocation;
	Parms.HitNormal=HitNormal;
	Parms.BoneName=BoneName;
	Parms.DamageType=DamageType;
	Parms.InstigatedBy=InstigatedBy;
	Parms.DamageCauser=DamageCauser;
	OnHitBoxPointDamage.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnHitBoxPointDamage

// Begin Delegate FOnHitBoxRadialDamage
struct Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxRadialDamage__DelegateSignature_Statics
{
	struct _Script_HitBoxSystem_eventOnHitBoxRadialDamage_Parms
	{
		float PureDamage;
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
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PureDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalDamage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::NewProp_PureDamage = { "PureDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitBoxSystem_eventOnHitBoxRadialDamage_Parms, PureDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::NewProp_TotalDamage = { "TotalDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitBoxSystem_eventOnHitBoxRadialDamage_Parms, TotalDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitBoxSystem_eventOnHitBoxRadialDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitBoxSystem_eventOnHitBoxRadialDamage_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::NewProp_HitInfo = { "HitInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitBoxSystem_eventOnHitBoxRadialDamage_Parms, HitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitInfo_MetaData), NewProp_HitInfo_MetaData) }; // 4100991306
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitBoxSystem_eventOnHitBoxRadialDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::NewProp_PureDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::NewProp_TotalDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::NewProp_HitInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::NewProp_InstigatedBy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HitBoxSystem, nullptr, "OnHitBoxRadialDamage__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::_Script_HitBoxSystem_eventOnHitBoxRadialDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::_Script_HitBoxSystem_eventOnHitBoxRadialDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxRadialDamage__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxRadialDamage__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHitBoxRadialDamage_DelegateWrapper(const FMulticastScriptDelegate& OnHitBoxRadialDamage, float PureDamage, float TotalDamage, const UDamageType* DamageType, FVector Origin, FHitResult const& HitInfo, AController* InstigatedBy)
{
	struct _Script_HitBoxSystem_eventOnHitBoxRadialDamage_Parms
	{
		float PureDamage;
		float TotalDamage;
		const UDamageType* DamageType;
		FVector Origin;
		FHitResult HitInfo;
		AController* InstigatedBy;
	};
	_Script_HitBoxSystem_eventOnHitBoxRadialDamage_Parms Parms;
	Parms.PureDamage=PureDamage;
	Parms.TotalDamage=TotalDamage;
	Parms.DamageType=DamageType;
	Parms.Origin=Origin;
	Parms.HitInfo=HitInfo;
	Parms.InstigatedBy=InstigatedBy;
	OnHitBoxRadialDamage.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnHitBoxRadialDamage

// Begin Class UHitBoxManager Function HasHitBoxPerBones
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitBoxManager_HasHitBoxPerBones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHitBoxManager, nullptr, "HasHitBoxPerBones", nullptr, nullptr, Z_Construct_UFunction_UHitBoxManager_HasHitBoxPerBones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitBoxManager_HasHitBoxPerBones_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHitBoxManager_HasHitBoxPerBones_Statics::HitBoxManager_eventHasHitBoxPerBones_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHitBoxManager_HasHitBoxPerBones_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHitBoxManager_HasHitBoxPerBones_Statics::Function_MetaDataParams) };
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
// End Class UHitBoxManager Function HasHitBoxPerBones

// Begin Class UHitBoxManager Function OnTakePointDamage
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHitBoxManager, nullptr, "OnTakePointDamage", nullptr, nullptr, Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage_Statics::HitBoxManager_eventOnTakePointDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage_Statics::Function_MetaDataParams) };
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
// End Class UHitBoxManager Function OnTakePointDamage

// Begin Class UHitBoxManager Function OnTakeRadialDamage
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHitBoxManager_OnTakeRadialDamage_Statics::NewProp_HitInfo = { "HitInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnTakeRadialDamage_Parms, HitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitInfo_MetaData), NewProp_HitInfo_MetaData) }; // 4100991306
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitBoxManager_OnTakeRadialDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHitBoxManager, nullptr, "OnTakeRadialDamage", nullptr, nullptr, Z_Construct_UFunction_UHitBoxManager_OnTakeRadialDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitBoxManager_OnTakeRadialDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHitBoxManager_OnTakeRadialDamage_Statics::HitBoxManager_eventOnTakeRadialDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHitBoxManager_OnTakeRadialDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHitBoxManager_OnTakeRadialDamage_Statics::Function_MetaDataParams) };
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
// End Class UHitBoxManager Function OnTakeRadialDamage

// Begin Class UHitBoxManager Function OnZoneHitPointDamage
struct Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics
{
	struct HitBoxManager_eventOnZoneHitPointDamage_Parms
	{
		float PureDamage;
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
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PureDamage;
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::NewProp_PureDamage = { "PureDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnZoneHitPointDamage_Parms, PureDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::NewProp_TotalDamage = { "TotalDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnZoneHitPointDamage_Parms, TotalDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnZoneHitPointDamage_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::NewProp_ShotFromDirection = { "ShotFromDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnZoneHitPointDamage_Parms, ShotFromDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnZoneHitPointDamage_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnZoneHitPointDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnZoneHitPointDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnZoneHitPointDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::NewProp_PureDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::NewProp_TotalDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::NewProp_ShotFromDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHitBoxManager, nullptr, "OnZoneHitPointDamage", nullptr, nullptr, Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::HitBoxManager_eventOnZoneHitPointDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage_Statics::Function_MetaDataParams) };
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
	P_GET_PROPERTY(FFloatProperty,Z_Param_PureDamage);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TotalDamage);
	P_GET_STRUCT(FVector,Z_Param_HitLocation);
	P_GET_STRUCT(FVector,Z_Param_ShotFromDirection);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_OBJECT(UDamageType,Z_Param_DamageType);
	P_GET_OBJECT(AController,Z_Param_InstigatedBy);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnZoneHitPointDamage(Z_Param_PureDamage,Z_Param_TotalDamage,Z_Param_HitLocation,Z_Param_ShotFromDirection,Z_Param_BoneName,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// End Class UHitBoxManager Function OnZoneHitPointDamage

// Begin Class UHitBoxManager Function OnZoneHitRadialDamage
struct Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics
{
	struct HitBoxManager_eventOnZoneHitRadialDamage_Parms
	{
		float PureDamage;
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
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PureDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalDamage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::NewProp_PureDamage = { "PureDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnZoneHitRadialDamage_Parms, PureDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::NewProp_TotalDamage = { "TotalDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnZoneHitRadialDamage_Parms, TotalDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnZoneHitRadialDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnZoneHitRadialDamage_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::NewProp_HitInfo = { "HitInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnZoneHitRadialDamage_Parms, HitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitInfo_MetaData), NewProp_HitInfo_MetaData) }; // 4100991306
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnZoneHitRadialDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitBoxManager_eventOnZoneHitRadialDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::NewProp_PureDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::NewProp_TotalDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::NewProp_HitInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHitBoxManager, nullptr, "OnZoneHitRadialDamage", nullptr, nullptr, Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::HitBoxManager_eventOnZoneHitRadialDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage_Statics::Function_MetaDataParams) };
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
	P_GET_PROPERTY(FFloatProperty,Z_Param_PureDamage);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TotalDamage);
	P_GET_OBJECT(UDamageType,Z_Param_DamageType);
	P_GET_STRUCT(FVector,Z_Param_Origin);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitInfo);
	P_GET_OBJECT(AController,Z_Param_InstigatedBy);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnZoneHitRadialDamage(Z_Param_PureDamage,Z_Param_TotalDamage,Z_Param_DamageType,Z_Param_Origin,Z_Param_Out_HitInfo,Z_Param_InstigatedBy,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// End Class UHitBoxManager Function OnZoneHitRadialDamage

// Begin Class UHitBoxManager
void UHitBoxManager::StaticRegisterNativesUHitBoxManager()
{
	UClass* Class = UHitBoxManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HasHitBoxPerBones", &UHitBoxManager::execHasHitBoxPerBones },
		{ "OnTakePointDamage", &UHitBoxManager::execOnTakePointDamage },
		{ "OnTakeRadialDamage", &UHitBoxManager::execOnTakeRadialDamage },
		{ "OnZoneHitPointDamage", &UHitBoxManager::execOnZoneHitPointDamage },
		{ "OnZoneHitRadialDamage", &UHitBoxManager::execOnZoneHitRadialDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHitBoxManager);
UClass* Z_Construct_UClass_UHitBoxManager_NoRegister()
{
	return UHitBoxManager::StaticClass();
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
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHitBoxAnyDamage;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHitBoxPointDamage;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHitBoxRadialDamage;
	static void NewProp_bUseHitBoxPerBones_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHitBoxPerBones;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitBoxBonesData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHitBoxManager_HasHitBoxPerBones, "HasHitBoxPerBones" }, // 1372557419
		{ &Z_Construct_UFunction_UHitBoxManager_OnTakePointDamage, "OnTakePointDamage" }, // 983446250
		{ &Z_Construct_UFunction_UHitBoxManager_OnTakeRadialDamage, "OnTakeRadialDamage" }, // 1118357696
		{ &Z_Construct_UFunction_UHitBoxManager_OnZoneHitPointDamage, "OnZoneHitPointDamage" }, // 3289539876
		{ &Z_Construct_UFunction_UHitBoxManager_OnZoneHitRadialDamage, "OnZoneHitRadialDamage" }, // 4061211641
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHitBoxManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHitBoxManager_Statics::NewProp_OnHitBoxAnyDamage = { "OnHitBoxAnyDamage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitBoxManager, OnHitBoxAnyDamage), Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxAnyDamage__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHitBoxAnyDamage_MetaData), NewProp_OnHitBoxAnyDamage_MetaData) }; // 644355755
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHitBoxManager_Statics::NewProp_OnHitBoxPointDamage = { "OnHitBoxPointDamage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitBoxManager, OnHitBoxPointDamage), Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxPointDamage__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHitBoxPointDamage_MetaData), NewProp_OnHitBoxPointDamage_MetaData) }; // 595774356
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHitBoxManager_Statics::NewProp_OnHitBoxRadialDamage = { "OnHitBoxRadialDamage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitBoxManager, OnHitBoxRadialDamage), Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxRadialDamage__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHitBoxRadialDamage_MetaData), NewProp_OnHitBoxRadialDamage_MetaData) }; // 2098721986
void Z_Construct_UClass_UHitBoxManager_Statics::NewProp_bUseHitBoxPerBones_SetBit(void* Obj)
{
	((UHitBoxManager*)Obj)->bUseHitBoxPerBones = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHitBoxManager_Statics::NewProp_bUseHitBoxPerBones = { "bUseHitBoxPerBones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHitBoxManager), &Z_Construct_UClass_UHitBoxManager_Statics::NewProp_bUseHitBoxPerBones_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHitBoxPerBones_MetaData), NewProp_bUseHitBoxPerBones_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHitBoxManager_Statics::NewProp_HitBoxBonesData = { "HitBoxBonesData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitBoxManager, HitBoxBonesData), Z_Construct_UClass_UHitBoxBonesData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitBoxBonesData_MetaData), NewProp_HitBoxBonesData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHitBoxManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitBoxManager_Statics::NewProp_OnHitBoxAnyDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitBoxManager_Statics::NewProp_OnHitBoxPointDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitBoxManager_Statics::NewProp_OnHitBoxRadialDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitBoxManager_Statics::NewProp_bUseHitBoxPerBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitBoxManager_Statics::NewProp_HitBoxBonesData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHitBoxManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHitBoxManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HitBoxSystem,
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
template<> HITBOXSYSTEM_API UClass* StaticClass<UHitBoxManager>()
{
	return UHitBoxManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHitBoxManager);
UHitBoxManager::~UHitBoxManager() {}
// End Class UHitBoxManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitBoxManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHitBoxManager, UHitBoxManager::StaticClass, TEXT("UHitBoxManager"), &Z_Registration_Info_UClass_UHitBoxManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHitBoxManager), 2165512208U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitBoxManager_h_1116894161(TEXT("/Script/HitBoxSystem"),
	Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitBoxManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitBoxManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
