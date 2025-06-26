// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DismembererSystemSettings.h"
#include "Engine/CollisionProfile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDismembererSystemSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DISMEMBERERSYSTEM_API UClass* Z_Construct_UClass_UDismembererSystemSettings();
DISMEMBERERSYSTEM_API UClass* Z_Construct_UClass_UDismembererSystemSettings_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionProfileName();
UPackage* Z_Construct_UPackage__Script_DismembererSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDismembererSystemSettings ***********************************************
void UDismembererSystemSettings::StaticRegisterNativesUDismembererSystemSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDismembererSystemSettings;
UClass* UDismembererSystemSettings::GetPrivateStaticClass()
{
	using TClass = UDismembererSystemSettings;
	if (!Z_Registration_Info_UClass_UDismembererSystemSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DismembererSystemSettings"),
			Z_Registration_Info_UClass_UDismembererSystemSettings.InnerSingleton,
			StaticRegisterNativesUDismembererSystemSettings,
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
	return Z_Registration_Info_UClass_UDismembererSystemSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UDismembererSystemSettings_NoRegister()
{
	return UDismembererSystemSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDismembererSystemSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Dismemberer System Settings" },
		{ "IncludePath", "DismembererSystemSettings.h" },
		{ "ModuleRelativePath", "Public/DismembererSystemSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DismemberedLimbLifeSpan_MetaData[] = {
		{ "Category", "Settings|Limbs" },
		{ "ModuleRelativePath", "Public/DismembererSystemSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimbCollisionProfile_MetaData[] = {
		{ "Category", "Settings|Limbs" },
		{ "ModuleRelativePath", "Public/DismembererSystemSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalPoolSize_MetaData[] = {
		{ "Category", "Settings|Decals" },
		{ "ModuleRelativePath", "Public/DismembererSystemSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalSpawnRate_MetaData[] = {
		{ "Category", "Settings|Decals" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/DismembererSystemSettings.h" },
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalsDuration_MetaData[] = {
		{ "Category", "Settings|Decals" },
		{ "ModuleRelativePath", "Public/DismembererSystemSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalFadeInTime_MetaData[] = {
		{ "Category", "Settings|Decals" },
		{ "ModuleRelativePath", "Public/DismembererSystemSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalFadeOutTime_MetaData[] = {
		{ "Category", "Settings|Decals" },
		{ "ModuleRelativePath", "Public/DismembererSystemSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalFadeParameterName_MetaData[] = {
		{ "Category", "Settings|Decals" },
		{ "ModuleRelativePath", "Public/DismembererSystemSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DismemberedLimbLifeSpan;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LimbCollisionProfile;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DecalPoolSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DecalSpawnRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DecalsDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DecalFadeInTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DecalFadeOutTime;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DecalFadeParameterName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDismembererSystemSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDismembererSystemSettings_Statics::NewProp_DismemberedLimbLifeSpan = { "DismemberedLimbLifeSpan", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismembererSystemSettings, DismemberedLimbLifeSpan), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DismemberedLimbLifeSpan_MetaData), NewProp_DismemberedLimbLifeSpan_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDismembererSystemSettings_Statics::NewProp_LimbCollisionProfile = { "LimbCollisionProfile", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismembererSystemSettings, LimbCollisionProfile), Z_Construct_UScriptStruct_FCollisionProfileName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimbCollisionProfile_MetaData), NewProp_LimbCollisionProfile_MetaData) }; // 3274416141
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDismembererSystemSettings_Statics::NewProp_DecalPoolSize = { "DecalPoolSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismembererSystemSettings, DecalPoolSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalPoolSize_MetaData), NewProp_DecalPoolSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDismembererSystemSettings_Statics::NewProp_DecalSpawnRate = { "DecalSpawnRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismembererSystemSettings, DecalSpawnRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalSpawnRate_MetaData), NewProp_DecalSpawnRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDismembererSystemSettings_Statics::NewProp_DecalsDuration = { "DecalsDuration", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismembererSystemSettings, DecalsDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalsDuration_MetaData), NewProp_DecalsDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDismembererSystemSettings_Statics::NewProp_DecalFadeInTime = { "DecalFadeInTime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismembererSystemSettings, DecalFadeInTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalFadeInTime_MetaData), NewProp_DecalFadeInTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDismembererSystemSettings_Statics::NewProp_DecalFadeOutTime = { "DecalFadeOutTime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismembererSystemSettings, DecalFadeOutTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalFadeOutTime_MetaData), NewProp_DecalFadeOutTime_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDismembererSystemSettings_Statics::NewProp_DecalFadeParameterName = { "DecalFadeParameterName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismembererSystemSettings, DecalFadeParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalFadeParameterName_MetaData), NewProp_DecalFadeParameterName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDismembererSystemSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembererSystemSettings_Statics::NewProp_DismemberedLimbLifeSpan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembererSystemSettings_Statics::NewProp_LimbCollisionProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembererSystemSettings_Statics::NewProp_DecalPoolSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembererSystemSettings_Statics::NewProp_DecalSpawnRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembererSystemSettings_Statics::NewProp_DecalsDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembererSystemSettings_Statics::NewProp_DecalFadeInTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembererSystemSettings_Statics::NewProp_DecalFadeOutTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembererSystemSettings_Statics::NewProp_DecalFadeParameterName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDismembererSystemSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDismembererSystemSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DismembererSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDismembererSystemSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDismembererSystemSettings_Statics::ClassParams = {
	&UDismembererSystemSettings::StaticClass,
	"DismembererSystemSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDismembererSystemSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDismembererSystemSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDismembererSystemSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UDismembererSystemSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDismembererSystemSettings()
{
	if (!Z_Registration_Info_UClass_UDismembererSystemSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDismembererSystemSettings.OuterSingleton, Z_Construct_UClass_UDismembererSystemSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDismembererSystemSettings.OuterSingleton;
}
UDismembererSystemSettings::UDismembererSystemSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDismembererSystemSettings);
UDismembererSystemSettings::~UDismembererSystemSettings() {}
// ********** End Class UDismembererSystemSettings *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_DismembererSystemSettings_h__Script_DismembererSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDismembererSystemSettings, UDismembererSystemSettings::StaticClass, TEXT("UDismembererSystemSettings"), &Z_Registration_Info_UClass_UDismembererSystemSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDismembererSystemSettings), 500496731U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_DismembererSystemSettings_h__Script_DismembererSystem_1491591186(TEXT("/Script/DismembererSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_DismembererSystemSettings_h__Script_DismembererSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_DismembererSystemSettings_h__Script_DismembererSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
