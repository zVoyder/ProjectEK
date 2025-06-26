// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsSystem/Containers/CoreStatsContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCoreStatsContainer() {}

// ********** Begin Cross Module References ********************************************************
RPGSYSTEM_API UClass* Z_Construct_UClass_UCoreStatData_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_UCoreStatsContainer();
RPGSYSTEM_API UClass* Z_Construct_UClass_UCoreStatsContainer_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_UStatsContainer();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCoreStatsContainer Function AddCoreStats ********************************
struct Z_Construct_UFunction_UCoreStatsContainer_AddCoreStats_Statics
{
	struct CoreStatsContainer_eventAddCoreStats_Parms
	{
		TSet<UCoreStatData*> CoreStats;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/Containers/CoreStatsContainer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CoreStats_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_CoreStats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStatsContainer_AddCoreStats_Statics::NewProp_CoreStats_ElementProp = { "CoreStats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCoreStatData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UCoreStatsContainer_AddCoreStats_Statics::NewProp_CoreStats = { "CoreStats", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreStatsContainer_eventAddCoreStats_Parms, CoreStats), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStatsContainer_AddCoreStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStatsContainer_AddCoreStats_Statics::NewProp_CoreStats_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStatsContainer_AddCoreStats_Statics::NewProp_CoreStats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStatsContainer_AddCoreStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStatsContainer_AddCoreStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCoreStatsContainer, nullptr, "AddCoreStats", Z_Construct_UFunction_UCoreStatsContainer_AddCoreStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStatsContainer_AddCoreStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCoreStatsContainer_AddCoreStats_Statics::CoreStatsContainer_eventAddCoreStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStatsContainer_AddCoreStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCoreStatsContainer_AddCoreStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCoreStatsContainer_AddCoreStats_Statics::CoreStatsContainer_eventAddCoreStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCoreStatsContainer_AddCoreStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoreStatsContainer_AddCoreStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCoreStatsContainer::execAddCoreStats)
{
	P_GET_TSET(UCoreStatData*,Z_Param_CoreStats);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCoreStats(Z_Param_CoreStats);
	P_NATIVE_END;
}
// ********** End Class UCoreStatsContainer Function AddCoreStats **********************************

// ********** Begin Class UCoreStatsContainer Function GetCoreStatsValues **************************
struct Z_Construct_UFunction_UCoreStatsContainer_GetCoreStatsValues_Statics
{
	struct CoreStatsContainer_eventGetCoreStatsValues_Parms
	{
		TMap<UCoreStatData*,float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatsSystem/Containers/CoreStatsContainer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoreStatsContainer_GetCoreStatsValues_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStatsContainer_GetCoreStatsValues_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCoreStatData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UCoreStatsContainer_GetCoreStatsValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CoreStatsContainer_eventGetCoreStatsValues_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStatsContainer_GetCoreStatsValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStatsContainer_GetCoreStatsValues_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStatsContainer_GetCoreStatsValues_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStatsContainer_GetCoreStatsValues_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStatsContainer_GetCoreStatsValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStatsContainer_GetCoreStatsValues_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCoreStatsContainer, nullptr, "GetCoreStatsValues", Z_Construct_UFunction_UCoreStatsContainer_GetCoreStatsValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStatsContainer_GetCoreStatsValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCoreStatsContainer_GetCoreStatsValues_Statics::CoreStatsContainer_eventGetCoreStatsValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStatsContainer_GetCoreStatsValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCoreStatsContainer_GetCoreStatsValues_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCoreStatsContainer_GetCoreStatsValues_Statics::CoreStatsContainer_eventGetCoreStatsValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCoreStatsContainer_GetCoreStatsValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoreStatsContainer_GetCoreStatsValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCoreStatsContainer::execGetCoreStatsValues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<UCoreStatData*,float>*)Z_Param__Result=P_THIS->GetCoreStatsValues();
	P_NATIVE_END;
}
// ********** End Class UCoreStatsContainer Function GetCoreStatsValues ****************************

// ********** Begin Class UCoreStatsContainer ******************************************************
void UCoreStatsContainer::StaticRegisterNativesUCoreStatsContainer()
{
	UClass* Class = UCoreStatsContainer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCoreStats", &UCoreStatsContainer::execAddCoreStats },
		{ "GetCoreStatsValues", &UCoreStatsContainer::execGetCoreStatsValues },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCoreStatsContainer;
UClass* UCoreStatsContainer::GetPrivateStaticClass()
{
	using TClass = UCoreStatsContainer;
	if (!Z_Registration_Info_UClass_UCoreStatsContainer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CoreStatsContainer"),
			Z_Registration_Info_UClass_UCoreStatsContainer.InnerSingleton,
			StaticRegisterNativesUCoreStatsContainer,
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
	return Z_Registration_Info_UClass_UCoreStatsContainer.InnerSingleton;
}
UClass* Z_Construct_UClass_UCoreStatsContainer_NoRegister()
{
	return UCoreStatsContainer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCoreStatsContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "StatsSystem/Containers/CoreStatsContainer.h" },
		{ "ModuleRelativePath", "Public/StatsSystem/Containers/CoreStatsContainer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreStatsContainer_AddCoreStats, "AddCoreStats" }, // 4270775775
		{ &Z_Construct_UFunction_UCoreStatsContainer_GetCoreStatsValues, "GetCoreStatsValues" }, // 2313699985
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreStatsContainer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCoreStatsContainer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStatsContainer,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStatsContainer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoreStatsContainer_Statics::ClassParams = {
	&UCoreStatsContainer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStatsContainer_Statics::Class_MetaDataParams), Z_Construct_UClass_UCoreStatsContainer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCoreStatsContainer()
{
	if (!Z_Registration_Info_UClass_UCoreStatsContainer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoreStatsContainer.OuterSingleton, Z_Construct_UClass_UCoreStatsContainer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCoreStatsContainer.OuterSingleton;
}
UCoreStatsContainer::UCoreStatsContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreStatsContainer);
UCoreStatsContainer::~UCoreStatsContainer() {}
// ********** End Class UCoreStatsContainer ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_CoreStatsContainer_h__Script_RPGSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCoreStatsContainer, UCoreStatsContainer::StaticClass, TEXT("UCoreStatsContainer"), &Z_Registration_Info_UClass_UCoreStatsContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoreStatsContainer), 1283510504U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_CoreStatsContainer_h__Script_RPGSystem_853967295(TEXT("/Script/RPGSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_CoreStatsContainer_h__Script_RPGSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_CoreStatsContainer_h__Script_RPGSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
