// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HitBoxSystem/Public/HitZones/HitZoneBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitZoneBox() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
HITBOXSYSTEM_API UClass* Z_Construct_UClass_UHitZone_NoRegister();
HITBOXSYSTEM_API UClass* Z_Construct_UClass_UHitZoneBox();
HITBOXSYSTEM_API UClass* Z_Construct_UClass_UHitZoneBox_NoRegister();
HITBOXSYSTEM_API UClass* Z_Construct_UClass_UHitZoneHandler_NoRegister();
UPackage* Z_Construct_UPackage__Script_HitBoxSystem();
// End Cross Module References

// Begin Class UHitZoneBox
void UHitZoneBox::StaticRegisterNativesUHitZoneBox()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHitZoneBox);
UClass* Z_Construct_UClass_UHitZoneBox_NoRegister()
{
	return UHitZoneBox::StaticClass();
}
struct Z_Construct_UClass_UHitZoneBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "HitZones/HitZoneBox.h" },
		{ "ModuleRelativePath", "Public/HitZones/HitZoneBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitZoneHandler_MetaData[] = {
		{ "Category", "HitZoneBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HitZones/HitZoneBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitZoneHandler;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHitZoneBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHitZoneBox_Statics::NewProp_HitZoneHandler = { "HitZoneHandler", nullptr, (EPropertyFlags)0x001200000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitZoneBox, HitZoneHandler), Z_Construct_UClass_UHitZoneHandler_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitZoneHandler_MetaData), NewProp_HitZoneHandler_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHitZoneBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitZoneBox_Statics::NewProp_HitZoneHandler,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHitZoneBox_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHitZoneBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBoxComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HitBoxSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHitZoneBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UHitZoneBox_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UHitZone_NoRegister, (int32)VTABLE_OFFSET(UHitZoneBox, IHitZone), false },  // 45461433
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHitZoneBox_Statics::ClassParams = {
	&UHitZoneBox::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHitZoneBox_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHitZoneBox_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHitZoneBox_Statics::Class_MetaDataParams), Z_Construct_UClass_UHitZoneBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHitZoneBox()
{
	if (!Z_Registration_Info_UClass_UHitZoneBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHitZoneBox.OuterSingleton, Z_Construct_UClass_UHitZoneBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHitZoneBox.OuterSingleton;
}
template<> HITBOXSYSTEM_API UClass* StaticClass<UHitZoneBox>()
{
	return UHitZoneBox::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHitZoneBox);
UHitZoneBox::~UHitZoneBox() {}
// End Class UHitZoneBox

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneBox_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHitZoneBox, UHitZoneBox::StaticClass, TEXT("UHitZoneBox"), &Z_Registration_Info_UClass_UHitZoneBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHitZoneBox), 1440507680U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneBox_h_2120150142(TEXT("/Script/HitBoxSystem"),
	Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneBox_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
