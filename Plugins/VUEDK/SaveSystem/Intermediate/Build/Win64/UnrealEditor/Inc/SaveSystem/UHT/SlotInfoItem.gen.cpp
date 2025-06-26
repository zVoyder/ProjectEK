// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/Saves/SlotInfoItem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSlotInfoItem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
SAVESYSTEM_API UClass* Z_Construct_UClass_USlotInfoItem();
SAVESYSTEM_API UClass* Z_Construct_UClass_USlotInfoItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_SaveSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USlotInfoItem ************************************************************
void USlotInfoItem::StaticRegisterNativesUSlotInfoItem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USlotInfoItem;
UClass* USlotInfoItem::GetPrivateStaticClass()
{
	using TClass = USlotInfoItem;
	if (!Z_Registration_Info_UClass_USlotInfoItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SlotInfoItem"),
			Z_Registration_Info_UClass_USlotInfoItem.InnerSingleton,
			StaticRegisterNativesUSlotInfoItem,
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
	return Z_Registration_Info_UClass_USlotInfoItem.InnerSingleton;
}
UClass* Z_Construct_UClass_USlotInfoItem_NoRegister()
{
	return USlotInfoItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USlotInfoItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Data/Saves/SlotInfoItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Data/Saves/SlotInfoItem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlotInfoItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USlotInfoItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_SaveSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USlotInfoItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USlotInfoItem_Statics::ClassParams = {
	&USlotInfoItem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USlotInfoItem_Statics::Class_MetaDataParams), Z_Construct_UClass_USlotInfoItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USlotInfoItem()
{
	if (!Z_Registration_Info_UClass_USlotInfoItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlotInfoItem.OuterSingleton, Z_Construct_UClass_USlotInfoItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USlotInfoItem.OuterSingleton;
}
USlotInfoItem::USlotInfoItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USlotInfoItem);
USlotInfoItem::~USlotInfoItem() {}
// ********** End Class USlotInfoItem **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Saves_SlotInfoItem_h__Script_SaveSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USlotInfoItem, USlotInfoItem::StaticClass, TEXT("USlotInfoItem"), &Z_Registration_Info_UClass_USlotInfoItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlotInfoItem), 2102705905U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Saves_SlotInfoItem_h__Script_SaveSystem_2883867229(TEXT("/Script/SaveSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Saves_SlotInfoItem_h__Script_SaveSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Saves_SlotInfoItem_h__Script_SaveSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
