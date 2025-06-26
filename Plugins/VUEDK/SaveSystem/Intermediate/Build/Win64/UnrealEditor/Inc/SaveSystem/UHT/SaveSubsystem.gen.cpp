// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveSubsystem.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSaveSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
SAVESYSTEM_API UClass* Z_Construct_UClass_UAutoSaveManager_NoRegister();
SAVESYSTEM_API UClass* Z_Construct_UClass_USaveManager_NoRegister();
SAVESYSTEM_API UClass* Z_Construct_UClass_USaveSubsystem();
SAVESYSTEM_API UClass* Z_Construct_UClass_USaveSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_SaveSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USaveSubsystem ***********************************************************
void USaveSubsystem::StaticRegisterNativesUSaveSubsystem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USaveSubsystem;
UClass* USaveSubsystem::GetPrivateStaticClass()
{
	using TClass = USaveSubsystem;
	if (!Z_Registration_Info_UClass_USaveSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SaveSubsystem"),
			Z_Registration_Info_UClass_USaveSubsystem.InnerSingleton,
			StaticRegisterNativesUSaveSubsystem,
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
	return Z_Registration_Info_UClass_USaveSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_USaveSubsystem_NoRegister()
{
	return USaveSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USaveSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveSubsystem.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/SaveSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoSaveManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AutoSaveManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveSubsystem_Statics::NewProp_SaveManager = { "SaveManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveSubsystem, SaveManager), Z_Construct_UClass_USaveManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveManager_MetaData), NewProp_SaveManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveSubsystem_Statics::NewProp_AutoSaveManager = { "AutoSaveManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveSubsystem, AutoSaveManager), Z_Construct_UClass_UAutoSaveManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoSaveManager_MetaData), NewProp_AutoSaveManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSubsystem_Statics::NewProp_SaveManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSubsystem_Statics::NewProp_AutoSaveManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USaveSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SaveSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveSubsystem_Statics::ClassParams = {
	&USaveSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USaveSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USaveSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USaveSubsystem()
{
	if (!Z_Registration_Info_UClass_USaveSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveSubsystem.OuterSingleton, Z_Construct_UClass_USaveSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USaveSubsystem.OuterSingleton;
}
USaveSubsystem::USaveSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USaveSubsystem);
USaveSubsystem::~USaveSubsystem() {}
// ********** End Class USaveSubsystem *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveSubsystem_h__Script_SaveSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USaveSubsystem, USaveSubsystem::StaticClass, TEXT("USaveSubsystem"), &Z_Registration_Info_UClass_USaveSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveSubsystem), 4107379345U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveSubsystem_h__Script_SaveSystem_2902746296(TEXT("/Script/SaveSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveSubsystem_h__Script_SaveSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveSubsystem_h__Script_SaveSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
