// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/SaveData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSaveData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SAVESYSTEM_API UClass* Z_Construct_UClass_USaveData();
SAVESYSTEM_API UClass* Z_Construct_UClass_USaveData_NoRegister();
UPackage* Z_Construct_UPackage__Script_SaveSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USaveData ****************************************************************
void USaveData::StaticRegisterNativesUSaveData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USaveData;
UClass* USaveData::GetPrivateStaticClass()
{
	using TClass = USaveData;
	if (!Z_Registration_Info_UClass_USaveData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SaveData"),
			Z_Registration_Info_UClass_USaveData.InnerSingleton,
			StaticRegisterNativesUSaveData,
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
	return Z_Registration_Info_UClass_USaveData.InnerSingleton;
}
UClass* Z_Construct_UClass_USaveData_NoRegister()
{
	return USaveData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Data/SaveData.h" },
		{ "ModuleRelativePath", "Public/Data/SaveData.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USaveData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SaveSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveData_Statics::ClassParams = {
	&USaveData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USaveData()
{
	if (!Z_Registration_Info_UClass_USaveData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveData.OuterSingleton, Z_Construct_UClass_USaveData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USaveData.OuterSingleton;
}
USaveData::USaveData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USaveData);
USaveData::~USaveData() {}
// ********** End Class USaveData ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_SaveData_h__Script_SaveSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USaveData, USaveData::StaticClass, TEXT("USaveData"), &Z_Registration_Info_UClass_USaveData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveData), 3453065081U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_SaveData_h__Script_SaveSystem_2285736018(TEXT("/Script/SaveSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_SaveData_h__Script_SaveSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_SaveData_h__Script_SaveSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
