// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputsModifiers/InputModifierSettingsDeadZone.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInputModifierSettingsDeadZone() {}

// ********** Begin Cross Module References ********************************************************
CUSTOMSETTINGSSYSTEM_API UClass* Z_Construct_UClass_UInputModifierSettingsBase();
CUSTOMSETTINGSSYSTEM_API UClass* Z_Construct_UClass_UInputModifierSettingsDeadZone();
CUSTOMSETTINGSSYSTEM_API UClass* Z_Construct_UClass_UInputModifierSettingsDeadZone_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_CustomSettingsSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInputModifierSettingsDeadZone *******************************************
void UInputModifierSettingsDeadZone::StaticRegisterNativesUInputModifierSettingsDeadZone()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInputModifierSettingsDeadZone;
UClass* UInputModifierSettingsDeadZone::GetPrivateStaticClass()
{
	using TClass = UInputModifierSettingsDeadZone;
	if (!Z_Registration_Info_UClass_UInputModifierSettingsDeadZone.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InputModifierSettingsDeadZone"),
			Z_Registration_Info_UClass_UInputModifierSettingsDeadZone.InnerSingleton,
			StaticRegisterNativesUInputModifierSettingsDeadZone,
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
	return Z_Registration_Info_UClass_UInputModifierSettingsDeadZone.InnerSingleton;
}
UClass* Z_Construct_UClass_UInputModifierSettingsDeadZone_NoRegister()
{
	return UInputModifierSettingsDeadZone::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInputModifierSettingsDeadZone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InputsModifiers/InputModifierSettingsDeadZone.h" },
		{ "ModuleRelativePath", "Public/InputsModifiers/InputModifierSettingsDeadZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeadZoneTag_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/InputsModifiers/InputModifierSettingsDeadZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/InputsModifiers/InputModifierSettingsDeadZone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeadZoneTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultTreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputModifierSettingsDeadZone>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputModifierSettingsDeadZone_Statics::NewProp_DeadZoneTag = { "DeadZoneTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputModifierSettingsDeadZone, DeadZoneTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeadZoneTag_MetaData), NewProp_DeadZoneTag_MetaData) }; // 133831994
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputModifierSettingsDeadZone_Statics::NewProp_DefaultTreshold = { "DefaultTreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputModifierSettingsDeadZone, DefaultTreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultTreshold_MetaData), NewProp_DefaultTreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputModifierSettingsDeadZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierSettingsDeadZone_Statics::NewProp_DeadZoneTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputModifierSettingsDeadZone_Statics::NewProp_DefaultTreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierSettingsDeadZone_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputModifierSettingsDeadZone_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputModifierSettingsBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CustomSettingsSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierSettingsDeadZone_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputModifierSettingsDeadZone_Statics::ClassParams = {
	&UInputModifierSettingsDeadZone::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputModifierSettingsDeadZone_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierSettingsDeadZone_Statics::PropPointers),
	0,
	0x401030A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputModifierSettingsDeadZone_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputModifierSettingsDeadZone_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputModifierSettingsDeadZone()
{
	if (!Z_Registration_Info_UClass_UInputModifierSettingsDeadZone.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputModifierSettingsDeadZone.OuterSingleton, Z_Construct_UClass_UInputModifierSettingsDeadZone_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputModifierSettingsDeadZone.OuterSingleton;
}
UInputModifierSettingsDeadZone::UInputModifierSettingsDeadZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputModifierSettingsDeadZone);
UInputModifierSettingsDeadZone::~UInputModifierSettingsDeadZone() {}
// ********** End Class UInputModifierSettingsDeadZone *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_InputsModifiers_InputModifierSettingsDeadZone_h__Script_CustomSettingsSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInputModifierSettingsDeadZone, UInputModifierSettingsDeadZone::StaticClass, TEXT("UInputModifierSettingsDeadZone"), &Z_Registration_Info_UClass_UInputModifierSettingsDeadZone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputModifierSettingsDeadZone), 321097523U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_InputsModifiers_InputModifierSettingsDeadZone_h__Script_CustomSettingsSystem_3136235822(TEXT("/Script/CustomSettingsSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_InputsModifiers_InputModifierSettingsDeadZone_h__Script_CustomSettingsSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_InputsModifiers_InputModifierSettingsDeadZone_h__Script_CustomSettingsSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
