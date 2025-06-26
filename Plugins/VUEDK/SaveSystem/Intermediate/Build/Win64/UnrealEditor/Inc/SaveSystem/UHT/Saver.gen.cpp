// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/Savers/Saver.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSaver() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SAVESYSTEM_API UClass* Z_Construct_UClass_UDefaultSaveGame_NoRegister();
SAVESYSTEM_API UClass* Z_Construct_UClass_USaveManager_NoRegister();
SAVESYSTEM_API UClass* Z_Construct_UClass_USaver();
SAVESYSTEM_API UClass* Z_Construct_UClass_USaver_NoRegister();
SAVESYSTEM_API UClass* Z_Construct_UClass_USlotInfoItem_NoRegister();
SAVESYSTEM_API UFunction* Z_Construct_UDelegateFunction_SaveSystem_OnBegingWithLoadedSharedSaveGame__DelegateSignature();
SAVESYSTEM_API UFunction* Z_Construct_UDelegateFunction_SaveSystem_OnBeginWithNewSaveGame__DelegateSignature();
SAVESYSTEM_API UFunction* Z_Construct_UDelegateFunction_SaveSystem_OnBeginWithNewSharedSaveGame__DelegateSignature();
SAVESYSTEM_API UFunction* Z_Construct_UDelegateFunction_SaveSystem_OnLoadGame__DelegateSignature();
SAVESYSTEM_API UFunction* Z_Construct_UDelegateFunction_SaveSystem_OnPrepareLoad__DelegateSignature();
SAVESYSTEM_API UFunction* Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSave__DelegateSignature();
SAVESYSTEM_API UFunction* Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedLoad__DelegateSignature();
SAVESYSTEM_API UFunction* Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedSave__DelegateSignature();
SAVESYSTEM_API UFunction* Z_Construct_UDelegateFunction_SaveSystem_OnSaveGame__DelegateSignature();
SAVESYSTEM_API UFunction* Z_Construct_UDelegateFunction_SaveSystem_OnSharedLoadGame__DelegateSignature();
SAVESYSTEM_API UFunction* Z_Construct_UDelegateFunction_SaveSystem_OnSharedSaveGame__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SaveSystem();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnBeginWithNewSaveGame ***********************************************
struct Z_Construct_UDelegateFunction_SaveSystem_OnBeginWithNewSaveGame__DelegateSignature_Statics
{
	struct _Script_SaveSystem_eventOnBeginWithNewSaveGame_Parms
	{
		UDefaultSaveGame* SaveGame;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Savers/Saver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SaveSystem_OnBeginWithNewSaveGame__DelegateSignature_Statics::NewProp_SaveGame = { "SaveGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SaveSystem_eventOnBeginWithNewSaveGame_Parms, SaveGame), Z_Construct_UClass_UDefaultSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SaveSystem_OnBeginWithNewSaveGame__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SaveSystem_OnBeginWithNewSaveGame__DelegateSignature_Statics::NewProp_SaveGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnBeginWithNewSaveGame__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SaveSystem_OnBeginWithNewSaveGame__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SaveSystem, nullptr, "OnBeginWithNewSaveGame__DelegateSignature", Z_Construct_UDelegateFunction_SaveSystem_OnBeginWithNewSaveGame__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnBeginWithNewSaveGame__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SaveSystem_OnBeginWithNewSaveGame__DelegateSignature_Statics::_Script_SaveSystem_eventOnBeginWithNewSaveGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnBeginWithNewSaveGame__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SaveSystem_OnBeginWithNewSaveGame__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SaveSystem_OnBeginWithNewSaveGame__DelegateSignature_Statics::_Script_SaveSystem_eventOnBeginWithNewSaveGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SaveSystem_OnBeginWithNewSaveGame__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SaveSystem_OnBeginWithNewSaveGame__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnBeginWithNewSaveGame_DelegateWrapper(const FMulticastScriptDelegate& OnBeginWithNewSaveGame, UDefaultSaveGame* SaveGame)
{
	struct _Script_SaveSystem_eventOnBeginWithNewSaveGame_Parms
	{
		UDefaultSaveGame* SaveGame;
	};
	_Script_SaveSystem_eventOnBeginWithNewSaveGame_Parms Parms;
	Parms.SaveGame=SaveGame;
	OnBeginWithNewSaveGame.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnBeginWithNewSaveGame *************************************************

// ********** Begin Delegate FOnBegingWithLoadedSharedSaveGame *************************************
struct Z_Construct_UDelegateFunction_SaveSystem_OnBegingWithLoadedSharedSaveGame__DelegateSignature_Statics
{
	struct _Script_SaveSystem_eventOnBegingWithLoadedSharedSaveGame_Parms
	{
		UDefaultSaveGame* SharedSaveGame;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Savers/Saver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SharedSaveGame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SaveSystem_OnBegingWithLoadedSharedSaveGame__DelegateSignature_Statics::NewProp_SharedSaveGame = { "SharedSaveGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SaveSystem_eventOnBegingWithLoadedSharedSaveGame_Parms, SharedSaveGame), Z_Construct_UClass_UDefaultSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SaveSystem_OnBegingWithLoadedSharedSaveGame__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SaveSystem_OnBegingWithLoadedSharedSaveGame__DelegateSignature_Statics::NewProp_SharedSaveGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnBegingWithLoadedSharedSaveGame__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SaveSystem_OnBegingWithLoadedSharedSaveGame__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SaveSystem, nullptr, "OnBegingWithLoadedSharedSaveGame__DelegateSignature", Z_Construct_UDelegateFunction_SaveSystem_OnBegingWithLoadedSharedSaveGame__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnBegingWithLoadedSharedSaveGame__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SaveSystem_OnBegingWithLoadedSharedSaveGame__DelegateSignature_Statics::_Script_SaveSystem_eventOnBegingWithLoadedSharedSaveGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnBegingWithLoadedSharedSaveGame__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SaveSystem_OnBegingWithLoadedSharedSaveGame__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SaveSystem_OnBegingWithLoadedSharedSaveGame__DelegateSignature_Statics::_Script_SaveSystem_eventOnBegingWithLoadedSharedSaveGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SaveSystem_OnBegingWithLoadedSharedSaveGame__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SaveSystem_OnBegingWithLoadedSharedSaveGame__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnBegingWithLoadedSharedSaveGame_DelegateWrapper(const FMulticastScriptDelegate& OnBegingWithLoadedSharedSaveGame, UDefaultSaveGame* SharedSaveGame)
{
	struct _Script_SaveSystem_eventOnBegingWithLoadedSharedSaveGame_Parms
	{
		UDefaultSaveGame* SharedSaveGame;
	};
	_Script_SaveSystem_eventOnBegingWithLoadedSharedSaveGame_Parms Parms;
	Parms.SharedSaveGame=SharedSaveGame;
	OnBegingWithLoadedSharedSaveGame.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnBegingWithLoadedSharedSaveGame ***************************************

// ********** Begin Delegate FOnBeginWithNewSharedSaveGame *****************************************
struct Z_Construct_UDelegateFunction_SaveSystem_OnBeginWithNewSharedSaveGame__DelegateSignature_Statics
{
	struct _Script_SaveSystem_eventOnBeginWithNewSharedSaveGame_Parms
	{
		UDefaultSaveGame* SharedSaveGame;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Savers/Saver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SharedSaveGame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SaveSystem_OnBeginWithNewSharedSaveGame__DelegateSignature_Statics::NewProp_SharedSaveGame = { "SharedSaveGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SaveSystem_eventOnBeginWithNewSharedSaveGame_Parms, SharedSaveGame), Z_Construct_UClass_UDefaultSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SaveSystem_OnBeginWithNewSharedSaveGame__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SaveSystem_OnBeginWithNewSharedSaveGame__DelegateSignature_Statics::NewProp_SharedSaveGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnBeginWithNewSharedSaveGame__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SaveSystem_OnBeginWithNewSharedSaveGame__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SaveSystem, nullptr, "OnBeginWithNewSharedSaveGame__DelegateSignature", Z_Construct_UDelegateFunction_SaveSystem_OnBeginWithNewSharedSaveGame__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnBeginWithNewSharedSaveGame__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SaveSystem_OnBeginWithNewSharedSaveGame__DelegateSignature_Statics::_Script_SaveSystem_eventOnBeginWithNewSharedSaveGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SaveSystem_OnBeginWithNewSharedSaveGame__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SaveSystem_OnBeginWithNewSharedSaveGame__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SaveSystem_OnBeginWithNewSharedSaveGame__DelegateSignature_Statics::_Script_SaveSystem_eventOnBeginWithNewSharedSaveGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SaveSystem_OnBeginWithNewSharedSaveGame__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SaveSystem_OnBeginWithNewSharedSaveGame__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnBeginWithNewSharedSaveGame_DelegateWrapper(const FMulticastScriptDelegate& OnBeginWithNewSharedSaveGame, UDefaultSaveGame* SharedSaveGame)
{
	struct _Script_SaveSystem_eventOnBeginWithNewSharedSaveGame_Parms
	{
		UDefaultSaveGame* SharedSaveGame;
	};
	_Script_SaveSystem_eventOnBeginWithNewSharedSaveGame_Parms Parms;
	Parms.SharedSaveGame=SharedSaveGame;
	OnBeginWithNewSharedSaveGame.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnBeginWithNewSharedSaveGame *******************************************

// ********** Begin Class USaver Function GetUniqueSaveID ******************************************
struct Z_Construct_UFunction_USaver_GetUniqueSaveID_Statics
{
	struct Saver_eventGetUniqueSaveID_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Savers/Saver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USaver_GetUniqueSaveID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventGetUniqueSaveID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaver_GetUniqueSaveID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_GetUniqueSaveID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_GetUniqueSaveID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaver_GetUniqueSaveID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaver, nullptr, "GetUniqueSaveID", Z_Construct_UFunction_USaver_GetUniqueSaveID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_GetUniqueSaveID_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaver_GetUniqueSaveID_Statics::Saver_eventGetUniqueSaveID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_GetUniqueSaveID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaver_GetUniqueSaveID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USaver_GetUniqueSaveID_Statics::Saver_eventGetUniqueSaveID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaver_GetUniqueSaveID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaver_GetUniqueSaveID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaver::execGetUniqueSaveID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetUniqueSaveID();
	P_NATIVE_END;
}
// ********** End Class USaver Function GetUniqueSaveID ********************************************

// ********** Begin Class USaver Function OnBeginWithLoadedSharedSaveGameEvent *********************
struct Saver_eventOnBeginWithLoadedSharedSaveGameEvent_Parms
{
	UDefaultSaveGame* SaveGame;
};
static FName NAME_USaver_OnBeginWithLoadedSharedSaveGameEvent = FName(TEXT("OnBeginWithLoadedSharedSaveGameEvent"));
void USaver::OnBeginWithLoadedSharedSaveGameEvent(UDefaultSaveGame* SaveGame)
{
	UFunction* Func = FindFunctionChecked(NAME_USaver_OnBeginWithLoadedSharedSaveGameEvent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Saver_eventOnBeginWithLoadedSharedSaveGameEvent_Parms Parms;
		Parms.SaveGame=SaveGame;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnBeginWithLoadedSharedSaveGameEvent_Implementation(SaveGame);
	}
}
struct Z_Construct_UFunction_USaver_OnBeginWithLoadedSharedSaveGameEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Savers/Saver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaver_OnBeginWithLoadedSharedSaveGameEvent_Statics::NewProp_SaveGame = { "SaveGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventOnBeginWithLoadedSharedSaveGameEvent_Parms, SaveGame), Z_Construct_UClass_UDefaultSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaver_OnBeginWithLoadedSharedSaveGameEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_OnBeginWithLoadedSharedSaveGameEvent_Statics::NewProp_SaveGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_OnBeginWithLoadedSharedSaveGameEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaver_OnBeginWithLoadedSharedSaveGameEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaver, nullptr, "OnBeginWithLoadedSharedSaveGameEvent", Z_Construct_UFunction_USaver_OnBeginWithLoadedSharedSaveGameEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_OnBeginWithLoadedSharedSaveGameEvent_Statics::PropPointers), sizeof(Saver_eventOnBeginWithLoadedSharedSaveGameEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_OnBeginWithLoadedSharedSaveGameEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaver_OnBeginWithLoadedSharedSaveGameEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Saver_eventOnBeginWithLoadedSharedSaveGameEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaver_OnBeginWithLoadedSharedSaveGameEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaver_OnBeginWithLoadedSharedSaveGameEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaver::execOnBeginWithLoadedSharedSaveGameEvent)
{
	P_GET_OBJECT(UDefaultSaveGame,Z_Param_SaveGame);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBeginWithLoadedSharedSaveGameEvent_Implementation(Z_Param_SaveGame);
	P_NATIVE_END;
}
// ********** End Class USaver Function OnBeginWithLoadedSharedSaveGameEvent ***********************

// ********** Begin Class USaver Function OnBeginWithNewSaveGameEvent ******************************
struct Saver_eventOnBeginWithNewSaveGameEvent_Parms
{
	UDefaultSaveGame* SaveGame;
};
static FName NAME_USaver_OnBeginWithNewSaveGameEvent = FName(TEXT("OnBeginWithNewSaveGameEvent"));
void USaver::OnBeginWithNewSaveGameEvent(UDefaultSaveGame* SaveGame)
{
	UFunction* Func = FindFunctionChecked(NAME_USaver_OnBeginWithNewSaveGameEvent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Saver_eventOnBeginWithNewSaveGameEvent_Parms Parms;
		Parms.SaveGame=SaveGame;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnBeginWithNewSaveGameEvent_Implementation(SaveGame);
	}
}
struct Z_Construct_UFunction_USaver_OnBeginWithNewSaveGameEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Savers/Saver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaver_OnBeginWithNewSaveGameEvent_Statics::NewProp_SaveGame = { "SaveGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventOnBeginWithNewSaveGameEvent_Parms, SaveGame), Z_Construct_UClass_UDefaultSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaver_OnBeginWithNewSaveGameEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_OnBeginWithNewSaveGameEvent_Statics::NewProp_SaveGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_OnBeginWithNewSaveGameEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaver_OnBeginWithNewSaveGameEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaver, nullptr, "OnBeginWithNewSaveGameEvent", Z_Construct_UFunction_USaver_OnBeginWithNewSaveGameEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_OnBeginWithNewSaveGameEvent_Statics::PropPointers), sizeof(Saver_eventOnBeginWithNewSaveGameEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_OnBeginWithNewSaveGameEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaver_OnBeginWithNewSaveGameEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Saver_eventOnBeginWithNewSaveGameEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaver_OnBeginWithNewSaveGameEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaver_OnBeginWithNewSaveGameEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaver::execOnBeginWithNewSaveGameEvent)
{
	P_GET_OBJECT(UDefaultSaveGame,Z_Param_SaveGame);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBeginWithNewSaveGameEvent_Implementation(Z_Param_SaveGame);
	P_NATIVE_END;
}
// ********** End Class USaver Function OnBeginWithNewSaveGameEvent ********************************

// ********** Begin Class USaver Function OnBeginWithNewSharedSaveGameEvent ************************
struct Saver_eventOnBeginWithNewSharedSaveGameEvent_Parms
{
	UDefaultSaveGame* SaveGame;
};
static FName NAME_USaver_OnBeginWithNewSharedSaveGameEvent = FName(TEXT("OnBeginWithNewSharedSaveGameEvent"));
void USaver::OnBeginWithNewSharedSaveGameEvent(UDefaultSaveGame* SaveGame)
{
	UFunction* Func = FindFunctionChecked(NAME_USaver_OnBeginWithNewSharedSaveGameEvent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Saver_eventOnBeginWithNewSharedSaveGameEvent_Parms Parms;
		Parms.SaveGame=SaveGame;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnBeginWithNewSharedSaveGameEvent_Implementation(SaveGame);
	}
}
struct Z_Construct_UFunction_USaver_OnBeginWithNewSharedSaveGameEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Savers/Saver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaver_OnBeginWithNewSharedSaveGameEvent_Statics::NewProp_SaveGame = { "SaveGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventOnBeginWithNewSharedSaveGameEvent_Parms, SaveGame), Z_Construct_UClass_UDefaultSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaver_OnBeginWithNewSharedSaveGameEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_OnBeginWithNewSharedSaveGameEvent_Statics::NewProp_SaveGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_OnBeginWithNewSharedSaveGameEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaver_OnBeginWithNewSharedSaveGameEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaver, nullptr, "OnBeginWithNewSharedSaveGameEvent", Z_Construct_UFunction_USaver_OnBeginWithNewSharedSaveGameEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_OnBeginWithNewSharedSaveGameEvent_Statics::PropPointers), sizeof(Saver_eventOnBeginWithNewSharedSaveGameEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_OnBeginWithNewSharedSaveGameEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaver_OnBeginWithNewSharedSaveGameEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Saver_eventOnBeginWithNewSharedSaveGameEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaver_OnBeginWithNewSharedSaveGameEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaver_OnBeginWithNewSharedSaveGameEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaver::execOnBeginWithNewSharedSaveGameEvent)
{
	P_GET_OBJECT(UDefaultSaveGame,Z_Param_SaveGame);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBeginWithNewSharedSaveGameEvent_Implementation(Z_Param_SaveGame);
	P_NATIVE_END;
}
// ********** End Class USaver Function OnBeginWithNewSharedSaveGameEvent **************************

// ********** Begin Class USaver Function OnLoadCompletedEvent *************************************
struct Saver_eventOnLoadCompletedEvent_Parms
{
	FString SlotName;
	int32 UserIndex;
	UDefaultSaveGame* LoadedData;
	UObject* Instigator;
};
static FName NAME_USaver_OnLoadCompletedEvent = FName(TEXT("OnLoadCompletedEvent"));
void USaver::OnLoadCompletedEvent(const FString& SlotName, const int32 UserIndex, UDefaultSaveGame* LoadedData, UObject* Instigator)
{
	UFunction* Func = FindFunctionChecked(NAME_USaver_OnLoadCompletedEvent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Saver_eventOnLoadCompletedEvent_Parms Parms;
		Parms.SlotName=SlotName;
		Parms.UserIndex=UserIndex;
		Parms.LoadedData=LoadedData;
		Parms.Instigator=Instigator;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnLoadCompletedEvent_Implementation(SlotName, UserIndex, LoadedData, Instigator);
	}
}
struct Z_Construct_UFunction_USaver_OnLoadCompletedEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Savers/Saver.h" },
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaver_OnLoadCompletedEvent_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventOnLoadCompletedEvent_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaver_OnLoadCompletedEvent_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventOnLoadCompletedEvent_Parms, UserIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserIndex_MetaData), NewProp_UserIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaver_OnLoadCompletedEvent_Statics::NewProp_LoadedData = { "LoadedData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventOnLoadCompletedEvent_Parms, LoadedData), Z_Construct_UClass_UDefaultSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaver_OnLoadCompletedEvent_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventOnLoadCompletedEvent_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaver_OnLoadCompletedEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_OnLoadCompletedEvent_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_OnLoadCompletedEvent_Statics::NewProp_UserIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_OnLoadCompletedEvent_Statics::NewProp_LoadedData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_OnLoadCompletedEvent_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_OnLoadCompletedEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaver_OnLoadCompletedEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaver, nullptr, "OnLoadCompletedEvent", Z_Construct_UFunction_USaver_OnLoadCompletedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_OnLoadCompletedEvent_Statics::PropPointers), sizeof(Saver_eventOnLoadCompletedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_OnLoadCompletedEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaver_OnLoadCompletedEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Saver_eventOnLoadCompletedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaver_OnLoadCompletedEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaver_OnLoadCompletedEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaver::execOnLoadCompletedEvent)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
	P_GET_OBJECT(UDefaultSaveGame,Z_Param_LoadedData);
	P_GET_OBJECT(UObject,Z_Param_Instigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLoadCompletedEvent_Implementation(Z_Param_SlotName,Z_Param_UserIndex,Z_Param_LoadedData,Z_Param_Instigator);
	P_NATIVE_END;
}
// ********** End Class USaver Function OnLoadCompletedEvent ***************************************

// ********** Begin Class USaver Function OnPrepareLoad ********************************************
struct Saver_eventOnPrepareLoad_Parms
{
	UDefaultSaveGame* SaveGame;
	UObject* Instigator;
};
static FName NAME_USaver_OnPrepareLoad = FName(TEXT("OnPrepareLoad"));
void USaver::OnPrepareLoad(UDefaultSaveGame* SaveGame, UObject* Instigator)
{
	UFunction* Func = FindFunctionChecked(NAME_USaver_OnPrepareLoad);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Saver_eventOnPrepareLoad_Parms Parms;
		Parms.SaveGame=SaveGame;
		Parms.Instigator=Instigator;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnPrepareLoad_Implementation(SaveGame, Instigator);
	}
}
struct Z_Construct_UFunction_USaver_OnPrepareLoad_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Savers/Saver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaver_OnPrepareLoad_Statics::NewProp_SaveGame = { "SaveGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventOnPrepareLoad_Parms, SaveGame), Z_Construct_UClass_UDefaultSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaver_OnPrepareLoad_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventOnPrepareLoad_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaver_OnPrepareLoad_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_OnPrepareLoad_Statics::NewProp_SaveGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_OnPrepareLoad_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_OnPrepareLoad_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaver_OnPrepareLoad_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaver, nullptr, "OnPrepareLoad", Z_Construct_UFunction_USaver_OnPrepareLoad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_OnPrepareLoad_Statics::PropPointers), sizeof(Saver_eventOnPrepareLoad_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_OnPrepareLoad_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaver_OnPrepareLoad_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Saver_eventOnPrepareLoad_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaver_OnPrepareLoad()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaver_OnPrepareLoad_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaver::execOnPrepareLoad)
{
	P_GET_OBJECT(UDefaultSaveGame,Z_Param_SaveGame);
	P_GET_OBJECT(UObject,Z_Param_Instigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPrepareLoad_Implementation(Z_Param_SaveGame,Z_Param_Instigator);
	P_NATIVE_END;
}
// ********** End Class USaver Function OnPrepareLoad **********************************************

// ********** Begin Class USaver Function OnPrepareSave ********************************************
struct Saver_eventOnPrepareSave_Parms
{
	UDefaultSaveGame* SaveGame;
	USlotInfoItem* SlotInfoItem;
	UObject* Instigator;
};
static FName NAME_USaver_OnPrepareSave = FName(TEXT("OnPrepareSave"));
void USaver::OnPrepareSave(UDefaultSaveGame* SaveGame, USlotInfoItem* SlotInfoItem, UObject* Instigator)
{
	UFunction* Func = FindFunctionChecked(NAME_USaver_OnPrepareSave);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Saver_eventOnPrepareSave_Parms Parms;
		Parms.SaveGame=SaveGame;
		Parms.SlotInfoItem=SlotInfoItem;
		Parms.Instigator=Instigator;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnPrepareSave_Implementation(SaveGame, SlotInfoItem, Instigator);
	}
}
struct Z_Construct_UFunction_USaver_OnPrepareSave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Savers/Saver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotInfoItem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaver_OnPrepareSave_Statics::NewProp_SaveGame = { "SaveGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventOnPrepareSave_Parms, SaveGame), Z_Construct_UClass_UDefaultSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaver_OnPrepareSave_Statics::NewProp_SlotInfoItem = { "SlotInfoItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventOnPrepareSave_Parms, SlotInfoItem), Z_Construct_UClass_USlotInfoItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaver_OnPrepareSave_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventOnPrepareSave_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaver_OnPrepareSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_OnPrepareSave_Statics::NewProp_SaveGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_OnPrepareSave_Statics::NewProp_SlotInfoItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_OnPrepareSave_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_OnPrepareSave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaver_OnPrepareSave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaver, nullptr, "OnPrepareSave", Z_Construct_UFunction_USaver_OnPrepareSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_OnPrepareSave_Statics::PropPointers), sizeof(Saver_eventOnPrepareSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_OnPrepareSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaver_OnPrepareSave_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Saver_eventOnPrepareSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaver_OnPrepareSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaver_OnPrepareSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaver::execOnPrepareSave)
{
	P_GET_OBJECT(UDefaultSaveGame,Z_Param_SaveGame);
	P_GET_OBJECT(USlotInfoItem,Z_Param_SlotInfoItem);
	P_GET_OBJECT(UObject,Z_Param_Instigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPrepareSave_Implementation(Z_Param_SaveGame,Z_Param_SlotInfoItem,Z_Param_Instigator);
	P_NATIVE_END;
}
// ********** End Class USaver Function OnPrepareSave **********************************************

// ********** Begin Class USaver Function OnPrepareSharedLoad **************************************
struct Saver_eventOnPrepareSharedLoad_Parms
{
	UDefaultSaveGame* SaveGame;
	UObject* Instigator;
};
static FName NAME_USaver_OnPrepareSharedLoad = FName(TEXT("OnPrepareSharedLoad"));
void USaver::OnPrepareSharedLoad(UDefaultSaveGame* SaveGame, UObject* Instigator)
{
	UFunction* Func = FindFunctionChecked(NAME_USaver_OnPrepareSharedLoad);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Saver_eventOnPrepareSharedLoad_Parms Parms;
		Parms.SaveGame=SaveGame;
		Parms.Instigator=Instigator;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnPrepareSharedLoad_Implementation(SaveGame, Instigator);
	}
}
struct Z_Construct_UFunction_USaver_OnPrepareSharedLoad_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Savers/Saver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaver_OnPrepareSharedLoad_Statics::NewProp_SaveGame = { "SaveGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventOnPrepareSharedLoad_Parms, SaveGame), Z_Construct_UClass_UDefaultSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaver_OnPrepareSharedLoad_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventOnPrepareSharedLoad_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaver_OnPrepareSharedLoad_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_OnPrepareSharedLoad_Statics::NewProp_SaveGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_OnPrepareSharedLoad_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_OnPrepareSharedLoad_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaver_OnPrepareSharedLoad_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaver, nullptr, "OnPrepareSharedLoad", Z_Construct_UFunction_USaver_OnPrepareSharedLoad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_OnPrepareSharedLoad_Statics::PropPointers), sizeof(Saver_eventOnPrepareSharedLoad_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_OnPrepareSharedLoad_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaver_OnPrepareSharedLoad_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Saver_eventOnPrepareSharedLoad_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaver_OnPrepareSharedLoad()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaver_OnPrepareSharedLoad_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaver::execOnPrepareSharedLoad)
{
	P_GET_OBJECT(UDefaultSaveGame,Z_Param_SaveGame);
	P_GET_OBJECT(UObject,Z_Param_Instigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPrepareSharedLoad_Implementation(Z_Param_SaveGame,Z_Param_Instigator);
	P_NATIVE_END;
}
// ********** End Class USaver Function OnPrepareSharedLoad ****************************************

// ********** Begin Class USaver Function OnPrepareSharedSave **************************************
struct Saver_eventOnPrepareSharedSave_Parms
{
	UDefaultSaveGame* SaveGame;
	USlotInfoItem* SlotInfoItem;
	UObject* Instigator;
};
static FName NAME_USaver_OnPrepareSharedSave = FName(TEXT("OnPrepareSharedSave"));
void USaver::OnPrepareSharedSave(UDefaultSaveGame* SaveGame, USlotInfoItem* SlotInfoItem, UObject* Instigator)
{
	UFunction* Func = FindFunctionChecked(NAME_USaver_OnPrepareSharedSave);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Saver_eventOnPrepareSharedSave_Parms Parms;
		Parms.SaveGame=SaveGame;
		Parms.SlotInfoItem=SlotInfoItem;
		Parms.Instigator=Instigator;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnPrepareSharedSave_Implementation(SaveGame, SlotInfoItem, Instigator);
	}
}
struct Z_Construct_UFunction_USaver_OnPrepareSharedSave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Savers/Saver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotInfoItem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaver_OnPrepareSharedSave_Statics::NewProp_SaveGame = { "SaveGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventOnPrepareSharedSave_Parms, SaveGame), Z_Construct_UClass_UDefaultSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaver_OnPrepareSharedSave_Statics::NewProp_SlotInfoItem = { "SlotInfoItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventOnPrepareSharedSave_Parms, SlotInfoItem), Z_Construct_UClass_USlotInfoItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaver_OnPrepareSharedSave_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventOnPrepareSharedSave_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaver_OnPrepareSharedSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_OnPrepareSharedSave_Statics::NewProp_SaveGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_OnPrepareSharedSave_Statics::NewProp_SlotInfoItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_OnPrepareSharedSave_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_OnPrepareSharedSave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaver_OnPrepareSharedSave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaver, nullptr, "OnPrepareSharedSave", Z_Construct_UFunction_USaver_OnPrepareSharedSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_OnPrepareSharedSave_Statics::PropPointers), sizeof(Saver_eventOnPrepareSharedSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_OnPrepareSharedSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaver_OnPrepareSharedSave_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Saver_eventOnPrepareSharedSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaver_OnPrepareSharedSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaver_OnPrepareSharedSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaver::execOnPrepareSharedSave)
{
	P_GET_OBJECT(UDefaultSaveGame,Z_Param_SaveGame);
	P_GET_OBJECT(USlotInfoItem,Z_Param_SlotInfoItem);
	P_GET_OBJECT(UObject,Z_Param_Instigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPrepareSharedSave_Implementation(Z_Param_SaveGame,Z_Param_SlotInfoItem,Z_Param_Instigator);
	P_NATIVE_END;
}
// ********** End Class USaver Function OnPrepareSharedSave ****************************************

// ********** Begin Class USaver Function OnSaveCompletedEvent *************************************
struct Saver_eventOnSaveCompletedEvent_Parms
{
	FString SlotName;
	int32 UserIndex;
	bool bSuccess;
	UDefaultSaveGame* SaveGame;
	UObject* Instigator;
};
static FName NAME_USaver_OnSaveCompletedEvent = FName(TEXT("OnSaveCompletedEvent"));
void USaver::OnSaveCompletedEvent(const FString& SlotName, const int32 UserIndex, bool bSuccess, UDefaultSaveGame* SaveGame, UObject* Instigator)
{
	UFunction* Func = FindFunctionChecked(NAME_USaver_OnSaveCompletedEvent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Saver_eventOnSaveCompletedEvent_Parms Parms;
		Parms.SlotName=SlotName;
		Parms.UserIndex=UserIndex;
		Parms.bSuccess=bSuccess ? true : false;
		Parms.SaveGame=SaveGame;
		Parms.Instigator=Instigator;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnSaveCompletedEvent_Implementation(SlotName, UserIndex, bSuccess, SaveGame, Instigator);
	}
}
struct Z_Construct_UFunction_USaver_OnSaveCompletedEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Savers/Saver.h" },
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaver_OnSaveCompletedEvent_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventOnSaveCompletedEvent_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaver_OnSaveCompletedEvent_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventOnSaveCompletedEvent_Parms, UserIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserIndex_MetaData), NewProp_UserIndex_MetaData) };
void Z_Construct_UFunction_USaver_OnSaveCompletedEvent_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((Saver_eventOnSaveCompletedEvent_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaver_OnSaveCompletedEvent_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Saver_eventOnSaveCompletedEvent_Parms), &Z_Construct_UFunction_USaver_OnSaveCompletedEvent_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaver_OnSaveCompletedEvent_Statics::NewProp_SaveGame = { "SaveGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventOnSaveCompletedEvent_Parms, SaveGame), Z_Construct_UClass_UDefaultSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaver_OnSaveCompletedEvent_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventOnSaveCompletedEvent_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaver_OnSaveCompletedEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_OnSaveCompletedEvent_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_OnSaveCompletedEvent_Statics::NewProp_UserIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_OnSaveCompletedEvent_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_OnSaveCompletedEvent_Statics::NewProp_SaveGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_OnSaveCompletedEvent_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_OnSaveCompletedEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaver_OnSaveCompletedEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaver, nullptr, "OnSaveCompletedEvent", Z_Construct_UFunction_USaver_OnSaveCompletedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_OnSaveCompletedEvent_Statics::PropPointers), sizeof(Saver_eventOnSaveCompletedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_OnSaveCompletedEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaver_OnSaveCompletedEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Saver_eventOnSaveCompletedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaver_OnSaveCompletedEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaver_OnSaveCompletedEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaver::execOnSaveCompletedEvent)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
	P_GET_UBOOL(Z_Param_bSuccess);
	P_GET_OBJECT(UDefaultSaveGame,Z_Param_SaveGame);
	P_GET_OBJECT(UObject,Z_Param_Instigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSaveCompletedEvent_Implementation(Z_Param_SlotName,Z_Param_UserIndex,Z_Param_bSuccess,Z_Param_SaveGame,Z_Param_Instigator);
	P_NATIVE_END;
}
// ********** End Class USaver Function OnSaveCompletedEvent ***************************************

// ********** Begin Class USaver Function OnSharedLoadCompletedEvent *******************************
struct Saver_eventOnSharedLoadCompletedEvent_Parms
{
	FString SlotName;
	int32 UserIndex;
	UDefaultSaveGame* LoadedData;
	UObject* Instigator;
};
static FName NAME_USaver_OnSharedLoadCompletedEvent = FName(TEXT("OnSharedLoadCompletedEvent"));
void USaver::OnSharedLoadCompletedEvent(const FString& SlotName, const int32 UserIndex, UDefaultSaveGame* LoadedData, UObject* Instigator)
{
	UFunction* Func = FindFunctionChecked(NAME_USaver_OnSharedLoadCompletedEvent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Saver_eventOnSharedLoadCompletedEvent_Parms Parms;
		Parms.SlotName=SlotName;
		Parms.UserIndex=UserIndex;
		Parms.LoadedData=LoadedData;
		Parms.Instigator=Instigator;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnSharedLoadCompletedEvent_Implementation(SlotName, UserIndex, LoadedData, Instigator);
	}
}
struct Z_Construct_UFunction_USaver_OnSharedLoadCompletedEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Savers/Saver.h" },
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaver_OnSharedLoadCompletedEvent_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventOnSharedLoadCompletedEvent_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaver_OnSharedLoadCompletedEvent_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventOnSharedLoadCompletedEvent_Parms, UserIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserIndex_MetaData), NewProp_UserIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaver_OnSharedLoadCompletedEvent_Statics::NewProp_LoadedData = { "LoadedData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventOnSharedLoadCompletedEvent_Parms, LoadedData), Z_Construct_UClass_UDefaultSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaver_OnSharedLoadCompletedEvent_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventOnSharedLoadCompletedEvent_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaver_OnSharedLoadCompletedEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_OnSharedLoadCompletedEvent_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_OnSharedLoadCompletedEvent_Statics::NewProp_UserIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_OnSharedLoadCompletedEvent_Statics::NewProp_LoadedData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_OnSharedLoadCompletedEvent_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_OnSharedLoadCompletedEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaver_OnSharedLoadCompletedEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaver, nullptr, "OnSharedLoadCompletedEvent", Z_Construct_UFunction_USaver_OnSharedLoadCompletedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_OnSharedLoadCompletedEvent_Statics::PropPointers), sizeof(Saver_eventOnSharedLoadCompletedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_OnSharedLoadCompletedEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaver_OnSharedLoadCompletedEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Saver_eventOnSharedLoadCompletedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaver_OnSharedLoadCompletedEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaver_OnSharedLoadCompletedEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaver::execOnSharedLoadCompletedEvent)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
	P_GET_OBJECT(UDefaultSaveGame,Z_Param_LoadedData);
	P_GET_OBJECT(UObject,Z_Param_Instigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSharedLoadCompletedEvent_Implementation(Z_Param_SlotName,Z_Param_UserIndex,Z_Param_LoadedData,Z_Param_Instigator);
	P_NATIVE_END;
}
// ********** End Class USaver Function OnSharedLoadCompletedEvent *********************************

// ********** Begin Class USaver Function OnSharedSaveCompletedEvent *******************************
struct Saver_eventOnSharedSaveCompletedEvent_Parms
{
	FString SlotName;
	int32 UserIndex;
	bool bSuccess;
	UDefaultSaveGame* SaveGame;
	UObject* Instigator;
};
static FName NAME_USaver_OnSharedSaveCompletedEvent = FName(TEXT("OnSharedSaveCompletedEvent"));
void USaver::OnSharedSaveCompletedEvent(const FString& SlotName, const int32 UserIndex, bool bSuccess, UDefaultSaveGame* SaveGame, UObject* Instigator)
{
	UFunction* Func = FindFunctionChecked(NAME_USaver_OnSharedSaveCompletedEvent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		Saver_eventOnSharedSaveCompletedEvent_Parms Parms;
		Parms.SlotName=SlotName;
		Parms.UserIndex=UserIndex;
		Parms.bSuccess=bSuccess ? true : false;
		Parms.SaveGame=SaveGame;
		Parms.Instigator=Instigator;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnSharedSaveCompletedEvent_Implementation(SlotName, UserIndex, bSuccess, SaveGame, Instigator);
	}
}
struct Z_Construct_UFunction_USaver_OnSharedSaveCompletedEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Savers/Saver.h" },
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaver_OnSharedSaveCompletedEvent_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventOnSharedSaveCompletedEvent_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaver_OnSharedSaveCompletedEvent_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventOnSharedSaveCompletedEvent_Parms, UserIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserIndex_MetaData), NewProp_UserIndex_MetaData) };
void Z_Construct_UFunction_USaver_OnSharedSaveCompletedEvent_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((Saver_eventOnSharedSaveCompletedEvent_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaver_OnSharedSaveCompletedEvent_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Saver_eventOnSharedSaveCompletedEvent_Parms), &Z_Construct_UFunction_USaver_OnSharedSaveCompletedEvent_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaver_OnSharedSaveCompletedEvent_Statics::NewProp_SaveGame = { "SaveGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventOnSharedSaveCompletedEvent_Parms, SaveGame), Z_Construct_UClass_UDefaultSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaver_OnSharedSaveCompletedEvent_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventOnSharedSaveCompletedEvent_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaver_OnSharedSaveCompletedEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_OnSharedSaveCompletedEvent_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_OnSharedSaveCompletedEvent_Statics::NewProp_UserIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_OnSharedSaveCompletedEvent_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_OnSharedSaveCompletedEvent_Statics::NewProp_SaveGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_OnSharedSaveCompletedEvent_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_OnSharedSaveCompletedEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaver_OnSharedSaveCompletedEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaver, nullptr, "OnSharedSaveCompletedEvent", Z_Construct_UFunction_USaver_OnSharedSaveCompletedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_OnSharedSaveCompletedEvent_Statics::PropPointers), sizeof(Saver_eventOnSharedSaveCompletedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_OnSharedSaveCompletedEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaver_OnSharedSaveCompletedEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Saver_eventOnSharedSaveCompletedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaver_OnSharedSaveCompletedEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaver_OnSharedSaveCompletedEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaver::execOnSharedSaveCompletedEvent)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
	P_GET_UBOOL(Z_Param_bSuccess);
	P_GET_OBJECT(UDefaultSaveGame,Z_Param_SaveGame);
	P_GET_OBJECT(UObject,Z_Param_Instigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSharedSaveCompletedEvent_Implementation(Z_Param_SlotName,Z_Param_UserIndex,Z_Param_bSuccess,Z_Param_SaveGame,Z_Param_Instigator);
	P_NATIVE_END;
}
// ********** End Class USaver Function OnSharedSaveCompletedEvent *********************************

// ********** Begin Class USaver Function PrepareLoad **********************************************
struct Z_Construct_UFunction_USaver_PrepareLoad_Statics
{
	struct Saver_eventPrepareLoad_Parms
	{
		UDefaultSaveGame* SaveGame;
		UObject* Instigator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Savers/Saver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaver_PrepareLoad_Statics::NewProp_SaveGame = { "SaveGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventPrepareLoad_Parms, SaveGame), Z_Construct_UClass_UDefaultSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaver_PrepareLoad_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventPrepareLoad_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaver_PrepareLoad_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_PrepareLoad_Statics::NewProp_SaveGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_PrepareLoad_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_PrepareLoad_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaver_PrepareLoad_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaver, nullptr, "PrepareLoad", Z_Construct_UFunction_USaver_PrepareLoad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_PrepareLoad_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaver_PrepareLoad_Statics::Saver_eventPrepareLoad_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_PrepareLoad_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaver_PrepareLoad_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USaver_PrepareLoad_Statics::Saver_eventPrepareLoad_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaver_PrepareLoad()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaver_PrepareLoad_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaver::execPrepareLoad)
{
	P_GET_OBJECT(UDefaultSaveGame,Z_Param_SaveGame);
	P_GET_OBJECT(UObject,Z_Param_Instigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrepareLoad(Z_Param_SaveGame,Z_Param_Instigator);
	P_NATIVE_END;
}
// ********** End Class USaver Function PrepareLoad ************************************************

// ********** Begin Class USaver Function PrepareSave **********************************************
struct Z_Construct_UFunction_USaver_PrepareSave_Statics
{
	struct Saver_eventPrepareSave_Parms
	{
		UDefaultSaveGame* SaveGame;
		USlotInfoItem* SlotInfoItem;
		UObject* Instigator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Savers/Saver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotInfoItem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaver_PrepareSave_Statics::NewProp_SaveGame = { "SaveGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventPrepareSave_Parms, SaveGame), Z_Construct_UClass_UDefaultSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaver_PrepareSave_Statics::NewProp_SlotInfoItem = { "SlotInfoItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventPrepareSave_Parms, SlotInfoItem), Z_Construct_UClass_USlotInfoItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaver_PrepareSave_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventPrepareSave_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaver_PrepareSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_PrepareSave_Statics::NewProp_SaveGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_PrepareSave_Statics::NewProp_SlotInfoItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_PrepareSave_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_PrepareSave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaver_PrepareSave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaver, nullptr, "PrepareSave", Z_Construct_UFunction_USaver_PrepareSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_PrepareSave_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaver_PrepareSave_Statics::Saver_eventPrepareSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_PrepareSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaver_PrepareSave_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USaver_PrepareSave_Statics::Saver_eventPrepareSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaver_PrepareSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaver_PrepareSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaver::execPrepareSave)
{
	P_GET_OBJECT(UDefaultSaveGame,Z_Param_SaveGame);
	P_GET_OBJECT(USlotInfoItem,Z_Param_SlotInfoItem);
	P_GET_OBJECT(UObject,Z_Param_Instigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrepareSave(Z_Param_SaveGame,Z_Param_SlotInfoItem,Z_Param_Instigator);
	P_NATIVE_END;
}
// ********** End Class USaver Function PrepareSave ************************************************

// ********** Begin Class USaver Function PrepareSharedLoad ****************************************
struct Z_Construct_UFunction_USaver_PrepareSharedLoad_Statics
{
	struct Saver_eventPrepareSharedLoad_Parms
	{
		UDefaultSaveGame* SaveGame;
		UObject* Instigator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Savers/Saver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaver_PrepareSharedLoad_Statics::NewProp_SaveGame = { "SaveGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventPrepareSharedLoad_Parms, SaveGame), Z_Construct_UClass_UDefaultSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaver_PrepareSharedLoad_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventPrepareSharedLoad_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaver_PrepareSharedLoad_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_PrepareSharedLoad_Statics::NewProp_SaveGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_PrepareSharedLoad_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_PrepareSharedLoad_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaver_PrepareSharedLoad_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaver, nullptr, "PrepareSharedLoad", Z_Construct_UFunction_USaver_PrepareSharedLoad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_PrepareSharedLoad_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaver_PrepareSharedLoad_Statics::Saver_eventPrepareSharedLoad_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_PrepareSharedLoad_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaver_PrepareSharedLoad_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USaver_PrepareSharedLoad_Statics::Saver_eventPrepareSharedLoad_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaver_PrepareSharedLoad()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaver_PrepareSharedLoad_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaver::execPrepareSharedLoad)
{
	P_GET_OBJECT(UDefaultSaveGame,Z_Param_SaveGame);
	P_GET_OBJECT(UObject,Z_Param_Instigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrepareSharedLoad(Z_Param_SaveGame,Z_Param_Instigator);
	P_NATIVE_END;
}
// ********** End Class USaver Function PrepareSharedLoad ******************************************

// ********** Begin Class USaver Function PrepareSharedSave ****************************************
struct Z_Construct_UFunction_USaver_PrepareSharedSave_Statics
{
	struct Saver_eventPrepareSharedSave_Parms
	{
		UDefaultSaveGame* SaveGame;
		USlotInfoItem* SlotInfoItem;
		UObject* Instigator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/Savers/Saver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotInfoItem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaver_PrepareSharedSave_Statics::NewProp_SaveGame = { "SaveGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventPrepareSharedSave_Parms, SaveGame), Z_Construct_UClass_UDefaultSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaver_PrepareSharedSave_Statics::NewProp_SlotInfoItem = { "SlotInfoItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventPrepareSharedSave_Parms, SlotInfoItem), Z_Construct_UClass_USlotInfoItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaver_PrepareSharedSave_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Saver_eventPrepareSharedSave_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaver_PrepareSharedSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_PrepareSharedSave_Statics::NewProp_SaveGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_PrepareSharedSave_Statics::NewProp_SlotInfoItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaver_PrepareSharedSave_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_PrepareSharedSave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaver_PrepareSharedSave_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USaver, nullptr, "PrepareSharedSave", Z_Construct_UFunction_USaver_PrepareSharedSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_PrepareSharedSave_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaver_PrepareSharedSave_Statics::Saver_eventPrepareSharedSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaver_PrepareSharedSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaver_PrepareSharedSave_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USaver_PrepareSharedSave_Statics::Saver_eventPrepareSharedSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaver_PrepareSharedSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaver_PrepareSharedSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaver::execPrepareSharedSave)
{
	P_GET_OBJECT(UDefaultSaveGame,Z_Param_SaveGame);
	P_GET_OBJECT(USlotInfoItem,Z_Param_SlotInfoItem);
	P_GET_OBJECT(UObject,Z_Param_Instigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrepareSharedSave(Z_Param_SaveGame,Z_Param_SlotInfoItem,Z_Param_Instigator);
	P_NATIVE_END;
}
// ********** End Class USaver Function PrepareSharedSave ******************************************

// ********** Begin Class USaver *******************************************************************
void USaver::StaticRegisterNativesUSaver()
{
	UClass* Class = USaver::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetUniqueSaveID", &USaver::execGetUniqueSaveID },
		{ "OnBeginWithLoadedSharedSaveGameEvent", &USaver::execOnBeginWithLoadedSharedSaveGameEvent },
		{ "OnBeginWithNewSaveGameEvent", &USaver::execOnBeginWithNewSaveGameEvent },
		{ "OnBeginWithNewSharedSaveGameEvent", &USaver::execOnBeginWithNewSharedSaveGameEvent },
		{ "OnLoadCompletedEvent", &USaver::execOnLoadCompletedEvent },
		{ "OnPrepareLoad", &USaver::execOnPrepareLoad },
		{ "OnPrepareSave", &USaver::execOnPrepareSave },
		{ "OnPrepareSharedLoad", &USaver::execOnPrepareSharedLoad },
		{ "OnPrepareSharedSave", &USaver::execOnPrepareSharedSave },
		{ "OnSaveCompletedEvent", &USaver::execOnSaveCompletedEvent },
		{ "OnSharedLoadCompletedEvent", &USaver::execOnSharedLoadCompletedEvent },
		{ "OnSharedSaveCompletedEvent", &USaver::execOnSharedSaveCompletedEvent },
		{ "PrepareLoad", &USaver::execPrepareLoad },
		{ "PrepareSave", &USaver::execPrepareSave },
		{ "PrepareSharedLoad", &USaver::execPrepareSharedLoad },
		{ "PrepareSharedSave", &USaver::execPrepareSharedSave },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USaver;
UClass* USaver::GetPrivateStaticClass()
{
	using TClass = USaver;
	if (!Z_Registration_Info_UClass_USaver.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Saver"),
			Z_Registration_Info_UClass_USaver.InnerSingleton,
			StaticRegisterNativesUSaver,
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
	return Z_Registration_Info_UClass_USaver.InnerSingleton;
}
UClass* Z_Construct_UClass_USaver_NoRegister()
{
	return USaver::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USaver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/Savers/Saver.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/Savers/Saver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPrepSave_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Components/Savers/Saver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPrepLoad_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Components/Savers/Saver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSaveGameCompleted_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Components/Savers/Saver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLoadGameCompleted_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Components/Savers/Saver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPrepSharedSave_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Components/Savers/Saver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPrepSharedLoad_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Components/Savers/Saver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSharedSaveGameCompleted_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Components/Savers/Saver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSharedLoadGameCompleted_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Components/Savers/Saver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBeginWithNewSaveGame_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Components/Savers/Saver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBeginWithLoadedSharedSaveGame_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Components/Savers/Saver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBeginWithNewSharedSaveGame_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Components/Savers/Saver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDelayBeginWithLoadForNextTick_MetaData[] = {
		{ "Category", "Saver" },
		{ "ModuleRelativePath", "Public/Components/Savers/Saver.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Useful when you want to delay the BeginWithLoad Events for the next tick in case you want to do some initialization before the events are called." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/Savers/Saver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPrepSave;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPrepLoad;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSaveGameCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoadGameCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPrepSharedSave;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPrepSharedLoad;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSharedSaveGameCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSharedLoadGameCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeginWithNewSaveGame;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeginWithLoadedSharedSaveGame;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeginWithNewSharedSaveGame;
	static void NewProp_bDelayBeginWithLoadForNextTick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDelayBeginWithLoadForNextTick;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USaver_GetUniqueSaveID, "GetUniqueSaveID" }, // 3096435179
		{ &Z_Construct_UFunction_USaver_OnBeginWithLoadedSharedSaveGameEvent, "OnBeginWithLoadedSharedSaveGameEvent" }, // 474791433
		{ &Z_Construct_UFunction_USaver_OnBeginWithNewSaveGameEvent, "OnBeginWithNewSaveGameEvent" }, // 52134768
		{ &Z_Construct_UFunction_USaver_OnBeginWithNewSharedSaveGameEvent, "OnBeginWithNewSharedSaveGameEvent" }, // 1403327174
		{ &Z_Construct_UFunction_USaver_OnLoadCompletedEvent, "OnLoadCompletedEvent" }, // 3864211344
		{ &Z_Construct_UFunction_USaver_OnPrepareLoad, "OnPrepareLoad" }, // 3685557097
		{ &Z_Construct_UFunction_USaver_OnPrepareSave, "OnPrepareSave" }, // 3994234236
		{ &Z_Construct_UFunction_USaver_OnPrepareSharedLoad, "OnPrepareSharedLoad" }, // 3329602781
		{ &Z_Construct_UFunction_USaver_OnPrepareSharedSave, "OnPrepareSharedSave" }, // 2773656083
		{ &Z_Construct_UFunction_USaver_OnSaveCompletedEvent, "OnSaveCompletedEvent" }, // 3044742345
		{ &Z_Construct_UFunction_USaver_OnSharedLoadCompletedEvent, "OnSharedLoadCompletedEvent" }, // 1888576979
		{ &Z_Construct_UFunction_USaver_OnSharedSaveCompletedEvent, "OnSharedSaveCompletedEvent" }, // 3356741807
		{ &Z_Construct_UFunction_USaver_PrepareLoad, "PrepareLoad" }, // 3086971679
		{ &Z_Construct_UFunction_USaver_PrepareSave, "PrepareSave" }, // 1258505786
		{ &Z_Construct_UFunction_USaver_PrepareSharedLoad, "PrepareSharedLoad" }, // 18107163
		{ &Z_Construct_UFunction_USaver_PrepareSharedSave, "PrepareSharedSave" }, // 2883103716
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USaver_Statics::NewProp_OnPrepSave = { "OnPrepSave", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaver, OnPrepSave), Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSave__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPrepSave_MetaData), NewProp_OnPrepSave_MetaData) }; // 1589243362
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USaver_Statics::NewProp_OnPrepLoad = { "OnPrepLoad", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaver, OnPrepLoad), Z_Construct_UDelegateFunction_SaveSystem_OnPrepareLoad__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPrepLoad_MetaData), NewProp_OnPrepLoad_MetaData) }; // 4033779787
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USaver_Statics::NewProp_OnSaveGameCompleted = { "OnSaveGameCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaver, OnSaveGameCompleted), Z_Construct_UDelegateFunction_SaveSystem_OnSaveGame__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSaveGameCompleted_MetaData), NewProp_OnSaveGameCompleted_MetaData) }; // 3256541046
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USaver_Statics::NewProp_OnLoadGameCompleted = { "OnLoadGameCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaver, OnLoadGameCompleted), Z_Construct_UDelegateFunction_SaveSystem_OnLoadGame__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLoadGameCompleted_MetaData), NewProp_OnLoadGameCompleted_MetaData) }; // 2260264763
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USaver_Statics::NewProp_OnPrepSharedSave = { "OnPrepSharedSave", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaver, OnPrepSharedSave), Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedSave__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPrepSharedSave_MetaData), NewProp_OnPrepSharedSave_MetaData) }; // 2287876606
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USaver_Statics::NewProp_OnPrepSharedLoad = { "OnPrepSharedLoad", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaver, OnPrepSharedLoad), Z_Construct_UDelegateFunction_SaveSystem_OnPrepareSharedLoad__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPrepSharedLoad_MetaData), NewProp_OnPrepSharedLoad_MetaData) }; // 3589075229
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USaver_Statics::NewProp_OnSharedSaveGameCompleted = { "OnSharedSaveGameCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaver, OnSharedSaveGameCompleted), Z_Construct_UDelegateFunction_SaveSystem_OnSharedSaveGame__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSharedSaveGameCompleted_MetaData), NewProp_OnSharedSaveGameCompleted_MetaData) }; // 1830728744
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USaver_Statics::NewProp_OnSharedLoadGameCompleted = { "OnSharedLoadGameCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaver, OnSharedLoadGameCompleted), Z_Construct_UDelegateFunction_SaveSystem_OnSharedLoadGame__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSharedLoadGameCompleted_MetaData), NewProp_OnSharedLoadGameCompleted_MetaData) }; // 327982256
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USaver_Statics::NewProp_OnBeginWithNewSaveGame = { "OnBeginWithNewSaveGame", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaver, OnBeginWithNewSaveGame), Z_Construct_UDelegateFunction_SaveSystem_OnBeginWithNewSaveGame__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBeginWithNewSaveGame_MetaData), NewProp_OnBeginWithNewSaveGame_MetaData) }; // 4035929874
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USaver_Statics::NewProp_OnBeginWithLoadedSharedSaveGame = { "OnBeginWithLoadedSharedSaveGame", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaver, OnBeginWithLoadedSharedSaveGame), Z_Construct_UDelegateFunction_SaveSystem_OnBegingWithLoadedSharedSaveGame__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBeginWithLoadedSharedSaveGame_MetaData), NewProp_OnBeginWithLoadedSharedSaveGame_MetaData) }; // 2722867851
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USaver_Statics::NewProp_OnBeginWithNewSharedSaveGame = { "OnBeginWithNewSharedSaveGame", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaver, OnBeginWithNewSharedSaveGame), Z_Construct_UDelegateFunction_SaveSystem_OnBeginWithNewSharedSaveGame__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBeginWithNewSharedSaveGame_MetaData), NewProp_OnBeginWithNewSharedSaveGame_MetaData) }; // 1469377003
void Z_Construct_UClass_USaver_Statics::NewProp_bDelayBeginWithLoadForNextTick_SetBit(void* Obj)
{
	((USaver*)Obj)->bDelayBeginWithLoadForNextTick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USaver_Statics::NewProp_bDelayBeginWithLoadForNextTick = { "bDelayBeginWithLoadForNextTick", nullptr, (EPropertyFlags)0x0010040000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USaver), &Z_Construct_UClass_USaver_Statics::NewProp_bDelayBeginWithLoadForNextTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDelayBeginWithLoadForNextTick_MetaData), NewProp_bDelayBeginWithLoadForNextTick_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaver_Statics::NewProp_SaveManager = { "SaveManager", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaver, SaveManager), Z_Construct_UClass_USaveManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveManager_MetaData), NewProp_SaveManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaver_Statics::NewProp_OnPrepSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaver_Statics::NewProp_OnPrepLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaver_Statics::NewProp_OnSaveGameCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaver_Statics::NewProp_OnLoadGameCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaver_Statics::NewProp_OnPrepSharedSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaver_Statics::NewProp_OnPrepSharedLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaver_Statics::NewProp_OnSharedSaveGameCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaver_Statics::NewProp_OnSharedLoadGameCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaver_Statics::NewProp_OnBeginWithNewSaveGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaver_Statics::NewProp_OnBeginWithLoadedSharedSaveGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaver_Statics::NewProp_OnBeginWithNewSharedSaveGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaver_Statics::NewProp_bDelayBeginWithLoadForNextTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaver_Statics::NewProp_SaveManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaver_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USaver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SaveSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USaver_Statics::ClassParams = {
	&USaver::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USaver_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USaver_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaver_Statics::Class_MetaDataParams), Z_Construct_UClass_USaver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USaver()
{
	if (!Z_Registration_Info_UClass_USaver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaver.OuterSingleton, Z_Construct_UClass_USaver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USaver.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USaver);
USaver::~USaver() {}
// ********** End Class USaver *********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Components_Savers_Saver_h__Script_SaveSystem_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USaver, USaver::StaticClass, TEXT("USaver"), &Z_Registration_Info_UClass_USaver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaver), 1816898881U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Components_Savers_Saver_h__Script_SaveSystem_2601395773(TEXT("/Script/SaveSystem"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Components_Savers_Saver_h__Script_SaveSystem_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Components_Savers_Saver_h__Script_SaveSystem_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
