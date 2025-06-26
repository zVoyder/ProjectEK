// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveManager.h"
#include "Data/Structs/SaveManagerData.h"
#include "Data/Structs/SlotInfoData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSaveManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
SAVESYSTEM_API UClass* Z_Construct_UClass_UDefaultSaveGame_NoRegister();
SAVESYSTEM_API UClass* Z_Construct_UClass_USaveManager();
SAVESYSTEM_API UClass* Z_Construct_UClass_USaveManager_NoRegister();
SAVESYSTEM_API UClass* Z_Construct_UClass_USlotInfoItem_NoRegister();
SAVESYSTEM_API UClass* Z_Construct_UClass_USlotInfos_NoRegister();
SAVESYSTEM_API UFunction* Z_Construct_UDelegateFunction_SaveSystem_OnLoadGame__DelegateSignature();
SAVESYSTEM_API UFunction* Z_Construct_UDelegateFunction_SaveSystem_OnNewSaveGame__DelegateSignature();
SAVESYSTEM_API UFunction* Z_Construct_UDelegateFunction_SaveSystem_OnPendingSharedLoad__DelegateSignature();
SAVESYSTEM_API UFunction* Z_Construct_UDelegateFunction_SaveSystem_OnPendingSharedSave__DelegateSignature();
SAVESYSTEM_API UFunction* Z_Construct_UDelegateFunction_SaveSystem_OnPrepareLoad__DelegateSignature();
SAVESYSTEM_API UFunction* Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSave__DelegateSignature();
SAVESYSTEM_API UFunction* Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedLoad__DelegateSignature();
SAVESYSTEM_API UFunction* Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedSave__DelegateSignature();
SAVESYSTEM_API UFunction* Z_Construct_UDelegateFunction_SaveSystem_OnSaveGame__DelegateSignature();
SAVESYSTEM_API UFunction* Z_Construct_UDelegateFunction_SaveSystem_OnSharedLoadGame__DelegateSignature();
SAVESYSTEM_API UFunction* Z_Construct_UDelegateFunction_SaveSystem_OnSharedSaveGame__DelegateSignature();
SAVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSaveManagerData();
SAVESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSlotInfoData();
UPackage* Z_Construct_UPackage__Script_SaveSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnPrepareSave ********************************************************
struct Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSave__DelegateSignature_Statics
{
	struct _Script_SaveSystem_eventOnPrepareSave_Parms
	{
		UDefaultSaveGame* SaveGameData;
		USlotInfoItem* SlotInfoItem;
		UObject* Instigator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGameData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotInfoItem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSave__DelegateSignature_Statics::NewProp_SaveGameData = { "SaveGameData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SaveSystem_eventOnPrepareSave_Parms, SaveGameData), Z_Construct_UClass_UDefaultSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSave__DelegateSignature_Statics::NewProp_SlotInfoItem = { "SlotInfoItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SaveSystem_eventOnPrepareSave_Parms, SlotInfoItem), Z_Construct_UClass_USlotInfoItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSave__DelegateSignature_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SaveSystem_eventOnPrepareSave_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSave__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSave__DelegateSignature_Statics::NewProp_SaveGameData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSave__DelegateSignature_Statics::NewProp_SlotInfoItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSave__DelegateSignature_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSave__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSave__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SaveSystem, nullptr, "OnPrepareSave__DelegateSignature", Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSave__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSave__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSave__DelegateSignature_Statics::_Script_SaveSystem_eventOnPrepareSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSave__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSave__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSave__DelegateSignature_Statics::_Script_SaveSystem_eventOnPrepareSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSave__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSave__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPrepareSave_DelegateWrapper(const FMulticastScriptDelegate& OnPrepareSave, UDefaultSaveGame* SaveGameData, USlotInfoItem* SlotInfoItem, UObject* Instigator)
{
	struct _Script_SaveSystem_eventOnPrepareSave_Parms
	{
		UDefaultSaveGame* SaveGameData;
		USlotInfoItem* SlotInfoItem;
		UObject* Instigator;
	};
	_Script_SaveSystem_eventOnPrepareSave_Parms Parms;
	Parms.SaveGameData=SaveGameData;
	Parms.SlotInfoItem=SlotInfoItem;
	Parms.Instigator=Instigator;
	OnPrepareSave.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPrepareSave **********************************************************

// ********** Begin Delegate FOnPrepareSharedSave **************************************************
struct Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedSave__DelegateSignature_Statics
{
	struct _Script_SaveSystem_eventOnPrepareSharedSave_Parms
	{
		UDefaultSaveGame* SaveGameData;
		USlotInfoItem* SlotInfoItem;
		UObject* Instigator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGameData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotInfoItem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedSave__DelegateSignature_Statics::NewProp_SaveGameData = { "SaveGameData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SaveSystem_eventOnPrepareSharedSave_Parms, SaveGameData), Z_Construct_UClass_UDefaultSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedSave__DelegateSignature_Statics::NewProp_SlotInfoItem = { "SlotInfoItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SaveSystem_eventOnPrepareSharedSave_Parms, SlotInfoItem), Z_Construct_UClass_USlotInfoItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedSave__DelegateSignature_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SaveSystem_eventOnPrepareSharedSave_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedSave__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedSave__DelegateSignature_Statics::NewProp_SaveGameData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedSave__DelegateSignature_Statics::NewProp_SlotInfoItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedSave__DelegateSignature_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedSave__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedSave__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SaveSystem, nullptr, "OnPrepareSharedSave__DelegateSignature", Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedSave__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedSave__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedSave__DelegateSignature_Statics::_Script_SaveSystem_eventOnPrepareSharedSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedSave__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedSave__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedSave__DelegateSignature_Statics::_Script_SaveSystem_eventOnPrepareSharedSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedSave__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedSave__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPrepareSharedSave_DelegateWrapper(const FMulticastScriptDelegate& OnPrepareSharedSave, UDefaultSaveGame* SaveGameData, USlotInfoItem* SlotInfoItem, UObject* Instigator)
{
	struct _Script_SaveSystem_eventOnPrepareSharedSave_Parms
	{
		UDefaultSaveGame* SaveGameData;
		USlotInfoItem* SlotInfoItem;
		UObject* Instigator;
	};
	_Script_SaveSystem_eventOnPrepareSharedSave_Parms Parms;
	Parms.SaveGameData=SaveGameData;
	Parms.SlotInfoItem=SlotInfoItem;
	Parms.Instigator=Instigator;
	OnPrepareSharedSave.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPrepareSharedSave ****************************************************

// ********** Begin Delegate FOnPrepareLoad ********************************************************
struct Z_Construct_UDelegateFunction_SaveSystem_OnPrepareLoad__DelegateSignature_Statics
{
	struct _Script_SaveSystem_eventOnPrepareLoad_Parms
	{
		UDefaultSaveGame* SaveGameData;
		UObject* Instigator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGameData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SaveSystem_OnPrepareLoad__DelegateSignature_Statics::NewProp_SaveGameData = { "SaveGameData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SaveSystem_eventOnPrepareLoad_Parms, SaveGameData), Z_Construct_UClass_UDefaultSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SaveSystem_OnPrepareLoad__DelegateSignature_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SaveSystem_eventOnPrepareLoad_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SaveSystem_OnPrepareLoad__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SaveSystem_OnPrepareLoad__DelegateSignature_Statics::NewProp_SaveGameData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SaveSystem_OnPrepareLoad__DelegateSignature_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnPrepareLoad__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SaveSystem_OnPrepareLoad__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SaveSystem, nullptr, "OnPrepareLoad__DelegateSignature", Z_Construct_UDelegateFunction_SaveSystem_OnPrepareLoad__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnPrepareLoad__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SaveSystem_OnPrepareLoad__DelegateSignature_Statics::_Script_SaveSystem_eventOnPrepareLoad_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnPrepareLoad__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SaveSystem_OnPrepareLoad__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SaveSystem_OnPrepareLoad__DelegateSignature_Statics::_Script_SaveSystem_eventOnPrepareLoad_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SaveSystem_OnPrepareLoad__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SaveSystem_OnPrepareLoad__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPrepareLoad_DelegateWrapper(const FMulticastScriptDelegate& OnPrepareLoad, UDefaultSaveGame* SaveGameData, UObject* Instigator)
{
	struct _Script_SaveSystem_eventOnPrepareLoad_Parms
	{
		UDefaultSaveGame* SaveGameData;
		UObject* Instigator;
	};
	_Script_SaveSystem_eventOnPrepareLoad_Parms Parms;
	Parms.SaveGameData=SaveGameData;
	Parms.Instigator=Instigator;
	OnPrepareLoad.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPrepareLoad **********************************************************

// ********** Begin Delegate FOnPrepareSharedLoad **************************************************
struct Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedLoad__DelegateSignature_Statics
{
	struct _Script_SaveSystem_eventOnPrepareSharedLoad_Parms
	{
		UDefaultSaveGame* SaveGameData;
		UObject* Instigator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGameData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedLoad__DelegateSignature_Statics::NewProp_SaveGameData = { "SaveGameData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SaveSystem_eventOnPrepareSharedLoad_Parms, SaveGameData), Z_Construct_UClass_UDefaultSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedLoad__DelegateSignature_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SaveSystem_eventOnPrepareSharedLoad_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedLoad__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedLoad__DelegateSignature_Statics::NewProp_SaveGameData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedLoad__DelegateSignature_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedLoad__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedLoad__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SaveSystem, nullptr, "OnPrepareSharedLoad__DelegateSignature", Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedLoad__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedLoad__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedLoad__DelegateSignature_Statics::_Script_SaveSystem_eventOnPrepareSharedLoad_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedLoad__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedLoad__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedLoad__DelegateSignature_Statics::_Script_SaveSystem_eventOnPrepareSharedLoad_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedLoad__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedLoad__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPrepareSharedLoad_DelegateWrapper(const FMulticastScriptDelegate& OnPrepareSharedLoad, UDefaultSaveGame* SaveGameData, UObject* Instigator)
{
	struct _Script_SaveSystem_eventOnPrepareSharedLoad_Parms
	{
		UDefaultSaveGame* SaveGameData;
		UObject* Instigator;
	};
	_Script_SaveSystem_eventOnPrepareSharedLoad_Parms Parms;
	Parms.SaveGameData=SaveGameData;
	Parms.Instigator=Instigator;
	OnPrepareSharedLoad.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPrepareSharedLoad ****************************************************

// ********** Begin Delegate FOnSaveGame ***********************************************************
struct Z_Construct_UDelegateFunction_SaveSystem_OnSaveGame__DelegateSignature_Statics
{
	struct _Script_SaveSystem_eventOnSaveGame_Parms
	{
		FString SlotName;
		int32 UserIndex;
		bool bSuccess;
		UDefaultSaveGame* SaveGameData;
		UObject* Instigator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGameData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SaveSystem_OnSaveGame__DelegateSignature_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SaveSystem_eventOnSaveGame_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SaveSystem_OnSaveGame__DelegateSignature_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SaveSystem_eventOnSaveGame_Parms, UserIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserIndex_MetaData), NewProp_UserIndex_MetaData) };
void Z_Construct_UDelegateFunction_SaveSystem_OnSaveGame__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_SaveSystem_eventOnSaveGame_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SaveSystem_OnSaveGame__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SaveSystem_eventOnSaveGame_Parms), &Z_Construct_UDelegateFunction_SaveSystem_OnSaveGame__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SaveSystem_OnSaveGame__DelegateSignature_Statics::NewProp_SaveGameData = { "SaveGameData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SaveSystem_eventOnSaveGame_Parms, SaveGameData), Z_Construct_UClass_UDefaultSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SaveSystem_OnSaveGame__DelegateSignature_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SaveSystem_eventOnSaveGame_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SaveSystem_OnSaveGame__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SaveSystem_OnSaveGame__DelegateSignature_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SaveSystem_OnSaveGame__DelegateSignature_Statics::NewProp_UserIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SaveSystem_OnSaveGame__DelegateSignature_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SaveSystem_OnSaveGame__DelegateSignature_Statics::NewProp_SaveGameData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SaveSystem_OnSaveGame__DelegateSignature_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnSaveGame__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SaveSystem_OnSaveGame__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SaveSystem, nullptr, "OnSaveGame__DelegateSignature", Z_Construct_UDelegateFunction_SaveSystem_OnSaveGame__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnSaveGame__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SaveSystem_OnSaveGame__DelegateSignature_Statics::_Script_SaveSystem_eventOnSaveGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnSaveGame__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SaveSystem_OnSaveGame__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SaveSystem_OnSaveGame__DelegateSignature_Statics::_Script_SaveSystem_eventOnSaveGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SaveSystem_OnSaveGame__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SaveSystem_OnSaveGame__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSaveGame_DelegateWrapper(const FMulticastScriptDelegate& OnSaveGame, const FString& SlotName, const int32 UserIndex, bool bSuccess, UDefaultSaveGame* SaveGameData, UObject* Instigator)
{
	struct _Script_SaveSystem_eventOnSaveGame_Parms
	{
		FString SlotName;
		int32 UserIndex;
		bool bSuccess;
		UDefaultSaveGame* SaveGameData;
		UObject* Instigator;
	};
	_Script_SaveSystem_eventOnSaveGame_Parms Parms;
	Parms.SlotName=SlotName;
	Parms.UserIndex=UserIndex;
	Parms.bSuccess=bSuccess ? true : false;
	Parms.SaveGameData=SaveGameData;
	Parms.Instigator=Instigator;
	OnSaveGame.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSaveGame *************************************************************

// ********** Begin Delegate FOnSharedSaveGame *****************************************************
struct Z_Construct_UDelegateFunction_SaveSystem_OnSharedSaveGame__DelegateSignature_Statics
{
	struct _Script_SaveSystem_eventOnSharedSaveGame_Parms
	{
		FString SlotName;
		int32 UserIndex;
		bool bSuccess;
		UDefaultSaveGame* SaveGameData;
		UObject* Instigator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGameData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SaveSystem_OnSharedSaveGame__DelegateSignature_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SaveSystem_eventOnSharedSaveGame_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SaveSystem_OnSharedSaveGame__DelegateSignature_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SaveSystem_eventOnSharedSaveGame_Parms, UserIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserIndex_MetaData), NewProp_UserIndex_MetaData) };
void Z_Construct_UDelegateFunction_SaveSystem_OnSharedSaveGame__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((_Script_SaveSystem_eventOnSharedSaveGame_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SaveSystem_OnSharedSaveGame__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SaveSystem_eventOnSharedSaveGame_Parms), &Z_Construct_UDelegateFunction_SaveSystem_OnSharedSaveGame__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SaveSystem_OnSharedSaveGame__DelegateSignature_Statics::NewProp_SaveGameData = { "SaveGameData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SaveSystem_eventOnSharedSaveGame_Parms, SaveGameData), Z_Construct_UClass_UDefaultSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SaveSystem_OnSharedSaveGame__DelegateSignature_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SaveSystem_eventOnSharedSaveGame_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SaveSystem_OnSharedSaveGame__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SaveSystem_OnSharedSaveGame__DelegateSignature_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SaveSystem_OnSharedSaveGame__DelegateSignature_Statics::NewProp_UserIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SaveSystem_OnSharedSaveGame__DelegateSignature_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SaveSystem_OnSharedSaveGame__DelegateSignature_Statics::NewProp_SaveGameData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SaveSystem_OnSharedSaveGame__DelegateSignature_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnSharedSaveGame__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SaveSystem_OnSharedSaveGame__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SaveSystem, nullptr, "OnSharedSaveGame__DelegateSignature", Z_Construct_UDelegateFunction_SaveSystem_OnSharedSaveGame__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnSharedSaveGame__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SaveSystem_OnSharedSaveGame__DelegateSignature_Statics::_Script_SaveSystem_eventOnSharedSaveGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnSharedSaveGame__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SaveSystem_OnSharedSaveGame__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SaveSystem_OnSharedSaveGame__DelegateSignature_Statics::_Script_SaveSystem_eventOnSharedSaveGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SaveSystem_OnSharedSaveGame__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SaveSystem_OnSharedSaveGame__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSharedSaveGame_DelegateWrapper(const FMulticastScriptDelegate& OnSharedSaveGame, const FString& SlotName, const int32 UserIndex, bool bSuccess, UDefaultSaveGame* SaveGameData, UObject* Instigator)
{
	struct _Script_SaveSystem_eventOnSharedSaveGame_Parms
	{
		FString SlotName;
		int32 UserIndex;
		bool bSuccess;
		UDefaultSaveGame* SaveGameData;
		UObject* Instigator;
	};
	_Script_SaveSystem_eventOnSharedSaveGame_Parms Parms;
	Parms.SlotName=SlotName;
	Parms.UserIndex=UserIndex;
	Parms.bSuccess=bSuccess ? true : false;
	Parms.SaveGameData=SaveGameData;
	Parms.Instigator=Instigator;
	OnSharedSaveGame.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSharedSaveGame *******************************************************

// ********** Begin Delegate FOnLoadGame ***********************************************************
struct Z_Construct_UDelegateFunction_SaveSystem_OnLoadGame__DelegateSignature_Statics
{
	struct _Script_SaveSystem_eventOnLoadGame_Parms
	{
		FString SlotName;
		int32 UserIndex;
		UDefaultSaveGame* SaveGameData;
		UObject* Instigator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGameData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SaveSystem_OnLoadGame__DelegateSignature_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SaveSystem_eventOnLoadGame_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SaveSystem_OnLoadGame__DelegateSignature_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SaveSystem_eventOnLoadGame_Parms, UserIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserIndex_MetaData), NewProp_UserIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SaveSystem_OnLoadGame__DelegateSignature_Statics::NewProp_SaveGameData = { "SaveGameData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SaveSystem_eventOnLoadGame_Parms, SaveGameData), Z_Construct_UClass_UDefaultSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SaveSystem_OnLoadGame__DelegateSignature_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SaveSystem_eventOnLoadGame_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SaveSystem_OnLoadGame__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SaveSystem_OnLoadGame__DelegateSignature_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SaveSystem_OnLoadGame__DelegateSignature_Statics::NewProp_UserIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SaveSystem_OnLoadGame__DelegateSignature_Statics::NewProp_SaveGameData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SaveSystem_OnLoadGame__DelegateSignature_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnLoadGame__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SaveSystem_OnLoadGame__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SaveSystem, nullptr, "OnLoadGame__DelegateSignature", Z_Construct_UDelegateFunction_SaveSystem_OnLoadGame__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnLoadGame__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SaveSystem_OnLoadGame__DelegateSignature_Statics::_Script_SaveSystem_eventOnLoadGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnLoadGame__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SaveSystem_OnLoadGame__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SaveSystem_OnLoadGame__DelegateSignature_Statics::_Script_SaveSystem_eventOnLoadGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SaveSystem_OnLoadGame__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SaveSystem_OnLoadGame__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLoadGame_DelegateWrapper(const FMulticastScriptDelegate& OnLoadGame, const FString& SlotName, const int32 UserIndex, UDefaultSaveGame* SaveGameData, UObject* Instigator)
{
	struct _Script_SaveSystem_eventOnLoadGame_Parms
	{
		FString SlotName;
		int32 UserIndex;
		UDefaultSaveGame* SaveGameData;
		UObject* Instigator;
	};
	_Script_SaveSystem_eventOnLoadGame_Parms Parms;
	Parms.SlotName=SlotName;
	Parms.UserIndex=UserIndex;
	Parms.SaveGameData=SaveGameData;
	Parms.Instigator=Instigator;
	OnLoadGame.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnLoadGame *************************************************************

// ********** Begin Delegate FOnSharedLoadGame *****************************************************
struct Z_Construct_UDelegateFunction_SaveSystem_OnSharedLoadGame__DelegateSignature_Statics
{
	struct _Script_SaveSystem_eventOnSharedLoadGame_Parms
	{
		FString SlotName;
		int32 UserIndex;
		UDefaultSaveGame* SaveGameData;
		UObject* Instigator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGameData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SaveSystem_OnSharedLoadGame__DelegateSignature_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SaveSystem_eventOnSharedLoadGame_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SaveSystem_OnSharedLoadGame__DelegateSignature_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SaveSystem_eventOnSharedLoadGame_Parms, UserIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserIndex_MetaData), NewProp_UserIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SaveSystem_OnSharedLoadGame__DelegateSignature_Statics::NewProp_SaveGameData = { "SaveGameData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SaveSystem_eventOnSharedLoadGame_Parms, SaveGameData), Z_Construct_UClass_UDefaultSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SaveSystem_OnSharedLoadGame__DelegateSignature_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SaveSystem_eventOnSharedLoadGame_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SaveSystem_OnSharedLoadGame__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SaveSystem_OnSharedLoadGame__DelegateSignature_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SaveSystem_OnSharedLoadGame__DelegateSignature_Statics::NewProp_UserIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SaveSystem_OnSharedLoadGame__DelegateSignature_Statics::NewProp_SaveGameData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SaveSystem_OnSharedLoadGame__DelegateSignature_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnSharedLoadGame__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SaveSystem_OnSharedLoadGame__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SaveSystem, nullptr, "OnSharedLoadGame__DelegateSignature", Z_Construct_UDelegateFunction_SaveSystem_OnSharedLoadGame__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnSharedLoadGame__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SaveSystem_OnSharedLoadGame__DelegateSignature_Statics::_Script_SaveSystem_eventOnSharedLoadGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnSharedLoadGame__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SaveSystem_OnSharedLoadGame__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SaveSystem_OnSharedLoadGame__DelegateSignature_Statics::_Script_SaveSystem_eventOnSharedLoadGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SaveSystem_OnSharedLoadGame__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SaveSystem_OnSharedLoadGame__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSharedLoadGame_DelegateWrapper(const FMulticastScriptDelegate& OnSharedLoadGame, const FString& SlotName, const int32 UserIndex, UDefaultSaveGame* SaveGameData, UObject* Instigator)
{
	struct _Script_SaveSystem_eventOnSharedLoadGame_Parms
	{
		FString SlotName;
		int32 UserIndex;
		UDefaultSaveGame* SaveGameData;
		UObject* Instigator;
	};
	_Script_SaveSystem_eventOnSharedLoadGame_Parms Parms;
	Parms.SlotName=SlotName;
	Parms.UserIndex=UserIndex;
	Parms.SaveGameData=SaveGameData;
	Parms.Instigator=Instigator;
	OnSharedLoadGame.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnSharedLoadGame *******************************************************

// ********** Begin Delegate FOnPendingSharedSave **************************************************
struct Z_Construct_UDelegateFunction_SaveSystem_OnPendingSharedSave__DelegateSignature_Statics
{
	struct _Script_SaveSystem_eventOnPendingSharedSave_Parms
	{
		UObject* Instigator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SaveSystem_OnPendingSharedSave__DelegateSignature_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SaveSystem_eventOnPendingSharedSave_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SaveSystem_OnPendingSharedSave__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SaveSystem_OnPendingSharedSave__DelegateSignature_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnPendingSharedSave__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SaveSystem_OnPendingSharedSave__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SaveSystem, nullptr, "OnPendingSharedSave__DelegateSignature", Z_Construct_UDelegateFunction_SaveSystem_OnPendingSharedSave__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnPendingSharedSave__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SaveSystem_OnPendingSharedSave__DelegateSignature_Statics::_Script_SaveSystem_eventOnPendingSharedSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnPendingSharedSave__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SaveSystem_OnPendingSharedSave__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SaveSystem_OnPendingSharedSave__DelegateSignature_Statics::_Script_SaveSystem_eventOnPendingSharedSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SaveSystem_OnPendingSharedSave__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SaveSystem_OnPendingSharedSave__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPendingSharedSave_DelegateWrapper(const FMulticastScriptDelegate& OnPendingSharedSave, UObject* Instigator)
{
	struct _Script_SaveSystem_eventOnPendingSharedSave_Parms
	{
		UObject* Instigator;
	};
	_Script_SaveSystem_eventOnPendingSharedSave_Parms Parms;
	Parms.Instigator=Instigator;
	OnPendingSharedSave.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPendingSharedSave ****************************************************

// ********** Begin Delegate FOnPendingSharedLoad **************************************************
struct Z_Construct_UDelegateFunction_SaveSystem_OnPendingSharedLoad__DelegateSignature_Statics
{
	struct _Script_SaveSystem_eventOnPendingSharedLoad_Parms
	{
		UObject* Instigator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SaveSystem_OnPendingSharedLoad__DelegateSignature_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SaveSystem_eventOnPendingSharedLoad_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SaveSystem_OnPendingSharedLoad__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SaveSystem_OnPendingSharedLoad__DelegateSignature_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnPendingSharedLoad__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SaveSystem_OnPendingSharedLoad__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SaveSystem, nullptr, "OnPendingSharedLoad__DelegateSignature", Z_Construct_UDelegateFunction_SaveSystem_OnPendingSharedLoad__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnPendingSharedLoad__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SaveSystem_OnPendingSharedLoad__DelegateSignature_Statics::_Script_SaveSystem_eventOnPendingSharedLoad_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnPendingSharedLoad__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SaveSystem_OnPendingSharedLoad__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SaveSystem_OnPendingSharedLoad__DelegateSignature_Statics::_Script_SaveSystem_eventOnPendingSharedLoad_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SaveSystem_OnPendingSharedLoad__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SaveSystem_OnPendingSharedLoad__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPendingSharedLoad_DelegateWrapper(const FMulticastScriptDelegate& OnPendingSharedLoad, UObject* Instigator)
{
	struct _Script_SaveSystem_eventOnPendingSharedLoad_Parms
	{
		UObject* Instigator;
	};
	_Script_SaveSystem_eventOnPendingSharedLoad_Parms Parms;
	Parms.Instigator=Instigator;
	OnPendingSharedLoad.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPendingSharedLoad ****************************************************

// ********** Begin Delegate FOnNewSaveGame ********************************************************
struct Z_Construct_UDelegateFunction_SaveSystem_OnNewSaveGame__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SaveSystem_OnNewSaveGame__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SaveSystem, nullptr, "OnNewSaveGame__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnNewSaveGame__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SaveSystem_OnNewSaveGame__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_SaveSystem_OnNewSaveGame__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SaveSystem_OnNewSaveGame__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnNewSaveGame_DelegateWrapper(const FMulticastScriptDelegate& OnNewSaveGame)
{
	OnNewSaveGame.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnNewSaveGame **********************************************************

// ********** Begin Class USaveManager Function DeleteAllSlots *************************************
struct Z_Construct_UFunction_USaveManager_DeleteAllSlots_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_DeleteAllSlots_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "DeleteAllSlots", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_DeleteAllSlots_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveManager_DeleteAllSlots_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USaveManager_DeleteAllSlots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_DeleteAllSlots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveManager::execDeleteAllSlots)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteAllSlots();
	P_NATIVE_END;
}
// ********** End Class USaveManager Function DeleteAllSlots ***************************************

// ********** Begin Class USaveManager Function DeleteSlot *****************************************
struct Z_Construct_UFunction_USaveManager_DeleteSlot_Statics
{
	struct SaveManager_eventDeleteSlot_Parms
	{
		FName SlotName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveManager_eventDeleteSlot_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
void Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SaveManager_eventDeleteSlot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SaveManager_eventDeleteSlot_Parms), &Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "DeleteSlot", Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::SaveManager_eventDeleteSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::SaveManager_eventDeleteSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveManager_DeleteSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_DeleteSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveManager::execDeleteSlot)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SlotName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DeleteSlot(Z_Param_SlotName);
	P_NATIVE_END;
}
// ********** End Class USaveManager Function DeleteSlot *******************************************

// ********** Begin Class USaveManager Function GetSaveGameInstance ********************************
struct Z_Construct_UFunction_USaveManager_GetSaveGameInstance_Statics
{
	struct SaveManager_eventGetSaveGameInstance_Parms
	{
		UDefaultSaveGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveManager_GetSaveGameInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveManager_eventGetSaveGameInstance_Parms, ReturnValue), Z_Construct_UClass_UDefaultSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_GetSaveGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_GetSaveGameInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetSaveGameInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_GetSaveGameInstance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "GetSaveGameInstance", Z_Construct_UFunction_USaveManager_GetSaveGameInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetSaveGameInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveManager_GetSaveGameInstance_Statics::SaveManager_eventGetSaveGameInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetSaveGameInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveManager_GetSaveGameInstance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USaveManager_GetSaveGameInstance_Statics::SaveManager_eventGetSaveGameInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveManager_GetSaveGameInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_GetSaveGameInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveManager::execGetSaveGameInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDefaultSaveGame**)Z_Param__Result=P_THIS->GetSaveGameInstance();
	P_NATIVE_END;
}
// ********** End Class USaveManager Function GetSaveGameInstance **********************************

// ********** Begin Class USaveManager Function GetSaveInfos ***************************************
struct Z_Construct_UFunction_USaveManager_GetSaveInfos_Statics
{
	struct SaveManager_eventGetSaveInfos_Parms
	{
		TArray<FSlotInfoData> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveManager_GetSaveInfos_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSlotInfoData, METADATA_PARAMS(0, nullptr) }; // 3154120906
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveManager_GetSaveInfos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveManager_eventGetSaveInfos_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3154120906
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_GetSaveInfos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_GetSaveInfos_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_GetSaveInfos_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetSaveInfos_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_GetSaveInfos_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "GetSaveInfos", Z_Construct_UFunction_USaveManager_GetSaveInfos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetSaveInfos_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveManager_GetSaveInfos_Statics::SaveManager_eventGetSaveInfos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetSaveInfos_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveManager_GetSaveInfos_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USaveManager_GetSaveInfos_Statics::SaveManager_eventGetSaveInfos_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveManager_GetSaveInfos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_GetSaveInfos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveManager::execGetSaveInfos)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FSlotInfoData>*)Z_Param__Result=P_THIS->GetSaveInfos();
	P_NATIVE_END;
}
// ********** End Class USaveManager Function GetSaveInfos *****************************************

// ********** Begin Class USaveManager Function GetSaveMasterID ************************************
struct Z_Construct_UFunction_USaveManager_GetSaveMasterID_Statics
{
	struct SaveManager_eventGetSaveMasterID_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USaveManager_GetSaveMasterID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveManager_eventGetSaveMasterID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_GetSaveMasterID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_GetSaveMasterID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetSaveMasterID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_GetSaveMasterID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "GetSaveMasterID", Z_Construct_UFunction_USaveManager_GetSaveMasterID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetSaveMasterID_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveManager_GetSaveMasterID_Statics::SaveManager_eventGetSaveMasterID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetSaveMasterID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveManager_GetSaveMasterID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USaveManager_GetSaveMasterID_Statics::SaveManager_eventGetSaveMasterID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveManager_GetSaveMasterID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_GetSaveMasterID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveManager::execGetSaveMasterID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetSaveMasterID();
	P_NATIVE_END;
}
// ********** End Class USaveManager Function GetSaveMasterID **************************************

// ********** Begin Class USaveManager Function GetSharedSaveGameInstance **************************
struct Z_Construct_UFunction_USaveManager_GetSharedSaveGameInstance_Statics
{
	struct SaveManager_eventGetSharedSaveGameInstance_Parms
	{
		UDefaultSaveGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveManager_GetSharedSaveGameInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveManager_eventGetSharedSaveGameInstance_Parms, ReturnValue), Z_Construct_UClass_UDefaultSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_GetSharedSaveGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_GetSharedSaveGameInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetSharedSaveGameInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_GetSharedSaveGameInstance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "GetSharedSaveGameInstance", Z_Construct_UFunction_USaveManager_GetSharedSaveGameInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetSharedSaveGameInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveManager_GetSharedSaveGameInstance_Statics::SaveManager_eventGetSharedSaveGameInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetSharedSaveGameInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveManager_GetSharedSaveGameInstance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USaveManager_GetSharedSaveGameInstance_Statics::SaveManager_eventGetSharedSaveGameInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveManager_GetSharedSaveGameInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_GetSharedSaveGameInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveManager::execGetSharedSaveGameInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDefaultSaveGame**)Z_Param__Result=P_THIS->GetSharedSaveGameInstance();
	P_NATIVE_END;
}
// ********** End Class USaveManager Function GetSharedSaveGameInstance ****************************

// ********** Begin Class USaveManager Function GetStatus ******************************************
struct Z_Construct_UFunction_USaveManager_GetStatus_Statics
{
	struct SaveManager_eventGetStatus_Parms
	{
		bool OutIsLoading;
		bool OutIsSaving;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_OutIsLoading_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutIsLoading;
	static void NewProp_OutIsSaving_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutIsSaving;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USaveManager_GetStatus_Statics::NewProp_OutIsLoading_SetBit(void* Obj)
{
	((SaveManager_eventGetStatus_Parms*)Obj)->OutIsLoading = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveManager_GetStatus_Statics::NewProp_OutIsLoading = { "OutIsLoading", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SaveManager_eventGetStatus_Parms), &Z_Construct_UFunction_USaveManager_GetStatus_Statics::NewProp_OutIsLoading_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USaveManager_GetStatus_Statics::NewProp_OutIsSaving_SetBit(void* Obj)
{
	((SaveManager_eventGetStatus_Parms*)Obj)->OutIsSaving = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveManager_GetStatus_Statics::NewProp_OutIsSaving = { "OutIsSaving", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SaveManager_eventGetStatus_Parms), &Z_Construct_UFunction_USaveManager_GetStatus_Statics::NewProp_OutIsSaving_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USaveManager_GetStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SaveManager_eventGetStatus_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveManager_GetStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SaveManager_eventGetStatus_Parms), &Z_Construct_UFunction_USaveManager_GetStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_GetStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_GetStatus_Statics::NewProp_OutIsLoading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_GetStatus_Statics::NewProp_OutIsSaving,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_GetStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_GetStatus_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "GetStatus", Z_Construct_UFunction_USaveManager_GetStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveManager_GetStatus_Statics::SaveManager_eventGetStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveManager_GetStatus_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USaveManager_GetStatus_Statics::SaveManager_eventGetStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveManager_GetStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_GetStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveManager::execGetStatus)
{
	P_GET_UBOOL_REF(Z_Param_Out_OutIsLoading);
	P_GET_UBOOL_REF(Z_Param_Out_OutIsSaving);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetStatus(Z_Param_Out_OutIsLoading,Z_Param_Out_OutIsSaving);
	P_NATIVE_END;
}
// ********** End Class USaveManager Function GetStatus ********************************************

// ********** Begin Class USaveManager Function HasInstanceEverLoaded ******************************
struct Z_Construct_UFunction_USaveManager_HasInstanceEverLoaded_Statics
{
	struct SaveManager_eventHasInstanceEverLoaded_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USaveManager_HasInstanceEverLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SaveManager_eventHasInstanceEverLoaded_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveManager_HasInstanceEverLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SaveManager_eventHasInstanceEverLoaded_Parms), &Z_Construct_UFunction_USaveManager_HasInstanceEverLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_HasInstanceEverLoaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_HasInstanceEverLoaded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_HasInstanceEverLoaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_HasInstanceEverLoaded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "HasInstanceEverLoaded", Z_Construct_UFunction_USaveManager_HasInstanceEverLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_HasInstanceEverLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveManager_HasInstanceEverLoaded_Statics::SaveManager_eventHasInstanceEverLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_HasInstanceEverLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveManager_HasInstanceEverLoaded_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USaveManager_HasInstanceEverLoaded_Statics::SaveManager_eventHasInstanceEverLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveManager_HasInstanceEverLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_HasInstanceEverLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveManager::execHasInstanceEverLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasInstanceEverLoaded();
	P_NATIVE_END;
}
// ********** End Class USaveManager Function HasInstanceEverLoaded ********************************

// ********** Begin Class USaveManager Function HasInstanceEverSaved *******************************
struct Z_Construct_UFunction_USaveManager_HasInstanceEverSaved_Statics
{
	struct SaveManager_eventHasInstanceEverSaved_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USaveManager_HasInstanceEverSaved_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SaveManager_eventHasInstanceEverSaved_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveManager_HasInstanceEverSaved_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SaveManager_eventHasInstanceEverSaved_Parms), &Z_Construct_UFunction_USaveManager_HasInstanceEverSaved_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_HasInstanceEverSaved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_HasInstanceEverSaved_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_HasInstanceEverSaved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_HasInstanceEverSaved_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "HasInstanceEverSaved", Z_Construct_UFunction_USaveManager_HasInstanceEverSaved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_HasInstanceEverSaved_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveManager_HasInstanceEverSaved_Statics::SaveManager_eventHasInstanceEverSaved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_HasInstanceEverSaved_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveManager_HasInstanceEverSaved_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USaveManager_HasInstanceEverSaved_Statics::SaveManager_eventHasInstanceEverSaved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveManager_HasInstanceEverSaved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_HasInstanceEverSaved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveManager::execHasInstanceEverSaved)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasInstanceEverSaved();
	P_NATIVE_END;
}
// ********** End Class USaveManager Function HasInstanceEverSaved *********************************

// ********** Begin Class USaveManager Function HasSharedInstanceEverLoaded ************************
struct Z_Construct_UFunction_USaveManager_HasSharedInstanceEverLoaded_Statics
{
	struct SaveManager_eventHasSharedInstanceEverLoaded_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USaveManager_HasSharedInstanceEverLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SaveManager_eventHasSharedInstanceEverLoaded_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveManager_HasSharedInstanceEverLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SaveManager_eventHasSharedInstanceEverLoaded_Parms), &Z_Construct_UFunction_USaveManager_HasSharedInstanceEverLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_HasSharedInstanceEverLoaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_HasSharedInstanceEverLoaded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_HasSharedInstanceEverLoaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_HasSharedInstanceEverLoaded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "HasSharedInstanceEverLoaded", Z_Construct_UFunction_USaveManager_HasSharedInstanceEverLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_HasSharedInstanceEverLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveManager_HasSharedInstanceEverLoaded_Statics::SaveManager_eventHasSharedInstanceEverLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_HasSharedInstanceEverLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveManager_HasSharedInstanceEverLoaded_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USaveManager_HasSharedInstanceEverLoaded_Statics::SaveManager_eventHasSharedInstanceEverLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveManager_HasSharedInstanceEverLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_HasSharedInstanceEverLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveManager::execHasSharedInstanceEverLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasSharedInstanceEverLoaded();
	P_NATIVE_END;
}
// ********** End Class USaveManager Function HasSharedInstanceEverLoaded **************************

// ********** Begin Class USaveManager Function HasSharedInstanceEverSaved *************************
struct Z_Construct_UFunction_USaveManager_HasSharedInstanceEverSaved_Statics
{
	struct SaveManager_eventHasSharedInstanceEverSaved_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USaveManager_HasSharedInstanceEverSaved_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SaveManager_eventHasSharedInstanceEverSaved_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveManager_HasSharedInstanceEverSaved_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SaveManager_eventHasSharedInstanceEverSaved_Parms), &Z_Construct_UFunction_USaveManager_HasSharedInstanceEverSaved_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_HasSharedInstanceEverSaved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_HasSharedInstanceEverSaved_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_HasSharedInstanceEverSaved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_HasSharedInstanceEverSaved_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "HasSharedInstanceEverSaved", Z_Construct_UFunction_USaveManager_HasSharedInstanceEverSaved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_HasSharedInstanceEverSaved_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveManager_HasSharedInstanceEverSaved_Statics::SaveManager_eventHasSharedInstanceEverSaved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_HasSharedInstanceEverSaved_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveManager_HasSharedInstanceEverSaved_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USaveManager_HasSharedInstanceEverSaved_Statics::SaveManager_eventHasSharedInstanceEverSaved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveManager_HasSharedInstanceEverSaved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_HasSharedInstanceEverSaved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveManager::execHasSharedInstanceEverSaved)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasSharedInstanceEverSaved();
	P_NATIVE_END;
}
// ********** End Class USaveManager Function HasSharedInstanceEverSaved ***************************

// ********** Begin Class USaveManager Function Init ***********************************************
struct Z_Construct_UFunction_USaveManager_Init_Statics
{
	struct SaveManager_eventInit_Parms
	{
		FSaveManagerData SaveManagerData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveManagerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SaveManagerData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveManager_Init_Statics::NewProp_SaveManagerData = { "SaveManagerData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveManager_eventInit_Parms, SaveManagerData), Z_Construct_UScriptStruct_FSaveManagerData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveManagerData_MetaData), NewProp_SaveManagerData_MetaData) }; // 327736943
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_Init_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_Init_Statics::NewProp_SaveManagerData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_Init_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "Init", Z_Construct_UFunction_USaveManager_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_Init_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveManager_Init_Statics::SaveManager_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveManager_Init_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USaveManager_Init_Statics::SaveManager_eventInit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveManager_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveManager::execInit)
{
	P_GET_STRUCT(FSaveManagerData,Z_Param_SaveManagerData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init(Z_Param_SaveManagerData);
	P_NATIVE_END;
}
// ********** End Class USaveManager Function Init *************************************************

// ********** Begin Class USaveManager Function LoadSelectedSlot ***********************************
struct Z_Construct_UFunction_USaveManager_LoadSelectedSlot_Statics
{
	struct SaveManager_eventLoadSelectedSlot_Parms
	{
		UObject* Instigator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveManager_LoadSelectedSlot_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveManager_eventLoadSelectedSlot_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_LoadSelectedSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_LoadSelectedSlot_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_LoadSelectedSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_LoadSelectedSlot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "LoadSelectedSlot", Z_Construct_UFunction_USaveManager_LoadSelectedSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_LoadSelectedSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveManager_LoadSelectedSlot_Statics::SaveManager_eventLoadSelectedSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_LoadSelectedSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveManager_LoadSelectedSlot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USaveManager_LoadSelectedSlot_Statics::SaveManager_eventLoadSelectedSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveManager_LoadSelectedSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_LoadSelectedSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveManager::execLoadSelectedSlot)
{
	P_GET_OBJECT(UObject,Z_Param_Instigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadSelectedSlot(Z_Param_Instigator);
	P_NATIVE_END;
}
// ********** End Class USaveManager Function LoadSelectedSlot *************************************

// ********** Begin Class USaveManager Function LoadSelectedSlotAndSharedSlot **********************
struct Z_Construct_UFunction_USaveManager_LoadSelectedSlotAndSharedSlot_Statics
{
	struct SaveManager_eventLoadSelectedSlotAndSharedSlot_Parms
	{
		UObject* Instigator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveManager_LoadSelectedSlotAndSharedSlot_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveManager_eventLoadSelectedSlotAndSharedSlot_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_LoadSelectedSlotAndSharedSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_LoadSelectedSlotAndSharedSlot_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_LoadSelectedSlotAndSharedSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_LoadSelectedSlotAndSharedSlot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "LoadSelectedSlotAndSharedSlot", Z_Construct_UFunction_USaveManager_LoadSelectedSlotAndSharedSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_LoadSelectedSlotAndSharedSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveManager_LoadSelectedSlotAndSharedSlot_Statics::SaveManager_eventLoadSelectedSlotAndSharedSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_LoadSelectedSlotAndSharedSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveManager_LoadSelectedSlotAndSharedSlot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USaveManager_LoadSelectedSlotAndSharedSlot_Statics::SaveManager_eventLoadSelectedSlotAndSharedSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveManager_LoadSelectedSlotAndSharedSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_LoadSelectedSlotAndSharedSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveManager::execLoadSelectedSlotAndSharedSlot)
{
	P_GET_OBJECT(UObject,Z_Param_Instigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadSelectedSlotAndSharedSlot(Z_Param_Instigator);
	P_NATIVE_END;
}
// ********** End Class USaveManager Function LoadSelectedSlotAndSharedSlot ************************

// ********** Begin Class USaveManager Function LoadSharedSlot *************************************
struct Z_Construct_UFunction_USaveManager_LoadSharedSlot_Statics
{
	struct SaveManager_eventLoadSharedSlot_Parms
	{
		UObject* Instigator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveManager_LoadSharedSlot_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveManager_eventLoadSharedSlot_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_LoadSharedSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_LoadSharedSlot_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_LoadSharedSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_LoadSharedSlot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "LoadSharedSlot", Z_Construct_UFunction_USaveManager_LoadSharedSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_LoadSharedSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveManager_LoadSharedSlot_Statics::SaveManager_eventLoadSharedSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_LoadSharedSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveManager_LoadSharedSlot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USaveManager_LoadSharedSlot_Statics::SaveManager_eventLoadSharedSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveManager_LoadSharedSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_LoadSharedSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveManager::execLoadSharedSlot)
{
	P_GET_OBJECT(UObject,Z_Param_Instigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadSharedSlot(Z_Param_Instigator);
	P_NATIVE_END;
}
// ********** End Class USaveManager Function LoadSharedSlot ***************************************

// ********** Begin Class USaveManager Function ManualAndSharedSave ********************************
struct Z_Construct_UFunction_USaveManager_ManualAndSharedSave_Statics
{
	struct SaveManager_eventManualAndSharedSave_Parms
	{
		UObject* Instigator;
		bool bOverrideCurrentSlot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_bOverrideCurrentSlot", "false" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCurrentSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static void NewProp_bOverrideCurrentSlot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCurrentSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveManager_ManualAndSharedSave_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveManager_eventManualAndSharedSave_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USaveManager_ManualAndSharedSave_Statics::NewProp_bOverrideCurrentSlot_SetBit(void* Obj)
{
	((SaveManager_eventManualAndSharedSave_Parms*)Obj)->bOverrideCurrentSlot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveManager_ManualAndSharedSave_Statics::NewProp_bOverrideCurrentSlot = { "bOverrideCurrentSlot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SaveManager_eventManualAndSharedSave_Parms), &Z_Construct_UFunction_USaveManager_ManualAndSharedSave_Statics::NewProp_bOverrideCurrentSlot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideCurrentSlot_MetaData), NewProp_bOverrideCurrentSlot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_ManualAndSharedSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_ManualAndSharedSave_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_ManualAndSharedSave_Statics::NewProp_bOverrideCurrentSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_ManualAndSharedSave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_ManualAndSharedSave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "ManualAndSharedSave", Z_Construct_UFunction_USaveManager_ManualAndSharedSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_ManualAndSharedSave_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveManager_ManualAndSharedSave_Statics::SaveManager_eventManualAndSharedSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_ManualAndSharedSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveManager_ManualAndSharedSave_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USaveManager_ManualAndSharedSave_Statics::SaveManager_eventManualAndSharedSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveManager_ManualAndSharedSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_ManualAndSharedSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveManager::execManualAndSharedSave)
{
	P_GET_OBJECT(UObject,Z_Param_Instigator);
	P_GET_UBOOL(Z_Param_bOverrideCurrentSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ManualAndSharedSave(Z_Param_Instigator,Z_Param_bOverrideCurrentSlot);
	P_NATIVE_END;
}
// ********** End Class USaveManager Function ManualAndSharedSave **********************************

// ********** Begin Class USaveManager Function ManualSave *****************************************
struct Z_Construct_UFunction_USaveManager_ManualSave_Statics
{
	struct SaveManager_eventManualSave_Parms
	{
		UObject* Instigator;
		bool bOverrideCurrentSlot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_bOverrideCurrentSlot", "false" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCurrentSlot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static void NewProp_bOverrideCurrentSlot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCurrentSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveManager_ManualSave_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveManager_eventManualSave_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USaveManager_ManualSave_Statics::NewProp_bOverrideCurrentSlot_SetBit(void* Obj)
{
	((SaveManager_eventManualSave_Parms*)Obj)->bOverrideCurrentSlot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveManager_ManualSave_Statics::NewProp_bOverrideCurrentSlot = { "bOverrideCurrentSlot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SaveManager_eventManualSave_Parms), &Z_Construct_UFunction_USaveManager_ManualSave_Statics::NewProp_bOverrideCurrentSlot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideCurrentSlot_MetaData), NewProp_bOverrideCurrentSlot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_ManualSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_ManualSave_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_ManualSave_Statics::NewProp_bOverrideCurrentSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_ManualSave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_ManualSave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "ManualSave", Z_Construct_UFunction_USaveManager_ManualSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_ManualSave_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveManager_ManualSave_Statics::SaveManager_eventManualSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_ManualSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveManager_ManualSave_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USaveManager_ManualSave_Statics::SaveManager_eventManualSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveManager_ManualSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_ManualSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveManager::execManualSave)
{
	P_GET_OBJECT(UObject,Z_Param_Instigator);
	P_GET_UBOOL(Z_Param_bOverrideCurrentSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ManualSave(Z_Param_Instigator,Z_Param_bOverrideCurrentSlot);
	P_NATIVE_END;
}
// ********** End Class USaveManager Function ManualSave *******************************************

// ********** Begin Class USaveManager Function OnPendingSharedLoadEvent ***************************
struct Z_Construct_UFunction_USaveManager_OnPendingSharedLoadEvent_Statics
{
	struct SaveManager_eventOnPendingSharedLoadEvent_Parms
	{
		UObject* Instigator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveManager_OnPendingSharedLoadEvent_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveManager_eventOnPendingSharedLoadEvent_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_OnPendingSharedLoadEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_OnPendingSharedLoadEvent_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_OnPendingSharedLoadEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_OnPendingSharedLoadEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "OnPendingSharedLoadEvent", Z_Construct_UFunction_USaveManager_OnPendingSharedLoadEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_OnPendingSharedLoadEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveManager_OnPendingSharedLoadEvent_Statics::SaveManager_eventOnPendingSharedLoadEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_OnPendingSharedLoadEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveManager_OnPendingSharedLoadEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USaveManager_OnPendingSharedLoadEvent_Statics::SaveManager_eventOnPendingSharedLoadEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveManager_OnPendingSharedLoadEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_OnPendingSharedLoadEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveManager::execOnPendingSharedLoadEvent)
{
	P_GET_OBJECT(UObject,Z_Param_Instigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPendingSharedLoadEvent(Z_Param_Instigator);
	P_NATIVE_END;
}
// ********** End Class USaveManager Function OnPendingSharedLoadEvent *****************************

// ********** Begin Class USaveManager Function OnPendingSharedSaveEvent ***************************
struct Z_Construct_UFunction_USaveManager_OnPendingSharedSaveEvent_Statics
{
	struct SaveManager_eventOnPendingSharedSaveEvent_Parms
	{
		UObject* Instigator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveManager_OnPendingSharedSaveEvent_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveManager_eventOnPendingSharedSaveEvent_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_OnPendingSharedSaveEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_OnPendingSharedSaveEvent_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_OnPendingSharedSaveEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_OnPendingSharedSaveEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "OnPendingSharedSaveEvent", Z_Construct_UFunction_USaveManager_OnPendingSharedSaveEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_OnPendingSharedSaveEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveManager_OnPendingSharedSaveEvent_Statics::SaveManager_eventOnPendingSharedSaveEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_OnPendingSharedSaveEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveManager_OnPendingSharedSaveEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USaveManager_OnPendingSharedSaveEvent_Statics::SaveManager_eventOnPendingSharedSaveEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveManager_OnPendingSharedSaveEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_OnPendingSharedSaveEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveManager::execOnPendingSharedSaveEvent)
{
	P_GET_OBJECT(UObject,Z_Param_Instigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPendingSharedSaveEvent(Z_Param_Instigator);
	P_NATIVE_END;
}
// ********** End Class USaveManager Function OnPendingSharedSaveEvent *****************************

// ********** Begin Class USaveManager Function SetSaveMasterID ************************************
struct Z_Construct_UFunction_USaveManager_SetSaveMasterID_Statics
{
	struct SaveManager_eventSetSaveMasterID_Parms
	{
		FName NewSaveMasterID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewSaveMasterID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewSaveMasterID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USaveManager_SetSaveMasterID_Statics::NewProp_NewSaveMasterID = { "NewSaveMasterID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveManager_eventSetSaveMasterID_Parms, NewSaveMasterID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewSaveMasterID_MetaData), NewProp_NewSaveMasterID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_SetSaveMasterID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_SetSaveMasterID_Statics::NewProp_NewSaveMasterID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_SetSaveMasterID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_SetSaveMasterID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "SetSaveMasterID", Z_Construct_UFunction_USaveManager_SetSaveMasterID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_SetSaveMasterID_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveManager_SetSaveMasterID_Statics::SaveManager_eventSetSaveMasterID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_SetSaveMasterID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveManager_SetSaveMasterID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USaveManager_SetSaveMasterID_Statics::SaveManager_eventSetSaveMasterID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveManager_SetSaveMasterID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_SetSaveMasterID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveManager::execSetSaveMasterID)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NewSaveMasterID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSaveMasterID(Z_Param_NewSaveMasterID);
	P_NATIVE_END;
}
// ********** End Class USaveManager Function SetSaveMasterID **************************************

// ********** Begin Class USaveManager Function SharedSave *****************************************
struct Z_Construct_UFunction_USaveManager_SharedSave_Statics
{
	struct SaveManager_eventSharedSave_Parms
	{
		UObject* Instigator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveManager_SharedSave_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveManager_eventSharedSave_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_SharedSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_SharedSave_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_SharedSave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_SharedSave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "SharedSave", Z_Construct_UFunction_USaveManager_SharedSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_SharedSave_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveManager_SharedSave_Statics::SaveManager_eventSharedSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_SharedSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveManager_SharedSave_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USaveManager_SharedSave_Statics::SaveManager_eventSharedSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveManager_SharedSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_SharedSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveManager::execSharedSave)
{
	P_GET_OBJECT(UObject,Z_Param_Instigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SharedSave(Z_Param_Instigator);
	P_NATIVE_END;
}
// ********** End Class USaveManager Function SharedSave *******************************************

// ********** Begin Class USaveManager Function StartNewSaveGame ***********************************
struct Z_Construct_UFunction_USaveManager_StartNewSaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_StartNewSaveGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "StartNewSaveGame", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_StartNewSaveGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveManager_StartNewSaveGame_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USaveManager_StartNewSaveGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_StartNewSaveGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveManager::execStartNewSaveGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartNewSaveGame();
	P_NATIVE_END;
}
// ********** End Class USaveManager Function StartNewSaveGame *************************************

// ********** Begin Class USaveManager Function StartTimePlayedTimer *******************************
struct Z_Construct_UFunction_USaveManager_StartTimePlayedTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_StartTimePlayedTimer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "StartTimePlayedTimer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_StartTimePlayedTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveManager_StartTimePlayedTimer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USaveManager_StartTimePlayedTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_StartTimePlayedTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveManager::execStartTimePlayedTimer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartTimePlayedTimer();
	P_NATIVE_END;
}
// ********** End Class USaveManager Function StartTimePlayedTimer *********************************

// ********** Begin Class USaveManager *************************************************************
void USaveManager::StaticRegisterNativesUSaveManager()
{
	UClass* Class = USaveManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DeleteAllSlots", &USaveManager::execDeleteAllSlots },
		{ "DeleteSlot", &USaveManager::execDeleteSlot },
		{ "GetSaveGameInstance", &USaveManager::execGetSaveGameInstance },
		{ "GetSaveInfos", &USaveManager::execGetSaveInfos },
		{ "GetSaveMasterID", &USaveManager::execGetSaveMasterID },
		{ "GetSharedSaveGameInstance", &USaveManager::execGetSharedSaveGameInstance },
		{ "GetStatus", &USaveManager::execGetStatus },
		{ "HasInstanceEverLoaded", &USaveManager::execHasInstanceEverLoaded },
		{ "HasInstanceEverSaved", &USaveManager::execHasInstanceEverSaved },
		{ "HasSharedInstanceEverLoaded", &USaveManager::execHasSharedInstanceEverLoaded },
		{ "HasSharedInstanceEverSaved", &USaveManager::execHasSharedInstanceEverSaved },
		{ "Init", &USaveManager::execInit },
		{ "LoadSelectedSlot", &USaveManager::execLoadSelectedSlot },
		{ "LoadSelectedSlotAndSharedSlot", &USaveManager::execLoadSelectedSlotAndSharedSlot },
		{ "LoadSharedSlot", &USaveManager::execLoadSharedSlot },
		{ "ManualAndSharedSave", &USaveManager::execManualAndSharedSave },
		{ "ManualSave", &USaveManager::execManualSave },
		{ "OnPendingSharedLoadEvent", &USaveManager::execOnPendingSharedLoadEvent },
		{ "OnPendingSharedSaveEvent", &USaveManager::execOnPendingSharedSaveEvent },
		{ "SetSaveMasterID", &USaveManager::execSetSaveMasterID },
		{ "SharedSave", &USaveManager::execSharedSave },
		{ "StartNewSaveGame", &USaveManager::execStartNewSaveGame },
		{ "StartTimePlayedTimer", &USaveManager::execStartTimePlayedTimer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USaveManager;
UClass* USaveManager::GetPrivateStaticClass()
{
	using TClass = USaveManager;
	if (!Z_Registration_Info_UClass_USaveManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SaveManager"),
			Z_Registration_Info_UClass_USaveManager.InnerSingleton,
			StaticRegisterNativesUSaveManager,
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
	return Z_Registration_Info_UClass_USaveManager.InnerSingleton;
}
UClass* Z_Construct_UClass_USaveManager_NoRegister()
{
	return USaveManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USaveManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveManager.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameClass_MetaData[] = {
		{ "Category", "SaveManager" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SharedSaveGameClass_MetaData[] = {
		{ "Category", "SaveManager" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotInfoItemClass_MetaData[] = {
		{ "Category", "SaveManager" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SharedSlotInfoItemClass_MetaData[] = {
		{ "Category", "SaveManager" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElapsedTimePlayed_MetaData[] = {
		{ "Category", "SaveManager" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPrepareSave_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPrepareLoad_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSaveGame_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLoadGame_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnNewSaveGame_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPrepareSharedSave_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPrepareSharedLoad_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSharedSaveGame_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSharedLoadGame_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotSaveGameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SharedSaveGameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSlotInfos_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSlotInfoItem_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSharedSlotInfoItem_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInstigator_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_SaveGameClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SharedSaveGameClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SlotInfoItemClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SharedSlotInfoItemClass;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ElapsedTimePlayed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPrepareSave;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPrepareLoad;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSaveGame;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoadGame;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNewSaveGame;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPrepareSharedSave;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPrepareSharedLoad;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSharedSaveGame;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSharedLoadGame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotSaveGameInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SharedSaveGameInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentSlotInfos;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentSlotInfoItem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentSharedSlotInfoItem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentInstigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveManager_DeleteAllSlots, "DeleteAllSlots" }, // 3880043378
		{ &Z_Construct_UFunction_USaveManager_DeleteSlot, "DeleteSlot" }, // 61827601
		{ &Z_Construct_UFunction_USaveManager_GetSaveGameInstance, "GetSaveGameInstance" }, // 1776798182
		{ &Z_Construct_UFunction_USaveManager_GetSaveInfos, "GetSaveInfos" }, // 3418673928
		{ &Z_Construct_UFunction_USaveManager_GetSaveMasterID, "GetSaveMasterID" }, // 2867831617
		{ &Z_Construct_UFunction_USaveManager_GetSharedSaveGameInstance, "GetSharedSaveGameInstance" }, // 460893794
		{ &Z_Construct_UFunction_USaveManager_GetStatus, "GetStatus" }, // 1143909787
		{ &Z_Construct_UFunction_USaveManager_HasInstanceEverLoaded, "HasInstanceEverLoaded" }, // 1143657195
		{ &Z_Construct_UFunction_USaveManager_HasInstanceEverSaved, "HasInstanceEverSaved" }, // 3218783863
		{ &Z_Construct_UFunction_USaveManager_HasSharedInstanceEverLoaded, "HasSharedInstanceEverLoaded" }, // 192434547
		{ &Z_Construct_UFunction_USaveManager_HasSharedInstanceEverSaved, "HasSharedInstanceEverSaved" }, // 306918141
		{ &Z_Construct_UFunction_USaveManager_Init, "Init" }, // 659048683
		{ &Z_Construct_UFunction_USaveManager_LoadSelectedSlot, "LoadSelectedSlot" }, // 3340881480
		{ &Z_Construct_UFunction_USaveManager_LoadSelectedSlotAndSharedSlot, "LoadSelectedSlotAndSharedSlot" }, // 3124202078
		{ &Z_Construct_UFunction_USaveManager_LoadSharedSlot, "LoadSharedSlot" }, // 3160778299
		{ &Z_Construct_UFunction_USaveManager_ManualAndSharedSave, "ManualAndSharedSave" }, // 259631164
		{ &Z_Construct_UFunction_USaveManager_ManualSave, "ManualSave" }, // 723857423
		{ &Z_Construct_UFunction_USaveManager_OnPendingSharedLoadEvent, "OnPendingSharedLoadEvent" }, // 1146419600
		{ &Z_Construct_UFunction_USaveManager_OnPendingSharedSaveEvent, "OnPendingSharedSaveEvent" }, // 1728771753
		{ &Z_Construct_UFunction_USaveManager_SetSaveMasterID, "SetSaveMasterID" }, // 2576372659
		{ &Z_Construct_UFunction_USaveManager_SharedSave, "SharedSave" }, // 4057089557
		{ &Z_Construct_UFunction_USaveManager_StartNewSaveGame, "StartNewSaveGame" }, // 394605814
		{ &Z_Construct_UFunction_USaveManager_StartTimePlayedTimer, "StartTimePlayedTimer" }, // 3960724323
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USaveManager_Statics::NewProp_SaveGameClass = { "SaveGameClass", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveManager, SaveGameClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDefaultSaveGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveGameClass_MetaData), NewProp_SaveGameClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USaveManager_Statics::NewProp_SharedSaveGameClass = { "SharedSaveGameClass", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveManager, SharedSaveGameClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDefaultSaveGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SharedSaveGameClass_MetaData), NewProp_SharedSaveGameClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USaveManager_Statics::NewProp_SlotInfoItemClass = { "SlotInfoItemClass", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveManager, SlotInfoItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USlotInfoItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotInfoItemClass_MetaData), NewProp_SlotInfoItemClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USaveManager_Statics::NewProp_SharedSlotInfoItemClass = { "SharedSlotInfoItemClass", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveManager, SharedSlotInfoItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USlotInfoItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SharedSlotInfoItemClass_MetaData), NewProp_SharedSlotInfoItemClass_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_USaveManager_Statics::NewProp_ElapsedTimePlayed = { "ElapsedTimePlayed", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveManager, ElapsedTimePlayed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElapsedTimePlayed_MetaData), NewProp_ElapsedTimePlayed_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USaveManager_Statics::NewProp_OnPrepareSave = { "OnPrepareSave", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveManager, OnPrepareSave), Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSave__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPrepareSave_MetaData), NewProp_OnPrepareSave_MetaData) }; // 1589243362
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USaveManager_Statics::NewProp_OnPrepareLoad = { "OnPrepareLoad", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveManager, OnPrepareLoad), Z_Construct_UDelegateFunction_SaveSystem_OnPrepareLoad__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPrepareLoad_MetaData), NewProp_OnPrepareLoad_MetaData) }; // 4033779787
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USaveManager_Statics::NewProp_OnSaveGame = { "OnSaveGame", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveManager, OnSaveGame), Z_Construct_UDelegateFunction_SaveSystem_OnSaveGame__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSaveGame_MetaData), NewProp_OnSaveGame_MetaData) }; // 3256541046
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USaveManager_Statics::NewProp_OnLoadGame = { "OnLoadGame", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveManager, OnLoadGame), Z_Construct_UDelegateFunction_SaveSystem_OnLoadGame__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLoadGame_MetaData), NewProp_OnLoadGame_MetaData) }; // 2260264763
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USaveManager_Statics::NewProp_OnNewSaveGame = { "OnNewSaveGame", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveManager, OnNewSaveGame), Z_Construct_UDelegateFunction_SaveSystem_OnNewSaveGame__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnNewSaveGame_MetaData), NewProp_OnNewSaveGame_MetaData) }; // 1875231901
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USaveManager_Statics::NewProp_OnPrepareSharedSave = { "OnPrepareSharedSave", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveManager, OnPrepareSharedSave), Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedSave__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPrepareSharedSave_MetaData), NewProp_OnPrepareSharedSave_MetaData) }; // 2287876606
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USaveManager_Statics::NewProp_OnPrepareSharedLoad = { "OnPrepareSharedLoad", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveManager, OnPrepareSharedLoad), Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedLoad__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPrepareSharedLoad_MetaData), NewProp_OnPrepareSharedLoad_MetaData) }; // 3589075229
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USaveManager_Statics::NewProp_OnSharedSaveGame = { "OnSharedSaveGame", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveManager, OnSharedSaveGame), Z_Construct_UDelegateFunction_SaveSystem_OnSharedSaveGame__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSharedSaveGame_MetaData), NewProp_OnSharedSaveGame_MetaData) }; // 1830728744
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USaveManager_Statics::NewProp_OnSharedLoadGame = { "OnSharedLoadGame", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveManager, OnSharedLoadGame), Z_Construct_UDelegateFunction_SaveSystem_OnSharedLoadGame__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSharedLoadGame_MetaData), NewProp_OnSharedLoadGame_MetaData) }; // 327982256
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveManager_Statics::NewProp_SlotSaveGameInstance = { "SlotSaveGameInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveManager, SlotSaveGameInstance), Z_Construct_UClass_UDefaultSaveGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotSaveGameInstance_MetaData), NewProp_SlotSaveGameInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveManager_Statics::NewProp_SharedSaveGameInstance = { "SharedSaveGameInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveManager, SharedSaveGameInstance), Z_Construct_UClass_UDefaultSaveGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SharedSaveGameInstance_MetaData), NewProp_SharedSaveGameInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveManager_Statics::NewProp_CurrentSlotInfos = { "CurrentSlotInfos", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveManager, CurrentSlotInfos), Z_Construct_UClass_USlotInfos_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSlotInfos_MetaData), NewProp_CurrentSlotInfos_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveManager_Statics::NewProp_CurrentSlotInfoItem = { "CurrentSlotInfoItem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveManager, CurrentSlotInfoItem), Z_Construct_UClass_USlotInfoItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSlotInfoItem_MetaData), NewProp_CurrentSlotInfoItem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveManager_Statics::NewProp_CurrentSharedSlotInfoItem = { "CurrentSharedSlotInfoItem", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveManager, CurrentSharedSlotInfoItem), Z_Construct_UClass_USlotInfoItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSharedSlotInfoItem_MetaData), NewProp_CurrentSharedSlotInfoItem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveManager_Statics::NewProp_CurrentInstigator = { "CurrentInstigator", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveManager, CurrentInstigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentInstigator_MetaData), NewProp_CurrentInstigator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveManager_Statics::NewProp_SaveGameClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveManager_Statics::NewProp_SharedSaveGameClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveManager_Statics::NewProp_SlotInfoItemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveManager_Statics::NewProp_SharedSlotInfoItemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveManager_Statics::NewProp_ElapsedTimePlayed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveManager_Statics::NewProp_OnPrepareSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveManager_Statics::NewProp_OnPrepareLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveManager_Statics::NewProp_OnSaveGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveManager_Statics::NewProp_OnLoadGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveManager_Statics::NewProp_OnNewSaveGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveManager_Statics::NewProp_OnPrepareSharedSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveManager_Statics::NewProp_OnPrepareSharedLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveManager_Statics::NewProp_OnSharedSaveGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveManager_Statics::NewProp_OnSharedLoadGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveManager_Statics::NewProp_SlotSaveGameInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveManager_Statics::NewProp_SharedSaveGameInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveManager_Statics::NewProp_CurrentSlotInfos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveManager_Statics::NewProp_CurrentSlotInfoItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveManager_Statics::NewProp_CurrentSharedSlotInfoItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveManager_Statics::NewProp_CurrentInstigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USaveManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SaveSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveManager_Statics::ClassParams = {
	&USaveManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USaveManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USaveManager_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveManager_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USaveManager()
{
	if (!Z_Registration_Info_UClass_USaveManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveManager.OuterSingleton, Z_Construct_UClass_USaveManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USaveManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USaveManager);
USaveManager::~USaveManager() {}
// ********** End Class USaveManager ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveManager_h__Script_SaveSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USaveManager, USaveManager::StaticClass, TEXT("USaveManager"), &Z_Registration_Info_UClass_USaveManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveManager), 516906663U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveManager_h__Script_SaveSystem_978489995(TEXT("/Script/SaveSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveManager_h__Script_SaveSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveManager_h__Script_SaveSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
