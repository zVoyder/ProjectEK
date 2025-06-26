// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Montages/Notifies/Base/WeaponNotifyStateBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWeaponNotifyStateBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UWeaponAnimMetaData_NoRegister();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UWeaponNotifyStateBase();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UWeaponNotifyStateBase_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWeaponNotifyStateBase ***************************************************
void UWeaponNotifyStateBase::StaticRegisterNativesUWeaponNotifyStateBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWeaponNotifyStateBase;
UClass* UWeaponNotifyStateBase::GetPrivateStaticClass()
{
	using TClass = UWeaponNotifyStateBase;
	if (!Z_Registration_Info_UClass_UWeaponNotifyStateBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WeaponNotifyStateBase"),
			Z_Registration_Info_UClass_UWeaponNotifyStateBase.InnerSingleton,
			StaticRegisterNativesUWeaponNotifyStateBase,
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
	return Z_Registration_Info_UClass_UWeaponNotifyStateBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UWeaponNotifyStateBase_NoRegister()
{
	return UWeaponNotifyStateBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWeaponNotifyStateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Montages/Notifies/Base/WeaponNotifyStateBase.h" },
		{ "ModuleRelativePath", "Public/Montages/Notifies/Base/WeaponNotifyStateBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAnimMetaData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Montages/Notifies/Base/WeaponNotifyStateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponAnimMetaData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponNotifyStateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponNotifyStateBase_Statics::NewProp_WeaponAnimMetaData = { "WeaponAnimMetaData", nullptr, (EPropertyFlags)0x0040000000000010, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponNotifyStateBase, WeaponAnimMetaData), Z_Construct_UClass_UWeaponAnimMetaData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponAnimMetaData_MetaData), NewProp_WeaponAnimMetaData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponNotifyStateBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponNotifyStateBase_Statics::NewProp_WeaponAnimMetaData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponNotifyStateBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWeaponNotifyStateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponNotifyStateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponNotifyStateBase_Statics::ClassParams = {
	&UWeaponNotifyStateBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWeaponNotifyStateBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponNotifyStateBase_Statics::PropPointers),
	0,
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponNotifyStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponNotifyStateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeaponNotifyStateBase()
{
	if (!Z_Registration_Info_UClass_UWeaponNotifyStateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponNotifyStateBase.OuterSingleton, Z_Construct_UClass_UWeaponNotifyStateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeaponNotifyStateBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponNotifyStateBase);
UWeaponNotifyStateBase::~UWeaponNotifyStateBase() {}
// ********** End Class UWeaponNotifyStateBase *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Notifies_Base_WeaponNotifyStateBase_h__Script_WeaponSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponNotifyStateBase, UWeaponNotifyStateBase::StaticClass, TEXT("UWeaponNotifyStateBase"), &Z_Registration_Info_UClass_UWeaponNotifyStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponNotifyStateBase), 853596766U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Notifies_Base_WeaponNotifyStateBase_h__Script_WeaponSystem_1537152132(TEXT("/Script/WeaponSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Notifies_Base_WeaponNotifyStateBase_h__Script_WeaponSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Notifies_Base_WeaponNotifyStateBase_h__Script_WeaponSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
