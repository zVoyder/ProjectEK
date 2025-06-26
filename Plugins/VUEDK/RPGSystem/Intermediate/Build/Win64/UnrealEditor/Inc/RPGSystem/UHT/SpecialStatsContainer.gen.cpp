// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsSystem/Containers/SpecialStatsContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSpecialStatsContainer() {}

// ********** Begin Cross Module References ********************************************************
RPGSYSTEM_API UClass* Z_Construct_UClass_USpecialStatData_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_USpecialStatsContainer();
RPGSYSTEM_API UClass* Z_Construct_UClass_USpecialStatsContainer_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_UStatsContainer();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USpecialStatsContainer Function AddSpecialStats **************************
struct Z_Construct_UFunction_USpecialStatsContainer_AddSpecialStats_Statics
{
	struct SpecialStatsContainer_eventAddSpecialStats_Parms
	{
		TSet<USpecialStatData*> SpecialStats;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/Containers/SpecialStatsContainer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpecialStats_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_SpecialStats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpecialStatsContainer_AddSpecialStats_Statics::NewProp_SpecialStats_ElementProp = { "SpecialStats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USpecialStatData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_USpecialStatsContainer_AddSpecialStats_Statics::NewProp_SpecialStats = { "SpecialStats", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpecialStatsContainer_eventAddSpecialStats_Parms, SpecialStats), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpecialStatsContainer_AddSpecialStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpecialStatsContainer_AddSpecialStats_Statics::NewProp_SpecialStats_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpecialStatsContainer_AddSpecialStats_Statics::NewProp_SpecialStats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpecialStatsContainer_AddSpecialStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpecialStatsContainer_AddSpecialStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpecialStatsContainer, nullptr, "AddSpecialStats", Z_Construct_UFunction_USpecialStatsContainer_AddSpecialStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpecialStatsContainer_AddSpecialStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpecialStatsContainer_AddSpecialStats_Statics::SpecialStatsContainer_eventAddSpecialStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpecialStatsContainer_AddSpecialStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpecialStatsContainer_AddSpecialStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USpecialStatsContainer_AddSpecialStats_Statics::SpecialStatsContainer_eventAddSpecialStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpecialStatsContainer_AddSpecialStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpecialStatsContainer_AddSpecialStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpecialStatsContainer::execAddSpecialStats)
{
	P_GET_TSET(USpecialStatData*,Z_Param_SpecialStats);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddSpecialStats(Z_Param_SpecialStats);
	P_NATIVE_END;
}
// ********** End Class USpecialStatsContainer Function AddSpecialStats ****************************

// ********** Begin Class USpecialStatsContainer Function GetSpecialStatsValues ********************
struct Z_Construct_UFunction_USpecialStatsContainer_GetSpecialStatsValues_Statics
{
	struct SpecialStatsContainer_eventGetSpecialStatsValues_Parms
	{
		TMap<USpecialStatData*,float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/Containers/SpecialStatsContainer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpecialStatsContainer_GetSpecialStatsValues_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpecialStatsContainer_GetSpecialStatsValues_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USpecialStatData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USpecialStatsContainer_GetSpecialStatsValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpecialStatsContainer_eventGetSpecialStatsValues_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpecialStatsContainer_GetSpecialStatsValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpecialStatsContainer_GetSpecialStatsValues_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpecialStatsContainer_GetSpecialStatsValues_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpecialStatsContainer_GetSpecialStatsValues_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpecialStatsContainer_GetSpecialStatsValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpecialStatsContainer_GetSpecialStatsValues_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpecialStatsContainer, nullptr, "GetSpecialStatsValues", Z_Construct_UFunction_USpecialStatsContainer_GetSpecialStatsValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpecialStatsContainer_GetSpecialStatsValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpecialStatsContainer_GetSpecialStatsValues_Statics::SpecialStatsContainer_eventGetSpecialStatsValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpecialStatsContainer_GetSpecialStatsValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpecialStatsContainer_GetSpecialStatsValues_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USpecialStatsContainer_GetSpecialStatsValues_Statics::SpecialStatsContainer_eventGetSpecialStatsValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpecialStatsContainer_GetSpecialStatsValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpecialStatsContainer_GetSpecialStatsValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpecialStatsContainer::execGetSpecialStatsValues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<USpecialStatData*,float>*)Z_Param__Result=P_THIS->GetSpecialStatsValues();
	P_NATIVE_END;
}
// ********** End Class USpecialStatsContainer Function GetSpecialStatsValues **********************

// ********** Begin Class USpecialStatsContainer ***************************************************
void USpecialStatsContainer::StaticRegisterNativesUSpecialStatsContainer()
{
	UClass* Class = USpecialStatsContainer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddSpecialStats", &USpecialStatsContainer::execAddSpecialStats },
		{ "GetSpecialStatsValues", &USpecialStatsContainer::execGetSpecialStatsValues },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USpecialStatsContainer;
UClass* USpecialStatsContainer::GetPrivateStaticClass()
{
	using TClass = USpecialStatsContainer;
	if (!Z_Registration_Info_UClass_USpecialStatsContainer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SpecialStatsContainer"),
			Z_Registration_Info_UClass_USpecialStatsContainer.InnerSingleton,
			StaticRegisterNativesUSpecialStatsContainer,
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
	return Z_Registration_Info_UClass_USpecialStatsContainer.InnerSingleton;
}
UClass* Z_Construct_UClass_USpecialStatsContainer_NoRegister()
{
	return USpecialStatsContainer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USpecialStatsContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "StatsSystem/Containers/SpecialStatsContainer.h" },
		{ "ModuleRelativePath", "Public/StatsSystem/Containers/SpecialStatsContainer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USpecialStatsContainer_AddSpecialStats, "AddSpecialStats" }, // 1858834897
		{ &Z_Construct_UFunction_USpecialStatsContainer_GetSpecialStatsValues, "GetSpecialStatsValues" }, // 1093096652
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpecialStatsContainer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USpecialStatsContainer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStatsContainer,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpecialStatsContainer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpecialStatsContainer_Statics::ClassParams = {
	&USpecialStatsContainer::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpecialStatsContainer_Statics::Class_MetaDataParams), Z_Construct_UClass_USpecialStatsContainer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpecialStatsContainer()
{
	if (!Z_Registration_Info_UClass_USpecialStatsContainer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpecialStatsContainer.OuterSingleton, Z_Construct_UClass_USpecialStatsContainer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpecialStatsContainer.OuterSingleton;
}
USpecialStatsContainer::USpecialStatsContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpecialStatsContainer);
USpecialStatsContainer::~USpecialStatsContainer() {}
// ********** End Class USpecialStatsContainer *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_SpecialStatsContainer_h__Script_RPGSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpecialStatsContainer, USpecialStatsContainer::StaticClass, TEXT("USpecialStatsContainer"), &Z_Registration_Info_UClass_USpecialStatsContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpecialStatsContainer), 3182242096U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_SpecialStatsContainer_h__Script_RPGSystem_3563041038(TEXT("/Script/RPGSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_SpecialStatsContainer_h__Script_RPGSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_SpecialStatsContainer_h__Script_RPGSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
