// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HitZones/HitZoneCapsule.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHitZoneCapsule() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent();
HITDETECTIONSYSTEM_API UClass* Z_Construct_UClass_UHitZone_NoRegister();
HITDETECTIONSYSTEM_API UClass* Z_Construct_UClass_UHitZoneCapsule();
HITDETECTIONSYSTEM_API UClass* Z_Construct_UClass_UHitZoneCapsule_NoRegister();
HITDETECTIONSYSTEM_API UClass* Z_Construct_UClass_UHitZoneHandler_NoRegister();
UPackage* Z_Construct_UPackage__Script_HitDetectionSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHitZoneCapsule **********************************************************
void UHitZoneCapsule::StaticRegisterNativesUHitZoneCapsule()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHitZoneCapsule;
UClass* UHitZoneCapsule::GetPrivateStaticClass()
{
	using TClass = UHitZoneCapsule;
	if (!Z_Registration_Info_UClass_UHitZoneCapsule.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HitZoneCapsule"),
			Z_Registration_Info_UClass_UHitZoneCapsule.InnerSingleton,
			StaticRegisterNativesUHitZoneCapsule,
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
	return Z_Registration_Info_UClass_UHitZoneCapsule.InnerSingleton;
}
UClass* Z_Construct_UClass_UHitZoneCapsule_NoRegister()
{
	return UHitZoneCapsule::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHitZoneCapsule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "HitZones/HitZoneCapsule.h" },
		{ "ModuleRelativePath", "Public/HitZones/HitZoneCapsule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitZoneHandler_MetaData[] = {
		{ "Category", "HitZoneCapsule" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HitZones/HitZoneCapsule.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitZoneHandler;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHitZoneCapsule>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHitZoneCapsule_Statics::NewProp_HitZoneHandler = { "HitZoneHandler", nullptr, (EPropertyFlags)0x001200000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitZoneCapsule, HitZoneHandler), Z_Construct_UClass_UHitZoneHandler_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitZoneHandler_MetaData), NewProp_HitZoneHandler_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHitZoneCapsule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitZoneCapsule_Statics::NewProp_HitZoneHandler,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHitZoneCapsule_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHitZoneCapsule_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCapsuleComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HitDetectionSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHitZoneCapsule_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UHitZoneCapsule_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UHitZone_NoRegister, (int32)VTABLE_OFFSET(UHitZoneCapsule, IHitZone), false },  // 3854545750
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHitZoneCapsule_Statics::ClassParams = {
	&UHitZoneCapsule::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHitZoneCapsule_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHitZoneCapsule_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHitZoneCapsule_Statics::Class_MetaDataParams), Z_Construct_UClass_UHitZoneCapsule_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHitZoneCapsule()
{
	if (!Z_Registration_Info_UClass_UHitZoneCapsule.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHitZoneCapsule.OuterSingleton, Z_Construct_UClass_UHitZoneCapsule_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHitZoneCapsule.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHitZoneCapsule);
UHitZoneCapsule::~UHitZoneCapsule() {}
// ********** End Class UHitZoneCapsule ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneCapsule_h__Script_HitDetectionSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHitZoneCapsule, UHitZoneCapsule::StaticClass, TEXT("UHitZoneCapsule"), &Z_Registration_Info_UClass_UHitZoneCapsule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHitZoneCapsule), 4129638219U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneCapsule_h__Script_HitDetectionSystem_518673380(TEXT("/Script/HitDetectionSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneCapsule_h__Script_HitDetectionSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneCapsule_h__Script_HitDetectionSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
