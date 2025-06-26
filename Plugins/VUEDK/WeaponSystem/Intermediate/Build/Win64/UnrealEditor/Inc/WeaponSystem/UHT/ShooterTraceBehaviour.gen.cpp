// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Shooter/Behaviours/ShooterTraceBehaviour.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeShooterTraceBehaviour() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShootBarrel_NoRegister();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShooterBehaviourBase();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShooterTraceBehaviour();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UShooterTraceBehaviour_NoRegister();
WEAPONSYSTEM_API UEnum* Z_Construct_UEnum_WeaponSystem_EShootTraceMode();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UShooterTraceBehaviour Function OnShootTrace *****************************
struct ShooterTraceBehaviour_eventOnShootTrace_Parms
{
	UShootBarrel* Barrel;
	FVector ShootPointLocation;
	FVector TraceStartLocation;
	FVector EndLocation;
	TArray<FHitResult> TraceHitResults;
	TArray<FHitResult> DamageHitResults;
};
static FName NAME_UShooterTraceBehaviour_OnShootTrace = FName(TEXT("OnShootTrace"));
void UShooterTraceBehaviour::OnShootTrace(UShootBarrel* Barrel, FVector const& ShootPointLocation, FVector const& TraceStartLocation, FVector const& EndLocation, TArray<FHitResult> const& TraceHitResults, TArray<FHitResult> const& DamageHitResults) const
{
	UFunction* Func = FindFunctionChecked(NAME_UShooterTraceBehaviour_OnShootTrace);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ShooterTraceBehaviour_eventOnShootTrace_Parms Parms;
		Parms.Barrel=Barrel;
		Parms.ShootPointLocation=ShootPointLocation;
		Parms.TraceStartLocation=TraceStartLocation;
		Parms.EndLocation=EndLocation;
		Parms.TraceHitResults=TraceHitResults;
		Parms.DamageHitResults=DamageHitResults;
		const_cast<UShooterTraceBehaviour*>(this)->ProcessEvent(Func,&Parms);
	}
	else
	{
		const_cast<UShooterTraceBehaviour*>(this)->OnShootTrace_Implementation(Barrel, ShootPointLocation, TraceStartLocation, EndLocation, TraceHitResults, DamageHitResults);
	}
}
struct Z_Construct_UFunction_UShooterTraceBehaviour_OnShootTrace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Called when the shoot trace is completed.\n\x09 * @param Barrel The shoot barrel that performed the trace.\n\x09 * @param ShootPointLocation The location of the shoot point.\n\x09 * @param TraceStartLocation The start location of the trace.\n\x09 * @param EndLocation The actual end location of the trace. If a hit is detected, this will be the impact point; otherwise, it will match the original trace end point.\n\x09 * @param TraceHitResults The subset of hit results that were detected during the trace.\n\x09 * @param DamageHitResults The subset of hit results that resulted in actual damage being applied to valid targets.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterTraceBehaviour.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the shoot trace is completed.\n@param Barrel The shoot barrel that performed the trace.\n@param ShootPointLocation The location of the shoot point.\n@param TraceStartLocation The start location of the trace.\n@param EndLocation The actual end location of the trace. If a hit is detected, this will be the impact point; otherwise, it will match the original trace end point.\n@param TraceHitResults The subset of hit results that were detected during the trace.\n@param DamageHitResults The subset of hit results that resulted in actual damage being applied to valid targets." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Barrel_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootPointLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceStartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceHitResults_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageHitResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Barrel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShootPointLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceHitResults_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TraceHitResults;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageHitResults_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DamageHitResults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UShooterTraceBehaviour_OnShootTrace_Statics::NewProp_Barrel = { "Barrel", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterTraceBehaviour_eventOnShootTrace_Parms, Barrel), Z_Construct_UClass_UShootBarrel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Barrel_MetaData), NewProp_Barrel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShooterTraceBehaviour_OnShootTrace_Statics::NewProp_ShootPointLocation = { "ShootPointLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterTraceBehaviour_eventOnShootTrace_Parms, ShootPointLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootPointLocation_MetaData), NewProp_ShootPointLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShooterTraceBehaviour_OnShootTrace_Statics::NewProp_TraceStartLocation = { "TraceStartLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterTraceBehaviour_eventOnShootTrace_Parms, TraceStartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceStartLocation_MetaData), NewProp_TraceStartLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShooterTraceBehaviour_OnShootTrace_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterTraceBehaviour_eventOnShootTrace_Parms, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndLocation_MetaData), NewProp_EndLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShooterTraceBehaviour_OnShootTrace_Statics::NewProp_TraceHitResults_Inner = { "TraceHitResults", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 267591329
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UShooterTraceBehaviour_OnShootTrace_Statics::NewProp_TraceHitResults = { "TraceHitResults", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterTraceBehaviour_eventOnShootTrace_Parms, TraceHitResults), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceHitResults_MetaData), NewProp_TraceHitResults_MetaData) }; // 267591329
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShooterTraceBehaviour_OnShootTrace_Statics::NewProp_DamageHitResults_Inner = { "DamageHitResults", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 267591329
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UShooterTraceBehaviour_OnShootTrace_Statics::NewProp_DamageHitResults = { "DamageHitResults", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterTraceBehaviour_eventOnShootTrace_Parms, DamageHitResults), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageHitResults_MetaData), NewProp_DamageHitResults_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterTraceBehaviour_OnShootTrace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterTraceBehaviour_OnShootTrace_Statics::NewProp_Barrel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterTraceBehaviour_OnShootTrace_Statics::NewProp_ShootPointLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterTraceBehaviour_OnShootTrace_Statics::NewProp_TraceStartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterTraceBehaviour_OnShootTrace_Statics::NewProp_EndLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterTraceBehaviour_OnShootTrace_Statics::NewProp_TraceHitResults_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterTraceBehaviour_OnShootTrace_Statics::NewProp_TraceHitResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterTraceBehaviour_OnShootTrace_Statics::NewProp_DamageHitResults_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterTraceBehaviour_OnShootTrace_Statics::NewProp_DamageHitResults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterTraceBehaviour_OnShootTrace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterTraceBehaviour_OnShootTrace_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UShooterTraceBehaviour, nullptr, "OnShootTrace", Z_Construct_UFunction_UShooterTraceBehaviour_OnShootTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterTraceBehaviour_OnShootTrace_Statics::PropPointers), sizeof(ShooterTraceBehaviour_eventOnShootTrace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C80C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterTraceBehaviour_OnShootTrace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UShooterTraceBehaviour_OnShootTrace_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ShooterTraceBehaviour_eventOnShootTrace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShooterTraceBehaviour_OnShootTrace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterTraceBehaviour_OnShootTrace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UShooterTraceBehaviour::execOnShootTrace)
{
	P_GET_OBJECT(UShootBarrel,Z_Param_Barrel);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ShootPointLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_TraceStartLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_EndLocation);
	P_GET_TARRAY_REF(FHitResult,Z_Param_Out_TraceHitResults);
	P_GET_TARRAY_REF(FHitResult,Z_Param_Out_DamageHitResults);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnShootTrace_Implementation(Z_Param_Barrel,Z_Param_Out_ShootPointLocation,Z_Param_Out_TraceStartLocation,Z_Param_Out_EndLocation,Z_Param_Out_TraceHitResults,Z_Param_Out_DamageHitResults);
	P_NATIVE_END;
}
// ********** End Class UShooterTraceBehaviour Function OnShootTrace *******************************

// ********** Begin Class UShooterTraceBehaviour ***************************************************
void UShooterTraceBehaviour::StaticRegisterNativesUShooterTraceBehaviour()
{
	UClass* Class = UShooterTraceBehaviour::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnShootTrace", &UShooterTraceBehaviour::execOnShootTrace },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UShooterTraceBehaviour;
UClass* UShooterTraceBehaviour::GetPrivateStaticClass()
{
	using TClass = UShooterTraceBehaviour;
	if (!Z_Registration_Info_UClass_UShooterTraceBehaviour.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ShooterTraceBehaviour"),
			Z_Registration_Info_UClass_UShooterTraceBehaviour.InnerSingleton,
			StaticRegisterNativesUShooterTraceBehaviour,
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
	return Z_Registration_Info_UClass_UShooterTraceBehaviour.InnerSingleton;
}
UClass* Z_Construct_UClass_UShooterTraceBehaviour_NoRegister()
{
	return UShooterTraceBehaviour::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UShooterTraceBehaviour_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Shooter/Behaviours/ShooterTraceBehaviour.h" },
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterTraceBehaviour.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPenetration_MetaData[] = {
		{ "Category", "Shooter|Trace" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -- Trace --\n" },
#endif
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterTraceBehaviour.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-- Trace --" },
#endif
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowsMultipleHitsOnSameActor_MetaData[] = {
		{ "Category", "Shooter|Trace" },
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterTraceBehaviour.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageTraceChannel_MetaData[] = {
		{ "Category", "Shooter|Trace" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterTraceBehaviour.h" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShootTraceMode_MetaData[] = {
		{ "Category", "Shooter|Trace" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterTraceBehaviour.h" },
		{ "UIMin", "0.0" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugTraceLines_MetaData[] = {
		{ "Category", "ShooterTraceBehaviour" },
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterTraceBehaviour.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugTraceLineDuration_MetaData[] = {
		{ "Category", "ShooterTraceBehaviour" },
		{ "EditCondition", "bDrawDebugTraceLines" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Shooter/Behaviours/ShooterTraceBehaviour.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPenetration;
	static void NewProp_bAllowsMultipleHitsOnSameActor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowsMultipleHitsOnSameActor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DamageTraceChannel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ShootTraceMode;
#if WITH_EDITORONLY_DATA
	static void NewProp_bDrawDebugTraceLines_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugTraceLines;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugTraceLineDuration;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UShooterTraceBehaviour_OnShootTrace, "OnShootTrace" }, // 2995255034
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterTraceBehaviour>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UShooterTraceBehaviour_Statics::NewProp_MaxPenetration = { "MaxPenetration", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterTraceBehaviour, MaxPenetration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPenetration_MetaData), NewProp_MaxPenetration_MetaData) };
void Z_Construct_UClass_UShooterTraceBehaviour_Statics::NewProp_bAllowsMultipleHitsOnSameActor_SetBit(void* Obj)
{
	((UShooterTraceBehaviour*)Obj)->bAllowsMultipleHitsOnSameActor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShooterTraceBehaviour_Statics::NewProp_bAllowsMultipleHitsOnSameActor = { "bAllowsMultipleHitsOnSameActor", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UShooterTraceBehaviour), &Z_Construct_UClass_UShooterTraceBehaviour_Statics::NewProp_bAllowsMultipleHitsOnSameActor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowsMultipleHitsOnSameActor_MetaData), NewProp_bAllowsMultipleHitsOnSameActor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UShooterTraceBehaviour_Statics::NewProp_DamageTraceChannel = { "DamageTraceChannel", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterTraceBehaviour, DamageTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageTraceChannel_MetaData), NewProp_DamageTraceChannel_MetaData) }; // 756624936
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UShooterTraceBehaviour_Statics::NewProp_ShootTraceMode = { "ShootTraceMode", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterTraceBehaviour, ShootTraceMode), Z_Construct_UEnum_WeaponSystem_EShootTraceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShootTraceMode_MetaData), NewProp_ShootTraceMode_MetaData) }; // 3836960693
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UShooterTraceBehaviour_Statics::NewProp_bDrawDebugTraceLines_SetBit(void* Obj)
{
	((UShooterTraceBehaviour*)Obj)->bDrawDebugTraceLines = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShooterTraceBehaviour_Statics::NewProp_bDrawDebugTraceLines = { "bDrawDebugTraceLines", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UShooterTraceBehaviour), &Z_Construct_UClass_UShooterTraceBehaviour_Statics::NewProp_bDrawDebugTraceLines_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugTraceLines_MetaData), NewProp_bDrawDebugTraceLines_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShooterTraceBehaviour_Statics::NewProp_DebugTraceLineDuration = { "DebugTraceLineDuration", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UShooterTraceBehaviour, DebugTraceLineDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugTraceLineDuration_MetaData), NewProp_DebugTraceLineDuration_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShooterTraceBehaviour_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterTraceBehaviour_Statics::NewProp_MaxPenetration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterTraceBehaviour_Statics::NewProp_bAllowsMultipleHitsOnSameActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterTraceBehaviour_Statics::NewProp_DamageTraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterTraceBehaviour_Statics::NewProp_ShootTraceMode,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterTraceBehaviour_Statics::NewProp_bDrawDebugTraceLines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterTraceBehaviour_Statics::NewProp_DebugTraceLineDuration,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShooterTraceBehaviour_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UShooterTraceBehaviour_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UShooterBehaviourBase,
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShooterTraceBehaviour_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UShooterTraceBehaviour_Statics::ClassParams = {
	&UShooterTraceBehaviour::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UShooterTraceBehaviour_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UShooterTraceBehaviour_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShooterTraceBehaviour_Statics::Class_MetaDataParams), Z_Construct_UClass_UShooterTraceBehaviour_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UShooterTraceBehaviour()
{
	if (!Z_Registration_Info_UClass_UShooterTraceBehaviour.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShooterTraceBehaviour.OuterSingleton, Z_Construct_UClass_UShooterTraceBehaviour_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UShooterTraceBehaviour.OuterSingleton;
}
UShooterTraceBehaviour::UShooterTraceBehaviour(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterTraceBehaviour);
UShooterTraceBehaviour::~UShooterTraceBehaviour() {}
// ********** End Class UShooterTraceBehaviour *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterTraceBehaviour_h__Script_WeaponSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UShooterTraceBehaviour, UShooterTraceBehaviour::StaticClass, TEXT("UShooterTraceBehaviour"), &Z_Registration_Info_UClass_UShooterTraceBehaviour, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShooterTraceBehaviour), 2821978331U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterTraceBehaviour_h__Script_WeaponSystem_853343617(TEXT("/Script/WeaponSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterTraceBehaviour_h__Script_WeaponSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Behaviours_ShooterTraceBehaviour_h__Script_WeaponSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
