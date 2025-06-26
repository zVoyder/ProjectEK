// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGItemsGeneration/RPGItemStatOperation.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeRPGItemStatOperation() {}

// ********** Begin Cross Module References ********************************************************
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGGearItem_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGItemStatOperation();
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGItemStatOperation_NoRegister();
RPGSYSTEM_API UClass* Z_Construct_UClass_UStatOperation();
UPackage* Z_Construct_UPackage__Script_RPGSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URPGItemStatOperation ****************************************************
void URPGItemStatOperation::StaticRegisterNativesURPGItemStatOperation()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_URPGItemStatOperation;
UClass* URPGItemStatOperation::GetPrivateStaticClass()
{
	using TClass = URPGItemStatOperation;
	if (!Z_Registration_Info_UClass_URPGItemStatOperation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("RPGItemStatOperation"),
			Z_Registration_Info_UClass_URPGItemStatOperation.InnerSingleton,
			StaticRegisterNativesURPGItemStatOperation,
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
	return Z_Registration_Info_UClass_URPGItemStatOperation.InnerSingleton;
}
UClass* Z_Construct_UClass_URPGItemStatOperation_NoRegister()
{
	return URPGItemStatOperation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URPGItemStatOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RPGItemsGeneration/RPGItemStatOperation.h" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/RPGItemStatOperation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GearBaseValue_MetaData[] = {
		{ "Category", "RPGItemStatOperation" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/RPGItemStatOperation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RarityValue_MetaData[] = {
		{ "Category", "RPGItemStatOperation" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/RPGItemStatOperation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelatedItem_MetaData[] = {
		{ "Category", "RPGItemStatOperation" },
		{ "ModuleRelativePath", "Public/RPGItemsGeneration/RPGItemStatOperation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GearBaseValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RarityValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RelatedItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGItemStatOperation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URPGItemStatOperation_Statics::NewProp_GearBaseValue = { "GearBaseValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGItemStatOperation, GearBaseValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GearBaseValue_MetaData), NewProp_GearBaseValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URPGItemStatOperation_Statics::NewProp_RarityValue = { "RarityValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGItemStatOperation, RarityValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RarityValue_MetaData), NewProp_RarityValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URPGItemStatOperation_Statics::NewProp_RelatedItem = { "RelatedItem", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGItemStatOperation, RelatedItem), Z_Construct_UClass_URPGGearItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelatedItem_MetaData), NewProp_RelatedItem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGItemStatOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGItemStatOperation_Statics::NewProp_GearBaseValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGItemStatOperation_Statics::NewProp_RarityValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGItemStatOperation_Statics::NewProp_RelatedItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGItemStatOperation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URPGItemStatOperation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStatOperation,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGItemStatOperation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URPGItemStatOperation_Statics::ClassParams = {
	&URPGItemStatOperation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URPGItemStatOperation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URPGItemStatOperation_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGItemStatOperation_Statics::Class_MetaDataParams), Z_Construct_UClass_URPGItemStatOperation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URPGItemStatOperation()
{
	if (!Z_Registration_Info_UClass_URPGItemStatOperation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPGItemStatOperation.OuterSingleton, Z_Construct_UClass_URPGItemStatOperation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URPGItemStatOperation.OuterSingleton;
}
URPGItemStatOperation::URPGItemStatOperation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URPGItemStatOperation);
URPGItemStatOperation::~URPGItemStatOperation() {}
// ********** End Class URPGItemStatOperation ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_RPGItemStatOperation_h__Script_RPGSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URPGItemStatOperation, URPGItemStatOperation::StaticClass, TEXT("URPGItemStatOperation"), &Z_Registration_Info_UClass_URPGItemStatOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPGItemStatOperation), 1175302808U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_RPGItemStatOperation_h__Script_RPGSystem_3334151468(TEXT("/Script/RPGSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_RPGItemStatOperation_h__Script_RPGSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_RPGItemStatOperation_h__Script_RPGSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
