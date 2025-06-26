// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dismemberer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDismemberer() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DISMEMBERERSYSTEM_API UClass* Z_Construct_UClass_ADismemberedLimb_NoRegister();
DISMEMBERERSYSTEM_API UClass* Z_Construct_UClass_UBloodParticlesNiagaraCallbackHandler_NoRegister();
DISMEMBERERSYSTEM_API UClass* Z_Construct_UClass_UDismemberableAvatarData_NoRegister();
DISMEMBERERSYSTEM_API UClass* Z_Construct_UClass_UDismemberer();
DISMEMBERERSYSTEM_API UClass* Z_Construct_UClass_UDismemberer_NoRegister();
DISMEMBERERSYSTEM_API UClass* Z_Construct_UClass_UDismembererBloodsData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_DismembererSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDismemberer Function DismemberAllLimbs **********************************
struct Z_Construct_UFunction_UDismemberer_DismemberAllLimbs_Statics
{
	struct Dismemberer_eventDismemberAllLimbs_Parms
	{
		FVector Impulse;
		float Damage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dismemberer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Impulse_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Impulse;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDismemberer_DismemberAllLimbs_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dismemberer_eventDismemberAllLimbs_Parms, Impulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Impulse_MetaData), NewProp_Impulse_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDismemberer_DismemberAllLimbs_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dismemberer_eventDismemberAllLimbs_Parms, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDismemberer_DismemberAllLimbs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_DismemberAllLimbs_Statics::NewProp_Impulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_DismemberAllLimbs_Statics::NewProp_Damage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_DismemberAllLimbs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismemberer_DismemberAllLimbs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDismemberer, nullptr, "DismemberAllLimbs", Z_Construct_UFunction_UDismemberer_DismemberAllLimbs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_DismemberAllLimbs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDismemberer_DismemberAllLimbs_Statics::Dismemberer_eventDismemberAllLimbs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_DismemberAllLimbs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDismemberer_DismemberAllLimbs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDismemberer_DismemberAllLimbs_Statics::Dismemberer_eventDismemberAllLimbs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDismemberer_DismemberAllLimbs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDismemberer_DismemberAllLimbs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDismemberer::execDismemberAllLimbs)
{
	P_GET_STRUCT(FVector,Z_Param_Impulse);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DismemberAllLimbs(Z_Param_Impulse,Z_Param_Damage);
	P_NATIVE_END;
}
// ********** End Class UDismemberer Function DismemberAllLimbs ************************************

// ********** Begin Class UDismemberer Function DismemberLimb **************************************
struct Z_Construct_UFunction_UDismemberer_DismemberLimb_Statics
{
	struct Dismemberer_eventDismemberLimb_Parms
	{
		FName BoneName;
		FVector Impulse;
		float Damage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dismemberer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Impulse_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Impulse;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDismemberer_DismemberLimb_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dismemberer_eventDismemberLimb_Parms, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDismemberer_DismemberLimb_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dismemberer_eventDismemberLimb_Parms, Impulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Impulse_MetaData), NewProp_Impulse_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDismemberer_DismemberLimb_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dismemberer_eventDismemberLimb_Parms, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDismemberer_DismemberLimb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_DismemberLimb_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_DismemberLimb_Statics::NewProp_Impulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_DismemberLimb_Statics::NewProp_Damage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_DismemberLimb_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismemberer_DismemberLimb_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDismemberer, nullptr, "DismemberLimb", Z_Construct_UFunction_UDismemberer_DismemberLimb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_DismemberLimb_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDismemberer_DismemberLimb_Statics::Dismemberer_eventDismemberLimb_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_DismemberLimb_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDismemberer_DismemberLimb_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDismemberer_DismemberLimb_Statics::Dismemberer_eventDismemberLimb_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDismemberer_DismemberLimb()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDismemberer_DismemberLimb_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDismemberer::execDismemberLimb)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_STRUCT(FVector,Z_Param_Impulse);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DismemberLimb(Z_Param_BoneName,Z_Param_Impulse,Z_Param_Damage);
	P_NATIVE_END;
}
// ********** End Class UDismemberer Function DismemberLimb ****************************************

// ********** Begin Class UDismemberer Function DismemberLimbs *************************************
struct Z_Construct_UFunction_UDismemberer_DismemberLimbs_Statics
{
	struct Dismemberer_eventDismemberLimbs_Parms
	{
		TArray<FName> BoneNames;
		FVector Impulse;
		float Damage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dismemberer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneNames_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Impulse_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Impulse;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDismemberer_DismemberLimbs_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDismemberer_DismemberLimbs_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dismemberer_eventDismemberLimbs_Parms, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneNames_MetaData), NewProp_BoneNames_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDismemberer_DismemberLimbs_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dismemberer_eventDismemberLimbs_Parms, Impulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Impulse_MetaData), NewProp_Impulse_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDismemberer_DismemberLimbs_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dismemberer_eventDismemberLimbs_Parms, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDismemberer_DismemberLimbs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_DismemberLimbs_Statics::NewProp_BoneNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_DismemberLimbs_Statics::NewProp_BoneNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_DismemberLimbs_Statics::NewProp_Impulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_DismemberLimbs_Statics::NewProp_Damage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_DismemberLimbs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismemberer_DismemberLimbs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDismemberer, nullptr, "DismemberLimbs", Z_Construct_UFunction_UDismemberer_DismemberLimbs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_DismemberLimbs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDismemberer_DismemberLimbs_Statics::Dismemberer_eventDismemberLimbs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_DismemberLimbs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDismemberer_DismemberLimbs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDismemberer_DismemberLimbs_Statics::Dismemberer_eventDismemberLimbs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDismemberer_DismemberLimbs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDismemberer_DismemberLimbs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDismemberer::execDismemberLimbs)
{
	P_GET_TARRAY(FName,Z_Param_BoneNames);
	P_GET_STRUCT(FVector,Z_Param_Impulse);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DismemberLimbs(Z_Param_BoneNames,Z_Param_Impulse,Z_Param_Damage);
	P_NATIVE_END;
}
// ********** End Class UDismemberer Function DismemberLimbs ***************************************

// ********** Begin Class UDismemberer Function DismemberRandomLimbs *******************************
struct Z_Construct_UFunction_UDismemberer_DismemberRandomLimbs_Statics
{
	struct Dismemberer_eventDismemberRandomLimbs_Parms
	{
		int32 LimbsCount;
		FVector Impulse;
		float Damage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dismemberer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Impulse_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LimbsCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Impulse;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDismemberer_DismemberRandomLimbs_Statics::NewProp_LimbsCount = { "LimbsCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dismemberer_eventDismemberRandomLimbs_Parms, LimbsCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDismemberer_DismemberRandomLimbs_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dismemberer_eventDismemberRandomLimbs_Parms, Impulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Impulse_MetaData), NewProp_Impulse_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDismemberer_DismemberRandomLimbs_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dismemberer_eventDismemberRandomLimbs_Parms, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDismemberer_DismemberRandomLimbs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_DismemberRandomLimbs_Statics::NewProp_LimbsCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_DismemberRandomLimbs_Statics::NewProp_Impulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_DismemberRandomLimbs_Statics::NewProp_Damage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_DismemberRandomLimbs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismemberer_DismemberRandomLimbs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDismemberer, nullptr, "DismemberRandomLimbs", Z_Construct_UFunction_UDismemberer_DismemberRandomLimbs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_DismemberRandomLimbs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDismemberer_DismemberRandomLimbs_Statics::Dismemberer_eventDismemberRandomLimbs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_DismemberRandomLimbs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDismemberer_DismemberRandomLimbs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDismemberer_DismemberRandomLimbs_Statics::Dismemberer_eventDismemberRandomLimbs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDismemberer_DismemberRandomLimbs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDismemberer_DismemberRandomLimbs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDismemberer::execDismemberRandomLimbs)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LimbsCount);
	P_GET_STRUCT(FVector,Z_Param_Impulse);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DismemberRandomLimbs(Z_Param_LimbsCount,Z_Param_Impulse,Z_Param_Damage);
	P_NATIVE_END;
}
// ********** End Class UDismemberer Function DismemberRandomLimbs *********************************

// ********** Begin Class UDismemberer Function GetDismemberedBonesNames ***************************
struct Z_Construct_UFunction_UDismemberer_GetDismemberedBonesNames_Statics
{
	struct Dismemberer_eventGetDismemberedBonesNames_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dismemberer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDismemberer_GetDismemberedBonesNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDismemberer_GetDismemberedBonesNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dismemberer_eventGetDismemberedBonesNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDismemberer_GetDismemberedBonesNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_GetDismemberedBonesNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_GetDismemberedBonesNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_GetDismemberedBonesNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismemberer_GetDismemberedBonesNames_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDismemberer, nullptr, "GetDismemberedBonesNames", Z_Construct_UFunction_UDismemberer_GetDismemberedBonesNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_GetDismemberedBonesNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDismemberer_GetDismemberedBonesNames_Statics::Dismemberer_eventGetDismemberedBonesNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_GetDismemberedBonesNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDismemberer_GetDismemberedBonesNames_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDismemberer_GetDismemberedBonesNames_Statics::Dismemberer_eventGetDismemberedBonesNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDismemberer_GetDismemberedBonesNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDismemberer_GetDismemberedBonesNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDismemberer::execGetDismemberedBonesNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetDismemberedBonesNames();
	P_NATIVE_END;
}
// ********** End Class UDismemberer Function GetDismemberedBonesNames *****************************

// ********** Begin Class UDismemberer Function GetDismemberedLimbs ********************************
struct Z_Construct_UFunction_UDismemberer_GetDismemberedLimbs_Statics
{
	struct Dismemberer_eventGetDismemberedLimbs_Parms
	{
		TArray<ADismemberedLimb*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dismemberer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDismemberer_GetDismemberedLimbs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ADismemberedLimb_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDismemberer_GetDismemberedLimbs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dismemberer_eventGetDismemberedLimbs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDismemberer_GetDismemberedLimbs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_GetDismemberedLimbs_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_GetDismemberedLimbs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_GetDismemberedLimbs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismemberer_GetDismemberedLimbs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDismemberer, nullptr, "GetDismemberedLimbs", Z_Construct_UFunction_UDismemberer_GetDismemberedLimbs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_GetDismemberedLimbs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDismemberer_GetDismemberedLimbs_Statics::Dismemberer_eventGetDismemberedLimbs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_GetDismemberedLimbs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDismemberer_GetDismemberedLimbs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDismemberer_GetDismemberedLimbs_Statics::Dismemberer_eventGetDismemberedLimbs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDismemberer_GetDismemberedLimbs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDismemberer_GetDismemberedLimbs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDismemberer::execGetDismemberedLimbs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ADismemberedLimb*>*)Z_Param__Result=P_THIS->GetDismemberedLimbs();
	P_NATIVE_END;
}
// ********** End Class UDismemberer Function GetDismemberedLimbs **********************************

// ********** Begin Class UDismemberer Function GetDismemberedRootBonesNames ***********************
struct Z_Construct_UFunction_UDismemberer_GetDismemberedRootBonesNames_Statics
{
	struct Dismemberer_eventGetDismemberedRootBonesNames_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dismemberer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDismemberer_GetDismemberedRootBonesNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDismemberer_GetDismemberedRootBonesNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dismemberer_eventGetDismemberedRootBonesNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDismemberer_GetDismemberedRootBonesNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_GetDismemberedRootBonesNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_GetDismemberedRootBonesNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_GetDismemberedRootBonesNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismemberer_GetDismemberedRootBonesNames_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDismemberer, nullptr, "GetDismemberedRootBonesNames", Z_Construct_UFunction_UDismemberer_GetDismemberedRootBonesNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_GetDismemberedRootBonesNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDismemberer_GetDismemberedRootBonesNames_Statics::Dismemberer_eventGetDismemberedRootBonesNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_GetDismemberedRootBonesNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDismemberer_GetDismemberedRootBonesNames_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDismemberer_GetDismemberedRootBonesNames_Statics::Dismemberer_eventGetDismemberedRootBonesNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDismemberer_GetDismemberedRootBonesNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDismemberer_GetDismemberedRootBonesNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDismemberer::execGetDismemberedRootBonesNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetDismemberedRootBonesNames();
	P_NATIVE_END;
}
// ********** End Class UDismemberer Function GetDismemberedRootBonesNames *************************

// ********** Begin Class UDismemberer Function Init ***********************************************
struct Z_Construct_UFunction_UDismemberer_Init_Statics
{
	struct Dismemberer_eventInit_Parms
	{
		USkeletalMeshComponent* InSkeletalMeshComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dismemberer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSkeletalMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDismemberer_Init_Statics::NewProp_InSkeletalMeshComponent = { "InSkeletalMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dismemberer_eventInit_Parms, InSkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSkeletalMeshComponent_MetaData), NewProp_InSkeletalMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDismemberer_Init_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_Init_Statics::NewProp_InSkeletalMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_Init_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismemberer_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDismemberer, nullptr, "Init", Z_Construct_UFunction_UDismemberer_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_Init_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDismemberer_Init_Statics::Dismemberer_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDismemberer_Init_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDismemberer_Init_Statics::Dismemberer_eventInit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDismemberer_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDismemberer_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDismemberer::execInit)
{
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_InSkeletalMeshComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init(Z_Param_InSkeletalMeshComponent);
	P_NATIVE_END;
}
// ********** End Class UDismemberer Function Init *************************************************

// ********** Begin Class UDismemberer Function IsLimbDismemberable ********************************
struct Z_Construct_UFunction_UDismemberer_IsLimbDismemberable_Statics
{
	struct Dismemberer_eventIsLimbDismemberable_Parms
	{
		FName BoneName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dismemberer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDismemberer_IsLimbDismemberable_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dismemberer_eventIsLimbDismemberable_Parms, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
void Z_Construct_UFunction_UDismemberer_IsLimbDismemberable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Dismemberer_eventIsLimbDismemberable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDismemberer_IsLimbDismemberable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Dismemberer_eventIsLimbDismemberable_Parms), &Z_Construct_UFunction_UDismemberer_IsLimbDismemberable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDismemberer_IsLimbDismemberable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_IsLimbDismemberable_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_IsLimbDismemberable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_IsLimbDismemberable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismemberer_IsLimbDismemberable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDismemberer, nullptr, "IsLimbDismemberable", Z_Construct_UFunction_UDismemberer_IsLimbDismemberable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_IsLimbDismemberable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDismemberer_IsLimbDismemberable_Statics::Dismemberer_eventIsLimbDismemberable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_IsLimbDismemberable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDismemberer_IsLimbDismemberable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDismemberer_IsLimbDismemberable_Statics::Dismemberer_eventIsLimbDismemberable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDismemberer_IsLimbDismemberable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDismemberer_IsLimbDismemberable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDismemberer::execIsLimbDismemberable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLimbDismemberable(Z_Param_BoneName);
	P_NATIVE_END;
}
// ********** End Class UDismemberer Function IsLimbDismemberable **********************************

// ********** Begin Class UDismemberer Function IsLimbDismembered **********************************
struct Z_Construct_UFunction_UDismemberer_IsLimbDismembered_Statics
{
	struct Dismemberer_eventIsLimbDismembered_Parms
	{
		FName BoneName;
		bool bCheckOnlyRootBone;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_bCheckOnlyRootBone", "false" },
		{ "ModuleRelativePath", "Public/Dismemberer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCheckOnlyRootBone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static void NewProp_bCheckOnlyRootBone_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckOnlyRootBone;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDismemberer_IsLimbDismembered_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dismemberer_eventIsLimbDismembered_Parms, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
void Z_Construct_UFunction_UDismemberer_IsLimbDismembered_Statics::NewProp_bCheckOnlyRootBone_SetBit(void* Obj)
{
	((Dismemberer_eventIsLimbDismembered_Parms*)Obj)->bCheckOnlyRootBone = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDismemberer_IsLimbDismembered_Statics::NewProp_bCheckOnlyRootBone = { "bCheckOnlyRootBone", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Dismemberer_eventIsLimbDismembered_Parms), &Z_Construct_UFunction_UDismemberer_IsLimbDismembered_Statics::NewProp_bCheckOnlyRootBone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCheckOnlyRootBone_MetaData), NewProp_bCheckOnlyRootBone_MetaData) };
void Z_Construct_UFunction_UDismemberer_IsLimbDismembered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Dismemberer_eventIsLimbDismembered_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDismemberer_IsLimbDismembered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Dismemberer_eventIsLimbDismembered_Parms), &Z_Construct_UFunction_UDismemberer_IsLimbDismembered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDismemberer_IsLimbDismembered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_IsLimbDismembered_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_IsLimbDismembered_Statics::NewProp_bCheckOnlyRootBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_IsLimbDismembered_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_IsLimbDismembered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismemberer_IsLimbDismembered_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDismemberer, nullptr, "IsLimbDismembered", Z_Construct_UFunction_UDismemberer_IsLimbDismembered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_IsLimbDismembered_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDismemberer_IsLimbDismembered_Statics::Dismemberer_eventIsLimbDismembered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_IsLimbDismembered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDismemberer_IsLimbDismembered_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDismemberer_IsLimbDismembered_Statics::Dismemberer_eventIsLimbDismembered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDismemberer_IsLimbDismembered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDismemberer_IsLimbDismembered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDismemberer::execIsLimbDismembered)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_UBOOL(Z_Param_bCheckOnlyRootBone);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLimbDismembered(Z_Param_BoneName,Z_Param_bCheckOnlyRootBone);
	P_NATIVE_END;
}
// ********** End Class UDismemberer Function IsLimbDismembered ************************************

// ********** Begin Class UDismemberer Function OnTakePointDamage **********************************
struct Z_Construct_UFunction_UDismemberer_OnTakePointDamage_Statics
{
	struct Dismemberer_eventOnTakePointDamage_Parms
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
		{ "ModuleRelativePath", "Public/Dismemberer.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDismemberer_OnTakePointDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dismemberer_eventOnTakePointDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDismemberer_OnTakePointDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dismemberer_eventOnTakePointDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDismemberer_OnTakePointDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dismemberer_eventOnTakePointDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDismemberer_OnTakePointDamage_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dismemberer_eventOnTakePointDamage_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDismemberer_OnTakePointDamage_Statics::NewProp_FHitComponent = { "FHitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dismemberer_eventOnTakePointDamage_Parms, FHitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FHitComponent_MetaData), NewProp_FHitComponent_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDismemberer_OnTakePointDamage_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dismemberer_eventOnTakePointDamage_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDismemberer_OnTakePointDamage_Statics::NewProp_ShotFromDirection = { "ShotFromDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dismemberer_eventOnTakePointDamage_Parms, ShotFromDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDismemberer_OnTakePointDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dismemberer_eventOnTakePointDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDismemberer_OnTakePointDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dismemberer_eventOnTakePointDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDismemberer_OnTakePointDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_OnTakePointDamage_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_OnTakePointDamage_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_OnTakePointDamage_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_OnTakePointDamage_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_OnTakePointDamage_Statics::NewProp_FHitComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_OnTakePointDamage_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_OnTakePointDamage_Statics::NewProp_ShotFromDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_OnTakePointDamage_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_OnTakePointDamage_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_OnTakePointDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismemberer_OnTakePointDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDismemberer, nullptr, "OnTakePointDamage", Z_Construct_UFunction_UDismemberer_OnTakePointDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_OnTakePointDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDismemberer_OnTakePointDamage_Statics::Dismemberer_eventOnTakePointDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00880401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_OnTakePointDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDismemberer_OnTakePointDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDismemberer_OnTakePointDamage_Statics::Dismemberer_eventOnTakePointDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDismemberer_OnTakePointDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDismemberer_OnTakePointDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDismemberer::execOnTakePointDamage)
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
// ********** End Class UDismemberer Function OnTakePointDamage ************************************

// ********** Begin Class UDismemberer Function ReconstructAllLimbs ********************************
struct Z_Construct_UFunction_UDismemberer_ReconstructAllLimbs_Statics
{
	struct Dismemberer_eventReconstructAllLimbs_Parms
	{
		bool bStopBloodSpill;
		bool bDestroySpawnedLimb;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_bDestroySpawnedLimb", "true" },
		{ "CPP_Default_bStopBloodSpill", "true" },
		{ "ModuleRelativePath", "Public/Dismemberer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStopBloodSpill_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDestroySpawnedLimb_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bStopBloodSpill_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopBloodSpill;
	static void NewProp_bDestroySpawnedLimb_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroySpawnedLimb;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDismemberer_ReconstructAllLimbs_Statics::NewProp_bStopBloodSpill_SetBit(void* Obj)
{
	((Dismemberer_eventReconstructAllLimbs_Parms*)Obj)->bStopBloodSpill = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDismemberer_ReconstructAllLimbs_Statics::NewProp_bStopBloodSpill = { "bStopBloodSpill", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Dismemberer_eventReconstructAllLimbs_Parms), &Z_Construct_UFunction_UDismemberer_ReconstructAllLimbs_Statics::NewProp_bStopBloodSpill_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStopBloodSpill_MetaData), NewProp_bStopBloodSpill_MetaData) };
void Z_Construct_UFunction_UDismemberer_ReconstructAllLimbs_Statics::NewProp_bDestroySpawnedLimb_SetBit(void* Obj)
{
	((Dismemberer_eventReconstructAllLimbs_Parms*)Obj)->bDestroySpawnedLimb = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDismemberer_ReconstructAllLimbs_Statics::NewProp_bDestroySpawnedLimb = { "bDestroySpawnedLimb", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Dismemberer_eventReconstructAllLimbs_Parms), &Z_Construct_UFunction_UDismemberer_ReconstructAllLimbs_Statics::NewProp_bDestroySpawnedLimb_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDestroySpawnedLimb_MetaData), NewProp_bDestroySpawnedLimb_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDismemberer_ReconstructAllLimbs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_ReconstructAllLimbs_Statics::NewProp_bStopBloodSpill,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_ReconstructAllLimbs_Statics::NewProp_bDestroySpawnedLimb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_ReconstructAllLimbs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismemberer_ReconstructAllLimbs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDismemberer, nullptr, "ReconstructAllLimbs", Z_Construct_UFunction_UDismemberer_ReconstructAllLimbs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_ReconstructAllLimbs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDismemberer_ReconstructAllLimbs_Statics::Dismemberer_eventReconstructAllLimbs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_ReconstructAllLimbs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDismemberer_ReconstructAllLimbs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDismemberer_ReconstructAllLimbs_Statics::Dismemberer_eventReconstructAllLimbs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDismemberer_ReconstructAllLimbs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDismemberer_ReconstructAllLimbs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDismemberer::execReconstructAllLimbs)
{
	P_GET_UBOOL(Z_Param_bStopBloodSpill);
	P_GET_UBOOL(Z_Param_bDestroySpawnedLimb);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReconstructAllLimbs(Z_Param_bStopBloodSpill,Z_Param_bDestroySpawnedLimb);
	P_NATIVE_END;
}
// ********** End Class UDismemberer Function ReconstructAllLimbs **********************************

// ********** Begin Class UDismemberer Function ReconstructLimb ************************************
struct Z_Construct_UFunction_UDismemberer_ReconstructLimb_Statics
{
	struct Dismemberer_eventReconstructLimb_Parms
	{
		FName LimbRootBoneName;
		bool bStopBloodSpill;
		bool bDestroySpawnedLimb;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_bDestroySpawnedLimb", "true" },
		{ "CPP_Default_bStopBloodSpill", "true" },
		{ "ModuleRelativePath", "Public/Dismemberer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimbRootBoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStopBloodSpill_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDestroySpawnedLimb_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_LimbRootBoneName;
	static void NewProp_bStopBloodSpill_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopBloodSpill;
	static void NewProp_bDestroySpawnedLimb_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroySpawnedLimb;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDismemberer_ReconstructLimb_Statics::NewProp_LimbRootBoneName = { "LimbRootBoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dismemberer_eventReconstructLimb_Parms, LimbRootBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimbRootBoneName_MetaData), NewProp_LimbRootBoneName_MetaData) };
void Z_Construct_UFunction_UDismemberer_ReconstructLimb_Statics::NewProp_bStopBloodSpill_SetBit(void* Obj)
{
	((Dismemberer_eventReconstructLimb_Parms*)Obj)->bStopBloodSpill = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDismemberer_ReconstructLimb_Statics::NewProp_bStopBloodSpill = { "bStopBloodSpill", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Dismemberer_eventReconstructLimb_Parms), &Z_Construct_UFunction_UDismemberer_ReconstructLimb_Statics::NewProp_bStopBloodSpill_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStopBloodSpill_MetaData), NewProp_bStopBloodSpill_MetaData) };
void Z_Construct_UFunction_UDismemberer_ReconstructLimb_Statics::NewProp_bDestroySpawnedLimb_SetBit(void* Obj)
{
	((Dismemberer_eventReconstructLimb_Parms*)Obj)->bDestroySpawnedLimb = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDismemberer_ReconstructLimb_Statics::NewProp_bDestroySpawnedLimb = { "bDestroySpawnedLimb", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Dismemberer_eventReconstructLimb_Parms), &Z_Construct_UFunction_UDismemberer_ReconstructLimb_Statics::NewProp_bDestroySpawnedLimb_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDestroySpawnedLimb_MetaData), NewProp_bDestroySpawnedLimb_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDismemberer_ReconstructLimb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_ReconstructLimb_Statics::NewProp_LimbRootBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_ReconstructLimb_Statics::NewProp_bStopBloodSpill,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_ReconstructLimb_Statics::NewProp_bDestroySpawnedLimb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_ReconstructLimb_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismemberer_ReconstructLimb_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDismemberer, nullptr, "ReconstructLimb", Z_Construct_UFunction_UDismemberer_ReconstructLimb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_ReconstructLimb_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDismemberer_ReconstructLimb_Statics::Dismemberer_eventReconstructLimb_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_ReconstructLimb_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDismemberer_ReconstructLimb_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDismemberer_ReconstructLimb_Statics::Dismemberer_eventReconstructLimb_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDismemberer_ReconstructLimb()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDismemberer_ReconstructLimb_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDismemberer::execReconstructLimb)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_LimbRootBoneName);
	P_GET_UBOOL(Z_Param_bStopBloodSpill);
	P_GET_UBOOL(Z_Param_bDestroySpawnedLimb);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReconstructLimb(Z_Param_LimbRootBoneName,Z_Param_bStopBloodSpill,Z_Param_bDestroySpawnedLimb);
	P_NATIVE_END;
}
// ********** End Class UDismemberer Function ReconstructLimb **************************************

// ********** Begin Class UDismemberer Function ReconstructLimbs ***********************************
struct Z_Construct_UFunction_UDismemberer_ReconstructLimbs_Statics
{
	struct Dismemberer_eventReconstructLimbs_Parms
	{
		TArray<FName> BoneNames;
		bool bStopBloodSpill;
		bool bDestroySpawnedLimb;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_bDestroySpawnedLimb", "true" },
		{ "CPP_Default_bStopBloodSpill", "true" },
		{ "ModuleRelativePath", "Public/Dismemberer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStopBloodSpill_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDestroySpawnedLimb_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
	static void NewProp_bStopBloodSpill_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopBloodSpill;
	static void NewProp_bDestroySpawnedLimb_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroySpawnedLimb;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDismemberer_ReconstructLimbs_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDismemberer_ReconstructLimbs_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dismemberer_eventReconstructLimbs_Parms, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDismemberer_ReconstructLimbs_Statics::NewProp_bStopBloodSpill_SetBit(void* Obj)
{
	((Dismemberer_eventReconstructLimbs_Parms*)Obj)->bStopBloodSpill = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDismemberer_ReconstructLimbs_Statics::NewProp_bStopBloodSpill = { "bStopBloodSpill", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Dismemberer_eventReconstructLimbs_Parms), &Z_Construct_UFunction_UDismemberer_ReconstructLimbs_Statics::NewProp_bStopBloodSpill_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStopBloodSpill_MetaData), NewProp_bStopBloodSpill_MetaData) };
void Z_Construct_UFunction_UDismemberer_ReconstructLimbs_Statics::NewProp_bDestroySpawnedLimb_SetBit(void* Obj)
{
	((Dismemberer_eventReconstructLimbs_Parms*)Obj)->bDestroySpawnedLimb = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDismemberer_ReconstructLimbs_Statics::NewProp_bDestroySpawnedLimb = { "bDestroySpawnedLimb", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Dismemberer_eventReconstructLimbs_Parms), &Z_Construct_UFunction_UDismemberer_ReconstructLimbs_Statics::NewProp_bDestroySpawnedLimb_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDestroySpawnedLimb_MetaData), NewProp_bDestroySpawnedLimb_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDismemberer_ReconstructLimbs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_ReconstructLimbs_Statics::NewProp_BoneNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_ReconstructLimbs_Statics::NewProp_BoneNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_ReconstructLimbs_Statics::NewProp_bStopBloodSpill,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_ReconstructLimbs_Statics::NewProp_bDestroySpawnedLimb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_ReconstructLimbs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismemberer_ReconstructLimbs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDismemberer, nullptr, "ReconstructLimbs", Z_Construct_UFunction_UDismemberer_ReconstructLimbs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_ReconstructLimbs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDismemberer_ReconstructLimbs_Statics::Dismemberer_eventReconstructLimbs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_ReconstructLimbs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDismemberer_ReconstructLimbs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDismemberer_ReconstructLimbs_Statics::Dismemberer_eventReconstructLimbs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDismemberer_ReconstructLimbs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDismemberer_ReconstructLimbs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDismemberer::execReconstructLimbs)
{
	P_GET_TARRAY(FName,Z_Param_BoneNames);
	P_GET_UBOOL(Z_Param_bStopBloodSpill);
	P_GET_UBOOL(Z_Param_bDestroySpawnedLimb);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReconstructLimbs(Z_Param_BoneNames,Z_Param_bStopBloodSpill,Z_Param_bDestroySpawnedLimb);
	P_NATIVE_END;
}
// ********** End Class UDismemberer Function ReconstructLimbs *************************************

// ********** Begin Class UDismemberer Function StopAllBloodSpills *********************************
struct Z_Construct_UFunction_UDismemberer_StopAllBloodSpills_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dismemberer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismemberer_StopAllBloodSpills_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDismemberer, nullptr, "StopAllBloodSpills", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_StopAllBloodSpills_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDismemberer_StopAllBloodSpills_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDismemberer_StopAllBloodSpills()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDismemberer_StopAllBloodSpills_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDismemberer::execStopAllBloodSpills)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopAllBloodSpills();
	P_NATIVE_END;
}
// ********** End Class UDismemberer Function StopAllBloodSpills ***********************************

// ********** Begin Class UDismemberer Function StopBloodSpill *************************************
struct Z_Construct_UFunction_UDismemberer_StopBloodSpill_Statics
{
	struct Dismemberer_eventStopBloodSpill_Parms
	{
		FName SpillBoneName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dismemberer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpillBoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpillBoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDismemberer_StopBloodSpill_Statics::NewProp_SpillBoneName = { "SpillBoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dismemberer_eventStopBloodSpill_Parms, SpillBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpillBoneName_MetaData), NewProp_SpillBoneName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDismemberer_StopBloodSpill_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_StopBloodSpill_Statics::NewProp_SpillBoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_StopBloodSpill_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismemberer_StopBloodSpill_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDismemberer, nullptr, "StopBloodSpill", Z_Construct_UFunction_UDismemberer_StopBloodSpill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_StopBloodSpill_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDismemberer_StopBloodSpill_Statics::Dismemberer_eventStopBloodSpill_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_StopBloodSpill_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDismemberer_StopBloodSpill_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDismemberer_StopBloodSpill_Statics::Dismemberer_eventStopBloodSpill_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDismemberer_StopBloodSpill()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDismemberer_StopBloodSpill_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDismemberer::execStopBloodSpill)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SpillBoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopBloodSpill(Z_Param_SpillBoneName);
	P_NATIVE_END;
}
// ********** End Class UDismemberer Function StopBloodSpill ***************************************

// ********** Begin Class UDismemberer Function StopBloodSpills ************************************
struct Z_Construct_UFunction_UDismemberer_StopBloodSpills_Statics
{
	struct Dismemberer_eventStopBloodSpills_Parms
	{
		TArray<FName> SpillBoneNames;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dismemberer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpillBoneNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpillBoneNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpillBoneNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDismemberer_StopBloodSpills_Statics::NewProp_SpillBoneNames_Inner = { "SpillBoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDismemberer_StopBloodSpills_Statics::NewProp_SpillBoneNames = { "SpillBoneNames", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Dismemberer_eventStopBloodSpills_Parms, SpillBoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpillBoneNames_MetaData), NewProp_SpillBoneNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDismemberer_StopBloodSpills_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_StopBloodSpills_Statics::NewProp_SpillBoneNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDismemberer_StopBloodSpills_Statics::NewProp_SpillBoneNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_StopBloodSpills_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDismemberer_StopBloodSpills_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDismemberer, nullptr, "StopBloodSpills", Z_Construct_UFunction_UDismemberer_StopBloodSpills_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_StopBloodSpills_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDismemberer_StopBloodSpills_Statics::Dismemberer_eventStopBloodSpills_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDismemberer_StopBloodSpills_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDismemberer_StopBloodSpills_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDismemberer_StopBloodSpills_Statics::Dismemberer_eventStopBloodSpills_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDismemberer_StopBloodSpills()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDismemberer_StopBloodSpills_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDismemberer::execStopBloodSpills)
{
	P_GET_TARRAY(FName,Z_Param_SpillBoneNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopBloodSpills(Z_Param_SpillBoneNames);
	P_NATIVE_END;
}
// ********** End Class UDismemberer Function StopBloodSpills **************************************

// ********** Begin Class UDismemberer *************************************************************
void UDismemberer::StaticRegisterNativesUDismemberer()
{
	UClass* Class = UDismemberer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DismemberAllLimbs", &UDismemberer::execDismemberAllLimbs },
		{ "DismemberLimb", &UDismemberer::execDismemberLimb },
		{ "DismemberLimbs", &UDismemberer::execDismemberLimbs },
		{ "DismemberRandomLimbs", &UDismemberer::execDismemberRandomLimbs },
		{ "GetDismemberedBonesNames", &UDismemberer::execGetDismemberedBonesNames },
		{ "GetDismemberedLimbs", &UDismemberer::execGetDismemberedLimbs },
		{ "GetDismemberedRootBonesNames", &UDismemberer::execGetDismemberedRootBonesNames },
		{ "Init", &UDismemberer::execInit },
		{ "IsLimbDismemberable", &UDismemberer::execIsLimbDismemberable },
		{ "IsLimbDismembered", &UDismemberer::execIsLimbDismembered },
		{ "OnTakePointDamage", &UDismemberer::execOnTakePointDamage },
		{ "ReconstructAllLimbs", &UDismemberer::execReconstructAllLimbs },
		{ "ReconstructLimb", &UDismemberer::execReconstructLimb },
		{ "ReconstructLimbs", &UDismemberer::execReconstructLimbs },
		{ "StopAllBloodSpills", &UDismemberer::execStopAllBloodSpills },
		{ "StopBloodSpill", &UDismemberer::execStopBloodSpill },
		{ "StopBloodSpills", &UDismemberer::execStopBloodSpills },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDismemberer;
UClass* UDismemberer::GetPrivateStaticClass()
{
	using TClass = UDismemberer;
	if (!Z_Registration_Info_UClass_UDismemberer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Dismemberer"),
			Z_Registration_Info_UClass_UDismemberer.InnerSingleton,
			StaticRegisterNativesUDismemberer,
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
	return Z_Registration_Info_UClass_UDismemberer.InnerSingleton;
}
UClass* Z_Construct_UClass_UDismemberer_NoRegister()
{
	return UDismemberer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDismemberer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Dismemberer.h" },
		{ "ModuleRelativePath", "Public/Dismemberer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DismemberableAvatarData_MetaData[] = {
		{ "Category", "Dismember|Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -- Data --\n" },
#endif
		{ "ModuleRelativePath", "Public/Dismemberer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-- Data --" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DismembererBloodsData_MetaData[] = {
		{ "Category", "Dismember|Data" },
		{ "ModuleRelativePath", "Public/Dismemberer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimbApplyImpulseOnDamage_MetaData[] = {
		{ "Category", "Dismember|Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -- Limb Physics --\n" },
#endif
		{ "ModuleRelativePath", "Public/Dismemberer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-- Limb Physics --" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimbImpulseMultiplier_MetaData[] = {
		{ "Category", "Dismember|Physics" },
		{ "EditCondition", "bLimbApplyImpulseOnDamage" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dismemberer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimbLinearDamping_MetaData[] = {
		{ "Category", "Dismember|Physics" },
		{ "ModuleRelativePath", "Public/Dismemberer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimbAngularDamping_MetaData[] = {
		{ "Category", "Dismember|Physics" },
		{ "ModuleRelativePath", "Public/Dismemberer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimbReceiveDecals_MetaData[] = {
		{ "Category", "Dismember|Blood" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -- Blood Effects --\n" },
#endif
		{ "ModuleRelativePath", "Public/Dismemberer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-- Blood Effects --" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloodSpillDirectionSource_MetaData[] = {
		{ "Category", "Dismember|Blood" },
		{ "ModuleRelativePath", "Public/Dismemberer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Socket name to orient blood spill effect. The rotation is calculated from the vector between the bone location and this socket location." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloodSpillFXDepth_MetaData[] = {
		{ "Category", "Dismember|Blood" },
		{ "ModuleRelativePath", "Public/Dismemberer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloodSpillFXRotationOffset_MetaData[] = {
		{ "Category", "Dismember|Blood" },
		{ "ModuleRelativePath", "Public/Dismemberer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotation offset for blood spill effect when it is not attached to a socket." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Dismemberer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedBloodSpills_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Dismemberer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedDismemberedLimbs_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Map of dismembered limbs with their bone root names as keys\n" },
#endif
		{ "ModuleRelativePath", "Public/Dismemberer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map of dismembered limbs with their bone root names as keys" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloodParticlesNiagaraCallbackHandler_MetaData[] = {
		{ "ModuleRelativePath", "Public/Dismemberer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DismemberableAvatarData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DismembererBloodsData;
	static void NewProp_bLimbApplyImpulseOnDamage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimbApplyImpulseOnDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LimbImpulseMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LimbLinearDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LimbAngularDamping;
	static void NewProp_bLimbReceiveDecals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimbReceiveDecals;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BloodSpillDirectionSource;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BloodSpillFXDepth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BloodSpillFXRotationOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedBloodSpills_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpawnedBloodSpills_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SpawnedBloodSpills;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedDismemberedLimbs_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpawnedDismemberedLimbs_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SpawnedDismemberedLimbs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BloodParticlesNiagaraCallbackHandler;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDismemberer_DismemberAllLimbs, "DismemberAllLimbs" }, // 1808894735
		{ &Z_Construct_UFunction_UDismemberer_DismemberLimb, "DismemberLimb" }, // 2029939169
		{ &Z_Construct_UFunction_UDismemberer_DismemberLimbs, "DismemberLimbs" }, // 2212077198
		{ &Z_Construct_UFunction_UDismemberer_DismemberRandomLimbs, "DismemberRandomLimbs" }, // 3976584832
		{ &Z_Construct_UFunction_UDismemberer_GetDismemberedBonesNames, "GetDismemberedBonesNames" }, // 3827985253
		{ &Z_Construct_UFunction_UDismemberer_GetDismemberedLimbs, "GetDismemberedLimbs" }, // 2109294247
		{ &Z_Construct_UFunction_UDismemberer_GetDismemberedRootBonesNames, "GetDismemberedRootBonesNames" }, // 3795502309
		{ &Z_Construct_UFunction_UDismemberer_Init, "Init" }, // 1767717860
		{ &Z_Construct_UFunction_UDismemberer_IsLimbDismemberable, "IsLimbDismemberable" }, // 2461673238
		{ &Z_Construct_UFunction_UDismemberer_IsLimbDismembered, "IsLimbDismembered" }, // 2665662466
		{ &Z_Construct_UFunction_UDismemberer_OnTakePointDamage, "OnTakePointDamage" }, // 2564056708
		{ &Z_Construct_UFunction_UDismemberer_ReconstructAllLimbs, "ReconstructAllLimbs" }, // 1435236877
		{ &Z_Construct_UFunction_UDismemberer_ReconstructLimb, "ReconstructLimb" }, // 531524180
		{ &Z_Construct_UFunction_UDismemberer_ReconstructLimbs, "ReconstructLimbs" }, // 839992373
		{ &Z_Construct_UFunction_UDismemberer_StopAllBloodSpills, "StopAllBloodSpills" }, // 1789505826
		{ &Z_Construct_UFunction_UDismemberer_StopBloodSpill, "StopBloodSpill" }, // 3192047540
		{ &Z_Construct_UFunction_UDismemberer_StopBloodSpills, "StopBloodSpills" }, // 2849663971
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDismemberer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDismemberer_Statics::NewProp_DismemberableAvatarData = { "DismemberableAvatarData", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismemberer, DismemberableAvatarData), Z_Construct_UClass_UDismemberableAvatarData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DismemberableAvatarData_MetaData), NewProp_DismemberableAvatarData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDismemberer_Statics::NewProp_DismembererBloodsData = { "DismembererBloodsData", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismemberer, DismembererBloodsData), Z_Construct_UClass_UDismembererBloodsData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DismembererBloodsData_MetaData), NewProp_DismembererBloodsData_MetaData) };
void Z_Construct_UClass_UDismemberer_Statics::NewProp_bLimbApplyImpulseOnDamage_SetBit(void* Obj)
{
	((UDismemberer*)Obj)->bLimbApplyImpulseOnDamage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDismemberer_Statics::NewProp_bLimbApplyImpulseOnDamage = { "bLimbApplyImpulseOnDamage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDismemberer), &Z_Construct_UClass_UDismemberer_Statics::NewProp_bLimbApplyImpulseOnDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLimbApplyImpulseOnDamage_MetaData), NewProp_bLimbApplyImpulseOnDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDismemberer_Statics::NewProp_LimbImpulseMultiplier = { "LimbImpulseMultiplier", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismemberer, LimbImpulseMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimbImpulseMultiplier_MetaData), NewProp_LimbImpulseMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDismemberer_Statics::NewProp_LimbLinearDamping = { "LimbLinearDamping", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismemberer, LimbLinearDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimbLinearDamping_MetaData), NewProp_LimbLinearDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDismemberer_Statics::NewProp_LimbAngularDamping = { "LimbAngularDamping", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismemberer, LimbAngularDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimbAngularDamping_MetaData), NewProp_LimbAngularDamping_MetaData) };
void Z_Construct_UClass_UDismemberer_Statics::NewProp_bLimbReceiveDecals_SetBit(void* Obj)
{
	((UDismemberer*)Obj)->bLimbReceiveDecals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDismemberer_Statics::NewProp_bLimbReceiveDecals = { "bLimbReceiveDecals", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDismemberer), &Z_Construct_UClass_UDismemberer_Statics::NewProp_bLimbReceiveDecals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLimbReceiveDecals_MetaData), NewProp_bLimbReceiveDecals_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDismemberer_Statics::NewProp_BloodSpillDirectionSource = { "BloodSpillDirectionSource", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismemberer, BloodSpillDirectionSource), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloodSpillDirectionSource_MetaData), NewProp_BloodSpillDirectionSource_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDismemberer_Statics::NewProp_BloodSpillFXDepth = { "BloodSpillFXDepth", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismemberer, BloodSpillFXDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloodSpillFXDepth_MetaData), NewProp_BloodSpillFXDepth_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDismemberer_Statics::NewProp_BloodSpillFXRotationOffset = { "BloodSpillFXRotationOffset", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismemberer, BloodSpillFXRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloodSpillFXRotationOffset_MetaData), NewProp_BloodSpillFXRotationOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDismemberer_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismemberer, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshComponent_MetaData), NewProp_SkeletalMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDismemberer_Statics::NewProp_SpawnedBloodSpills_ValueProp = { "SpawnedBloodSpills", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDismemberer_Statics::NewProp_SpawnedBloodSpills_Key_KeyProp = { "SpawnedBloodSpills_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDismemberer_Statics::NewProp_SpawnedBloodSpills = { "SpawnedBloodSpills", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismemberer, SpawnedBloodSpills), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedBloodSpills_MetaData), NewProp_SpawnedBloodSpills_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDismemberer_Statics::NewProp_SpawnedDismemberedLimbs_ValueProp = { "SpawnedDismemberedLimbs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_ADismemberedLimb_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDismemberer_Statics::NewProp_SpawnedDismemberedLimbs_Key_KeyProp = { "SpawnedDismemberedLimbs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDismemberer_Statics::NewProp_SpawnedDismemberedLimbs = { "SpawnedDismemberedLimbs", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismemberer, SpawnedDismemberedLimbs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedDismemberedLimbs_MetaData), NewProp_SpawnedDismemberedLimbs_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDismemberer_Statics::NewProp_BloodParticlesNiagaraCallbackHandler = { "BloodParticlesNiagaraCallbackHandler", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismemberer, BloodParticlesNiagaraCallbackHandler), Z_Construct_UClass_UBloodParticlesNiagaraCallbackHandler_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloodParticlesNiagaraCallbackHandler_MetaData), NewProp_BloodParticlesNiagaraCallbackHandler_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDismemberer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismemberer_Statics::NewProp_DismemberableAvatarData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismemberer_Statics::NewProp_DismembererBloodsData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismemberer_Statics::NewProp_bLimbApplyImpulseOnDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismemberer_Statics::NewProp_LimbImpulseMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismemberer_Statics::NewProp_LimbLinearDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismemberer_Statics::NewProp_LimbAngularDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismemberer_Statics::NewProp_bLimbReceiveDecals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismemberer_Statics::NewProp_BloodSpillDirectionSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismemberer_Statics::NewProp_BloodSpillFXDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismemberer_Statics::NewProp_BloodSpillFXRotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismemberer_Statics::NewProp_SkeletalMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismemberer_Statics::NewProp_SpawnedBloodSpills_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismemberer_Statics::NewProp_SpawnedBloodSpills_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismemberer_Statics::NewProp_SpawnedBloodSpills,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismemberer_Statics::NewProp_SpawnedDismemberedLimbs_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismemberer_Statics::NewProp_SpawnedDismemberedLimbs_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismemberer_Statics::NewProp_SpawnedDismemberedLimbs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismemberer_Statics::NewProp_BloodParticlesNiagaraCallbackHandler,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDismemberer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDismemberer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DismembererSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDismemberer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDismemberer_Statics::ClassParams = {
	&UDismemberer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDismemberer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDismemberer_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDismemberer_Statics::Class_MetaDataParams), Z_Construct_UClass_UDismemberer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDismemberer()
{
	if (!Z_Registration_Info_UClass_UDismemberer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDismemberer.OuterSingleton, Z_Construct_UClass_UDismemberer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDismemberer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDismemberer);
UDismemberer::~UDismemberer() {}
// ********** End Class UDismemberer ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Dismemberer_h__Script_DismembererSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDismemberer, UDismemberer::StaticClass, TEXT("UDismemberer"), &Z_Registration_Info_UClass_UDismemberer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDismemberer), 2398337531U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Dismemberer_h__Script_DismembererSystem_3674852391(TEXT("/Script/DismembererSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Dismemberer_h__Script_DismembererSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Dismemberer_h__Script_DismembererSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
