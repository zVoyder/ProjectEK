// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HitDetectionSubsystem.h"
#include "Engine/LocalPlayer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHitDetectionSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSubsystem();
HITDETECTIONSYSTEM_API UClass* Z_Construct_UClass_UHitDetectionSubsystem();
HITDETECTIONSYSTEM_API UClass* Z_Construct_UClass_UHitDetectionSubsystem_NoRegister();
HITDETECTIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_HitDetectionSystem_HitDetectionDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_HitDetectionSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FHitDetectionDelegate *************************************************
struct Z_Construct_UDelegateFunction_HitDetectionSystem_HitDetectionDelegate__DelegateSignature_Statics
{
	struct _Script_HitDetectionSystem_eventHitDetectionDelegate_Parms
	{
		FVector HitLocation;
		FVector HitNormal;
		FName BoneName;
		float DamageMultiplier;
		float TotalDamage;
		float BaseDamage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HitDetectionSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitNormal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_HitDetectionDelegate__DelegateSignature_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventHitDetectionDelegate_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_HitDetectionDelegate__DelegateSignature_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventHitDetectionDelegate_Parms, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_HitDetectionDelegate__DelegateSignature_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventHitDetectionDelegate_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_HitDetectionDelegate__DelegateSignature_Statics::NewProp_DamageMultiplier = { "DamageMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventHitDetectionDelegate_Parms, DamageMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_HitDetectionDelegate__DelegateSignature_Statics::NewProp_TotalDamage = { "TotalDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventHitDetectionDelegate_Parms, TotalDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_HitDetectionSystem_HitDetectionDelegate__DelegateSignature_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_HitDetectionSystem_eventHitDetectionDelegate_Parms, BaseDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HitDetectionSystem_HitDetectionDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_HitDetectionDelegate__DelegateSignature_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_HitDetectionDelegate__DelegateSignature_Statics::NewProp_HitNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_HitDetectionDelegate__DelegateSignature_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_HitDetectionDelegate__DelegateSignature_Statics::NewProp_DamageMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_HitDetectionDelegate__DelegateSignature_Statics::NewProp_TotalDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HitDetectionSystem_HitDetectionDelegate__DelegateSignature_Statics::NewProp_BaseDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HitDetectionSystem_HitDetectionDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_HitDetectionSystem_HitDetectionDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_HitDetectionSystem, nullptr, "HitDetectionDelegate__DelegateSignature", Z_Construct_UDelegateFunction_HitDetectionSystem_HitDetectionDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HitDetectionSystem_HitDetectionDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_HitDetectionSystem_HitDetectionDelegate__DelegateSignature_Statics::_Script_HitDetectionSystem_eventHitDetectionDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HitDetectionSystem_HitDetectionDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_HitDetectionSystem_HitDetectionDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_HitDetectionSystem_HitDetectionDelegate__DelegateSignature_Statics::_Script_HitDetectionSystem_eventHitDetectionDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_HitDetectionSystem_HitDetectionDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HitDetectionSystem_HitDetectionDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FHitDetectionDelegate_DelegateWrapper(const FMulticastScriptDelegate& HitDetectionDelegate, FVector HitLocation, FVector HitNormal, FName BoneName, float DamageMultiplier, float TotalDamage, float BaseDamage)
{
	struct _Script_HitDetectionSystem_eventHitDetectionDelegate_Parms
	{
		FVector HitLocation;
		FVector HitNormal;
		FName BoneName;
		float DamageMultiplier;
		float TotalDamage;
		float BaseDamage;
	};
	_Script_HitDetectionSystem_eventHitDetectionDelegate_Parms Parms;
	Parms.HitLocation=HitLocation;
	Parms.HitNormal=HitNormal;
	Parms.BoneName=BoneName;
	Parms.DamageMultiplier=DamageMultiplier;
	Parms.TotalDamage=TotalDamage;
	Parms.BaseDamage=BaseDamage;
	HitDetectionDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FHitDetectionDelegate ***************************************************

// ********** Begin Class UHitDetectionSubsystem Function CallForHit *******************************
struct Z_Construct_UFunction_UHitDetectionSubsystem_CallForHit_Statics
{
	struct HitDetectionSubsystem_eventCallForHit_Parms
	{
		AController* InstigatedBy;
		FVector HitLocation;
		FVector HitNormal;
		FName BoneName;
		float DamageMultiplier;
		float TotalDamage;
		float BaseDamage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HitDetectionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitNormal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitDetectionSubsystem_CallForHit_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitDetectionSubsystem_eventCallForHit_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHitDetectionSubsystem_CallForHit_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitDetectionSubsystem_eventCallForHit_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitLocation_MetaData), NewProp_HitLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHitDetectionSubsystem_CallForHit_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitDetectionSubsystem_eventCallForHit_Parms, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitNormal_MetaData), NewProp_HitNormal_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHitDetectionSubsystem_CallForHit_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitDetectionSubsystem_eventCallForHit_Parms, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHitDetectionSubsystem_CallForHit_Statics::NewProp_DamageMultiplier = { "DamageMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitDetectionSubsystem_eventCallForHit_Parms, DamageMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHitDetectionSubsystem_CallForHit_Statics::NewProp_TotalDamage = { "TotalDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitDetectionSubsystem_eventCallForHit_Parms, TotalDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHitDetectionSubsystem_CallForHit_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitDetectionSubsystem_eventCallForHit_Parms, BaseDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHitDetectionSubsystem_CallForHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitDetectionSubsystem_CallForHit_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitDetectionSubsystem_CallForHit_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitDetectionSubsystem_CallForHit_Statics::NewProp_HitNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitDetectionSubsystem_CallForHit_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitDetectionSubsystem_CallForHit_Statics::NewProp_DamageMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitDetectionSubsystem_CallForHit_Statics::NewProp_TotalDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitDetectionSubsystem_CallForHit_Statics::NewProp_BaseDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHitDetectionSubsystem_CallForHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitDetectionSubsystem_CallForHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHitDetectionSubsystem, nullptr, "CallForHit", Z_Construct_UFunction_UHitDetectionSubsystem_CallForHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitDetectionSubsystem_CallForHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHitDetectionSubsystem_CallForHit_Statics::HitDetectionSubsystem_eventCallForHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHitDetectionSubsystem_CallForHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHitDetectionSubsystem_CallForHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHitDetectionSubsystem_CallForHit_Statics::HitDetectionSubsystem_eventCallForHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHitDetectionSubsystem_CallForHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHitDetectionSubsystem_CallForHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHitDetectionSubsystem::execCallForHit)
{
	P_GET_OBJECT(AController,Z_Param_InstigatedBy);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_HitLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_HitNormal);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamageMultiplier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TotalDamage);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BaseDamage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallForHit(Z_Param_InstigatedBy,Z_Param_Out_HitLocation,Z_Param_Out_HitNormal,Z_Param_Out_BoneName,Z_Param_DamageMultiplier,Z_Param_TotalDamage,Z_Param_BaseDamage);
	P_NATIVE_END;
}
// ********** End Class UHitDetectionSubsystem Function CallForHit *********************************

// ********** Begin Class UHitDetectionSubsystem ***************************************************
void UHitDetectionSubsystem::StaticRegisterNativesUHitDetectionSubsystem()
{
	UClass* Class = UHitDetectionSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CallForHit", &UHitDetectionSubsystem::execCallForHit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHitDetectionSubsystem;
UClass* UHitDetectionSubsystem::GetPrivateStaticClass()
{
	using TClass = UHitDetectionSubsystem;
	if (!Z_Registration_Info_UClass_UHitDetectionSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HitDetectionSubsystem"),
			Z_Registration_Info_UClass_UHitDetectionSubsystem.InnerSingleton,
			StaticRegisterNativesUHitDetectionSubsystem,
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
	return Z_Registration_Info_UClass_UHitDetectionSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UHitDetectionSubsystem_NoRegister()
{
	return UHitDetectionSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHitDetectionSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HitDetectionSubsystem.h" },
		{ "ModuleRelativePath", "Public/HitDetectionSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerPerformedHit_MetaData[] = {
		{ "ModuleRelativePath", "Public/HitDetectionSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerPerformedHit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHitDetectionSubsystem_CallForHit, "CallForHit" }, // 2335085400
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHitDetectionSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHitDetectionSubsystem_Statics::NewProp_OnPlayerPerformedHit = { "OnPlayerPerformedHit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitDetectionSubsystem, OnPlayerPerformedHit), Z_Construct_UDelegateFunction_HitDetectionSystem_HitDetectionDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerPerformedHit_MetaData), NewProp_OnPlayerPerformedHit_MetaData) }; // 1222537861
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHitDetectionSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitDetectionSubsystem_Statics::NewProp_OnPlayerPerformedHit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHitDetectionSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHitDetectionSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULocalPlayerSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_HitDetectionSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHitDetectionSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHitDetectionSubsystem_Statics::ClassParams = {
	&UHitDetectionSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHitDetectionSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHitDetectionSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHitDetectionSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UHitDetectionSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHitDetectionSubsystem()
{
	if (!Z_Registration_Info_UClass_UHitDetectionSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHitDetectionSubsystem.OuterSingleton, Z_Construct_UClass_UHitDetectionSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHitDetectionSubsystem.OuterSingleton;
}
UHitDetectionSubsystem::UHitDetectionSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHitDetectionSubsystem);
UHitDetectionSubsystem::~UHitDetectionSubsystem() {}
// ********** End Class UHitDetectionSubsystem *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitDetectionSubsystem_h__Script_HitDetectionSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHitDetectionSubsystem, UHitDetectionSubsystem::StaticClass, TEXT("UHitDetectionSubsystem"), &Z_Registration_Info_UClass_UHitDetectionSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHitDetectionSubsystem), 1415924032U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitDetectionSubsystem_h__Script_HitDetectionSystem_233061238(TEXT("/Script/HitDetectionSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitDetectionSubsystem_h__Script_HitDetectionSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitDetectionSubsystem_h__Script_HitDetectionSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
