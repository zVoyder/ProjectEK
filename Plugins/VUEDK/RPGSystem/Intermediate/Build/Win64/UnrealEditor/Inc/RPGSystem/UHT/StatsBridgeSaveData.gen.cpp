// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsSystem/Data/SaveData/StatsBridgeSaveData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeStatsBridgeSaveData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
RPGSYSTEM_API UClass* Z_Construct_UClass_UStatsBridgeSaveData();
RPGSYSTEM_API UClass* Z_Construct_UClass_UStatsBridgeSaveData_NoRegister();
SAVESYSTEM_API UClass* Z_Construct_UClass_USaveData();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UStatsBridgeSaveData Function Init ***************************************
struct Z_Construct_UFunction_UStatsBridgeSaveData_Init_Statics
{
	struct StatsBridgeSaveData_eventInit_Parms
	{
		TMap<FGuid,float> InSavedSpecialStats;
		TMap<FGuid,float> InSavedCoreStats;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/Data/SaveData/StatsBridgeSaveData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSavedSpecialStats_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSavedCoreStats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InSavedSpecialStats_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSavedSpecialStats_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InSavedSpecialStats;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InSavedCoreStats_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSavedCoreStats_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InSavedCoreStats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsBridgeSaveData_Init_Statics::NewProp_InSavedSpecialStats_ValueProp = { "InSavedSpecialStats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStatsBridgeSaveData_Init_Statics::NewProp_InSavedSpecialStats_Key_KeyProp = { "InSavedSpecialStats_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UStatsBridgeSaveData_Init_Statics::NewProp_InSavedSpecialStats = { "InSavedSpecialStats", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsBridgeSaveData_eventInit_Parms, InSavedSpecialStats), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSavedSpecialStats_MetaData), NewProp_InSavedSpecialStats_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsBridgeSaveData_Init_Statics::NewProp_InSavedCoreStats_ValueProp = { "InSavedCoreStats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStatsBridgeSaveData_Init_Statics::NewProp_InSavedCoreStats_Key_KeyProp = { "InSavedCoreStats_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UStatsBridgeSaveData_Init_Statics::NewProp_InSavedCoreStats = { "InSavedCoreStats", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsBridgeSaveData_eventInit_Parms, InSavedCoreStats), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSavedCoreStats_MetaData), NewProp_InSavedCoreStats_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsBridgeSaveData_Init_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsBridgeSaveData_Init_Statics::NewProp_InSavedSpecialStats_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsBridgeSaveData_Init_Statics::NewProp_InSavedSpecialStats_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsBridgeSaveData_Init_Statics::NewProp_InSavedSpecialStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsBridgeSaveData_Init_Statics::NewProp_InSavedCoreStats_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsBridgeSaveData_Init_Statics::NewProp_InSavedCoreStats_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsBridgeSaveData_Init_Statics::NewProp_InSavedCoreStats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeSaveData_Init_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsBridgeSaveData_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatsBridgeSaveData, nullptr, "Init", Z_Construct_UFunction_UStatsBridgeSaveData_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeSaveData_Init_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsBridgeSaveData_Init_Statics::StatsBridgeSaveData_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsBridgeSaveData_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsBridgeSaveData_Init_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStatsBridgeSaveData_Init_Statics::StatsBridgeSaveData_eventInit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsBridgeSaveData_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsBridgeSaveData_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsBridgeSaveData::execInit)
{
	P_GET_TMAP(FGuid,float,Z_Param_InSavedSpecialStats);
	P_GET_TMAP(FGuid,float,Z_Param_InSavedCoreStats);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init(Z_Param_InSavedSpecialStats,Z_Param_InSavedCoreStats);
	P_NATIVE_END;
}
// ********** End Class UStatsBridgeSaveData Function Init *****************************************

// ********** Begin Class UStatsBridgeSaveData *****************************************************
void UStatsBridgeSaveData::StaticRegisterNativesUStatsBridgeSaveData()
{
	UClass* Class = UStatsBridgeSaveData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Init", &UStatsBridgeSaveData::execInit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UStatsBridgeSaveData;
UClass* UStatsBridgeSaveData::GetPrivateStaticClass()
{
	using TClass = UStatsBridgeSaveData;
	if (!Z_Registration_Info_UClass_UStatsBridgeSaveData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("StatsBridgeSaveData"),
			Z_Registration_Info_UClass_UStatsBridgeSaveData.InnerSingleton,
			StaticRegisterNativesUStatsBridgeSaveData,
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
	return Z_Registration_Info_UClass_UStatsBridgeSaveData.InnerSingleton;
}
UClass* Z_Construct_UClass_UStatsBridgeSaveData_NoRegister()
{
	return UStatsBridgeSaveData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UStatsBridgeSaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "StatsSystem/Data/SaveData/StatsBridgeSaveData.h" },
		{ "ModuleRelativePath", "Public/StatsSystem/Data/SaveData/StatsBridgeSaveData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedSpecialStats_MetaData[] = {
		{ "Category", "StatsBridgeSaveData" },
		{ "ModuleRelativePath", "Public/StatsSystem/Data/SaveData/StatsBridgeSaveData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedCoreStats_MetaData[] = {
		{ "Category", "StatsBridgeSaveData" },
		{ "ModuleRelativePath", "Public/StatsSystem/Data/SaveData/StatsBridgeSaveData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SavedSpecialStats_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedSpecialStats_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SavedSpecialStats;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SavedCoreStats_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedCoreStats_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SavedCoreStats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStatsBridgeSaveData_Init, "Init" }, // 2734379594
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatsBridgeSaveData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatsBridgeSaveData_Statics::NewProp_SavedSpecialStats_ValueProp = { "SavedSpecialStats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatsBridgeSaveData_Statics::NewProp_SavedSpecialStats_Key_KeyProp = { "SavedSpecialStats_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UStatsBridgeSaveData_Statics::NewProp_SavedSpecialStats = { "SavedSpecialStats", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsBridgeSaveData, SavedSpecialStats), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedSpecialStats_MetaData), NewProp_SavedSpecialStats_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatsBridgeSaveData_Statics::NewProp_SavedCoreStats_ValueProp = { "SavedCoreStats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatsBridgeSaveData_Statics::NewProp_SavedCoreStats_Key_KeyProp = { "SavedCoreStats_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UStatsBridgeSaveData_Statics::NewProp_SavedCoreStats = { "SavedCoreStats", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsBridgeSaveData, SavedCoreStats), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedCoreStats_MetaData), NewProp_SavedCoreStats_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatsBridgeSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsBridgeSaveData_Statics::NewProp_SavedSpecialStats_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsBridgeSaveData_Statics::NewProp_SavedSpecialStats_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsBridgeSaveData_Statics::NewProp_SavedSpecialStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsBridgeSaveData_Statics::NewProp_SavedCoreStats_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsBridgeSaveData_Statics::NewProp_SavedCoreStats_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsBridgeSaveData_Statics::NewProp_SavedCoreStats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsBridgeSaveData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStatsBridgeSaveData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveData,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsBridgeSaveData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatsBridgeSaveData_Statics::ClassParams = {
	&UStatsBridgeSaveData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStatsBridgeSaveData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStatsBridgeSaveData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsBridgeSaveData_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatsBridgeSaveData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStatsBridgeSaveData()
{
	if (!Z_Registration_Info_UClass_UStatsBridgeSaveData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatsBridgeSaveData.OuterSingleton, Z_Construct_UClass_UStatsBridgeSaveData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStatsBridgeSaveData.OuterSingleton;
}
UStatsBridgeSaveData::UStatsBridgeSaveData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStatsBridgeSaveData);
UStatsBridgeSaveData::~UStatsBridgeSaveData() {}
// ********** End Class UStatsBridgeSaveData *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_SaveData_StatsBridgeSaveData_h__Script_RPGSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatsBridgeSaveData, UStatsBridgeSaveData::StaticClass, TEXT("UStatsBridgeSaveData"), &Z_Registration_Info_UClass_UStatsBridgeSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatsBridgeSaveData), 1809884307U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_SaveData_StatsBridgeSaveData_h__Script_RPGSystem_70620962(TEXT("/Script/RPGSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_SaveData_StatsBridgeSaveData_h__Script_RPGSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_SaveData_StatsBridgeSaveData_h__Script_RPGSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
