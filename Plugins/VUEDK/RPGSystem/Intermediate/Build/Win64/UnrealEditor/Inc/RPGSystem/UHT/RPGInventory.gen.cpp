// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGInventory/RPGInventory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRPGInventory() {}

// ********** Begin Cross Module References ********************************************************
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisInventory();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGInventory();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGInventory_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URPGInventory ************************************************************
void URPGInventory::StaticRegisterNativesURPGInventory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_URPGInventory;
UClass* URPGInventory::GetPrivateStaticClass()
{
	using TClass = URPGInventory;
	if (!Z_Registration_Info_UClass_URPGInventory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RPGInventory"),
			Z_Registration_Info_UClass_URPGInventory.InnerSingleton,
			StaticRegisterNativesURPGInventory,
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
	return Z_Registration_Info_UClass_URPGInventory.InnerSingleton;
}
UClass* Z_Construct_UClass_URPGInventory_NoRegister()
{
	return URPGInventory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URPGInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "RPGInventory/RPGInventory.h" },
		{ "ModuleRelativePath", "Public/RPGInventory/RPGInventory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGInventory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URPGInventory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTetrisInventory,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGInventory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URPGInventory_Statics::ClassParams = {
	&URPGInventory::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGInventory_Statics::Class_MetaDataParams), Z_Construct_UClass_URPGInventory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URPGInventory()
{
	if (!Z_Registration_Info_UClass_URPGInventory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPGInventory.OuterSingleton, Z_Construct_UClass_URPGInventory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URPGInventory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URPGInventory);
URPGInventory::~URPGInventory() {}
// ********** End Class URPGInventory **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventory_h__Script_RPGSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URPGInventory, URPGInventory::StaticClass, TEXT("URPGInventory"), &Z_Registration_Info_UClass_URPGInventory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPGInventory), 914651666U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventory_h__Script_RPGSystem_1532772109(TEXT("/Script/RPGSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventory_h__Script_RPGSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventory_h__Script_RPGSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
