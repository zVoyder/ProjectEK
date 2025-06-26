// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Features/Gameplay/CurrencySystem/Data/SaveData/CurrenciesSaveData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCurrenciesSaveData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
SAVESYSTEM_API UClass* Z_Construct_UClass_USaveData();
UPackage* Z_Construct_UPackage__Script_VUEDKCore();
VUEDKCORE_API UClass* Z_Construct_UClass_UCurrenciesSaveData();
VUEDKCORE_API UClass* Z_Construct_UClass_UCurrenciesSaveData_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCurrenciesSaveData ******************************************************
void UCurrenciesSaveData::StaticRegisterNativesUCurrenciesSaveData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCurrenciesSaveData;
UClass* UCurrenciesSaveData::GetPrivateStaticClass()
{
	using TClass = UCurrenciesSaveData;
	if (!Z_Registration_Info_UClass_UCurrenciesSaveData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CurrenciesSaveData"),
			Z_Registration_Info_UClass_UCurrenciesSaveData.InnerSingleton,
			StaticRegisterNativesUCurrenciesSaveData,
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
	return Z_Registration_Info_UClass_UCurrenciesSaveData.InnerSingleton;
}
UClass* Z_Construct_UClass_UCurrenciesSaveData_NoRegister()
{
	return UCurrenciesSaveData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCurrenciesSaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Features/Gameplay/CurrencySystem/Data/SaveData/CurrenciesSaveData.h" },
		{ "ModuleRelativePath", "Public/Features/Gameplay/CurrencySystem/Data/SaveData/CurrenciesSaveData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrenciesSaveMap_MetaData[] = {
		{ "Category", "CurrenciesSaveData" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Features/Gameplay/CurrencySystem/Data/SaveData/CurrenciesSaveData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrenciesSaveMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrenciesSaveMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CurrenciesSaveMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurrenciesSaveData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCurrenciesSaveData_Statics::NewProp_CurrenciesSaveMap_ValueProp = { "CurrenciesSaveMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCurrenciesSaveData_Statics::NewProp_CurrenciesSaveMap_Key_KeyProp = { "CurrenciesSaveMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCurrenciesSaveData_Statics::NewProp_CurrenciesSaveMap = { "CurrenciesSaveMap", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurrenciesSaveData, CurrenciesSaveMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrenciesSaveMap_MetaData), NewProp_CurrenciesSaveMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurrenciesSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrenciesSaveData_Statics::NewProp_CurrenciesSaveMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrenciesSaveData_Statics::NewProp_CurrenciesSaveMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrenciesSaveData_Statics::NewProp_CurrenciesSaveMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCurrenciesSaveData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCurrenciesSaveData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveData,
	(UObject* (*)())Z_Construct_UPackage__Script_VUEDKCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCurrenciesSaveData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurrenciesSaveData_Statics::ClassParams = {
	&UCurrenciesSaveData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCurrenciesSaveData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCurrenciesSaveData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCurrenciesSaveData_Statics::Class_MetaDataParams), Z_Construct_UClass_UCurrenciesSaveData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCurrenciesSaveData()
{
	if (!Z_Registration_Info_UClass_UCurrenciesSaveData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurrenciesSaveData.OuterSingleton, Z_Construct_UClass_UCurrenciesSaveData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCurrenciesSaveData.OuterSingleton;
}
UCurrenciesSaveData::UCurrenciesSaveData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCurrenciesSaveData);
UCurrenciesSaveData::~UCurrenciesSaveData() {}
// ********** End Class UCurrenciesSaveData ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_VUEDKCore_Source_VUEDKCore_Public_Features_Gameplay_CurrencySystem_Data_SaveData_CurrenciesSaveData_h__Script_VUEDKCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCurrenciesSaveData, UCurrenciesSaveData::StaticClass, TEXT("UCurrenciesSaveData"), &Z_Registration_Info_UClass_UCurrenciesSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurrenciesSaveData), 3535062367U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_VUEDKCore_Source_VUEDKCore_Public_Features_Gameplay_CurrencySystem_Data_SaveData_CurrenciesSaveData_h__Script_VUEDKCore_3416101105(TEXT("/Script/VUEDKCore"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_VUEDKCore_Source_VUEDKCore_Public_Features_Gameplay_CurrencySystem_Data_SaveData_CurrenciesSaveData_h__Script_VUEDKCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_VUEDKCore_Source_VUEDKCore_Public_Features_Gameplay_CurrencySystem_Data_SaveData_CurrenciesSaveData_h__Script_VUEDKCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
