// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HitBoxSystem/Public/HitZones/HitZoneCapsule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitZoneCapsule() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent();
HITBOXSYSTEM_API UClass* Z_Construct_UClass_UHitZone_NoRegister();
HITBOXSYSTEM_API UClass* Z_Construct_UClass_UHitZoneCapsule();
HITBOXSYSTEM_API UClass* Z_Construct_UClass_UHitZoneCapsule_NoRegister();
HITBOXSYSTEM_API UClass* Z_Construct_UClass_UHitZoneHandler_NoRegister();
UPackage* Z_Construct_UPackage__Script_HitBoxSystem();
// End Cross Module References

// Begin Class UHitZoneCapsule
void UHitZoneCapsule::StaticRegisterNativesUHitZoneCapsule()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHitZoneCapsule);
UClass* Z_Construct_UClass_UHitZoneCapsule_NoRegister()
{
	return UHitZoneCapsule::StaticClass();
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
	(UObject* (*)())Z_Construct_UPackage__Script_HitBoxSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHitZoneCapsule_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UHitZoneCapsule_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UHitZone_NoRegister, (int32)VTABLE_OFFSET(UHitZoneCapsule, IHitZone), false },  // 45461433
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
template<> HITBOXSYSTEM_API UClass* StaticClass<UHitZoneCapsule>()
{
	return UHitZoneCapsule::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHitZoneCapsule);
UHitZoneCapsule::~UHitZoneCapsule() {}
// End Class UHitZoneCapsule

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneCapsule_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHitZoneCapsule, UHitZoneCapsule::StaticClass, TEXT("UHitZoneCapsule"), &Z_Registration_Info_UClass_UHitZoneCapsule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHitZoneCapsule), 874278605U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneCapsule_h_3221776504(TEXT("/Script/HitBoxSystem"),
	Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneCapsule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneCapsule_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
