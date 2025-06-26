// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsSystem/StatOperation.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeStatOperation() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_UStatOperation();
RPGSYSTEM_API UClass* Z_Construct_UClass_UStatOperation_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UStatOperation Function GetResultOperation *******************************
struct StatOperation_eventGetResultOperation_Parms
{
	float ReturnValue;

	/** Constructor, initializes return property only **/
	StatOperation_eventGetResultOperation_Parms()
		: ReturnValue(0)
	{
	}
};
static FName NAME_UStatOperation_GetResultOperation = FName(TEXT("GetResultOperation"));
float UStatOperation::GetResultOperation() const
{
	UFunction* Func = FindFunctionChecked(NAME_UStatOperation_GetResultOperation);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		StatOperation_eventGetResultOperation_Parms Parms;
		const_cast<UStatOperation*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UStatOperation*>(this)->GetResultOperation_Implementation();
	}
}
struct Z_Construct_UFunction_UStatOperation_GetResultOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/StatOperation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatOperation_GetResultOperation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatOperation_eventGetResultOperation_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatOperation_GetResultOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatOperation_GetResultOperation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatOperation_GetResultOperation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatOperation_GetResultOperation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatOperation, nullptr, "GetResultOperation", Z_Construct_UFunction_UStatOperation_GetResultOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatOperation_GetResultOperation_Statics::PropPointers), sizeof(StatOperation_eventGetResultOperation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatOperation_GetResultOperation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatOperation_GetResultOperation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(StatOperation_eventGetResultOperation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatOperation_GetResultOperation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatOperation_GetResultOperation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatOperation::execGetResultOperation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetResultOperation_Implementation();
	P_NATIVE_END;
}
// ********** End Class UStatOperation Function GetResultOperation *********************************

// ********** Begin Class UStatOperation Function OnInit *******************************************
static FName NAME_UStatOperation_OnInit = FName(TEXT("OnInit"));
void UStatOperation::OnInit()
{
	UFunction* Func = FindFunctionChecked(NAME_UStatOperation_OnInit);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnInit_Implementation();
	}
}
struct Z_Construct_UFunction_UStatOperation_OnInit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/StatOperation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatOperation_OnInit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatOperation, nullptr, "OnInit", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatOperation_OnInit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatOperation_OnInit_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UStatOperation_OnInit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatOperation_OnInit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatOperation::execOnInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInit_Implementation();
	P_NATIVE_END;
}
// ********** End Class UStatOperation Function OnInit *********************************************

// ********** Begin Class UStatOperation ***********************************************************
void UStatOperation::StaticRegisterNativesUStatOperation()
{
	UClass* Class = UStatOperation::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetResultOperation", &UStatOperation::execGetResultOperation },
		{ "OnInit", &UStatOperation::execOnInit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UStatOperation;
UClass* UStatOperation::GetPrivateStaticClass()
{
	using TClass = UStatOperation;
	if (!Z_Registration_Info_UClass_UStatOperation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("StatOperation"),
			Z_Registration_Info_UClass_UStatOperation.InnerSingleton,
			StaticRegisterNativesUStatOperation,
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
	return Z_Registration_Info_UClass_UStatOperation.InnerSingleton;
}
UClass* Z_Construct_UClass_UStatOperation_NoRegister()
{
	return UStatOperation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UStatOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StatsSystem/StatOperation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StatsSystem/StatOperation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[] = {
		{ "Category", "StatOperation" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/StatsSystem/StatOperation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifierValue_MetaData[] = {
		{ "Category", "StatOperation" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/StatsSystem/StatOperation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ModifierValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStatOperation_GetResultOperation, "GetResultOperation" }, // 4055421692
		{ &Z_Construct_UFunction_UStatOperation_OnInit, "OnInit" }, // 1196496855
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatOperation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatOperation_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0021080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatOperation, Payload), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Payload_MetaData), NewProp_Payload_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatOperation_Statics::NewProp_ModifierValue = { "ModifierValue", nullptr, (EPropertyFlags)0x0021080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatOperation, ModifierValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifierValue_MetaData), NewProp_ModifierValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatOperation_Statics::NewProp_Payload,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatOperation_Statics::NewProp_ModifierValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatOperation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStatOperation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatOperation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatOperation_Statics::ClassParams = {
	&UStatOperation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStatOperation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStatOperation_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatOperation_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatOperation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStatOperation()
{
	if (!Z_Registration_Info_UClass_UStatOperation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatOperation.OuterSingleton, Z_Construct_UClass_UStatOperation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStatOperation.OuterSingleton;
}
UStatOperation::UStatOperation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStatOperation);
UStatOperation::~UStatOperation() {}
// ********** End Class UStatOperation *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_StatOperation_h__Script_RPGSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatOperation, UStatOperation::StaticClass, TEXT("UStatOperation"), &Z_Registration_Info_UClass_UStatOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatOperation), 975912346U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_StatOperation_h__Script_RPGSystem_2010137738(TEXT("/Script/RPGSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_StatOperation_h__Script_RPGSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_StatOperation_h__Script_RPGSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
