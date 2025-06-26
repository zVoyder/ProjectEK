// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/DataAssets/TaskData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTaskData() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UTaskData();
QUESTSYSTEM_API UClass* Z_Construct_UClass_UTaskData_NoRegister();
QUESTSYSTEM_API UEnum* Z_Construct_UEnum_QuestSystem_ETaskType();
UPackage* Z_Construct_UPackage__Script_QuestSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTaskData Function GetTaskType *******************************************
struct Z_Construct_UFunction_UTaskData_GetTaskType_Statics
{
	struct TaskData_eventGetTaskType_Parms
	{
		ETaskType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/DataAssets/TaskData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTaskData_GetTaskType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTaskData_GetTaskType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskData_eventGetTaskType_Parms, ReturnValue), Z_Construct_UEnum_QuestSystem_ETaskType, METADATA_PARAMS(0, nullptr) }; // 1834681441
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskData_GetTaskType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskData_GetTaskType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskData_GetTaskType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskData_GetTaskType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskData_GetTaskType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTaskData, nullptr, "GetTaskType", Z_Construct_UFunction_UTaskData_GetTaskType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskData_GetTaskType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTaskData_GetTaskType_Statics::TaskData_eventGetTaskType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskData_GetTaskType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTaskData_GetTaskType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTaskData_GetTaskType_Statics::TaskData_eventGetTaskType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTaskData_GetTaskType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaskData_GetTaskType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTaskData::execGetTaskType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ETaskType*)Z_Param__Result=P_THIS->GetTaskType();
	P_NATIVE_END;
}
// ********** End Class UTaskData Function GetTaskType *********************************************

// ********** Begin Class UTaskData ****************************************************************
void UTaskData::StaticRegisterNativesUTaskData()
{
	UClass* Class = UTaskData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTaskType", &UTaskData::execGetTaskType },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTaskData;
UClass* UTaskData::GetPrivateStaticClass()
{
	using TClass = UTaskData;
	if (!Z_Registration_Info_UClass_UTaskData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TaskData"),
			Z_Registration_Info_UClass_UTaskData.InnerSingleton,
			StaticRegisterNativesUTaskData,
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
	return Z_Registration_Info_UClass_UTaskData.InnerSingleton;
}
UClass* Z_Construct_UClass_UTaskData_NoRegister()
{
	return UTaskData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTaskData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Data/DataAssets/TaskData.h" },
		{ "ModuleRelativePath", "Public/Data/DataAssets/TaskData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskName_MetaData[] = {
		{ "Category", "TaskData" },
		{ "ModuleRelativePath", "Public/Data/DataAssets/TaskData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "TaskData" },
		{ "ModuleRelativePath", "Public/Data/DataAssets/TaskData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TaskName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTaskData_GetTaskType, "GetTaskType" }, // 4064181346
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTaskData_Statics::NewProp_TaskName = { "TaskName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTaskData, TaskName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskName_MetaData), NewProp_TaskName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTaskData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTaskData, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTaskData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskData_Statics::NewProp_TaskName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskData_Statics::NewProp_Description,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTaskData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTaskData_Statics::ClassParams = {
	&UTaskData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTaskData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTaskData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskData_Statics::Class_MetaDataParams), Z_Construct_UClass_UTaskData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTaskData()
{
	if (!Z_Registration_Info_UClass_UTaskData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTaskData.OuterSingleton, Z_Construct_UClass_UTaskData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTaskData.OuterSingleton;
}
UTaskData::UTaskData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskData);
UTaskData::~UTaskData() {}
// ********** End Class UTaskData ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_TaskData_h__Script_QuestSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTaskData, UTaskData::StaticClass, TEXT("UTaskData"), &Z_Registration_Info_UClass_UTaskData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTaskData), 3519067390U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_TaskData_h__Script_QuestSystem_3482443665(TEXT("/Script/QuestSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_TaskData_h__Script_QuestSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_TaskData_h__Script_QuestSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
