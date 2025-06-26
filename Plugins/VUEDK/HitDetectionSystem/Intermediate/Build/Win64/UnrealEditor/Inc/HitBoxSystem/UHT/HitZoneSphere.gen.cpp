// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HitBoxSystem/Public/HitZones/HitZoneSphere.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitZoneSphere() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USphereComponent();
HITBOXSYSTEM_API UClass* Z_Construct_UClass_UHitZone_NoRegister();
HITBOXSYSTEM_API UClass* Z_Construct_UClass_UHitZoneHandler_NoRegister();
HITBOXSYSTEM_API UClass* Z_Construct_UClass_UHitZoneSphere();
HITBOXSYSTEM_API UClass* Z_Construct_UClass_UHitZoneSphere_NoRegister();
UPackage* Z_Construct_UPackage__Script_HitBoxSystem();
// End Cross Module References

// Begin Class UHitZoneSphere
void UHitZoneSphere::StaticRegisterNativesUHitZoneSphere()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHitZoneSphere);
UClass* Z_Construct_UClass_UHitZoneSphere_NoRegister()
{
	return UHitZoneSphere::StaticClass();
}
struct Z_Construct_UClass_UHitZoneSphere_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "HitZones/HitZoneSphere.h" },
		{ "ModuleRelativePath", "Public/HitZones/HitZoneSphere.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitZoneHandler_MetaData[] = {
		{ "Category", "HitZoneSphere" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HitZones/HitZoneSphere.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitZoneHandler;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHitZoneSphere>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHitZoneSphere_Statics::NewProp_HitZoneHandler = { "HitZoneHandler", nullptr, (EPropertyFlags)0x001200000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitZoneSphere, HitZoneHandler), Z_Construct_UClass_UHitZoneHandler_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitZoneHandler_MetaData), NewProp_HitZoneHandler_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHitZoneSphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitZoneSphere_Statics::NewProp_HitZoneHandler,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHitZoneSphere_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHitZoneSphere_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USphereComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HitBoxSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHitZoneSphere_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UHitZoneSphere_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UHitZone_NoRegister, (int32)VTABLE_OFFSET(UHitZoneSphere, IHitZone), false },  // 45461433
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHitZoneSphere_Statics::ClassParams = {
	&UHitZoneSphere::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHitZoneSphere_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHitZoneSphere_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHitZoneSphere_Statics::Class_MetaDataParams), Z_Construct_UClass_UHitZoneSphere_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHitZoneSphere()
{
	if (!Z_Registration_Info_UClass_UHitZoneSphere.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHitZoneSphere.OuterSingleton, Z_Construct_UClass_UHitZoneSphere_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHitZoneSphere.OuterSingleton;
}
template<> HITBOXSYSTEM_API UClass* StaticClass<UHitZoneSphere>()
{
	return UHitZoneSphere::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHitZoneSphere);
UHitZoneSphere::~UHitZoneSphere() {}
// End Class UHitZoneSphere

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneSphere_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHitZoneSphere, UHitZoneSphere::StaticClass, TEXT("UHitZoneSphere"), &Z_Registration_Info_UClass_UHitZoneSphere, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHitZoneSphere), 1572204843U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneSphere_h_887932595(TEXT("/Script/HitBoxSystem"),
	Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneSphere_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneSphere_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
