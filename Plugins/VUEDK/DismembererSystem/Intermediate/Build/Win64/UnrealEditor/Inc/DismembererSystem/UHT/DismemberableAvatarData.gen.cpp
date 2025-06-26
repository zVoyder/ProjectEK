// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/DismemberableAvatarData.h"
#include "Data/DismemberableLimbData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDismemberableAvatarData() {}

// ********** Begin Cross Module References ********************************************************
DISMEMBERERSYSTEM_API UClass* Z_Construct_UClass_UDismemberableAvatarData();
DISMEMBERERSYSTEM_API UClass* Z_Construct_UClass_UDismemberableAvatarData_NoRegister();
DISMEMBERERSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDismemberableLimbData();
ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
UPackage* Z_Construct_UPackage__Script_DismembererSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDismemberableAvatarData *************************************************
void UDismemberableAvatarData::StaticRegisterNativesUDismemberableAvatarData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDismemberableAvatarData;
UClass* UDismemberableAvatarData::GetPrivateStaticClass()
{
	using TClass = UDismemberableAvatarData;
	if (!Z_Registration_Info_UClass_UDismemberableAvatarData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DismemberableAvatarData"),
			Z_Registration_Info_UClass_UDismemberableAvatarData.InnerSingleton,
			StaticRegisterNativesUDismemberableAvatarData,
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
	return Z_Registration_Info_UClass_UDismemberableAvatarData.InnerSingleton;
}
UClass* Z_Construct_UClass_UDismemberableAvatarData_NoRegister()
{
	return UDismemberableAvatarData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDismemberableAvatarData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Data/DismemberableAvatarData.h" },
		{ "ModuleRelativePath", "Public/Data/DismemberableAvatarData.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsAsset_MetaData[] = {
		{ "Category", "Avatar|Editor" },
		{ "ModuleRelativePath", "Public/Data/DismemberableAvatarData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Physics asset used to fill the dismemberable limbs list (Editor only)" },
#endif
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DismemberableLimbs_MetaData[] = {
		{ "Category", "Avatar" },
		{ "ModuleRelativePath", "Public/Data/DismemberableAvatarData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LimbsScaleFactor_MetaData[] = {
		{ "Category", "Avatar" },
		{ "ModuleRelativePath", "Public/Data/DismemberableAvatarData.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicsAsset;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DismemberableLimbs_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_DismemberableLimbs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LimbsScaleFactor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDismemberableAvatarData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDismemberableAvatarData_Statics::NewProp_PhysicsAsset = { "PhysicsAsset", nullptr, (EPropertyFlags)0x0010000800010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismemberableAvatarData, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsAsset_MetaData), NewProp_PhysicsAsset_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDismemberableAvatarData_Statics::NewProp_DismemberableLimbs_ElementProp = { "DismemberableLimbs", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDismemberableLimbData, METADATA_PARAMS(0, nullptr) }; // 28519379
static_assert(TModels_V<CGetTypeHashable, FDismemberableLimbData>, "The structure 'FDismemberableLimbData' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UDismemberableAvatarData_Statics::NewProp_DismemberableLimbs = { "DismemberableLimbs", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismemberableAvatarData, DismemberableLimbs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DismemberableLimbs_MetaData), NewProp_DismemberableLimbs_MetaData) }; // 28519379
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDismemberableAvatarData_Statics::NewProp_LimbsScaleFactor = { "LimbsScaleFactor", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDismemberableAvatarData, LimbsScaleFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LimbsScaleFactor_MetaData), NewProp_LimbsScaleFactor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDismemberableAvatarData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismemberableAvatarData_Statics::NewProp_PhysicsAsset,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismemberableAvatarData_Statics::NewProp_DismemberableLimbs_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismemberableAvatarData_Statics::NewProp_DismemberableLimbs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDismemberableAvatarData_Statics::NewProp_LimbsScaleFactor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDismemberableAvatarData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDismemberableAvatarData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_DismembererSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDismemberableAvatarData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDismemberableAvatarData_Statics::ClassParams = {
	&UDismemberableAvatarData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDismemberableAvatarData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDismemberableAvatarData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDismemberableAvatarData_Statics::Class_MetaDataParams), Z_Construct_UClass_UDismemberableAvatarData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDismemberableAvatarData()
{
	if (!Z_Registration_Info_UClass_UDismemberableAvatarData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDismemberableAvatarData.OuterSingleton, Z_Construct_UClass_UDismemberableAvatarData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDismemberableAvatarData.OuterSingleton;
}
UDismemberableAvatarData::UDismemberableAvatarData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDismemberableAvatarData);
UDismemberableAvatarData::~UDismemberableAvatarData() {}
// ********** End Class UDismemberableAvatarData ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Data_DismemberableAvatarData_h__Script_DismembererSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDismemberableAvatarData, UDismemberableAvatarData::StaticClass, TEXT("UDismemberableAvatarData"), &Z_Registration_Info_UClass_UDismemberableAvatarData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDismemberableAvatarData), 1068763343U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Data_DismemberableAvatarData_h__Script_DismembererSystem_4108900659(TEXT("/Script/DismembererSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Data_DismemberableAvatarData_h__Script_DismembererSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Data_DismemberableAvatarData_h__Script_DismembererSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
