// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSaveManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAutoSaveManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SAVESYSTEM_API UClass* Z_Construct_UClass_UAutoSaveManager();
SAVESYSTEM_API UClass* Z_Construct_UClass_UAutoSaveManager_NoRegister();
SAVESYSTEM_API UClass* Z_Construct_UClass_USaveManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_SaveSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAutoSaveManager Function IsAutoSavePaused *******************************
struct Z_Construct_UFunction_UAutoSaveManager_IsAutoSavePaused_Statics
{
	struct AutoSaveManager_eventIsAutoSavePaused_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutoSaveManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAutoSaveManager_IsAutoSavePaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AutoSaveManager_eventIsAutoSavePaused_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutoSaveManager_IsAutoSavePaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AutoSaveManager_eventIsAutoSavePaused_Parms), &Z_Construct_UFunction_UAutoSaveManager_IsAutoSavePaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoSaveManager_IsAutoSavePaused_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoSaveManager_IsAutoSavePaused_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSaveManager_IsAutoSavePaused_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoSaveManager_IsAutoSavePaused_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAutoSaveManager, nullptr, "IsAutoSavePaused", Z_Construct_UFunction_UAutoSaveManager_IsAutoSavePaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSaveManager_IsAutoSavePaused_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAutoSaveManager_IsAutoSavePaused_Statics::AutoSaveManager_eventIsAutoSavePaused_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSaveManager_IsAutoSavePaused_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoSaveManager_IsAutoSavePaused_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAutoSaveManager_IsAutoSavePaused_Statics::AutoSaveManager_eventIsAutoSavePaused_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAutoSaveManager_IsAutoSavePaused()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoSaveManager_IsAutoSavePaused_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoSaveManager::execIsAutoSavePaused)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAutoSavePaused();
	P_NATIVE_END;
}
// ********** End Class UAutoSaveManager Function IsAutoSavePaused *********************************

// ********** Begin Class UAutoSaveManager Function PauseAutoSave **********************************
struct Z_Construct_UFunction_UAutoSaveManager_PauseAutoSave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutoSaveManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoSaveManager_PauseAutoSave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAutoSaveManager, nullptr, "PauseAutoSave", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSaveManager_PauseAutoSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoSaveManager_PauseAutoSave_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAutoSaveManager_PauseAutoSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoSaveManager_PauseAutoSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoSaveManager::execPauseAutoSave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PauseAutoSave();
	P_NATIVE_END;
}
// ********** End Class UAutoSaveManager Function PauseAutoSave ************************************

// ********** Begin Class UAutoSaveManager Function UnpauseAutoSave ********************************
struct Z_Construct_UFunction_UAutoSaveManager_UnpauseAutoSave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AutoSaveManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoSaveManager_UnpauseAutoSave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAutoSaveManager, nullptr, "UnpauseAutoSave", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSaveManager_UnpauseAutoSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAutoSaveManager_UnpauseAutoSave_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAutoSaveManager_UnpauseAutoSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutoSaveManager_UnpauseAutoSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAutoSaveManager::execUnpauseAutoSave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnpauseAutoSave();
	P_NATIVE_END;
}
// ********** End Class UAutoSaveManager Function UnpauseAutoSave **********************************

// ********** Begin Class UAutoSaveManager *********************************************************
void UAutoSaveManager::StaticRegisterNativesUAutoSaveManager()
{
	UClass* Class = UAutoSaveManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsAutoSavePaused", &UAutoSaveManager::execIsAutoSavePaused },
		{ "PauseAutoSave", &UAutoSaveManager::execPauseAutoSave },
		{ "UnpauseAutoSave", &UAutoSaveManager::execUnpauseAutoSave },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAutoSaveManager;
UClass* UAutoSaveManager::GetPrivateStaticClass()
{
	using TClass = UAutoSaveManager;
	if (!Z_Registration_Info_UClass_UAutoSaveManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AutoSaveManager"),
			Z_Registration_Info_UClass_UAutoSaveManager.InnerSingleton,
			StaticRegisterNativesUAutoSaveManager,
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
	return Z_Registration_Info_UClass_UAutoSaveManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UAutoSaveManager_NoRegister()
{
	return UAutoSaveManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAutoSaveManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AutoSaveManager.h" },
		{ "ModuleRelativePath", "Public/AutoSaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSaveManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/AutoSaveManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentSaveManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAutoSaveManager_IsAutoSavePaused, "IsAutoSavePaused" }, // 1819461911
		{ &Z_Construct_UFunction_UAutoSaveManager_PauseAutoSave, "PauseAutoSave" }, // 482796224
		{ &Z_Construct_UFunction_UAutoSaveManager_UnpauseAutoSave, "UnpauseAutoSave" }, // 3337119939
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoSaveManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAutoSaveManager_Statics::NewProp_CurrentSaveManager = { "CurrentSaveManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoSaveManager, CurrentSaveManager), Z_Construct_UClass_USaveManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSaveManager_MetaData), NewProp_CurrentSaveManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutoSaveManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSaveManager_Statics::NewProp_CurrentSaveManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSaveManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAutoSaveManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SaveSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSaveManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoSaveManager_Statics::ClassParams = {
	&UAutoSaveManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAutoSaveManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSaveManager_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSaveManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoSaveManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutoSaveManager()
{
	if (!Z_Registration_Info_UClass_UAutoSaveManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoSaveManager.OuterSingleton, Z_Construct_UClass_UAutoSaveManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutoSaveManager.OuterSingleton;
}
UAutoSaveManager::UAutoSaveManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoSaveManager);
UAutoSaveManager::~UAutoSaveManager() {}
// ********** End Class UAutoSaveManager ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_AutoSaveManager_h__Script_SaveSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutoSaveManager, UAutoSaveManager::StaticClass, TEXT("UAutoSaveManager"), &Z_Registration_Info_UClass_UAutoSaveManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoSaveManager), 3743647421U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_AutoSaveManager_h__Script_SaveSystem_3169929203(TEXT("/Script/SaveSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_AutoSaveManager_h__Script_SaveSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_AutoSaveManager_h__Script_SaveSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
