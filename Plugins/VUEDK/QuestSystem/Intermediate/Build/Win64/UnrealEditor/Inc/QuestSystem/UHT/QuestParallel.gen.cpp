// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UObjects/Quests/QuestParallel.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeQuestParallel() {}

// ********** Begin Cross Module References ********************************************************
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestBase();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestParallel();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestParallel_NoRegister();
UPackage* Z_Construct_UPackage__Script_QuestSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UQuestParallel ***********************************************************
void UQuestParallel::StaticRegisterNativesUQuestParallel()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UQuestParallel;
UClass* UQuestParallel::GetPrivateStaticClass()
{
	using TClass = UQuestParallel;
	if (!Z_Registration_Info_UClass_UQuestParallel.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("QuestParallel"),
			Z_Registration_Info_UClass_UQuestParallel.InnerSingleton,
			StaticRegisterNativesUQuestParallel,
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
	return Z_Registration_Info_UClass_UQuestParallel.InnerSingleton;
}
UClass* Z_Construct_UClass_UQuestParallel_NoRegister()
{
	return UQuestParallel::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UQuestParallel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UObjects/Quests/QuestParallel.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/UObjects/Quests/QuestParallel.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestParallel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UQuestParallel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UQuestBase,
	(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestParallel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestParallel_Statics::ClassParams = {
	&UQuestParallel::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestParallel_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestParallel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuestParallel()
{
	if (!Z_Registration_Info_UClass_UQuestParallel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestParallel.OuterSingleton, Z_Construct_UClass_UQuestParallel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuestParallel.OuterSingleton;
}
UQuestParallel::UQuestParallel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestParallel);
UQuestParallel::~UQuestParallel() {}
// ********** End Class UQuestParallel *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestParallel_h__Script_QuestSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuestParallel, UQuestParallel::StaticClass, TEXT("UQuestParallel"), &Z_Registration_Info_UClass_UQuestParallel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestParallel), 2922342826U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestParallel_h__Script_QuestSystem_2899080881(TEXT("/Script/QuestSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestParallel_h__Script_QuestSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestParallel_h__Script_QuestSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
