// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/TaskAchiever.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTaskAchiever() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UTaskAchiever();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UTaskAchiever_NoRegister();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UTaskData_NoRegister();
UPackage* Z_Construct_UPackage__Script_QuestSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTaskAchiever Function AchieveTask ***************************************
struct Z_Construct_UFunction_UTaskAchiever_AchieveTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/TaskAchiever.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskAchiever_AchieveTask_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTaskAchiever, nullptr, "AchieveTask", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskAchiever_AchieveTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTaskAchiever_AchieveTask_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTaskAchiever_AchieveTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaskAchiever_AchieveTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTaskAchiever::execAchieveTask)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AchieveTask();
	P_NATIVE_END;
}
// ********** End Class UTaskAchiever Function AchieveTask *****************************************

// ********** Begin Class UTaskAchiever ************************************************************
void UTaskAchiever::StaticRegisterNativesUTaskAchiever()
{
	UClass* Class = UTaskAchiever::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AchieveTask", &UTaskAchiever::execAchieveTask },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTaskAchiever;
UClass* UTaskAchiever::GetPrivateStaticClass()
{
	using TClass = UTaskAchiever;
	if (!Z_Registration_Info_UClass_UTaskAchiever.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TaskAchiever"),
			Z_Registration_Info_UClass_UTaskAchiever.InnerSingleton,
			StaticRegisterNativesUTaskAchiever,
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
	return Z_Registration_Info_UClass_UTaskAchiever.InnerSingleton;
}
UClass* Z_Construct_UClass_UTaskAchiever_NoRegister()
{
	return UTaskAchiever::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTaskAchiever_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/TaskAchiever.h" },
		{ "ModuleRelativePath", "Public/Components/TaskAchiever.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskToAchieve_MetaData[] = {
		{ "Category", "TaskAchiever" },
		{ "ModuleRelativePath", "Public/Components/TaskAchiever.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskToAchieve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTaskAchiever_AchieveTask, "AchieveTask" }, // 2345976909
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskAchiever>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTaskAchiever_Statics::NewProp_TaskToAchieve = { "TaskToAchieve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTaskAchiever, TaskToAchieve), Z_Construct_UClass_UTaskData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskToAchieve_MetaData), NewProp_TaskToAchieve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTaskAchiever_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskAchiever_Statics::NewProp_TaskToAchieve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskAchiever_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTaskAchiever_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskAchiever_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTaskAchiever_Statics::ClassParams = {
	&UTaskAchiever::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTaskAchiever_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTaskAchiever_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskAchiever_Statics::Class_MetaDataParams), Z_Construct_UClass_UTaskAchiever_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTaskAchiever()
{
	if (!Z_Registration_Info_UClass_UTaskAchiever.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTaskAchiever.OuterSingleton, Z_Construct_UClass_UTaskAchiever_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTaskAchiever.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskAchiever);
UTaskAchiever::~UTaskAchiever() {}
// ********** End Class UTaskAchiever **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Components_TaskAchiever_h__Script_QuestSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTaskAchiever, UTaskAchiever::StaticClass, TEXT("UTaskAchiever"), &Z_Registration_Info_UClass_UTaskAchiever, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTaskAchiever), 2572970675U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Components_TaskAchiever_h__Script_QuestSystem_2592627999(TEXT("/Script/QuestSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Components_TaskAchiever_h__Script_QuestSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Components_TaskAchiever_h__Script_QuestSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
