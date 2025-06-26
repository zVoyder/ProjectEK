// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/HitBoxBonesData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHitBoxBonesData() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
HITDETECTIONSYSTEM_API UClass* Z_Construct_UClass_UHitBoxBonesData();
HITDETECTIONSYSTEM_API UClass* Z_Construct_UClass_UHitBoxBonesData_NoRegister();
UPackage* Z_Construct_UPackage__Script_HitDetectionSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHitBoxBonesData *********************************************************
void UHitBoxBonesData::StaticRegisterNativesUHitBoxBonesData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHitBoxBonesData;
UClass* UHitBoxBonesData::GetPrivateStaticClass()
{
	using TClass = UHitBoxBonesData;
	if (!Z_Registration_Info_UClass_UHitBoxBonesData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HitBoxBonesData"),
			Z_Registration_Info_UClass_UHitBoxBonesData.InnerSingleton,
			StaticRegisterNativesUHitBoxBonesData,
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
	return Z_Registration_Info_UClass_UHitBoxBonesData.InnerSingleton;
}
UClass* Z_Construct_UClass_UHitBoxBonesData_NoRegister()
{
	return UHitBoxBonesData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHitBoxBonesData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Data/HitBoxBonesData.h" },
		{ "ModuleRelativePath", "Public/Data/HitBoxBonesData.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsAsset_MetaData[] = {
		{ "Category", "HitBox|Editor" },
		{ "ModuleRelativePath", "Public/Data/HitBoxBonesData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Physics asset used to fill the bones damage multipliers map (Editor only)" },
#endif
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BonesDamageMultipliers_MetaData[] = {
		{ "Category", "HitBox" },
		{ "ModuleRelativePath", "Public/Data/HitBoxBonesData.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicsAsset;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BonesDamageMultipliers_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BonesDamageMultipliers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BonesDamageMultipliers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHitBoxBonesData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHitBoxBonesData_Statics::NewProp_PhysicsAsset = { "PhysicsAsset", nullptr, (EPropertyFlags)0x0010000800010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitBoxBonesData, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsAsset_MetaData), NewProp_PhysicsAsset_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHitBoxBonesData_Statics::NewProp_BonesDamageMultipliers_ValueProp = { "BonesDamageMultipliers", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHitBoxBonesData_Statics::NewProp_BonesDamageMultipliers_Key_KeyProp = { "BonesDamageMultipliers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHitBoxBonesData_Statics::NewProp_BonesDamageMultipliers = { "BonesDamageMultipliers", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitBoxBonesData, BonesDamageMultipliers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BonesDamageMultipliers_MetaData), NewProp_BonesDamageMultipliers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHitBoxBonesData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitBoxBonesData_Statics::NewProp_PhysicsAsset,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitBoxBonesData_Statics::NewProp_BonesDamageMultipliers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitBoxBonesData_Statics::NewProp_BonesDamageMultipliers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitBoxBonesData_Statics::NewProp_BonesDamageMultipliers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHitBoxBonesData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHitBoxBonesData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_HitDetectionSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHitBoxBonesData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHitBoxBonesData_Statics::ClassParams = {
	&UHitBoxBonesData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHitBoxBonesData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHitBoxBonesData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHitBoxBonesData_Statics::Class_MetaDataParams), Z_Construct_UClass_UHitBoxBonesData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHitBoxBonesData()
{
	if (!Z_Registration_Info_UClass_UHitBoxBonesData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHitBoxBonesData.OuterSingleton, Z_Construct_UClass_UHitBoxBonesData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHitBoxBonesData.OuterSingleton;
}
UHitBoxBonesData::UHitBoxBonesData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHitBoxBonesData);
UHitBoxBonesData::~UHitBoxBonesData() {}
// ********** End Class UHitBoxBonesData ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_Data_HitBoxBonesData_h__Script_HitDetectionSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHitBoxBonesData, UHitBoxBonesData::StaticClass, TEXT("UHitBoxBonesData"), &Z_Registration_Info_UClass_UHitBoxBonesData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHitBoxBonesData), 3893984926U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_Data_HitBoxBonesData_h__Script_HitDetectionSystem_539385523(TEXT("/Script/HitDetectionSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_Data_HitBoxBonesData_h__Script_HitDetectionSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_Data_HitBoxBonesData_h__Script_HitDetectionSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
