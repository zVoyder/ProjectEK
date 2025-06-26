// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Features/Gameplay/CurrencySystem/CurrenciesManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCurrenciesManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SAVESYSTEM_API UClass* Z_Construct_UClass_USaveable_NoRegister();
UPackage* Z_Construct_UPackage__Script_VUEDKCore();
VUEDKCORE_API UClass* Z_Construct_UClass_UCurrenciesManager();
VUEDKCORE_API UClass* Z_Construct_UClass_UCurrenciesManager_NoRegister();
VUEDKCORE_API UClass* Z_Construct_UClass_UCurrenciesSaveData_NoRegister();
VUEDKCORE_API UClass* Z_Construct_UClass_UCurrencyData_NoRegister();
VUEDKCORE_API UFunction* Z_Construct_UDelegateFunction_VUEDKCore_OnAnyCurrencyAmountChanged__DelegateSignature();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnAnyCurrencyAmountChanged *******************************************
struct Z_Construct_UDelegateFunction_VUEDKCore_OnAnyCurrencyAmountChanged__DelegateSignature_Statics
{
	struct _Script_VUEDKCore_eventOnAnyCurrencyAmountChanged_Parms
	{
		UCurrencyData* Currency;
		int32 NewAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Features/Gameplay/CurrencySystem/CurrenciesManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Currency;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_VUEDKCore_OnAnyCurrencyAmountChanged__DelegateSignature_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VUEDKCore_eventOnAnyCurrencyAmountChanged_Parms, Currency), Z_Construct_UClass_UCurrencyData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_VUEDKCore_OnAnyCurrencyAmountChanged__DelegateSignature_Statics::NewProp_NewAmount = { "NewAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_VUEDKCore_eventOnAnyCurrencyAmountChanged_Parms, NewAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VUEDKCore_OnAnyCurrencyAmountChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VUEDKCore_OnAnyCurrencyAmountChanged__DelegateSignature_Statics::NewProp_Currency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VUEDKCore_OnAnyCurrencyAmountChanged__DelegateSignature_Statics::NewProp_NewAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VUEDKCore_OnAnyCurrencyAmountChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_VUEDKCore_OnAnyCurrencyAmountChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_VUEDKCore, nullptr, "OnAnyCurrencyAmountChanged__DelegateSignature", Z_Construct_UDelegateFunction_VUEDKCore_OnAnyCurrencyAmountChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VUEDKCore_OnAnyCurrencyAmountChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_VUEDKCore_OnAnyCurrencyAmountChanged__DelegateSignature_Statics::_Script_VUEDKCore_eventOnAnyCurrencyAmountChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VUEDKCore_OnAnyCurrencyAmountChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_VUEDKCore_OnAnyCurrencyAmountChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_VUEDKCore_OnAnyCurrencyAmountChanged__DelegateSignature_Statics::_Script_VUEDKCore_eventOnAnyCurrencyAmountChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_VUEDKCore_OnAnyCurrencyAmountChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VUEDKCore_OnAnyCurrencyAmountChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAnyCurrencyAmountChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAnyCurrencyAmountChanged, UCurrencyData* Currency, int32 NewAmount)
{
	struct _Script_VUEDKCore_eventOnAnyCurrencyAmountChanged_Parms
	{
		UCurrencyData* Currency;
		int32 NewAmount;
	};
	_Script_VUEDKCore_eventOnAnyCurrencyAmountChanged_Parms Parms;
	Parms.Currency=Currency;
	Parms.NewAmount=NewAmount;
	OnAnyCurrencyAmountChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAnyCurrencyAmountChanged *********************************************

// ********** Begin Class UCurrenciesManager Function AddCurrency **********************************
struct Z_Construct_UFunction_UCurrenciesManager_AddCurrency_Statics
{
	struct CurrenciesManager_eventAddCurrency_Parms
	{
		UCurrencyData* Currency;
		int32 AmountToAdd;
		int32 OutRemaining;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Features/Gameplay/CurrencySystem/CurrenciesManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Currency;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AmountToAdd;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutRemaining;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCurrenciesManager_AddCurrency_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CurrenciesManager_eventAddCurrency_Parms, Currency), Z_Construct_UClass_UCurrencyData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCurrenciesManager_AddCurrency_Statics::NewProp_AmountToAdd = { "AmountToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CurrenciesManager_eventAddCurrency_Parms, AmountToAdd), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCurrenciesManager_AddCurrency_Statics::NewProp_OutRemaining = { "OutRemaining", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CurrenciesManager_eventAddCurrency_Parms, OutRemaining), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurrenciesManager_AddCurrency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurrenciesManager_AddCurrency_Statics::NewProp_Currency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurrenciesManager_AddCurrency_Statics::NewProp_AmountToAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurrenciesManager_AddCurrency_Statics::NewProp_OutRemaining,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrenciesManager_AddCurrency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurrenciesManager_AddCurrency_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCurrenciesManager, nullptr, "AddCurrency", Z_Construct_UFunction_UCurrenciesManager_AddCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrenciesManager_AddCurrency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCurrenciesManager_AddCurrency_Statics::CurrenciesManager_eventAddCurrency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrenciesManager_AddCurrency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCurrenciesManager_AddCurrency_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCurrenciesManager_AddCurrency_Statics::CurrenciesManager_eventAddCurrency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCurrenciesManager_AddCurrency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCurrenciesManager_AddCurrency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCurrenciesManager::execAddCurrency)
{
	P_GET_OBJECT(UCurrencyData,Z_Param_Currency);
	P_GET_PROPERTY(FIntProperty,Z_Param_AmountToAdd);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutRemaining);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCurrency(Z_Param_Currency,Z_Param_AmountToAdd,Z_Param_Out_OutRemaining);
	P_NATIVE_END;
}
// ********** End Class UCurrenciesManager Function AddCurrency ************************************

// ********** Begin Class UCurrenciesManager Function ConsumeCurrency ******************************
struct Z_Construct_UFunction_UCurrenciesManager_ConsumeCurrency_Statics
{
	struct CurrenciesManager_eventConsumeCurrency_Parms
	{
		UCurrencyData* Currency;
		int32 AmountToConsume;
		int32 OutConsumedAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Features/Gameplay/CurrencySystem/CurrenciesManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Currency;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AmountToConsume;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutConsumedAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCurrenciesManager_ConsumeCurrency_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CurrenciesManager_eventConsumeCurrency_Parms, Currency), Z_Construct_UClass_UCurrencyData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCurrenciesManager_ConsumeCurrency_Statics::NewProp_AmountToConsume = { "AmountToConsume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CurrenciesManager_eventConsumeCurrency_Parms, AmountToConsume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCurrenciesManager_ConsumeCurrency_Statics::NewProp_OutConsumedAmount = { "OutConsumedAmount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CurrenciesManager_eventConsumeCurrency_Parms, OutConsumedAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurrenciesManager_ConsumeCurrency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurrenciesManager_ConsumeCurrency_Statics::NewProp_Currency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurrenciesManager_ConsumeCurrency_Statics::NewProp_AmountToConsume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurrenciesManager_ConsumeCurrency_Statics::NewProp_OutConsumedAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrenciesManager_ConsumeCurrency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurrenciesManager_ConsumeCurrency_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCurrenciesManager, nullptr, "ConsumeCurrency", Z_Construct_UFunction_UCurrenciesManager_ConsumeCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrenciesManager_ConsumeCurrency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCurrenciesManager_ConsumeCurrency_Statics::CurrenciesManager_eventConsumeCurrency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrenciesManager_ConsumeCurrency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCurrenciesManager_ConsumeCurrency_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCurrenciesManager_ConsumeCurrency_Statics::CurrenciesManager_eventConsumeCurrency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCurrenciesManager_ConsumeCurrency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCurrenciesManager_ConsumeCurrency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCurrenciesManager::execConsumeCurrency)
{
	P_GET_OBJECT(UCurrencyData,Z_Param_Currency);
	P_GET_PROPERTY(FIntProperty,Z_Param_AmountToConsume);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutConsumedAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConsumeCurrency(Z_Param_Currency,Z_Param_AmountToConsume,Z_Param_Out_OutConsumedAmount);
	P_NATIVE_END;
}
// ********** End Class UCurrenciesManager Function ConsumeCurrency ********************************

// ********** Begin Class UCurrenciesManager Function CreateCurrenciesSaveData *********************
struct Z_Construct_UFunction_UCurrenciesManager_CreateCurrenciesSaveData_Statics
{
	struct CurrenciesManager_eventCreateCurrenciesSaveData_Parms
	{
		UCurrenciesSaveData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Features/Gameplay/CurrencySystem/CurrenciesManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCurrenciesManager_CreateCurrenciesSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CurrenciesManager_eventCreateCurrenciesSaveData_Parms, ReturnValue), Z_Construct_UClass_UCurrenciesSaveData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurrenciesManager_CreateCurrenciesSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurrenciesManager_CreateCurrenciesSaveData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrenciesManager_CreateCurrenciesSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurrenciesManager_CreateCurrenciesSaveData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCurrenciesManager, nullptr, "CreateCurrenciesSaveData", Z_Construct_UFunction_UCurrenciesManager_CreateCurrenciesSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrenciesManager_CreateCurrenciesSaveData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCurrenciesManager_CreateCurrenciesSaveData_Statics::CurrenciesManager_eventCreateCurrenciesSaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrenciesManager_CreateCurrenciesSaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCurrenciesManager_CreateCurrenciesSaveData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCurrenciesManager_CreateCurrenciesSaveData_Statics::CurrenciesManager_eventCreateCurrenciesSaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCurrenciesManager_CreateCurrenciesSaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCurrenciesManager_CreateCurrenciesSaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCurrenciesManager::execCreateCurrenciesSaveData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCurrenciesSaveData**)Z_Param__Result=P_THIS->CreateCurrenciesSaveData();
	P_NATIVE_END;
}
// ********** End Class UCurrenciesManager Function CreateCurrenciesSaveData ***********************

// ********** Begin Class UCurrenciesManager Function GetCurrencyAmount ****************************
struct Z_Construct_UFunction_UCurrenciesManager_GetCurrencyAmount_Statics
{
	struct CurrenciesManager_eventGetCurrencyAmount_Parms
	{
		const UCurrencyData* Currency;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Features/Gameplay/CurrencySystem/CurrenciesManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Currency;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCurrenciesManager_GetCurrencyAmount_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CurrenciesManager_eventGetCurrencyAmount_Parms, Currency), Z_Construct_UClass_UCurrencyData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Currency_MetaData), NewProp_Currency_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCurrenciesManager_GetCurrencyAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CurrenciesManager_eventGetCurrencyAmount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurrenciesManager_GetCurrencyAmount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurrenciesManager_GetCurrencyAmount_Statics::NewProp_Currency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurrenciesManager_GetCurrencyAmount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrenciesManager_GetCurrencyAmount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurrenciesManager_GetCurrencyAmount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCurrenciesManager, nullptr, "GetCurrencyAmount", Z_Construct_UFunction_UCurrenciesManager_GetCurrencyAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrenciesManager_GetCurrencyAmount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCurrenciesManager_GetCurrencyAmount_Statics::CurrenciesManager_eventGetCurrencyAmount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrenciesManager_GetCurrencyAmount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCurrenciesManager_GetCurrencyAmount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCurrenciesManager_GetCurrencyAmount_Statics::CurrenciesManager_eventGetCurrencyAmount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCurrenciesManager_GetCurrencyAmount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCurrenciesManager_GetCurrencyAmount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCurrenciesManager::execGetCurrencyAmount)
{
	P_GET_OBJECT(UCurrencyData,Z_Param_Currency);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrencyAmount(Z_Param_Currency);
	P_NATIVE_END;
}
// ********** End Class UCurrenciesManager Function GetCurrencyAmount ******************************

// ********** Begin Class UCurrenciesManager Function HasCurrency **********************************
struct Z_Construct_UFunction_UCurrenciesManager_HasCurrency_Statics
{
	struct CurrenciesManager_eventHasCurrency_Parms
	{
		const UCurrencyData* Currency;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Features/Gameplay/CurrencySystem/CurrenciesManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Currency;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCurrenciesManager_HasCurrency_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CurrenciesManager_eventHasCurrency_Parms, Currency), Z_Construct_UClass_UCurrencyData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Currency_MetaData), NewProp_Currency_MetaData) };
void Z_Construct_UFunction_UCurrenciesManager_HasCurrency_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CurrenciesManager_eventHasCurrency_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCurrenciesManager_HasCurrency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CurrenciesManager_eventHasCurrency_Parms), &Z_Construct_UFunction_UCurrenciesManager_HasCurrency_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurrenciesManager_HasCurrency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurrenciesManager_HasCurrency_Statics::NewProp_Currency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurrenciesManager_HasCurrency_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrenciesManager_HasCurrency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurrenciesManager_HasCurrency_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCurrenciesManager, nullptr, "HasCurrency", Z_Construct_UFunction_UCurrenciesManager_HasCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrenciesManager_HasCurrency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCurrenciesManager_HasCurrency_Statics::CurrenciesManager_eventHasCurrency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrenciesManager_HasCurrency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCurrenciesManager_HasCurrency_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCurrenciesManager_HasCurrency_Statics::CurrenciesManager_eventHasCurrency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCurrenciesManager_HasCurrency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCurrenciesManager_HasCurrency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCurrenciesManager::execHasCurrency)
{
	P_GET_OBJECT(UCurrencyData,Z_Param_Currency);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasCurrency(Z_Param_Currency);
	P_NATIVE_END;
}
// ********** End Class UCurrenciesManager Function HasCurrency ************************************

// ********** Begin Class UCurrenciesManager Function HasEnoughCurrencyAmount **********************
struct Z_Construct_UFunction_UCurrenciesManager_HasEnoughCurrencyAmount_Statics
{
	struct CurrenciesManager_eventHasEnoughCurrencyAmount_Parms
	{
		const UCurrencyData* Currency;
		int32 AmountToCheck;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Features/Gameplay/CurrencySystem/CurrenciesManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmountToCheck_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Currency;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AmountToCheck;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCurrenciesManager_HasEnoughCurrencyAmount_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CurrenciesManager_eventHasEnoughCurrencyAmount_Parms, Currency), Z_Construct_UClass_UCurrencyData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Currency_MetaData), NewProp_Currency_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCurrenciesManager_HasEnoughCurrencyAmount_Statics::NewProp_AmountToCheck = { "AmountToCheck", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CurrenciesManager_eventHasEnoughCurrencyAmount_Parms, AmountToCheck), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmountToCheck_MetaData), NewProp_AmountToCheck_MetaData) };
void Z_Construct_UFunction_UCurrenciesManager_HasEnoughCurrencyAmount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CurrenciesManager_eventHasEnoughCurrencyAmount_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCurrenciesManager_HasEnoughCurrencyAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CurrenciesManager_eventHasEnoughCurrencyAmount_Parms), &Z_Construct_UFunction_UCurrenciesManager_HasEnoughCurrencyAmount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurrenciesManager_HasEnoughCurrencyAmount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurrenciesManager_HasEnoughCurrencyAmount_Statics::NewProp_Currency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurrenciesManager_HasEnoughCurrencyAmount_Statics::NewProp_AmountToCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurrenciesManager_HasEnoughCurrencyAmount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrenciesManager_HasEnoughCurrencyAmount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurrenciesManager_HasEnoughCurrencyAmount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCurrenciesManager, nullptr, "HasEnoughCurrencyAmount", Z_Construct_UFunction_UCurrenciesManager_HasEnoughCurrencyAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrenciesManager_HasEnoughCurrencyAmount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCurrenciesManager_HasEnoughCurrencyAmount_Statics::CurrenciesManager_eventHasEnoughCurrencyAmount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrenciesManager_HasEnoughCurrencyAmount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCurrenciesManager_HasEnoughCurrencyAmount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCurrenciesManager_HasEnoughCurrencyAmount_Statics::CurrenciesManager_eventHasEnoughCurrencyAmount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCurrenciesManager_HasEnoughCurrencyAmount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCurrenciesManager_HasEnoughCurrencyAmount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCurrenciesManager::execHasEnoughCurrencyAmount)
{
	P_GET_OBJECT(UCurrencyData,Z_Param_Currency);
	P_GET_PROPERTY(FIntProperty,Z_Param_AmountToCheck);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasEnoughCurrencyAmount(Z_Param_Currency,Z_Param_AmountToCheck);
	P_NATIVE_END;
}
// ********** End Class UCurrenciesManager Function HasEnoughCurrencyAmount ************************

// ********** Begin Class UCurrenciesManager Function IsCurrencyMaxed ******************************
struct Z_Construct_UFunction_UCurrenciesManager_IsCurrencyMaxed_Statics
{
	struct CurrenciesManager_eventIsCurrencyMaxed_Parms
	{
		const UCurrencyData* Currency;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Features/Gameplay/CurrencySystem/CurrenciesManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Currency;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCurrenciesManager_IsCurrencyMaxed_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CurrenciesManager_eventIsCurrencyMaxed_Parms, Currency), Z_Construct_UClass_UCurrencyData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Currency_MetaData), NewProp_Currency_MetaData) };
void Z_Construct_UFunction_UCurrenciesManager_IsCurrencyMaxed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CurrenciesManager_eventIsCurrencyMaxed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCurrenciesManager_IsCurrencyMaxed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CurrenciesManager_eventIsCurrencyMaxed_Parms), &Z_Construct_UFunction_UCurrenciesManager_IsCurrencyMaxed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurrenciesManager_IsCurrencyMaxed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurrenciesManager_IsCurrencyMaxed_Statics::NewProp_Currency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurrenciesManager_IsCurrencyMaxed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrenciesManager_IsCurrencyMaxed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurrenciesManager_IsCurrencyMaxed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCurrenciesManager, nullptr, "IsCurrencyMaxed", Z_Construct_UFunction_UCurrenciesManager_IsCurrencyMaxed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrenciesManager_IsCurrencyMaxed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCurrenciesManager_IsCurrencyMaxed_Statics::CurrenciesManager_eventIsCurrencyMaxed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrenciesManager_IsCurrencyMaxed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCurrenciesManager_IsCurrencyMaxed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCurrenciesManager_IsCurrencyMaxed_Statics::CurrenciesManager_eventIsCurrencyMaxed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCurrenciesManager_IsCurrencyMaxed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCurrenciesManager_IsCurrencyMaxed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCurrenciesManager::execIsCurrencyMaxed)
{
	P_GET_OBJECT(UCurrencyData,Z_Param_Currency);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCurrencyMaxed(Z_Param_Currency);
	P_NATIVE_END;
}
// ********** End Class UCurrenciesManager Function IsCurrencyMaxed ********************************

// ********** Begin Class UCurrenciesManager Function LoadCurrenciesSaveData ***********************
struct Z_Construct_UFunction_UCurrenciesManager_LoadCurrenciesSaveData_Statics
{
	struct CurrenciesManager_eventLoadCurrenciesSaveData_Parms
	{
		UCurrenciesSaveData* CurrenciesSaveData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Features/Gameplay/CurrencySystem/CurrenciesManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrenciesSaveData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCurrenciesManager_LoadCurrenciesSaveData_Statics::NewProp_CurrenciesSaveData = { "CurrenciesSaveData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CurrenciesManager_eventLoadCurrenciesSaveData_Parms, CurrenciesSaveData), Z_Construct_UClass_UCurrenciesSaveData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurrenciesManager_LoadCurrenciesSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurrenciesManager_LoadCurrenciesSaveData_Statics::NewProp_CurrenciesSaveData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrenciesManager_LoadCurrenciesSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurrenciesManager_LoadCurrenciesSaveData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCurrenciesManager, nullptr, "LoadCurrenciesSaveData", Z_Construct_UFunction_UCurrenciesManager_LoadCurrenciesSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrenciesManager_LoadCurrenciesSaveData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCurrenciesManager_LoadCurrenciesSaveData_Statics::CurrenciesManager_eventLoadCurrenciesSaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurrenciesManager_LoadCurrenciesSaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCurrenciesManager_LoadCurrenciesSaveData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCurrenciesManager_LoadCurrenciesSaveData_Statics::CurrenciesManager_eventLoadCurrenciesSaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCurrenciesManager_LoadCurrenciesSaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCurrenciesManager_LoadCurrenciesSaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCurrenciesManager::execLoadCurrenciesSaveData)
{
	P_GET_OBJECT(UCurrenciesSaveData,Z_Param_CurrenciesSaveData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadCurrenciesSaveData(Z_Param_CurrenciesSaveData);
	P_NATIVE_END;
}
// ********** End Class UCurrenciesManager Function LoadCurrenciesSaveData *************************

// ********** Begin Class UCurrenciesManager *******************************************************
void UCurrenciesManager::StaticRegisterNativesUCurrenciesManager()
{
	UClass* Class = UCurrenciesManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCurrency", &UCurrenciesManager::execAddCurrency },
		{ "ConsumeCurrency", &UCurrenciesManager::execConsumeCurrency },
		{ "CreateCurrenciesSaveData", &UCurrenciesManager::execCreateCurrenciesSaveData },
		{ "GetCurrencyAmount", &UCurrenciesManager::execGetCurrencyAmount },
		{ "HasCurrency", &UCurrenciesManager::execHasCurrency },
		{ "HasEnoughCurrencyAmount", &UCurrenciesManager::execHasEnoughCurrencyAmount },
		{ "IsCurrencyMaxed", &UCurrenciesManager::execIsCurrencyMaxed },
		{ "LoadCurrenciesSaveData", &UCurrenciesManager::execLoadCurrenciesSaveData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCurrenciesManager;
UClass* UCurrenciesManager::GetPrivateStaticClass()
{
	using TClass = UCurrenciesManager;
	if (!Z_Registration_Info_UClass_UCurrenciesManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CurrenciesManager"),
			Z_Registration_Info_UClass_UCurrenciesManager.InnerSingleton,
			StaticRegisterNativesUCurrenciesManager,
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
	return Z_Registration_Info_UClass_UCurrenciesManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UCurrenciesManager_NoRegister()
{
	return UCurrenciesManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCurrenciesManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Features/Gameplay/CurrencySystem/CurrenciesManager.h" },
		{ "ModuleRelativePath", "Public/Features/Gameplay/CurrencySystem/CurrenciesManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAnyCurrencyAmountChanged_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Features/Gameplay/CurrencySystem/CurrenciesManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Currencies_MetaData[] = {
		{ "Category", "CurrenciesManager" },
		{ "ModuleRelativePath", "Public/Features/Gameplay/CurrencySystem/CurrenciesManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAnyCurrencyAmountChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Currencies_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Currencies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCurrenciesManager_AddCurrency, "AddCurrency" }, // 260879787
		{ &Z_Construct_UFunction_UCurrenciesManager_ConsumeCurrency, "ConsumeCurrency" }, // 587290664
		{ &Z_Construct_UFunction_UCurrenciesManager_CreateCurrenciesSaveData, "CreateCurrenciesSaveData" }, // 662820791
		{ &Z_Construct_UFunction_UCurrenciesManager_GetCurrencyAmount, "GetCurrencyAmount" }, // 3910230282
		{ &Z_Construct_UFunction_UCurrenciesManager_HasCurrency, "HasCurrency" }, // 854569963
		{ &Z_Construct_UFunction_UCurrenciesManager_HasEnoughCurrencyAmount, "HasEnoughCurrencyAmount" }, // 1284077345
		{ &Z_Construct_UFunction_UCurrenciesManager_IsCurrencyMaxed, "IsCurrencyMaxed" }, // 3031789425
		{ &Z_Construct_UFunction_UCurrenciesManager_LoadCurrenciesSaveData, "LoadCurrenciesSaveData" }, // 130388024
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurrenciesManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCurrenciesManager_Statics::NewProp_OnAnyCurrencyAmountChanged = { "OnAnyCurrencyAmountChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurrenciesManager, OnAnyCurrencyAmountChanged), Z_Construct_UDelegateFunction_VUEDKCore_OnAnyCurrencyAmountChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAnyCurrencyAmountChanged_MetaData), NewProp_OnAnyCurrencyAmountChanged_MetaData) }; // 1133717458
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCurrenciesManager_Statics::NewProp_Currencies_ElementProp = { "Currencies", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCurrencyData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UCurrenciesManager_Statics::NewProp_Currencies = { "Currencies", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurrenciesManager, Currencies), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Currencies_MetaData), NewProp_Currencies_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurrenciesManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrenciesManager_Statics::NewProp_OnAnyCurrencyAmountChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrenciesManager_Statics::NewProp_Currencies_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurrenciesManager_Statics::NewProp_Currencies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCurrenciesManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCurrenciesManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VUEDKCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCurrenciesManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCurrenciesManager_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USaveable_NoRegister, (int32)VTABLE_OFFSET(UCurrenciesManager, ISaveable), false },  // 2639263768
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurrenciesManager_Statics::ClassParams = {
	&UCurrenciesManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCurrenciesManager_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCurrenciesManager_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCurrenciesManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UCurrenciesManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCurrenciesManager()
{
	if (!Z_Registration_Info_UClass_UCurrenciesManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurrenciesManager.OuterSingleton, Z_Construct_UClass_UCurrenciesManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCurrenciesManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCurrenciesManager);
UCurrenciesManager::~UCurrenciesManager() {}
// ********** End Class UCurrenciesManager *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_VUEDKCore_Source_VUEDKCore_Public_Features_Gameplay_CurrencySystem_CurrenciesManager_h__Script_VUEDKCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCurrenciesManager, UCurrenciesManager::StaticClass, TEXT("UCurrenciesManager"), &Z_Registration_Info_UClass_UCurrenciesManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurrenciesManager), 719034341U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_VUEDKCore_Source_VUEDKCore_Public_Features_Gameplay_CurrencySystem_CurrenciesManager_h__Script_VUEDKCore_3724220422(TEXT("/Script/VUEDKCore"),
	Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_VUEDKCore_Source_VUEDKCore_Public_Features_Gameplay_CurrencySystem_CurrenciesManager_h__Script_VUEDKCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectEK_Plugins_VUEDK_VUEDKCore_Source_VUEDKCore_Public_Features_Gameplay_CurrencySystem_CurrenciesManager_h__Script_VUEDKCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
