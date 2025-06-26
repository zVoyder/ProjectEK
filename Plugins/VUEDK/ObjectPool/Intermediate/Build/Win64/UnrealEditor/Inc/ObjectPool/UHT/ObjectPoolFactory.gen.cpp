// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/ObjectPoolFactory.h"
#include "Data/ActorPoolData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeObjectPoolFactory() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
OBJECTPOOL_API UClass* Z_Construct_UClass_UActorPool_NoRegister();
OBJECTPOOL_API UClass* Z_Construct_UClass_UObjectPoolFactory();
OBJECTPOOL_API UClass* Z_Construct_UClass_UObjectPoolFactory_NoRegister();
OBJECTPOOL_API UScriptStruct* Z_Construct_UScriptStruct_FActorPoolData();
UPackage* Z_Construct_UPackage__Script_ObjectPool();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UObjectPoolFactory Function CreatePool ***********************************
struct Z_Construct_UFunction_UObjectPoolFactory_CreatePool_Statics
{
	struct ObjectPoolFactory_eventCreatePool_Parms
	{
		UWorld* WorldContextObject;
		FActorPoolData PoolData;
		UActorPool* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Object Pool Factory" },
		{ "ModuleRelativePath", "Public/Factories/ObjectPoolFactory.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoolData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoolData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectPoolFactory_CreatePool_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectPoolFactory_eventCreatePool_Parms, WorldContextObject), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UObjectPoolFactory_CreatePool_Statics::NewProp_PoolData = { "PoolData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectPoolFactory_eventCreatePool_Parms, PoolData), Z_Construct_UScriptStruct_FActorPoolData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoolData_MetaData), NewProp_PoolData_MetaData) }; // 83406171
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectPoolFactory_CreatePool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ObjectPoolFactory_eventCreatePool_Parms, ReturnValue), Z_Construct_UClass_UActorPool_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectPoolFactory_CreatePool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPoolFactory_CreatePool_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPoolFactory_CreatePool_Statics::NewProp_PoolData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectPoolFactory_CreatePool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPoolFactory_CreatePool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectPoolFactory_CreatePool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UObjectPoolFactory, nullptr, "CreatePool", Z_Construct_UFunction_UObjectPoolFactory_CreatePool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPoolFactory_CreatePool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UObjectPoolFactory_CreatePool_Statics::ObjectPoolFactory_eventCreatePool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectPoolFactory_CreatePool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UObjectPoolFactory_CreatePool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UObjectPoolFactory_CreatePool_Statics::ObjectPoolFactory_eventCreatePool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UObjectPoolFactory_CreatePool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectPoolFactory_CreatePool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UObjectPoolFactory::execCreatePool)
{
	P_GET_OBJECT(UWorld,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FActorPoolData,Z_Param_Out_PoolData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorPool**)Z_Param__Result=UObjectPoolFactory::CreatePool(Z_Param_WorldContextObject,Z_Param_Out_PoolData);
	P_NATIVE_END;
}
// ********** End Class UObjectPoolFactory Function CreatePool *************************************

// ********** Begin Class UObjectPoolFactory *******************************************************
void UObjectPoolFactory::StaticRegisterNativesUObjectPoolFactory()
{
	UClass* Class = UObjectPoolFactory::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreatePool", &UObjectPoolFactory::execCreatePool },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UObjectPoolFactory;
UClass* UObjectPoolFactory::GetPrivateStaticClass()
{
	using TClass = UObjectPoolFactory;
	if (!Z_Registration_Info_UClass_UObjectPoolFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ObjectPoolFactory"),
			Z_Registration_Info_UClass_UObjectPoolFactory.InnerSingleton,
			StaticRegisterNativesUObjectPoolFactory,
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
	return Z_Registration_Info_UClass_UObjectPoolFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UObjectPoolFactory_NoRegister()
{
	return UObjectPoolFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UObjectPoolFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/ObjectPoolFactory.h" },
		{ "ModuleRelativePath", "Public/Factories/ObjectPoolFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UObjectPoolFactory_CreatePool, "CreatePool" }, // 1401907189
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectPoolFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UObjectPoolFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectPool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectPoolFactory_Statics::ClassParams = {
	&UObjectPoolFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectPoolFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UObjectPoolFactory()
{
	if (!Z_Registration_Info_UClass_UObjectPoolFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectPoolFactory.OuterSingleton, Z_Construct_UClass_UObjectPoolFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UObjectPoolFactory.OuterSingleton;
}
UObjectPoolFactory::UObjectPoolFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectPoolFactory);
UObjectPoolFactory::~UObjectPoolFactory() {}
// ********** End Class UObjectPoolFactory *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Factories_ObjectPoolFactory_h__Script_ObjectPool_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UObjectPoolFactory, UObjectPoolFactory::StaticClass, TEXT("UObjectPoolFactory"), &Z_Registration_Info_UClass_UObjectPoolFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectPoolFactory), 1291028853U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Factories_ObjectPoolFactory_h__Script_ObjectPool_155608780(TEXT("/Script/ObjectPool"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Factories_ObjectPoolFactory_h__Script_ObjectPool_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_Factories_ObjectPoolFactory_h__Script_ObjectPool_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
