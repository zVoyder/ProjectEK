// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PooledActorBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePooledActorBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
OBJECTPOOL_API UClass* Z_Construct_UClass_APooledActorBase();
OBJECTPOOL_API UClass* Z_Construct_UClass_APooledActorBase_NoRegister();
OBJECTPOOL_API UClass* Z_Construct_UClass_UActorPool_NoRegister();
OBJECTPOOL_API UClass* Z_Construct_UClass_UPooledActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObjectPool();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APooledActorBase *********************************************************
void APooledActorBase::StaticRegisterNativesAPooledActorBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APooledActorBase;
UClass* APooledActorBase::GetPrivateStaticClass()
{
	using TClass = APooledActorBase;
	if (!Z_Registration_Info_UClass_APooledActorBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PooledActorBase"),
			Z_Registration_Info_UClass_APooledActorBase.InnerSingleton,
			StaticRegisterNativesAPooledActorBase,
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
	return Z_Registration_Info_UClass_APooledActorBase.InnerSingleton;
}
UClass* Z_Construct_UClass_APooledActorBase_NoRegister()
{
	return APooledActorBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APooledActorBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PooledActorBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PooledActorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorPool_MetaData[] = {
		{ "ModuleRelativePath", "Public/PooledActorBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorPool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APooledActorBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APooledActorBase_Statics::NewProp_ActorPool = { "ActorPool", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APooledActorBase, ActorPool), Z_Construct_UClass_UActorPool_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorPool_MetaData), NewProp_ActorPool_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APooledActorBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APooledActorBase_Statics::NewProp_ActorPool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APooledActorBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APooledActorBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectPool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APooledActorBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APooledActorBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UPooledActor_NoRegister, (int32)VTABLE_OFFSET(APooledActorBase, IPooledActor), false },  // 1035934253
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_APooledActorBase_Statics::ClassParams = {
	&APooledActorBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APooledActorBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APooledActorBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APooledActorBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APooledActorBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APooledActorBase()
{
	if (!Z_Registration_Info_UClass_APooledActorBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APooledActorBase.OuterSingleton, Z_Construct_UClass_APooledActorBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APooledActorBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APooledActorBase);
APooledActorBase::~APooledActorBase() {}
// ********** End Class APooledActorBase ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_PooledActorBase_h__Script_ObjectPool_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APooledActorBase, APooledActorBase::StaticClass, TEXT("APooledActorBase"), &Z_Registration_Info_UClass_APooledActorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APooledActorBase), 649577654U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_PooledActorBase_h__Script_ObjectPool_1814100642(TEXT("/Script/ObjectPool"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_PooledActorBase_h__Script_ObjectPool_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_PooledActorBase_h__Script_ObjectPool_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
