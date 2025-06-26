// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/DismembererBloodsData.h"
#include "Data/BloodDecalSpawnParams.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDismembererBloodsData() {}

// ********** Begin Cross Module References ********************************************************
DISMEMBERERSYSTEM_API UClass* Z_Construct_UClass_UDismembererBloodsData();
DISMEMBERERSYSTEM_API UClass* Z_Construct_UClass_UDismembererBloodsData_NoRegister();
DISMEMBERERSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FBloodDecalSpawnParams();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_DismembererSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDismembererBloodsData ***************************************************
void UDismembererBloodsData::StaticRegisterNativesUDismembererBloodsData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDismembererBloodsData;
UClass* UDismembererBloodsData::GetPrivateStaticClass()
{
	using TClass = UDismembererBloodsData;
	if (!Z_Registration_Info_UClass_UDismembererBloodsData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DismembererBloodsData"),
			Z_Registration_Info_UClass_UDismembererBloodsData.InnerSingleton,
			StaticRegisterNativesUDismembererBloodsData,
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
	return Z_Registration_Info_UClass_UDismembererBloodsData.InnerSingleton;
}
UClass* Z_Construct_UClass_UDismembererBloodsData_NoRegister()
{
	return UDismembererBloodsData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDismembererBloodsData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Data/DismembererBloodsData.h" },
		{ "ModuleRelativePath", "Public/Data/DismembererBloodsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitEffects_MetaData[] = {
		{ "Category", "Dismember|VFXs" },
		{ "ModuleRelativePath", "Public/Data/DismembererBloodsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloodSpillEffects_MetaData[] = {
		{ "Category", "Dismember|VFXs" },
		{ "ModuleRelativePath", "Public/Data/DismembererBloodsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraCallbackName_MetaData[] = {
		{ "Category", "Dismember|VFXs" },
		{ "ModuleRelativePath", "Public/Data/DismembererBloodsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloodStainsDecals_MetaData[] = {
		{ "Category", "Dismember|Decals" },
		{ "ModuleRelativePath", "Public/Data/DismembererBloodsData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloodDecalSpawnParams_MetaData[] = {
		{ "Category", "Dismember|Decals" },
		{ "ModuleRelativePath", "Public/Data/DismembererBloodsData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HitEffects;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BloodSpillEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BloodSpillEffects;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NiagaraCallbackName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BloodStainsDecals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BloodStainsDecals;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BloodDecalSpawnParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDismembererBloodsData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDismembererBloodsData_Statics::NewProp_HitEffects_Inner = { "HitEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDismembererBloodsData_Statics::NewProp_HitEffects = { "HitEffects", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismembererBloodsData, HitEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitEffects_MetaData), NewProp_HitEffects_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDismembererBloodsData_Statics::NewProp_BloodSpillEffects_Inner = { "BloodSpillEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDismembererBloodsData_Statics::NewProp_BloodSpillEffects = { "BloodSpillEffects", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismembererBloodsData, BloodSpillEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloodSpillEffects_MetaData), NewProp_BloodSpillEffects_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDismembererBloodsData_Statics::NewProp_NiagaraCallbackName = { "NiagaraCallbackName", nullptr, (EPropertyFlags)0x0010040000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismembererBloodsData, NiagaraCallbackName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraCallbackName_MetaData), NewProp_NiagaraCallbackName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDismembererBloodsData_Statics::NewProp_BloodStainsDecals_Inner = { "BloodStainsDecals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDismembererBloodsData_Statics::NewProp_BloodStainsDecals = { "BloodStainsDecals", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismembererBloodsData, BloodStainsDecals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloodStainsDecals_MetaData), NewProp_BloodStainsDecals_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDismembererBloodsData_Statics::NewProp_BloodDecalSpawnParams = { "BloodDecalSpawnParams", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismembererBloodsData, BloodDecalSpawnParams), Z_Construct_UScriptStruct_FBloodDecalSpawnParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloodDecalSpawnParams_MetaData), NewProp_BloodDecalSpawnParams_MetaData) }; // 1152522553
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDismembererBloodsData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembererBloodsData_Statics::NewProp_HitEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembererBloodsData_Statics::NewProp_HitEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembererBloodsData_Statics::NewProp_BloodSpillEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembererBloodsData_Statics::NewProp_BloodSpillEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembererBloodsData_Statics::NewProp_NiagaraCallbackName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembererBloodsData_Statics::NewProp_BloodStainsDecals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembererBloodsData_Statics::NewProp_BloodStainsDecals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismembererBloodsData_Statics::NewProp_BloodDecalSpawnParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDismembererBloodsData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDismembererBloodsData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_DismembererSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDismembererBloodsData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDismembererBloodsData_Statics::ClassParams = {
	&UDismembererBloodsData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDismembererBloodsData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDismembererBloodsData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDismembererBloodsData_Statics::Class_MetaDataParams), Z_Construct_UClass_UDismembererBloodsData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDismembererBloodsData()
{
	if (!Z_Registration_Info_UClass_UDismembererBloodsData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDismembererBloodsData.OuterSingleton, Z_Construct_UClass_UDismembererBloodsData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDismembererBloodsData.OuterSingleton;
}
UDismembererBloodsData::UDismembererBloodsData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDismembererBloodsData);
UDismembererBloodsData::~UDismembererBloodsData() {}
// ********** End Class UDismembererBloodsData *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Data_DismembererBloodsData_h__Script_DismembererSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDismembererBloodsData, UDismembererBloodsData::StaticClass, TEXT("UDismembererBloodsData"), &Z_Registration_Info_UClass_UDismembererBloodsData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDismembererBloodsData), 4184345032U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Data_DismembererBloodsData_h__Script_DismembererSystem_2546134339(TEXT("/Script/DismembererSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Data_DismembererBloodsData_h__Script_DismembererSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Data_DismembererBloodsData_h__Script_DismembererSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
