// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Montages/Data/WeaponMontageData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWeaponMontageData() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
UPackage* Z_Construct_UPackage__Script_WeaponSystem();
WEAPONSYSTEM_API UEnum* Z_Construct_UEnum_WeaponSystem_EMontageEndPriority();
WEAPONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnMontageBegin__DelegateSignature();
WEAPONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnMontageFinished__DelegateSignature();
WEAPONSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponMontageData();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnMontageBegin *******************************************************
struct Z_Construct_UDelegateFunction_WeaponSystem_OnMontageBegin__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Montages/Data/WeaponMontageData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_WeaponSystem_OnMontageBegin__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem, nullptr, "OnMontageBegin__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnMontageBegin__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WeaponSystem_OnMontageBegin__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnMontageBegin__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystem_OnMontageBegin__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMontageBegin_DelegateWrapper(const FMulticastScriptDelegate& OnMontageBegin)
{
	OnMontageBegin.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnMontageBegin *********************************************************

// ********** Begin Delegate FOnMontageFinished ****************************************************
struct Z_Construct_UDelegateFunction_WeaponSystem_OnMontageFinished__DelegateSignature_Statics
{
	struct _Script_WeaponSystem_eventOnMontageFinished_Parms
	{
		bool bInterrupted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Montages/Data/WeaponMontageData.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bInterrupted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_WeaponSystem_OnMontageFinished__DelegateSignature_Statics::NewProp_bInterrupted_SetBit(void* Obj)
{
	((_Script_WeaponSystem_eventOnMontageFinished_Parms*)Obj)->bInterrupted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_WeaponSystem_OnMontageFinished__DelegateSignature_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_WeaponSystem_eventOnMontageFinished_Parms), &Z_Construct_UDelegateFunction_WeaponSystem_OnMontageFinished__DelegateSignature_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WeaponSystem_OnMontageFinished__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeaponSystem_OnMontageFinished__DelegateSignature_Statics::NewProp_bInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnMontageFinished__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_WeaponSystem_OnMontageFinished__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_WeaponSystem, nullptr, "OnMontageFinished__DelegateSignature", Z_Construct_UDelegateFunction_WeaponSystem_OnMontageFinished__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnMontageFinished__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_WeaponSystem_OnMontageFinished__DelegateSignature_Statics::_Script_WeaponSystem_eventOnMontageFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeaponSystem_OnMontageFinished__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_WeaponSystem_OnMontageFinished__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_WeaponSystem_OnMontageFinished__DelegateSignature_Statics::_Script_WeaponSystem_eventOnMontageFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_WeaponSystem_OnMontageFinished__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeaponSystem_OnMontageFinished__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMontageFinished_DelegateWrapper(const FMulticastScriptDelegate& OnMontageFinished, bool bInterrupted)
{
	struct _Script_WeaponSystem_eventOnMontageFinished_Parms
	{
		bool bInterrupted;
	};
	_Script_WeaponSystem_eventOnMontageFinished_Parms Parms;
	Parms.bInterrupted=bInterrupted ? true : false;
	OnMontageFinished.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnMontageFinished ******************************************************

// ********** Begin ScriptStruct FWeaponMontageData ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWeaponMontageData;
class UScriptStruct* FWeaponMontageData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWeaponMontageData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWeaponMontageData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponMontageData, (UObject*)Z_Construct_UPackage__Script_WeaponSystem(), TEXT("WeaponMontageData"));
	}
	return Z_Registration_Info_UScriptStruct_FWeaponMontageData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FWeaponMontageData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Montages/Data/WeaponMontageData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMontageBegin_MetaData[] = {
		{ "ModuleRelativePath", "Public/Montages/Data/WeaponMontageData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMontageFinished_MetaData[] = {
		{ "ModuleRelativePath", "Public/Montages/Data/WeaponMontageData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMontage_MetaData[] = {
		{ "Category", "Weapon|Montages" },
		{ "ModuleRelativePath", "Public/Montages/Data/WeaponMontageData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWeaponMontageStopAllMontages_MetaData[] = {
		{ "Category", "Weapon|Montages" },
		{ "ModuleRelativePath", "Public/Montages/Data/WeaponMontageData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMontage_MetaData[] = {
		{ "Category", "Weapon|Montages" },
		{ "ModuleRelativePath", "Public/Montages/Data/WeaponMontageData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCharacterMontageStopAllMontages_MetaData[] = {
		{ "Category", "Weapon|Montages" },
		{ "ModuleRelativePath", "Public/Montages/Data/WeaponMontageData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MontageEndPriority_MetaData[] = {
		{ "Category", "Weapon|Montages" },
		{ "ModuleRelativePath", "Public/Montages/Data/WeaponMontageData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMontageBegin;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMontageFinished;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_WeaponMontage;
	static void NewProp_bWeaponMontageStopAllMontages_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWeaponMontageStopAllMontages;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterMontage;
	static void NewProp_bCharacterMontageStopAllMontages_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCharacterMontageStopAllMontages;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MontageEndPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponMontageData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UScriptStruct_FWeaponMontageData_Statics::NewProp_OnMontageBegin = { "OnMontageBegin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponMontageData, OnMontageBegin), Z_Construct_UDelegateFunction_WeaponSystem_OnMontageBegin__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMontageBegin_MetaData), NewProp_OnMontageBegin_MetaData) }; // 822708400
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UScriptStruct_FWeaponMontageData_Statics::NewProp_OnMontageFinished = { "OnMontageFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponMontageData, OnMontageFinished), Z_Construct_UDelegateFunction_WeaponSystem_OnMontageFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMontageFinished_MetaData), NewProp_OnMontageFinished_MetaData) }; // 2057063299
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FWeaponMontageData_Statics::NewProp_WeaponMontage = { "WeaponMontage", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponMontageData, WeaponMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponMontage_MetaData), NewProp_WeaponMontage_MetaData) };
void Z_Construct_UScriptStruct_FWeaponMontageData_Statics::NewProp_bWeaponMontageStopAllMontages_SetBit(void* Obj)
{
	((FWeaponMontageData*)Obj)->bWeaponMontageStopAllMontages = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWeaponMontageData_Statics::NewProp_bWeaponMontageStopAllMontages = { "bWeaponMontageStopAllMontages", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FWeaponMontageData), &Z_Construct_UScriptStruct_FWeaponMontageData_Statics::NewProp_bWeaponMontageStopAllMontages_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWeaponMontageStopAllMontages_MetaData), NewProp_bWeaponMontageStopAllMontages_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponMontageData_Statics::NewProp_CharacterMontage = { "CharacterMontage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponMontageData, CharacterMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterMontage_MetaData), NewProp_CharacterMontage_MetaData) };
void Z_Construct_UScriptStruct_FWeaponMontageData_Statics::NewProp_bCharacterMontageStopAllMontages_SetBit(void* Obj)
{
	((FWeaponMontageData*)Obj)->bCharacterMontageStopAllMontages = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWeaponMontageData_Statics::NewProp_bCharacterMontageStopAllMontages = { "bCharacterMontageStopAllMontages", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FWeaponMontageData), &Z_Construct_UScriptStruct_FWeaponMontageData_Statics::NewProp_bCharacterMontageStopAllMontages_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCharacterMontageStopAllMontages_MetaData), NewProp_bCharacterMontageStopAllMontages_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWeaponMontageData_Statics::NewProp_MontageEndPriority = { "MontageEndPriority", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponMontageData, MontageEndPriority), Z_Construct_UEnum_WeaponSystem_EMontageEndPriority, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MontageEndPriority_MetaData), NewProp_MontageEndPriority_MetaData) }; // 1085634118
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponMontageData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponMontageData_Statics::NewProp_OnMontageBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponMontageData_Statics::NewProp_OnMontageFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponMontageData_Statics::NewProp_WeaponMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponMontageData_Statics::NewProp_bWeaponMontageStopAllMontages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponMontageData_Statics::NewProp_CharacterMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponMontageData_Statics::NewProp_bCharacterMontageStopAllMontages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponMontageData_Statics::NewProp_MontageEndPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponMontageData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponMontageData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WeaponSystem,
	nullptr,
	&NewStructOps,
	"WeaponMontageData",
	Z_Construct_UScriptStruct_FWeaponMontageData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponMontageData_Statics::PropPointers),
	sizeof(FWeaponMontageData),
	alignof(FWeaponMontageData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponMontageData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWeaponMontageData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWeaponMontageData()
{
	if (!Z_Registration_Info_UScriptStruct_FWeaponMontageData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWeaponMontageData.InnerSingleton, Z_Construct_UScriptStruct_FWeaponMontageData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FWeaponMontageData.InnerSingleton;
}
// ********** End ScriptStruct FWeaponMontageData **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Data_WeaponMontageData_h__Script_WeaponSystem_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWeaponMontageData::StaticStruct, Z_Construct_UScriptStruct_FWeaponMontageData_Statics::NewStructOps, TEXT("WeaponMontageData"), &Z_Registration_Info_UScriptStruct_FWeaponMontageData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponMontageData), 397967327U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Data_WeaponMontageData_h__Script_WeaponSystem_769577915(TEXT("/Script/WeaponSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Data_WeaponMontageData_h__Script_WeaponSystem_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Montages_Data_WeaponMontageData_h__Script_WeaponSystem_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
