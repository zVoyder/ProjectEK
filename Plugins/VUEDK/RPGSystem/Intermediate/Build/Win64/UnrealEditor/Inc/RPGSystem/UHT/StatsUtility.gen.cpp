// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsSystem/Utility/StatsUtility.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeStatsUtility() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
RPGSYSTEM_API UClass* Z_Construct_UClass_UStatsBridgeBase_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_UStatsUtility();
RPGSYSTEM_API UClass* Z_Construct_UClass_UStatsUtility_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UStatsUtility Function GetPlayerControllerStats **************************
struct Z_Construct_UFunction_UStatsUtility_GetPlayerControllerStats_Statics
{
	struct StatsUtility_eventGetPlayerControllerStats_Parms
	{
		int32 PlayerIndex;
		UStatsBridgeBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|RPGSystem|Stats" },
		{ "ModuleRelativePath", "Public/StatsSystem/Utility/StatsUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStatsUtility_GetPlayerControllerStats_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsUtility_eventGetPlayerControllerStats_Parms, PlayerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerIndex_MetaData), NewProp_PlayerIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatsUtility_GetPlayerControllerStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsUtility_eventGetPlayerControllerStats_Parms, ReturnValue), Z_Construct_UClass_UStatsBridgeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsUtility_GetPlayerControllerStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsUtility_GetPlayerControllerStats_Statics::NewProp_PlayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsUtility_GetPlayerControllerStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsUtility_GetPlayerControllerStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsUtility_GetPlayerControllerStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatsUtility, nullptr, "GetPlayerControllerStats", Z_Construct_UFunction_UStatsUtility_GetPlayerControllerStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsUtility_GetPlayerControllerStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsUtility_GetPlayerControllerStats_Statics::StatsUtility_eventGetPlayerControllerStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsUtility_GetPlayerControllerStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsUtility_GetPlayerControllerStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStatsUtility_GetPlayerControllerStats_Statics::StatsUtility_eventGetPlayerControllerStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsUtility_GetPlayerControllerStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsUtility_GetPlayerControllerStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsUtility::execGetPlayerControllerStats)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStatsBridgeBase**)Z_Param__Result=UStatsUtility::GetPlayerControllerStats(Z_Param_PlayerIndex);
	P_NATIVE_END;
}
// ********** End Class UStatsUtility Function GetPlayerControllerStats ****************************

// ********** Begin Class UStatsUtility Function GetPlayerPawnStats ********************************
struct Z_Construct_UFunction_UStatsUtility_GetPlayerPawnStats_Statics
{
	struct StatsUtility_eventGetPlayerPawnStats_Parms
	{
		int32 PlayerIndex;
		UStatsBridgeBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|RPGSystem|Stats" },
		{ "ModuleRelativePath", "Public/StatsSystem/Utility/StatsUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStatsUtility_GetPlayerPawnStats_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsUtility_eventGetPlayerPawnStats_Parms, PlayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatsUtility_GetPlayerPawnStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsUtility_eventGetPlayerPawnStats_Parms, ReturnValue), Z_Construct_UClass_UStatsBridgeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsUtility_GetPlayerPawnStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsUtility_GetPlayerPawnStats_Statics::NewProp_PlayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsUtility_GetPlayerPawnStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsUtility_GetPlayerPawnStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsUtility_GetPlayerPawnStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatsUtility, nullptr, "GetPlayerPawnStats", Z_Construct_UFunction_UStatsUtility_GetPlayerPawnStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsUtility_GetPlayerPawnStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsUtility_GetPlayerPawnStats_Statics::StatsUtility_eventGetPlayerPawnStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsUtility_GetPlayerPawnStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsUtility_GetPlayerPawnStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStatsUtility_GetPlayerPawnStats_Statics::StatsUtility_eventGetPlayerPawnStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsUtility_GetPlayerPawnStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsUtility_GetPlayerPawnStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsUtility::execGetPlayerPawnStats)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStatsBridgeBase**)Z_Param__Result=UStatsUtility::GetPlayerPawnStats(Z_Param_PlayerIndex);
	P_NATIVE_END;
}
// ********** End Class UStatsUtility Function GetPlayerPawnStats **********************************

// ********** Begin Class UStatsUtility ************************************************************
void UStatsUtility::StaticRegisterNativesUStatsUtility()
{
	UClass* Class = UStatsUtility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPlayerControllerStats", &UStatsUtility::execGetPlayerControllerStats },
		{ "GetPlayerPawnStats", &UStatsUtility::execGetPlayerPawnStats },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UStatsUtility;
UClass* UStatsUtility::GetPrivateStaticClass()
{
	using TClass = UStatsUtility;
	if (!Z_Registration_Info_UClass_UStatsUtility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("StatsUtility"),
			Z_Registration_Info_UClass_UStatsUtility.InnerSingleton,
			StaticRegisterNativesUStatsUtility,
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
	return Z_Registration_Info_UClass_UStatsUtility.InnerSingleton;
}
UClass* Z_Construct_UClass_UStatsUtility_NoRegister()
{
	return UStatsUtility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UStatsUtility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "StatsSystem/Utility/StatsUtility.h" },
		{ "ModuleRelativePath", "Public/StatsSystem/Utility/StatsUtility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStatsUtility_GetPlayerControllerStats, "GetPlayerControllerStats" }, // 2132640624
		{ &Z_Construct_UFunction_UStatsUtility_GetPlayerPawnStats, "GetPlayerPawnStats" }, // 2267022075
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatsUtility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStatsUtility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsUtility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatsUtility_Statics::ClassParams = {
	&UStatsUtility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsUtility_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatsUtility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStatsUtility()
{
	if (!Z_Registration_Info_UClass_UStatsUtility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatsUtility.OuterSingleton, Z_Construct_UClass_UStatsUtility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStatsUtility.OuterSingleton;
}
UStatsUtility::UStatsUtility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStatsUtility);
UStatsUtility::~UStatsUtility() {}
// ********** End Class UStatsUtility **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Utility_StatsUtility_h__Script_RPGSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatsUtility, UStatsUtility::StaticClass, TEXT("UStatsUtility"), &Z_Registration_Info_UClass_UStatsUtility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatsUtility), 1486859272U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Utility_StatsUtility_h__Script_RPGSystem_4105253280(TEXT("/Script/RPGSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Utility_StatsUtility_h__Script_RPGSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Utility_StatsUtility_h__Script_RPGSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
