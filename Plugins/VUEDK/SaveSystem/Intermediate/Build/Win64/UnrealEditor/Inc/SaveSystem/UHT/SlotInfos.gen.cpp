// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/Saves/SlotInfos.h"
#include "Data/Structs/SlotInfoData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSlotInfos() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
SAVESYSTEM_API UClass* Z_Construct_UClass_USlotInfos();
SAVESYSTEM_API UClass* Z_Construct_UClass_USlotInfos_NoRegister();
SAVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSlotInfoData();
UPackage* Z_Construct_UPackage__Script_SaveSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USlotInfos ***************************************************************
void USlotInfos::StaticRegisterNativesUSlotInfos()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USlotInfos;
UClass* USlotInfos::GetPrivateStaticClass()
{
	using TClass = USlotInfos;
	if (!Z_Registration_Info_UClass_USlotInfos.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SlotInfos"),
			Z_Registration_Info_UClass_USlotInfos.InnerSingleton,
			StaticRegisterNativesUSlotInfos,
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
	return Z_Registration_Info_UClass_USlotInfos.InnerSingleton;
}
UClass* Z_Construct_UClass_USlotInfos_NoRegister()
{
	return USlotInfos::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USlotInfos_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Data/Saves/SlotInfos.h" },
		{ "ModuleRelativePath", "Public/Data/Saves/SlotInfos.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotInfos_MetaData[] = {
		{ "Category", "SlotInfos" },
		{ "ModuleRelativePath", "Public/Data/Saves/SlotInfos.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotInfos_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SlotInfos_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SlotInfos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlotInfos>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlotInfos_Statics::NewProp_SlotInfos_ValueProp = { "SlotInfos", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSlotInfoData, METADATA_PARAMS(0, nullptr) }; // 3154120906
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USlotInfos_Statics::NewProp_SlotInfos_Key_KeyProp = { "SlotInfos_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USlotInfos_Statics::NewProp_SlotInfos = { "SlotInfos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USlotInfos, SlotInfos), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotInfos_MetaData), NewProp_SlotInfos_MetaData) }; // 3154120906
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlotInfos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotInfos_Statics::NewProp_SlotInfos_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotInfos_Statics::NewProp_SlotInfos_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotInfos_Statics::NewProp_SlotInfos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USlotInfos_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USlotInfos_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_SaveSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USlotInfos_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USlotInfos_Statics::ClassParams = {
	&USlotInfos::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USlotInfos_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USlotInfos_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USlotInfos_Statics::Class_MetaDataParams), Z_Construct_UClass_USlotInfos_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USlotInfos()
{
	if (!Z_Registration_Info_UClass_USlotInfos.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlotInfos.OuterSingleton, Z_Construct_UClass_USlotInfos_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USlotInfos.OuterSingleton;
}
USlotInfos::USlotInfos(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USlotInfos);
USlotInfos::~USlotInfos() {}
// ********** End Class USlotInfos *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Saves_SlotInfos_h__Script_SaveSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USlotInfos, USlotInfos::StaticClass, TEXT("USlotInfos"), &Z_Registration_Info_UClass_USlotInfos, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlotInfos), 2658413952U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Saves_SlotInfos_h__Script_SaveSystem_397931747(TEXT("/Script/SaveSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Saves_SlotInfos_h__Script_SaveSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Saves_SlotInfos_h__Script_SaveSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
