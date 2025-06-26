// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsSystem/Data/StatDataBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeStatDataBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
RPGSYSTEM_API UClass* Z_Construct_UClass_UStatDataBase();
RPGSYSTEM_API UClass* Z_Construct_UClass_UStatDataBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UStatDataBase ************************************************************
void UStatDataBase::StaticRegisterNativesUStatDataBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UStatDataBase;
UClass* UStatDataBase::GetPrivateStaticClass()
{
	using TClass = UStatDataBase;
	if (!Z_Registration_Info_UClass_UStatDataBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("StatDataBase"),
			Z_Registration_Info_UClass_UStatDataBase.InnerSingleton,
			StaticRegisterNativesUStatDataBase,
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
	return Z_Registration_Info_UClass_UStatDataBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UStatDataBase_NoRegister()
{
	return UStatDataBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UStatDataBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "StatsSystem/Data/StatDataBase.h" },
		{ "ModuleRelativePath", "Public/StatsSystem/Data/StatDataBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatID_MetaData[] = {
		{ "Category", "StatDataBase" },
		{ "ModuleRelativePath", "Public/StatsSystem/Data/StatDataBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatCodeName_MetaData[] = {
		{ "Category", "StatDataBase" },
		{ "MaxLength", "3" },
		{ "ModuleRelativePath", "Public/StatsSystem/Data/StatDataBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatFullName_MetaData[] = {
		{ "Category", "StatDataBase" },
		{ "ModuleRelativePath", "Public/StatsSystem/Data/StatDataBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatDescription_MetaData[] = {
		{ "Category", "StatDataBase" },
		{ "ModuleRelativePath", "Public/StatsSystem/Data/StatDataBase.h" },
		{ "MultiLine", "TRUE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRapresentAsDecimal_MetaData[] = {
		{ "Category", "StatDataBase" },
		{ "ModuleRelativePath", "Public/StatsSystem/Data/StatDataBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatDefaultValue_MetaData[] = {
		{ "Category", "StatDataBase" },
		{ "ModuleRelativePath", "Public/StatsSystem/Data/StatDataBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatValueRange_MetaData[] = {
		{ "Category", "StatDataBase" },
		{ "ModuleRelativePath", "Public/StatsSystem/Data/StatDataBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StatCodeName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_StatFullName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_StatDescription;
	static void NewProp_bRapresentAsDecimal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRapresentAsDecimal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StatDefaultValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatValueRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatDataBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatDataBase_Statics::NewProp_StatID = { "StatID", nullptr, (EPropertyFlags)0x0010040000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatDataBase, StatID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatID_MetaData), NewProp_StatID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UStatDataBase_Statics::NewProp_StatCodeName = { "StatCodeName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatDataBase, StatCodeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatCodeName_MetaData), NewProp_StatCodeName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UStatDataBase_Statics::NewProp_StatFullName = { "StatFullName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatDataBase, StatFullName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatFullName_MetaData), NewProp_StatFullName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UStatDataBase_Statics::NewProp_StatDescription = { "StatDescription", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatDataBase, StatDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatDescription_MetaData), NewProp_StatDescription_MetaData) };
void Z_Construct_UClass_UStatDataBase_Statics::NewProp_bRapresentAsDecimal_SetBit(void* Obj)
{
	((UStatDataBase*)Obj)->bRapresentAsDecimal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStatDataBase_Statics::NewProp_bRapresentAsDecimal = { "bRapresentAsDecimal", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStatDataBase), &Z_Construct_UClass_UStatDataBase_Statics::NewProp_bRapresentAsDecimal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRapresentAsDecimal_MetaData), NewProp_bRapresentAsDecimal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatDataBase_Statics::NewProp_StatDefaultValue = { "StatDefaultValue", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatDataBase, StatDefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatDefaultValue_MetaData), NewProp_StatDefaultValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatDataBase_Statics::NewProp_StatValueRange = { "StatValueRange", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatDataBase, StatValueRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatValueRange_MetaData), NewProp_StatValueRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatDataBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatDataBase_Statics::NewProp_StatID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatDataBase_Statics::NewProp_StatCodeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatDataBase_Statics::NewProp_StatFullName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatDataBase_Statics::NewProp_StatDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatDataBase_Statics::NewProp_bRapresentAsDecimal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatDataBase_Statics::NewProp_StatDefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatDataBase_Statics::NewProp_StatValueRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatDataBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStatDataBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatDataBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatDataBase_Statics::ClassParams = {
	&UStatDataBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStatDataBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStatDataBase_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatDataBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatDataBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStatDataBase()
{
	if (!Z_Registration_Info_UClass_UStatDataBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatDataBase.OuterSingleton, Z_Construct_UClass_UStatDataBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStatDataBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStatDataBase);
UStatDataBase::~UStatDataBase() {}
// ********** End Class UStatDataBase **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_StatDataBase_h__Script_RPGSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatDataBase, UStatDataBase::StaticClass, TEXT("UStatDataBase"), &Z_Registration_Info_UClass_UStatDataBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatDataBase), 3383351322U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_StatDataBase_h__Script_RPGSystem_3442335399(TEXT("/Script/RPGSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_StatDataBase_h__Script_RPGSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_StatDataBase_h__Script_RPGSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
