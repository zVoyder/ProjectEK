// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UObjects/Quests/QuestSequencial.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeQuestSequencial() {}

// ********** Begin Cross Module References ********************************************************
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestBase();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestSequencial();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestSequencial_NoRegister();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UTaskData_NoRegister();
UPackage* Z_Construct_UPackage__Script_QuestSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UQuestSequencial Function GetCurrentTaskIndex ****************************
struct Z_Construct_UFunction_UQuestSequencial_GetCurrentTaskIndex_Statics
{
	struct QuestSequencial_eventGetCurrentTaskIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UObjects/Quests/QuestSequencial.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuestSequencial_GetCurrentTaskIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestSequencial_eventGetCurrentTaskIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestSequencial_GetCurrentTaskIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestSequencial_GetCurrentTaskIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSequencial_GetCurrentTaskIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestSequencial_GetCurrentTaskIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestSequencial, nullptr, "GetCurrentTaskIndex", Z_Construct_UFunction_UQuestSequencial_GetCurrentTaskIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSequencial_GetCurrentTaskIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestSequencial_GetCurrentTaskIndex_Statics::QuestSequencial_eventGetCurrentTaskIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSequencial_GetCurrentTaskIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestSequencial_GetCurrentTaskIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestSequencial_GetCurrentTaskIndex_Statics::QuestSequencial_eventGetCurrentTaskIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestSequencial_GetCurrentTaskIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestSequencial_GetCurrentTaskIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestSequencial::execGetCurrentTaskIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentTaskIndex();
	P_NATIVE_END;
}
// ********** End Class UQuestSequencial Function GetCurrentTaskIndex ******************************

// ********** Begin Class UQuestSequencial Function GetTaskIndex ***********************************
struct Z_Construct_UFunction_UQuestSequencial_GetTaskIndex_Statics
{
	struct QuestSequencial_eventGetTaskIndex_Parms
	{
		UTaskData* TaskDataKey;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UObjects/Quests/QuestSequencial.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskDataKey;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestSequencial_GetTaskIndex_Statics::NewProp_TaskDataKey = { "TaskDataKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestSequencial_eventGetTaskIndex_Parms, TaskDataKey), Z_Construct_UClass_UTaskData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuestSequencial_GetTaskIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestSequencial_eventGetTaskIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestSequencial_GetTaskIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestSequencial_GetTaskIndex_Statics::NewProp_TaskDataKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestSequencial_GetTaskIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSequencial_GetTaskIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestSequencial_GetTaskIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuestSequencial, nullptr, "GetTaskIndex", Z_Construct_UFunction_UQuestSequencial_GetTaskIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSequencial_GetTaskIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuestSequencial_GetTaskIndex_Statics::QuestSequencial_eventGetTaskIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSequencial_GetTaskIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuestSequencial_GetTaskIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuestSequencial_GetTaskIndex_Statics::QuestSequencial_eventGetTaskIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuestSequencial_GetTaskIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestSequencial_GetTaskIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuestSequencial::execGetTaskIndex)
{
	P_GET_OBJECT(UTaskData,Z_Param_TaskDataKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTaskIndex(Z_Param_TaskDataKey);
	P_NATIVE_END;
}
// ********** End Class UQuestSequencial Function GetTaskIndex *************************************

// ********** Begin Class UQuestSequencial *********************************************************
void UQuestSequencial::StaticRegisterNativesUQuestSequencial()
{
	UClass* Class = UQuestSequencial::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentTaskIndex", &UQuestSequencial::execGetCurrentTaskIndex },
		{ "GetTaskIndex", &UQuestSequencial::execGetTaskIndex },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UQuestSequencial;
UClass* UQuestSequencial::GetPrivateStaticClass()
{
	using TClass = UQuestSequencial;
	if (!Z_Registration_Info_UClass_UQuestSequencial.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("QuestSequencial"),
			Z_Registration_Info_UClass_UQuestSequencial.InnerSingleton,
			StaticRegisterNativesUQuestSequencial,
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
	return Z_Registration_Info_UClass_UQuestSequencial.InnerSingleton;
}
UClass* Z_Construct_UClass_UQuestSequencial_NoRegister()
{
	return UQuestSequencial::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UQuestSequencial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UObjects/Quests/QuestSequencial.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/UObjects/Quests/QuestSequencial.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TasksByIndex_MetaData[] = {
		{ "Category", "QuestSequencial" },
		{ "ModuleRelativePath", "Public/UObjects/Quests/QuestSequencial.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TasksByIndex_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TasksByIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestSequencial_GetCurrentTaskIndex, "GetCurrentTaskIndex" }, // 1513552860
		{ &Z_Construct_UFunction_UQuestSequencial_GetTaskIndex, "GetTaskIndex" }, // 2435657408
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestSequencial>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestSequencial_Statics::NewProp_TasksByIndex_Inner = { "TasksByIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTaskData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestSequencial_Statics::NewProp_TasksByIndex = { "TasksByIndex", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestSequencial, TasksByIndex), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TasksByIndex_MetaData), NewProp_TasksByIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestSequencial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestSequencial_Statics::NewProp_TasksByIndex_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestSequencial_Statics::NewProp_TasksByIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestSequencial_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQuestSequencial_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UQuestBase,
	(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestSequencial_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestSequencial_Statics::ClassParams = {
	&UQuestSequencial::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UQuestSequencial_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UQuestSequencial_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestSequencial_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestSequencial_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuestSequencial()
{
	if (!Z_Registration_Info_UClass_UQuestSequencial.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestSequencial.OuterSingleton, Z_Construct_UClass_UQuestSequencial_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuestSequencial.OuterSingleton;
}
UQuestSequencial::UQuestSequencial(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestSequencial);
UQuestSequencial::~UQuestSequencial() {}
// ********** End Class UQuestSequencial ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestSequencial_h__Script_QuestSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuestSequencial, UQuestSequencial::StaticClass, TEXT("UQuestSequencial"), &Z_Registration_Info_UClass_UQuestSequencial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestSequencial), 56380925U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestSequencial_h__Script_QuestSystem_1921892580(TEXT("/Script/QuestSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestSequencial_h__Script_QuestSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_UObjects_Quests_QuestSequencial_h__Script_QuestSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
