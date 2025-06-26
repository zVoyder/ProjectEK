// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsSystem/Data/SpecialStatData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSpecialStatData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_USpecialStatData();
RPGSYSTEM_API UClass* Z_Construct_UClass_USpecialStatData_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_UStatDataBase();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USpecialStatData *********************************************************
void USpecialStatData::StaticRegisterNativesUSpecialStatData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USpecialStatData;
UClass* USpecialStatData::GetPrivateStaticClass()
{
	using TClass = USpecialStatData;
	if (!Z_Registration_Info_UClass_USpecialStatData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SpecialStatData"),
			Z_Registration_Info_UClass_USpecialStatData.InnerSingleton,
			StaticRegisterNativesUSpecialStatData,
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
	return Z_Registration_Info_UClass_USpecialStatData.InnerSingleton;
}
UClass* Z_Construct_UClass_USpecialStatData_NoRegister()
{
	return USpecialStatData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USpecialStatData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StatsSystem/Data/SpecialStatData.h" },
		{ "ModuleRelativePath", "Public/StatsSystem/Data/SpecialStatData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatColor_MetaData[] = {
		{ "Category", "SpecialStatData" },
		{ "ModuleRelativePath", "Public/StatsSystem/Data/SpecialStatData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatIcon_MetaData[] = {
		{ "Category", "SpecialStatData" },
		{ "ModuleRelativePath", "Public/StatsSystem/Data/SpecialStatData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatColor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatIcon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpecialStatData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpecialStatData_Statics::NewProp_StatColor = { "StatColor", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpecialStatData, StatColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatColor_MetaData), NewProp_StatColor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpecialStatData_Statics::NewProp_StatIcon = { "StatIcon", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpecialStatData, StatIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatIcon_MetaData), NewProp_StatIcon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpecialStatData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpecialStatData_Statics::NewProp_StatColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpecialStatData_Statics::NewProp_StatIcon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpecialStatData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USpecialStatData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStatDataBase,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpecialStatData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpecialStatData_Statics::ClassParams = {
	&USpecialStatData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USpecialStatData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USpecialStatData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpecialStatData_Statics::Class_MetaDataParams), Z_Construct_UClass_USpecialStatData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpecialStatData()
{
	if (!Z_Registration_Info_UClass_USpecialStatData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpecialStatData.OuterSingleton, Z_Construct_UClass_USpecialStatData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpecialStatData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpecialStatData);
USpecialStatData::~USpecialStatData() {}
// ********** End Class USpecialStatData ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_SpecialStatData_h__Script_RPGSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpecialStatData, USpecialStatData::StaticClass, TEXT("USpecialStatData"), &Z_Registration_Info_UClass_USpecialStatData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpecialStatData), 3473438906U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_SpecialStatData_h__Script_RPGSystem_295754751(TEXT("/Script/RPGSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_SpecialStatData_h__Script_RPGSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_SpecialStatData_h__Script_RPGSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
