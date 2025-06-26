// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UObjects/Tasks/SingleTask.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSingleTask() {}

// ********** Begin Cross Module References ********************************************************
QUESTSYSTEM_API UClass* Z_Construct_UClass_USingleTask();
QUESTSYSTEM_API UClass* Z_Construct_UClass_USingleTask_NoRegister();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UTaskBase();
UPackage* Z_Construct_UPackage__Script_QuestSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USingleTask **************************************************************
void USingleTask::StaticRegisterNativesUSingleTask()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USingleTask;
UClass* USingleTask::GetPrivateStaticClass()
{
	using TClass = USingleTask;
	if (!Z_Registration_Info_UClass_USingleTask.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SingleTask"),
			Z_Registration_Info_UClass_USingleTask.InnerSingleton,
			StaticRegisterNativesUSingleTask,
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
	return Z_Registration_Info_UClass_USingleTask.InnerSingleton;
}
UClass* Z_Construct_UClass_USingleTask_NoRegister()
{
	return USingleTask::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USingleTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UObjects/Tasks/SingleTask.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/UObjects/Tasks/SingleTask.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USingleTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USingleTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTaskBase,
	(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USingleTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USingleTask_Statics::ClassParams = {
	&USingleTask::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USingleTask_Statics::Class_MetaDataParams), Z_Construct_UClass_USingleTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USingleTask()
{
	if (!Z_Registration_Info_UClass_USingleTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USingleTask.OuterSingleton, Z_Construct_UClass_USingleTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USingleTask.OuterSingleton;
}
USingleTask::USingleTask(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USingleTask);
USingleTask::~USingleTask() {}
// ********** End Class USingleTask ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_SingleTask_h__Script_QuestSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USingleTask, USingleTask::StaticClass, TEXT("USingleTask"), &Z_Registration_Info_UClass_USingleTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USingleTask), 2231769476U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_SingleTask_h__Script_QuestSystem_1858324675(TEXT("/Script/QuestSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_SingleTask_h__Script_QuestSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_SingleTask_h__Script_QuestSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
