// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectPoolSettings.h"
#include "Data/PoolsManagersData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeObjectPoolSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
OBJECTPOOL_API UClass* Z_Construct_UClass_UObjectPoolSettings();
OBJECTPOOL_API UClass* Z_Construct_UClass_UObjectPoolSettings_NoRegister();
OBJECTPOOL_API UScriptStruct* Z_Construct_UScriptStruct_FPoolsManagersData();
UPackage* Z_Construct_UPackage__Script_ObjectPool();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UObjectPoolSettings ******************************************************
void UObjectPoolSettings::StaticRegisterNativesUObjectPoolSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UObjectPoolSettings;
UClass* UObjectPoolSettings::GetPrivateStaticClass()
{
	using TClass = UObjectPoolSettings;
	if (!Z_Registration_Info_UClass_UObjectPoolSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ObjectPoolSettings"),
			Z_Registration_Info_UClass_UObjectPoolSettings.InnerSingleton,
			StaticRegisterNativesUObjectPoolSettings,
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
	return Z_Registration_Info_UClass_UObjectPoolSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UObjectPoolSettings_NoRegister()
{
	return UObjectPoolSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UObjectPoolSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Object Pool Settings" },
		{ "IncludePath", "ObjectPoolSettings.h" },
		{ "ModuleRelativePath", "Public/ObjectPoolSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoolsManagers_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ObjectPoolSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoolsManagers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PoolsManagers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectPoolSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UObjectPoolSettings_Statics::NewProp_PoolsManagers_Inner = { "PoolsManagers", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPoolsManagersData, METADATA_PARAMS(0, nullptr) }; // 1310648482
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectPoolSettings_Statics::NewProp_PoolsManagers = { "PoolsManagers", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UObjectPoolSettings, PoolsManagers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoolsManagers_MetaData), NewProp_PoolsManagers_MetaData) }; // 1310648482
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectPoolSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPoolSettings_Statics::NewProp_PoolsManagers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPoolSettings_Statics::NewProp_PoolsManagers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UObjectPoolSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ObjectPool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectPoolSettings_Statics::ClassParams = {
	&UObjectPoolSettings::StaticClass,
	"ObjectPoolSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UObjectPoolSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UObjectPoolSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UObjectPoolSettings()
{
	if (!Z_Registration_Info_UClass_UObjectPoolSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectPoolSettings.OuterSingleton, Z_Construct_UClass_UObjectPoolSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UObjectPoolSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectPoolSettings);
UObjectPoolSettings::~UObjectPoolSettings() {}
// ********** End Class UObjectPoolSettings ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_ObjectPoolSettings_h__Script_ObjectPool_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UObjectPoolSettings, UObjectPoolSettings::StaticClass, TEXT("UObjectPoolSettings"), &Z_Registration_Info_UClass_UObjectPoolSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectPoolSettings), 649794751U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_ObjectPoolSettings_h__Script_ObjectPool_1660407154(TEXT("/Script/ObjectPool"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_ObjectPoolSettings_h__Script_ObjectPool_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_ObjectPoolSettings_h__Script_ObjectPool_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
