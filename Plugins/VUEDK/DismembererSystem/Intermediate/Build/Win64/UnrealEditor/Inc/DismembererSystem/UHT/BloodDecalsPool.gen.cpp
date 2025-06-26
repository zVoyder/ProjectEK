// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BloodDecalsPool.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBloodDecalsPool() {}

// ********** Begin Cross Module References ********************************************************
DISMEMBERERSYSTEM_API UClass* Z_Construct_UClass_ABloodDecal_NoRegister();
DISMEMBERERSYSTEM_API UClass* Z_Construct_UClass_UBloodDecalsPool();
DISMEMBERERSYSTEM_API UClass* Z_Construct_UClass_UBloodDecalsPool_NoRegister();
DISMEMBERERSYSTEM_API UClass* Z_Construct_UClass_UDismembererSystemSettings_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
UPackage* Z_Construct_UPackage__Script_DismembererSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBloodDecalsPool *********************************************************
void UBloodDecalsPool::StaticRegisterNativesUBloodDecalsPool()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBloodDecalsPool;
UClass* UBloodDecalsPool::GetPrivateStaticClass()
{
	using TClass = UBloodDecalsPool;
	if (!Z_Registration_Info_UClass_UBloodDecalsPool.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BloodDecalsPool"),
			Z_Registration_Info_UClass_UBloodDecalsPool.InnerSingleton,
			StaticRegisterNativesUBloodDecalsPool,
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
	return Z_Registration_Info_UClass_UBloodDecalsPool.InnerSingleton;
}
UClass* Z_Construct_UClass_UBloodDecalsPool_NoRegister()
{
	return UBloodDecalsPool::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBloodDecalsPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BloodDecalsPool.h" },
		{ "ModuleRelativePath", "Public/BloodDecalsPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableDecals_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodDecalsPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedDecals_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodDecalsPool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DismembererSystemSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodDecalsPool.h" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AvailableDecals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableDecals;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedDecals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedDecals;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DismembererSystemSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBloodDecalsPool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodDecalsPool_Statics::NewProp_AvailableDecals_Inner = { "AvailableDecals", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABloodDecal_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBloodDecalsPool_Statics::NewProp_AvailableDecals = { "AvailableDecals", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBloodDecalsPool, AvailableDecals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableDecals_MetaData), NewProp_AvailableDecals_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodDecalsPool_Statics::NewProp_SpawnedDecals_Inner = { "SpawnedDecals", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABloodDecal_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBloodDecalsPool_Statics::NewProp_SpawnedDecals = { "SpawnedDecals", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBloodDecalsPool, SpawnedDecals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedDecals_MetaData), NewProp_SpawnedDecals_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodDecalsPool_Statics::NewProp_DismembererSystemSettings = { "DismembererSystemSettings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBloodDecalsPool, DismembererSystemSettings), Z_Construct_UClass_UDismembererSystemSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DismembererSystemSettings_MetaData), NewProp_DismembererSystemSettings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBloodDecalsPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodDecalsPool_Statics::NewProp_AvailableDecals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodDecalsPool_Statics::NewProp_AvailableDecals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodDecalsPool_Statics::NewProp_SpawnedDecals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodDecalsPool_Statics::NewProp_SpawnedDecals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodDecalsPool_Statics::NewProp_DismembererSystemSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBloodDecalsPool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBloodDecalsPool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_DismembererSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBloodDecalsPool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBloodDecalsPool_Statics::ClassParams = {
	&UBloodDecalsPool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBloodDecalsPool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBloodDecalsPool_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBloodDecalsPool_Statics::Class_MetaDataParams), Z_Construct_UClass_UBloodDecalsPool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBloodDecalsPool()
{
	if (!Z_Registration_Info_UClass_UBloodDecalsPool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBloodDecalsPool.OuterSingleton, Z_Construct_UClass_UBloodDecalsPool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBloodDecalsPool.OuterSingleton;
}
UBloodDecalsPool::UBloodDecalsPool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBloodDecalsPool);
UBloodDecalsPool::~UBloodDecalsPool() {}
// ********** End Class UBloodDecalsPool ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_BloodDecalsPool_h__Script_DismembererSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBloodDecalsPool, UBloodDecalsPool::StaticClass, TEXT("UBloodDecalsPool"), &Z_Registration_Info_UClass_UBloodDecalsPool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBloodDecalsPool), 3198978198U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_BloodDecalsPool_h__Script_DismembererSystem_2924979752(TEXT("/Script/DismembererSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_BloodDecalsPool_h__Script_DismembererSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_BloodDecalsPool_h__Script_DismembererSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
