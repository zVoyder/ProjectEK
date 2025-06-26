// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectPoolSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeObjectPoolSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
OBJECTPOOL_API UClass* Z_Construct_UClass_UObjectPoolSettings_NoRegister();
OBJECTPOOL_API UClass* Z_Construct_UClass_UObjectPoolSubsystem();
OBJECTPOOL_API UClass* Z_Construct_UClass_UObjectPoolSubsystem_NoRegister();
OBJECTPOOL_API UClass* Z_Construct_UClass_UPoolsManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObjectPool();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UObjectPoolSubsystem *****************************************************
void UObjectPoolSubsystem::StaticRegisterNativesUObjectPoolSubsystem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UObjectPoolSubsystem;
UClass* UObjectPoolSubsystem::GetPrivateStaticClass()
{
	using TClass = UObjectPoolSubsystem;
	if (!Z_Registration_Info_UClass_UObjectPoolSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ObjectPoolSubsystem"),
			Z_Registration_Info_UClass_UObjectPoolSubsystem.InnerSingleton,
			StaticRegisterNativesUObjectPoolSubsystem,
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
	return Z_Registration_Info_UClass_UObjectPoolSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UObjectPoolSubsystem_NoRegister()
{
	return UObjectPoolSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UObjectPoolSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ObjectPoolSubsystem.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/ObjectPoolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPoolSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectPoolSubsystem.h" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPoolsManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectPoolSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectPoolSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentPoolsManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectPoolSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectPoolSubsystem_Statics::NewProp_ObjectPoolSettings = { "ObjectPoolSettings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectPoolSubsystem, ObjectPoolSettings), Z_Construct_UClass_UObjectPoolSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectPoolSettings_MetaData), NewProp_ObjectPoolSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectPoolSubsystem_Statics::NewProp_CurrentPoolsManager = { "CurrentPoolsManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectPoolSubsystem, CurrentPoolsManager), Z_Construct_UClass_UPoolsManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPoolsManager_MetaData), NewProp_CurrentPoolsManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectPoolSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPoolSubsystem_Statics::NewProp_ObjectPoolSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPoolSubsystem_Statics::NewProp_CurrentPoolsManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UObjectPoolSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectPool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectPoolSubsystem_Statics::ClassParams = {
	&UObjectPoolSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UObjectPoolSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectPoolSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UObjectPoolSubsystem()
{
	if (!Z_Registration_Info_UClass_UObjectPoolSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectPoolSubsystem.OuterSingleton, Z_Construct_UClass_UObjectPoolSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UObjectPoolSubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectPoolSubsystem);
UObjectPoolSubsystem::~UObjectPoolSubsystem() {}
// ********** End Class UObjectPoolSubsystem *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_ObjectPoolSubsystem_h__Script_ObjectPool_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UObjectPoolSubsystem, UObjectPoolSubsystem::StaticClass, TEXT("UObjectPoolSubsystem"), &Z_Registration_Info_UClass_UObjectPoolSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectPoolSubsystem), 1323379132U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_ObjectPoolSubsystem_h__Script_ObjectPool_3235739542(TEXT("/Script/ObjectPool"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_ObjectPoolSubsystem_h__Script_ObjectPool_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_ObjectPoolSubsystem_h__Script_ObjectPool_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
