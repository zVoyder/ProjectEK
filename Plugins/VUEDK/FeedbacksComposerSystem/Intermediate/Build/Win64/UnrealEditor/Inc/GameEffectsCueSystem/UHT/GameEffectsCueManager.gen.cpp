// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameEffectsCueManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGameEffectsCueManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_UGameEffectsCue_NoRegister();
GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_UGameEffectsCueData_NoRegister();
GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_UGameEffectsCueManager();
GAMEEFFECTSCUESYSTEM_API UClass* Z_Construct_UClass_UGameEffectsCueManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameEffectsCueSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGameEffectsCueManager Function StartGameEffectsCue **********************
struct Z_Construct_UFunction_UGameEffectsCueManager_StartGameEffectsCue_Statics
{
	struct GameEffectsCueManager_eventStartGameEffectsCue_Parms
	{
		AActor* Instigator;
		UGameEffectsCueData* GameEffectsCueData;
		UGameEffectsCue* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameEffectsCue" },
		{ "ModuleRelativePath", "Public/GameEffectsCueManager.h" },
		{ "WorldContext", "Instigator" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameEffectsCueData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameEffectsCueManager_StartGameEffectsCue_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameEffectsCueManager_eventStartGameEffectsCue_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameEffectsCueManager_StartGameEffectsCue_Statics::NewProp_GameEffectsCueData = { "GameEffectsCueData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameEffectsCueManager_eventStartGameEffectsCue_Parms, GameEffectsCueData), Z_Construct_UClass_UGameEffectsCueData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameEffectsCueManager_StartGameEffectsCue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameEffectsCueManager_eventStartGameEffectsCue_Parms, ReturnValue), Z_Construct_UClass_UGameEffectsCue_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameEffectsCueManager_StartGameEffectsCue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEffectsCueManager_StartGameEffectsCue_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEffectsCueManager_StartGameEffectsCue_Statics::NewProp_GameEffectsCueData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameEffectsCueManager_StartGameEffectsCue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectsCueManager_StartGameEffectsCue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameEffectsCueManager_StartGameEffectsCue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameEffectsCueManager, nullptr, "StartGameEffectsCue", Z_Construct_UFunction_UGameEffectsCueManager_StartGameEffectsCue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectsCueManager_StartGameEffectsCue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameEffectsCueManager_StartGameEffectsCue_Statics::GameEffectsCueManager_eventStartGameEffectsCue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameEffectsCueManager_StartGameEffectsCue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameEffectsCueManager_StartGameEffectsCue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGameEffectsCueManager_StartGameEffectsCue_Statics::GameEffectsCueManager_eventStartGameEffectsCue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameEffectsCueManager_StartGameEffectsCue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameEffectsCueManager_StartGameEffectsCue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameEffectsCueManager::execStartGameEffectsCue)
{
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_GET_OBJECT(UGameEffectsCueData,Z_Param_GameEffectsCueData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGameEffectsCue**)Z_Param__Result=UGameEffectsCueManager::StartGameEffectsCue(Z_Param_Instigator,Z_Param_GameEffectsCueData);
	P_NATIVE_END;
}
// ********** End Class UGameEffectsCueManager Function StartGameEffectsCue ************************

// ********** Begin Class UGameEffectsCueManager ***************************************************
void UGameEffectsCueManager::StaticRegisterNativesUGameEffectsCueManager()
{
	UClass* Class = UGameEffectsCueManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartGameEffectsCue", &UGameEffectsCueManager::execStartGameEffectsCue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGameEffectsCueManager;
UClass* UGameEffectsCueManager::GetPrivateStaticClass()
{
	using TClass = UGameEffectsCueManager;
	if (!Z_Registration_Info_UClass_UGameEffectsCueManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GameEffectsCueManager"),
			Z_Registration_Info_UClass_UGameEffectsCueManager.InnerSingleton,
			StaticRegisterNativesUGameEffectsCueManager,
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
	return Z_Registration_Info_UClass_UGameEffectsCueManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UGameEffectsCueManager_NoRegister()
{
	return UGameEffectsCueManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGameEffectsCueManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameEffectsCueManager.h" },
		{ "ModuleRelativePath", "Public/GameEffectsCueManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameEffectsCueManager_StartGameEffectsCue, "StartGameEffectsCue" }, // 649707990
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameEffectsCueManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameEffectsCueManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_GameEffectsCueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameEffectsCueManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameEffectsCueManager_Statics::ClassParams = {
	&UGameEffectsCueManager::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameEffectsCueManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameEffectsCueManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameEffectsCueManager()
{
	if (!Z_Registration_Info_UClass_UGameEffectsCueManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameEffectsCueManager.OuterSingleton, Z_Construct_UClass_UGameEffectsCueManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameEffectsCueManager.OuterSingleton;
}
UGameEffectsCueManager::UGameEffectsCueManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameEffectsCueManager);
UGameEffectsCueManager::~UGameEffectsCueManager() {}
// ********** End Class UGameEffectsCueManager *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_GameEffectsCueManager_h__Script_GameEffectsCueSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameEffectsCueManager, UGameEffectsCueManager::StaticClass, TEXT("UGameEffectsCueManager"), &Z_Registration_Info_UClass_UGameEffectsCueManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameEffectsCueManager), 3283186389U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_GameEffectsCueManager_h__Script_GameEffectsCueSystem_3967018322(TEXT("/Script/GameEffectsCueSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_GameEffectsCueManager_h__Script_GameEffectsCueSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_FeedbacksComposerSystem_Source_GameEffectsCueSystem_Public_GameEffectsCueManager_h__Script_GameEffectsCueSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
