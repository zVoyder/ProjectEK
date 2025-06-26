// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorPool.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeActorPool() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
OBJECTPOOL_API UClass* Z_Construct_UClass_UActorPool();
OBJECTPOOL_API UClass* Z_Construct_UClass_UActorPool_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObjectPool();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UActorPool Function AcquireActor *****************************************
struct Z_Construct_UFunction_UActorPool_AcquireActor_Statics
{
	struct ActorPool_eventAcquireActor_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorPool_AcquireActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorPool_eventAcquireActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorPool_AcquireActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPool_AcquireActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPool_AcquireActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorPool_AcquireActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorPool, nullptr, "AcquireActor", Z_Construct_UFunction_UActorPool_AcquireActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPool_AcquireActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorPool_AcquireActor_Statics::ActorPool_eventAcquireActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPool_AcquireActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorPool_AcquireActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorPool_AcquireActor_Statics::ActorPool_eventAcquireActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorPool_AcquireActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorPool_AcquireActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorPool::execAcquireActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->AcquireActor();
	P_NATIVE_END;
}
// ********** End Class UActorPool Function AcquireActor *******************************************

// ********** Begin Class UActorPool Function DestroyPool ******************************************
struct Z_Construct_UFunction_UActorPool_DestroyPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorPool_DestroyPool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorPool, nullptr, "DestroyPool", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPool_DestroyPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorPool_DestroyPool_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UActorPool_DestroyPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorPool_DestroyPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorPool::execDestroyPool)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyPool();
	P_NATIVE_END;
}
// ********** End Class UActorPool Function DestroyPool ********************************************

// ********** Begin Class UActorPool Function GetActorClass ****************************************
struct Z_Construct_UFunction_UActorPool_GetActorClass_Statics
{
	struct ActorPool_eventGetActorClass_Parms
	{
		TSubclassOf<AActor> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UActorPool_GetActorClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorPool_eventGetActorClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorPool_GetActorClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPool_GetActorClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPool_GetActorClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorPool_GetActorClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorPool, nullptr, "GetActorClass", Z_Construct_UFunction_UActorPool_GetActorClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPool_GetActorClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorPool_GetActorClass_Statics::ActorPool_eventGetActorClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPool_GetActorClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorPool_GetActorClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorPool_GetActorClass_Statics::ActorPool_eventGetActorClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorPool_GetActorClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorPool_GetActorClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorPool::execGetActorClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<AActor>*)Z_Param__Result=P_THIS->GetActorClass();
	P_NATIVE_END;
}
// ********** End Class UActorPool Function GetActorClass ******************************************

// ********** Begin Class UActorPool Function ReleaseActor *****************************************
struct Z_Construct_UFunction_UActorPool_ReleaseActor_Statics
{
	struct ActorPool_eventReleaseActor_Parms
	{
		AActor* InActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorPool_ReleaseActor_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorPool_eventReleaseActor_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorPool_ReleaseActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPool_ReleaseActor_Statics::NewProp_InActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPool_ReleaseActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorPool_ReleaseActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorPool, nullptr, "ReleaseActor", Z_Construct_UFunction_UActorPool_ReleaseActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPool_ReleaseActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorPool_ReleaseActor_Statics::ActorPool_eventReleaseActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPool_ReleaseActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorPool_ReleaseActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorPool_ReleaseActor_Statics::ActorPool_eventReleaseActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorPool_ReleaseActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorPool_ReleaseActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorPool::execReleaseActor)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReleaseActor(Z_Param_InActor);
	P_NATIVE_END;
}
// ********** End Class UActorPool Function ReleaseActor *******************************************

// ********** Begin Class UActorPool ***************************************************************
void UActorPool::StaticRegisterNativesUActorPool()
{
	UClass* Class = UActorPool::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AcquireActor", &UActorPool::execAcquireActor },
		{ "DestroyPool", &UActorPool::execDestroyPool },
		{ "GetActorClass", &UActorPool::execGetActorClass },
		{ "ReleaseActor", &UActorPool::execReleaseActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UActorPool;
UClass* UActorPool::GetPrivateStaticClass()
{
	using TClass = UActorPool;
	if (!Z_Registration_Info_UClass_UActorPool.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ActorPool"),
			Z_Registration_Info_UClass_UActorPool.InnerSingleton,
			StaticRegisterNativesUActorPool,
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
	return Z_Registration_Info_UClass_UActorPool.InnerSingleton;
}
UClass* Z_Construct_UClass_UActorPool_NoRegister()
{
	return UActorPool::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UActorPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ActorPool.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UsedActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PooledActorClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorPool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AvailableActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableActors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UsedActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UsedActors;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PooledActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UActorPool_AcquireActor, "AcquireActor" }, // 2892330278
		{ &Z_Construct_UFunction_UActorPool_DestroyPool, "DestroyPool" }, // 1528693402
		{ &Z_Construct_UFunction_UActorPool_GetActorClass, "GetActorClass" }, // 4199421842
		{ &Z_Construct_UFunction_UActorPool_ReleaseActor, "ReleaseActor" }, // 3229467954
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorPool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActorPool_Statics::NewProp_AvailableActors_Inner = { "AvailableActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActorPool_Statics::NewProp_AvailableActors = { "AvailableActors", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorPool, AvailableActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableActors_MetaData), NewProp_AvailableActors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActorPool_Statics::NewProp_UsedActors_Inner = { "UsedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActorPool_Statics::NewProp_UsedActors = { "UsedActors", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorPool, UsedActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UsedActors_MetaData), NewProp_UsedActors_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UActorPool_Statics::NewProp_PooledActorClass = { "PooledActorClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorPool, PooledActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PooledActorClass_MetaData), NewProp_PooledActorClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActorPool_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorPool, WorldContextObject), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPool_Statics::NewProp_AvailableActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPool_Statics::NewProp_AvailableActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPool_Statics::NewProp_UsedActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPool_Statics::NewProp_UsedActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPool_Statics::NewProp_PooledActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPool_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorPool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UActorPool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectPool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorPool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorPool_Statics::ClassParams = {
	&UActorPool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UActorPool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UActorPool_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorPool_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorPool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActorPool()
{
	if (!Z_Registration_Info_UClass_UActorPool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorPool.OuterSingleton, Z_Construct_UClass_UActorPool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActorPool.OuterSingleton;
}
UActorPool::UActorPool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActorPool);
UActorPool::~UActorPool() {}
// ********** End Class UActorPool *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_ActorPool_h__Script_ObjectPool_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActorPool, UActorPool::StaticClass, TEXT("UActorPool"), &Z_Registration_Info_UClass_UActorPool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorPool), 1795946668U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_ActorPool_h__Script_ObjectPool_2593181536(TEXT("/Script/ObjectPool"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_ActorPool_h__Script_ObjectPool_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_ActorPool_h__Script_ObjectPool_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
