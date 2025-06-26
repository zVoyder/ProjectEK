// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsSystem/BridgeStatOperation.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBridgeStatOperation() {}

// ********** Begin Cross Module References ********************************************************
RPGSYSTEM_API UClass* Z_Construct_UClass_UBridgeStatOperation();
RPGSYSTEM_API UClass* Z_Construct_UClass_UBridgeStatOperation_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_UCoreStatData_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_USpecialStatData_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_UStatOperation();
RPGSYSTEM_API UClass* Z_Construct_UClass_UStatsBridgeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBridgeStatOperation Function GetCoreStatDefaultValue ********************
struct Z_Construct_UFunction_UBridgeStatOperation_GetCoreStatDefaultValue_Statics
{
	struct BridgeStatOperation_eventGetCoreStatDefaultValue_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/BridgeStatOperation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBridgeStatOperation_GetCoreStatDefaultValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BridgeStatOperation_eventGetCoreStatDefaultValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBridgeStatOperation_GetCoreStatDefaultValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBridgeStatOperation_GetCoreStatDefaultValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBridgeStatOperation_GetCoreStatDefaultValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBridgeStatOperation_GetCoreStatDefaultValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBridgeStatOperation, nullptr, "GetCoreStatDefaultValue", Z_Construct_UFunction_UBridgeStatOperation_GetCoreStatDefaultValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBridgeStatOperation_GetCoreStatDefaultValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBridgeStatOperation_GetCoreStatDefaultValue_Statics::BridgeStatOperation_eventGetCoreStatDefaultValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBridgeStatOperation_GetCoreStatDefaultValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBridgeStatOperation_GetCoreStatDefaultValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBridgeStatOperation_GetCoreStatDefaultValue_Statics::BridgeStatOperation_eventGetCoreStatDefaultValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBridgeStatOperation_GetCoreStatDefaultValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBridgeStatOperation_GetCoreStatDefaultValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBridgeStatOperation::execGetCoreStatDefaultValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCoreStatDefaultValue();
	P_NATIVE_END;
}
// ********** End Class UBridgeStatOperation Function GetCoreStatDefaultValue **********************

// ********** Begin Class UBridgeStatOperation Function GetStatsBridge *****************************
struct Z_Construct_UFunction_UBridgeStatOperation_GetStatsBridge_Statics
{
	struct BridgeStatOperation_eventGetStatsBridge_Parms
	{
		UStatsBridgeBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/BridgeStatOperation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBridgeStatOperation_GetStatsBridge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BridgeStatOperation_eventGetStatsBridge_Parms, ReturnValue), Z_Construct_UClass_UStatsBridgeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBridgeStatOperation_GetStatsBridge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBridgeStatOperation_GetStatsBridge_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBridgeStatOperation_GetStatsBridge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBridgeStatOperation_GetStatsBridge_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBridgeStatOperation, nullptr, "GetStatsBridge", Z_Construct_UFunction_UBridgeStatOperation_GetStatsBridge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBridgeStatOperation_GetStatsBridge_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBridgeStatOperation_GetStatsBridge_Statics::BridgeStatOperation_eventGetStatsBridge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBridgeStatOperation_GetStatsBridge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBridgeStatOperation_GetStatsBridge_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBridgeStatOperation_GetStatsBridge_Statics::BridgeStatOperation_eventGetStatsBridge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBridgeStatOperation_GetStatsBridge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBridgeStatOperation_GetStatsBridge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBridgeStatOperation::execGetStatsBridge)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStatsBridgeBase**)Z_Param__Result=P_THIS->GetStatsBridge();
	P_NATIVE_END;
}
// ********** End Class UBridgeStatOperation Function GetStatsBridge *******************************

// ********** Begin Class UBridgeStatOperation Function GetValueOfSpecialStat **********************
struct Z_Construct_UFunction_UBridgeStatOperation_GetValueOfSpecialStat_Statics
{
	struct BridgeStatOperation_eventGetValueOfSpecialStat_Parms
	{
		const USpecialStatData* SpecialStat;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/BridgeStatOperation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecialStat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpecialStat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBridgeStatOperation_GetValueOfSpecialStat_Statics::NewProp_SpecialStat = { "SpecialStat", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BridgeStatOperation_eventGetValueOfSpecialStat_Parms, SpecialStat), Z_Construct_UClass_USpecialStatData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecialStat_MetaData), NewProp_SpecialStat_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBridgeStatOperation_GetValueOfSpecialStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BridgeStatOperation_eventGetValueOfSpecialStat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBridgeStatOperation_GetValueOfSpecialStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBridgeStatOperation_GetValueOfSpecialStat_Statics::NewProp_SpecialStat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBridgeStatOperation_GetValueOfSpecialStat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBridgeStatOperation_GetValueOfSpecialStat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBridgeStatOperation_GetValueOfSpecialStat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UBridgeStatOperation, nullptr, "GetValueOfSpecialStat", Z_Construct_UFunction_UBridgeStatOperation_GetValueOfSpecialStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBridgeStatOperation_GetValueOfSpecialStat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBridgeStatOperation_GetValueOfSpecialStat_Statics::BridgeStatOperation_eventGetValueOfSpecialStat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBridgeStatOperation_GetValueOfSpecialStat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBridgeStatOperation_GetValueOfSpecialStat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UBridgeStatOperation_GetValueOfSpecialStat_Statics::BridgeStatOperation_eventGetValueOfSpecialStat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBridgeStatOperation_GetValueOfSpecialStat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBridgeStatOperation_GetValueOfSpecialStat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBridgeStatOperation::execGetValueOfSpecialStat)
{
	P_GET_OBJECT(USpecialStatData,Z_Param_SpecialStat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetValueOfSpecialStat(Z_Param_SpecialStat);
	P_NATIVE_END;
}
// ********** End Class UBridgeStatOperation Function GetValueOfSpecialStat ************************

// ********** Begin Class UBridgeStatOperation *****************************************************
void UBridgeStatOperation::StaticRegisterNativesUBridgeStatOperation()
{
	UClass* Class = UBridgeStatOperation::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCoreStatDefaultValue", &UBridgeStatOperation::execGetCoreStatDefaultValue },
		{ "GetStatsBridge", &UBridgeStatOperation::execGetStatsBridge },
		{ "GetValueOfSpecialStat", &UBridgeStatOperation::execGetValueOfSpecialStat },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBridgeStatOperation;
UClass* UBridgeStatOperation::GetPrivateStaticClass()
{
	using TClass = UBridgeStatOperation;
	if (!Z_Registration_Info_UClass_UBridgeStatOperation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BridgeStatOperation"),
			Z_Registration_Info_UClass_UBridgeStatOperation.InnerSingleton,
			StaticRegisterNativesUBridgeStatOperation,
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
	return Z_Registration_Info_UClass_UBridgeStatOperation.InnerSingleton;
}
UClass* Z_Construct_UClass_UBridgeStatOperation_NoRegister()
{
	return UBridgeStatOperation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBridgeStatOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "StatsSystem/BridgeStatOperation.h" },
		{ "ModuleRelativePath", "Public/StatsSystem/BridgeStatOperation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoreStatData_MetaData[] = {
		{ "Category", "BridgeStatOperation" },
		{ "ModuleRelativePath", "Public/StatsSystem/BridgeStatOperation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CoreStatData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBridgeStatOperation_GetCoreStatDefaultValue, "GetCoreStatDefaultValue" }, // 3600783663
		{ &Z_Construct_UFunction_UBridgeStatOperation_GetStatsBridge, "GetStatsBridge" }, // 2781239064
		{ &Z_Construct_UFunction_UBridgeStatOperation_GetValueOfSpecialStat, "GetValueOfSpecialStat" }, // 951203225
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBridgeStatOperation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBridgeStatOperation_Statics::NewProp_CoreStatData = { "CoreStatData", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBridgeStatOperation, CoreStatData), Z_Construct_UClass_UCoreStatData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoreStatData_MetaData), NewProp_CoreStatData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBridgeStatOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBridgeStatOperation_Statics::NewProp_CoreStatData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBridgeStatOperation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBridgeStatOperation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStatOperation,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBridgeStatOperation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBridgeStatOperation_Statics::ClassParams = {
	&UBridgeStatOperation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBridgeStatOperation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBridgeStatOperation_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBridgeStatOperation_Statics::Class_MetaDataParams), Z_Construct_UClass_UBridgeStatOperation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBridgeStatOperation()
{
	if (!Z_Registration_Info_UClass_UBridgeStatOperation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBridgeStatOperation.OuterSingleton, Z_Construct_UClass_UBridgeStatOperation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBridgeStatOperation.OuterSingleton;
}
UBridgeStatOperation::UBridgeStatOperation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBridgeStatOperation);
UBridgeStatOperation::~UBridgeStatOperation() {}
// ********** End Class UBridgeStatOperation *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_BridgeStatOperation_h__Script_RPGSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBridgeStatOperation, UBridgeStatOperation::StaticClass, TEXT("UBridgeStatOperation"), &Z_Registration_Info_UClass_UBridgeStatOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBridgeStatOperation), 2923186472U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_BridgeStatOperation_h__Script_RPGSystem_350148721(TEXT("/Script/RPGSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_BridgeStatOperation_h__Script_RPGSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_BridgeStatOperation_h__Script_RPGSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
