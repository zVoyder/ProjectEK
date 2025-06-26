// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Utility/PoolsUtility.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePoolsUtility() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
OBJECTPOOL_API UClass* Z_Construct_UClass_UActorPool_NoRegister();
OBJECTPOOL_API UClass* Z_Construct_UClass_UPoolsUtility();
OBJECTPOOL_API UClass* Z_Construct_UClass_UPoolsUtility_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObjectPool();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPoolsUtility Function GetPool *******************************************
struct Z_Construct_UFunction_UPoolsUtility_GetPool_Statics
{
	struct PoolsUtility_eventGetPool_Parms
	{
		FGameplayTag PoolTag;
		UActorPool* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|Patterns|ObjectPool" },
		{ "ModuleRelativePath", "Public/Utility/PoolsUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoolTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPoolsUtility_GetPool_Statics::NewProp_PoolTag = { "PoolTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoolsUtility_eventGetPool_Parms, PoolTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPoolsUtility_GetPool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoolsUtility_eventGetPool_Parms, ReturnValue), Z_Construct_UClass_UActorPool_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoolsUtility_GetPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoolsUtility_GetPool_Statics::NewProp_PoolTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoolsUtility_GetPool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolsUtility_GetPool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoolsUtility_GetPool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPoolsUtility, nullptr, "GetPool", Z_Construct_UFunction_UPoolsUtility_GetPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolsUtility_GetPool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPoolsUtility_GetPool_Statics::PoolsUtility_eventGetPool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolsUtility_GetPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoolsUtility_GetPool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPoolsUtility_GetPool_Statics::PoolsUtility_eventGetPool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPoolsUtility_GetPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoolsUtility_GetPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPoolsUtility::execGetPool)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_PoolTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorPool**)Z_Param__Result=UPoolsUtility::GetPool(Z_Param_PoolTag);
	P_NATIVE_END;
}
// ********** End Class UPoolsUtility Function GetPool *********************************************

// ********** Begin Class UPoolsUtility Function GetPoolByClass ************************************
struct Z_Construct_UFunction_UPoolsUtility_GetPoolByClass_Statics
{
	struct PoolsUtility_eventGetPoolByClass_Parms
	{
		const UClass* ActorClass;
		UActorPool* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VUEDK|Patterns|ObjectPool" },
		{ "ModuleRelativePath", "Public/Utility/PoolsUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPoolsUtility_GetPoolByClass_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoolsUtility_eventGetPoolByClass_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPoolsUtility_GetPoolByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PoolsUtility_eventGetPoolByClass_Parms, ReturnValue), Z_Construct_UClass_UActorPool_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoolsUtility_GetPoolByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoolsUtility_GetPoolByClass_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoolsUtility_GetPoolByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolsUtility_GetPoolByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoolsUtility_GetPoolByClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPoolsUtility, nullptr, "GetPoolByClass", Z_Construct_UFunction_UPoolsUtility_GetPoolByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolsUtility_GetPoolByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPoolsUtility_GetPoolByClass_Statics::PoolsUtility_eventGetPoolByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolsUtility_GetPoolByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoolsUtility_GetPoolByClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPoolsUtility_GetPoolByClass_Statics::PoolsUtility_eventGetPoolByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPoolsUtility_GetPoolByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoolsUtility_GetPoolByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPoolsUtility::execGetPoolByClass)
{
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorPool**)Z_Param__Result=UPoolsUtility::GetPoolByClass(Z_Param_ActorClass);
	P_NATIVE_END;
}
// ********** End Class UPoolsUtility Function GetPoolByClass **************************************

// ********** Begin Class UPoolsUtility ************************************************************
void UPoolsUtility::StaticRegisterNativesUPoolsUtility()
{
	UClass* Class = UPoolsUtility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPool", &UPoolsUtility::execGetPool },
		{ "GetPoolByClass", &UPoolsUtility::execGetPoolByClass },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPoolsUtility;
UClass* UPoolsUtility::GetPrivateStaticClass()
{
	using TClass = UPoolsUtility;
	if (!Z_Registration_Info_UClass_UPoolsUtility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PoolsUtility"),
			Z_Registration_Info_UClass_UPoolsUtility.InnerSingleton,
			StaticRegisterNativesUPoolsUtility,
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
	return Z_Registration_Info_UClass_UPoolsUtility.InnerSingleton;
}
UClass* Z_Construct_UClass_UPoolsUtility_NoRegister()
{
	return UPoolsUtility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPoolsUtility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Utility/PoolsUtility.h" },
		{ "ModuleRelativePath", "Public/Utility/PoolsUtility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPoolsUtility_GetPool, "GetPool" }, // 889019965
		{ &Z_Construct_UFunction_UPoolsUtility_GetPoolByClass, "GetPoolByClass" }, // 3974432020
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoolsUtility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPoolsUtility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectPool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolsUtility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoolsUtility_Statics::ClassParams = {
	&UPoolsUtility::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolsUtility_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoolsUtility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPoolsUtility()
{
	if (!Z_Registration_Info_UClass_UPoolsUtility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoolsUtility.OuterSingleton, Z_Construct_UClass_UPoolsUtility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPoolsUtility.OuterSingleton;
}
UPoolsUtility::UPoolsUtility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPoolsUtility);
UPoolsUtility::~UPoolsUtility() {}
// ********** End Class UPoolsUtility **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Utility_PoolsUtility_h__Script_ObjectPool_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPoolsUtility, UPoolsUtility::StaticClass, TEXT("UPoolsUtility"), &Z_Registration_Info_UClass_UPoolsUtility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoolsUtility), 2833597874U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Utility_PoolsUtility_h__Script_ObjectPool_2381875897(TEXT("/Script/ObjectPool"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Utility_PoolsUtility_h__Script_ObjectPool_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Utility_PoolsUtility_h__Script_ObjectPool_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
