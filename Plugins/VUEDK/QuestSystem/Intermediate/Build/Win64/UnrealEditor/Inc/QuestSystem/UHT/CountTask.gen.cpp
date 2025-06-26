// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UObjects/Tasks/CountTask.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCountTask() {}

// ********** Begin Cross Module References ********************************************************
QUESTSYSTEM_API UClass* Z_Construct_UClass_UCountTask();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UCountTask_NoRegister();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UTaskBase();
UPackage* Z_Construct_UPackage__Script_QuestSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCountTask Function GetCurrentCount **************************************
struct Z_Construct_UFunction_UCountTask_GetCurrentCount_Statics
{
	struct CountTask_eventGetCurrentCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UObjects/Tasks/CountTask.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCountTask_GetCurrentCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CountTask_eventGetCurrentCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCountTask_GetCurrentCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCountTask_GetCurrentCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCountTask_GetCurrentCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCountTask_GetCurrentCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCountTask, nullptr, "GetCurrentCount", Z_Construct_UFunction_UCountTask_GetCurrentCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCountTask_GetCurrentCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCountTask_GetCurrentCount_Statics::CountTask_eventGetCurrentCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCountTask_GetCurrentCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCountTask_GetCurrentCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCountTask_GetCurrentCount_Statics::CountTask_eventGetCurrentCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCountTask_GetCurrentCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCountTask_GetCurrentCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCountTask::execGetCurrentCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentCount();
	P_NATIVE_END;
}
// ********** End Class UCountTask Function GetCurrentCount ****************************************

// ********** Begin Class UCountTask ***************************************************************
void UCountTask::StaticRegisterNativesUCountTask()
{
	UClass* Class = UCountTask::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentCount", &UCountTask::execGetCurrentCount },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCountTask;
UClass* UCountTask::GetPrivateStaticClass()
{
	using TClass = UCountTask;
	if (!Z_Registration_Info_UClass_UCountTask.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CountTask"),
			Z_Registration_Info_UClass_UCountTask.InnerSingleton,
			StaticRegisterNativesUCountTask,
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
	return Z_Registration_Info_UClass_UCountTask.InnerSingleton;
}
UClass* Z_Construct_UClass_UCountTask_NoRegister()
{
	return UCountTask::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCountTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UObjects/Tasks/CountTask.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/UObjects/Tasks/CountTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountToAchieve_MetaData[] = {
		{ "Category", "Task" },
		{ "ModuleRelativePath", "Public/UObjects/Tasks/CountTask.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CountToAchieve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCountTask_GetCurrentCount, "GetCurrentCount" }, // 2967595282
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCountTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCountTask_Statics::NewProp_CountToAchieve = { "CountToAchieve", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCountTask, CountToAchieve), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountToAchieve_MetaData), NewProp_CountToAchieve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCountTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCountTask_Statics::NewProp_CountToAchieve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCountTask_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCountTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTaskBase,
	(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCountTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCountTask_Statics::ClassParams = {
	&UCountTask::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCountTask_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCountTask_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCountTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UCountTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCountTask()
{
	if (!Z_Registration_Info_UClass_UCountTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCountTask.OuterSingleton, Z_Construct_UClass_UCountTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCountTask.OuterSingleton;
}
UCountTask::UCountTask(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCountTask);
UCountTask::~UCountTask() {}
// ********** End Class UCountTask *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_CountTask_h__Script_QuestSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCountTask, UCountTask::StaticClass, TEXT("UCountTask"), &Z_Registration_Info_UClass_UCountTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCountTask), 697517901U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_CountTask_h__Script_QuestSystem_4057438206(TEXT("/Script/QuestSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_CountTask_h__Script_QuestSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Tasks_CountTask_h__Script_QuestSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
