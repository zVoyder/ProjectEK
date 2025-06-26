// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PoolsManager.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePoolsManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
OBJECTPOOL_API UClass* Z_Construct_UClass_UActorPool_NoRegister();
OBJECTPOOL_API UClass* Z_Construct_UClass_UPoolsManager();
OBJECTPOOL_API UClass* Z_Construct_UClass_UPoolsManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObjectPool();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPoolsManager ************************************************************
void UPoolsManager::StaticRegisterNativesUPoolsManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPoolsManager;
UClass* UPoolsManager::GetPrivateStaticClass()
{
	using TClass = UPoolsManager;
	if (!Z_Registration_Info_UClass_UPoolsManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PoolsManager"),
			Z_Registration_Info_UClass_UPoolsManager.InnerSingleton,
			StaticRegisterNativesUPoolsManager,
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
	return Z_Registration_Info_UClass_UPoolsManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UPoolsManager_NoRegister()
{
	return UPoolsManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPoolsManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PoolsManager.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/PoolsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorPools_MetaData[] = {
		{ "ModuleRelativePath", "Public/PoolsManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/PoolsManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorPools_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorPools_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ActorPools;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoolsManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPoolsManager_Statics::NewProp_ActorPools_ValueProp = { "ActorPools", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UActorPool_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoolsManager_Statics::NewProp_ActorPools_Key_KeyProp = { "ActorPools_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPoolsManager_Statics::NewProp_ActorPools = { "ActorPools", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoolsManager, ActorPools), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorPools_MetaData), NewProp_ActorPools_MetaData) }; // 133831994
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPoolsManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoolsManager, WorldContextObject), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoolsManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoolsManager_Statics::NewProp_ActorPools_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoolsManager_Statics::NewProp_ActorPools_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoolsManager_Statics::NewProp_ActorPools,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoolsManager_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolsManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPoolsManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectPool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolsManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoolsManager_Statics::ClassParams = {
	&UPoolsManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPoolsManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPoolsManager_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolsManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoolsManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPoolsManager()
{
	if (!Z_Registration_Info_UClass_UPoolsManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoolsManager.OuterSingleton, Z_Construct_UClass_UPoolsManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPoolsManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPoolsManager);
UPoolsManager::~UPoolsManager() {}
// ********** End Class UPoolsManager **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_PoolsManager_h__Script_ObjectPool_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPoolsManager, UPoolsManager::StaticClass, TEXT("UPoolsManager"), &Z_Registration_Info_UClass_UPoolsManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoolsManager), 2180117515U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_PoolsManager_h__Script_ObjectPool_2720820520(TEXT("/Script/ObjectPool"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_PoolsManager_h__Script_ObjectPool_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_PoolsManager_h__Script_ObjectPool_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
