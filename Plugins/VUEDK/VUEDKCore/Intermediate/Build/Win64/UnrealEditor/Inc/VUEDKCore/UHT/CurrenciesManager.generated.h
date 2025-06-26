// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Features/Gameplay/CurrencySystem/CurrenciesManager.h"

#ifdef VUEDKCORE_CurrenciesManager_generated_h
#error "CurrenciesManager.generated.h already included, missing '#pragma once' in CurrenciesManager.h"
#endif
#define VUEDKCORE_CurrenciesManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UCurrenciesSaveData;
class UCurrencyData;

// ********** Begin Delegate FOnAnyCurrencyAmountChanged *******************************************
#define FID_ProjectEK_Plugins_VUEDK_VUEDKCore_Source_VUEDKCore_Public_Features_Gameplay_CurrencySystem_CurrenciesManager_h_16_DELEGATE \
VUEDKCORE_API void FOnAnyCurrencyAmountChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAnyCurrencyAmountChanged, UCurrencyData* Currency, int32 NewAmount);


// ********** End Delegate FOnAnyCurrencyAmountChanged *********************************************

// ********** Begin Class UCurrenciesManager *******************************************************
#define FID_ProjectEK_Plugins_VUEDK_VUEDKCore_Source_VUEDKCore_Public_Features_Gameplay_CurrencySystem_CurrenciesManager_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsCurrencyMaxed); \
	DECLARE_FUNCTION(execConsumeCurrency); \
	DECLARE_FUNCTION(execAddCurrency); \
	DECLARE_FUNCTION(execHasEnoughCurrencyAmount); \
	DECLARE_FUNCTION(execHasCurrency); \
	DECLARE_FUNCTION(execGetCurrencyAmount); \
	DECLARE_FUNCTION(execLoadCurrenciesSaveData); \
	DECLARE_FUNCTION(execCreateCurrenciesSaveData);


VUEDKCORE_API UClass* Z_Construct_UClass_UCurrenciesManager_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_VUEDKCore_Source_VUEDKCore_Public_Features_Gameplay_CurrencySystem_CurrenciesManager_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCurrenciesManager(); \
	friend struct Z_Construct_UClass_UCurrenciesManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VUEDKCORE_API UClass* Z_Construct_UClass_UCurrenciesManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UCurrenciesManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VUEDKCore"), Z_Construct_UClass_UCurrenciesManager_NoRegister) \
	DECLARE_SERIALIZER(UCurrenciesManager) \
	virtual UObject* _getUObject() const override { return const_cast<UCurrenciesManager*>(this); }


#define FID_ProjectEK_Plugins_VUEDK_VUEDKCore_Source_VUEDKCore_Public_Features_Gameplay_CurrencySystem_CurrenciesManager_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCurrenciesManager(UCurrenciesManager&&) = delete; \
	UCurrenciesManager(const UCurrenciesManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCurrenciesManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurrenciesManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCurrenciesManager) \
	NO_API virtual ~UCurrenciesManager();


#define FID_ProjectEK_Plugins_VUEDK_VUEDKCore_Source_VUEDKCore_Public_Features_Gameplay_CurrencySystem_CurrenciesManager_h_18_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_VUEDKCore_Source_VUEDKCore_Public_Features_Gameplay_CurrencySystem_CurrenciesManager_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_VUEDKCore_Source_VUEDKCore_Public_Features_Gameplay_CurrencySystem_CurrenciesManager_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_VUEDKCore_Source_VUEDKCore_Public_Features_Gameplay_CurrencySystem_CurrenciesManager_h_21_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_VUEDKCore_Source_VUEDKCore_Public_Features_Gameplay_CurrencySystem_CurrenciesManager_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCurrenciesManager;

// ********** End Class UCurrenciesManager *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_VUEDKCore_Source_VUEDKCore_Public_Features_Gameplay_CurrencySystem_CurrenciesManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
