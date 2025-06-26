// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Montages/MeleeMontagesManager.h"
#include "Montages/Data/WeaponMeleeAttackMontageData.h"
#include "Montages/Data/WeaponMontageData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMeleeMontagesManager() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_AWeaponMelee_NoRegister();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UMeleeMontagesManager();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UMeleeMontagesManager_NoRegister();
WEAPONSYSTEM_API UClass* Z_Construct_UClass_UWeaponMontagesManagerBase();
WEAPONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponMeleeAttackMontageData();
WEAPONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponMontageData();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMeleeMontagesManager Function GetAttackIndex ****************************
struct Z_Construct_UFunction_UMeleeMontagesManager_GetAttackIndex_Statics
{
	struct MeleeMontagesManager_eventGetAttackIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Montages/MeleeMontagesManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeleeMontagesManager_GetAttackIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeleeMontagesManager_eventGetAttackIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeleeMontagesManager_GetAttackIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeMontagesManager_GetAttackIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeMontagesManager_GetAttackIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeleeMontagesManager_GetAttackIndex_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMeleeMontagesManager, nullptr, "GetAttackIndex", Z_Construct_UFunction_UMeleeMontagesManager_GetAttackIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeMontagesManager_GetAttackIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeleeMontagesManager_GetAttackIndex_Statics::MeleeMontagesManager_eventGetAttackIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeMontagesManager_GetAttackIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeleeMontagesManager_GetAttackIndex_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMeleeMontagesManager_GetAttackIndex_Statics::MeleeMontagesManager_eventGetAttackIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeleeMontagesManager_GetAttackIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeleeMontagesManager_GetAttackIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeleeMontagesManager::execGetAttackIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAttackIndex();
	P_NATIVE_END;
}
// ********** End Class UMeleeMontagesManager Function GetAttackIndex ******************************

// ********** Begin Class UMeleeMontagesManager Function OnMontageAttackFinished *******************
struct Z_Construct_UFunction_UMeleeMontagesManager_OnMontageAttackFinished_Statics
{
	struct MeleeMontagesManager_eventOnMontageAttackFinished_Parms
	{
		bool bInterrupted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Montages/MeleeMontagesManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bInterrupted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMeleeMontagesManager_OnMontageAttackFinished_Statics::NewProp_bInterrupted_SetBit(void* Obj)
{
	((MeleeMontagesManager_eventOnMontageAttackFinished_Parms*)Obj)->bInterrupted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeleeMontagesManager_OnMontageAttackFinished_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MeleeMontagesManager_eventOnMontageAttackFinished_Parms), &Z_Construct_UFunction_UMeleeMontagesManager_OnMontageAttackFinished_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeleeMontagesManager_OnMontageAttackFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeMontagesManager_OnMontageAttackFinished_Statics::NewProp_bInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeMontagesManager_OnMontageAttackFinished_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeleeMontagesManager_OnMontageAttackFinished_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMeleeMontagesManager, nullptr, "OnMontageAttackFinished", Z_Construct_UFunction_UMeleeMontagesManager_OnMontageAttackFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeMontagesManager_OnMontageAttackFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeleeMontagesManager_OnMontageAttackFinished_Statics::MeleeMontagesManager_eventOnMontageAttackFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeMontagesManager_OnMontageAttackFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeleeMontagesManager_OnMontageAttackFinished_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMeleeMontagesManager_OnMontageAttackFinished_Statics::MeleeMontagesManager_eventOnMontageAttackFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeleeMontagesManager_OnMontageAttackFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeleeMontagesManager_OnMontageAttackFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeleeMontagesManager::execOnMontageAttackFinished)
{
	P_GET_UBOOL(Z_Param_bInterrupted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageAttackFinished(Z_Param_bInterrupted);
	P_NATIVE_END;
}
// ********** End Class UMeleeMontagesManager Function OnMontageAttackFinished *********************

// ********** Begin Class UMeleeMontagesManager ****************************************************
void UMeleeMontagesManager::StaticRegisterNativesUMeleeMontagesManager()
{
	UClass* Class = UMeleeMontagesManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAttackIndex", &UMeleeMontagesManager::execGetAttackIndex },
		{ "OnMontageAttackFinished", &UMeleeMontagesManager::execOnMontageAttackFinished },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMeleeMontagesManager;
UClass* UMeleeMontagesManager::GetPrivateStaticClass()
{
	using TClass = UMeleeMontagesManager;
	if (!Z_Registration_Info_UClass_UMeleeMontagesManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MeleeMontagesManager"),
			Z_Registration_Info_UClass_UMeleeMontagesManager.InnerSingleton,
			StaticRegisterNativesUMeleeMontagesManager,
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
	return Z_Registration_Info_UClass_UMeleeMontagesManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UMeleeMontagesManager_NoRegister()
{
	return UMeleeMontagesManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMeleeMontagesManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Montages/MeleeMontagesManager.h" },
		{ "ModuleRelativePath", "Public/Montages/MeleeMontagesManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefensiveMontageData_MetaData[] = {
		{ "Category", "Weapon|Actions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -- Montages --\n" },
#endif
		{ "ModuleRelativePath", "Public/Montages/MeleeMontagesManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-- Montages --" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackMontages_MetaData[] = {
		{ "Category", "Weapon|Actions" },
		{ "ModuleRelativePath", "Public/Montages/MeleeMontagesManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMelee_MetaData[] = {
		{ "ModuleRelativePath", "Public/Montages/MeleeMontagesManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefensiveMontageData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackMontages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AttackMontages;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMelee;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeleeMontagesManager_GetAttackIndex, "GetAttackIndex" }, // 3370465106
		{ &Z_Construct_UFunction_UMeleeMontagesManager_OnMontageAttackFinished, "OnMontageAttackFinished" }, // 2239300983
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeleeMontagesManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeleeMontagesManager_Statics::NewProp_DefensiveMontageData = { "DefensiveMontageData", nullptr, (EPropertyFlags)0x0010008000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeleeMontagesManager, DefensiveMontageData), Z_Construct_UScriptStruct_FWeaponMontageData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefensiveMontageData_MetaData), NewProp_DefensiveMontageData_MetaData) }; // 397967327
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeleeMontagesManager_Statics::NewProp_AttackMontages_Inner = { "AttackMontages", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWeaponMeleeAttackMontageData, METADATA_PARAMS(0, nullptr) }; // 3101345413
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMeleeMontagesManager_Statics::NewProp_AttackMontages = { "AttackMontages", nullptr, (EPropertyFlags)0x0010008000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeleeMontagesManager, AttackMontages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackMontages_MetaData), NewProp_AttackMontages_MetaData) }; // 3101345413
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeleeMontagesManager_Statics::NewProp_WeaponMelee = { "WeaponMelee", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeleeMontagesManager, WeaponMelee), Z_Construct_UClass_AWeaponMelee_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponMelee_MetaData), NewProp_WeaponMelee_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeleeMontagesManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeleeMontagesManager_Statics::NewProp_DefensiveMontageData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeleeMontagesManager_Statics::NewProp_AttackMontages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeleeMontagesManager_Statics::NewProp_AttackMontages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeleeMontagesManager_Statics::NewProp_WeaponMelee,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeMontagesManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeleeMontagesManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWeaponMontagesManagerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeMontagesManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeleeMontagesManager_Statics::ClassParams = {
	&UMeleeMontagesManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMeleeMontagesManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeMontagesManager_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeMontagesManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeleeMontagesManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeleeMontagesManager()
{
	if (!Z_Registration_Info_UClass_UMeleeMontagesManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeleeMontagesManager.OuterSingleton, Z_Construct_UClass_UMeleeMontagesManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeleeMontagesManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeleeMontagesManager);
UMeleeMontagesManager::~UMeleeMontagesManager() {}
// ********** End Class UMeleeMontagesManager ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_MeleeMontagesManager_h__Script_WeaponSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeleeMontagesManager, UMeleeMontagesManager::StaticClass, TEXT("UMeleeMontagesManager"), &Z_Registration_Info_UClass_UMeleeMontagesManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeleeMontagesManager), 2251196987U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_MeleeMontagesManager_h__Script_WeaponSystem_2861431641(TEXT("/Script/WeaponSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_MeleeMontagesManager_h__Script_WeaponSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_MeleeMontagesManager_h__Script_WeaponSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
