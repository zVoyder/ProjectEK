// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FeedbacksComposerSystem/Public/FeedbacksManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFeedbacksManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
FEEDBACKSCOMPOSERSYSTEM_API UClass* Z_Construct_UClass_UFeedbacksCue_NoRegister();
FEEDBACKSCOMPOSERSYSTEM_API UClass* Z_Construct_UClass_UFeedbacksCueData_NoRegister();
FEEDBACKSCOMPOSERSYSTEM_API UClass* Z_Construct_UClass_UFeedbacksManager();
FEEDBACKSCOMPOSERSYSTEM_API UClass* Z_Construct_UClass_UFeedbacksManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_FeedbacksComposerSystem();
// End Cross Module References

// Begin Class UFeedbacksManager Function StartFeedbacksCue
struct Z_Construct_UFunction_UFeedbacksManager_StartFeedbacksCue_Statics
{
	struct FeedbacksManager_eventStartFeedbacksCue_Parms
	{
		AActor* Instigator;
		UFeedbacksCueData* FeedbacksCueData;
		UFeedbacksCue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Feedbacks|Manager" },
		{ "ModuleRelativePath", "Public/FeedbacksManager.h" },
		{ "WorldContext", "Instigator" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FeedbacksCueData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFeedbacksManager_StartFeedbacksCue_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FeedbacksManager_eventStartFeedbacksCue_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFeedbacksManager_StartFeedbacksCue_Statics::NewProp_FeedbacksCueData = { "FeedbacksCueData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FeedbacksManager_eventStartFeedbacksCue_Parms, FeedbacksCueData), Z_Construct_UClass_UFeedbacksCueData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFeedbacksManager_StartFeedbacksCue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FeedbacksManager_eventStartFeedbacksCue_Parms, ReturnValue), Z_Construct_UClass_UFeedbacksCue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFeedbacksManager_StartFeedbacksCue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbacksManager_StartFeedbacksCue_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbacksManager_StartFeedbacksCue_Statics::NewProp_FeedbacksCueData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFeedbacksManager_StartFeedbacksCue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbacksManager_StartFeedbacksCue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFeedbacksManager_StartFeedbacksCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFeedbacksManager, nullptr, "StartFeedbacksCue", nullptr, nullptr, Z_Construct_UFunction_UFeedbacksManager_StartFeedbacksCue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbacksManager_StartFeedbacksCue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFeedbacksManager_StartFeedbacksCue_Statics::FeedbacksManager_eventStartFeedbacksCue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFeedbacksManager_StartFeedbacksCue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFeedbacksManager_StartFeedbacksCue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFeedbacksManager_StartFeedbacksCue_Statics::FeedbacksManager_eventStartFeedbacksCue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFeedbacksManager_StartFeedbacksCue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFeedbacksManager_StartFeedbacksCue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFeedbacksManager::execStartFeedbacksCue)
{
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_GET_OBJECT(UFeedbacksCueData,Z_Param_FeedbacksCueData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UFeedbacksCue**)Z_Param__Result=UFeedbacksManager::StartFeedbacksCue(Z_Param_Instigator,Z_Param_FeedbacksCueData);
	P_NATIVE_END;
}
// End Class UFeedbacksManager Function StartFeedbacksCue

// Begin Class UFeedbacksManager
void UFeedbacksManager::StaticRegisterNativesUFeedbacksManager()
{
	UClass* Class = UFeedbacksManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartFeedbacksCue", &UFeedbacksManager::execStartFeedbacksCue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFeedbacksManager);
UClass* Z_Construct_UClass_UFeedbacksManager_NoRegister()
{
	return UFeedbacksManager::StaticClass();
}
struct Z_Construct_UClass_UFeedbacksManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FeedbacksManager.h" },
		{ "ModuleRelativePath", "Public/FeedbacksManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFeedbacksManager_StartFeedbacksCue, "StartFeedbacksCue" }, // 1475872819
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFeedbacksManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFeedbacksManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_FeedbacksComposerSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbacksManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFeedbacksManager_Statics::ClassParams = {
	&UFeedbacksManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFeedbacksManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UFeedbacksManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFeedbacksManager()
{
	if (!Z_Registration_Info_UClass_UFeedbacksManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFeedbacksManager.OuterSingleton, Z_Construct_UClass_UFeedbacksManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFeedbacksManager.OuterSingleton;
}
template<> FEEDBACKSCOMPOSERSYSTEM_API UClass* StaticClass<UFeedbacksManager>()
{
	return UFeedbacksManager::StaticClass();
}
UFeedbacksManager::UFeedbacksManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFeedbacksManager);
UFeedbacksManager::~UFeedbacksManager() {}
// End Class UFeedbacksManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbacksManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFeedbacksManager, UFeedbacksManager::StaticClass, TEXT("UFeedbacksManager"), &Z_Registration_Info_UClass_UFeedbacksManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFeedbacksManager), 1495990705U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbacksManager_h_2558822464(TEXT("/Script/FeedbacksComposerSystem"),
	Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbacksManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectBW_Plugins_VUEDK_FeedbacksComposerSystem_Source_FeedbacksComposerSystem_Public_FeedbacksManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
