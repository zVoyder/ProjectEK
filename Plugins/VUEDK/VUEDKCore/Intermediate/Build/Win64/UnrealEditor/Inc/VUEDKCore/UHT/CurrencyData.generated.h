// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Features/Gameplay/CurrencySystem/Data/CurrencyData.h"

#ifdef VUEDKCORE_CurrencyData_generated_h
#error "CurrencyData.generated.h already included, missing '#pragma once' in CurrencyData.h"
#endif
#define VUEDKCORE_CurrencyData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCurrencyData ************************************************************
#define FID_ProjectEK_Plugins_VUEDK_VUEDKCore_Source_VUEDKCore_Public_Features_Gameplay_CurrencySystem_Data_CurrencyData_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMinAmount);


VUEDKCORE_API UClass* Z_Construct_UClass_UCurrencyData_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_VUEDKCore_Source_VUEDKCore_Public_Features_Gameplay_CurrencySystem_Data_CurrencyData_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCurrencyData(); \
	friend struct Z_Construct_UClass_UCurrencyData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VUEDKCORE_API UClass* Z_Construct_UClass_UCurrencyData_NoRegister(); \
public: \
	DECLARE_CLASS2(UCurrencyData, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VUEDKCore"), Z_Construct_UClass_UCurrencyData_NoRegister) \
	DECLARE_SERIALIZER(UCurrencyData)


#define FID_ProjectEK_Plugins_VUEDK_VUEDKCore_Source_VUEDKCore_Public_Features_Gameplay_CurrencySystem_Data_CurrencyData_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCurrencyData(UCurrencyData&&) = delete; \
	UCurrencyData(const UCurrencyData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCurrencyData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurrencyData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCurrencyData) \
	NO_API virtual ~UCurrencyData();


#define FID_ProjectEK_Plugins_VUEDK_VUEDKCore_Source_VUEDKCore_Public_Features_Gameplay_CurrencySystem_Data_CurrencyData_h_9_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_VUEDKCore_Source_VUEDKCore_Public_Features_Gameplay_CurrencySystem_Data_CurrencyData_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_VUEDKCore_Source_VUEDKCore_Public_Features_Gameplay_CurrencySystem_Data_CurrencyData_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_VUEDKCore_Source_VUEDKCore_Public_Features_Gameplay_CurrencySystem_Data_CurrencyData_h_12_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_VUEDKCore_Source_VUEDKCore_Public_Features_Gameplay_CurrencySystem_Data_CurrencyData_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCurrencyData;

// ********** End Class UCurrencyData **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_VUEDKCore_Source_VUEDKCore_Public_Features_Gameplay_CurrencySystem_Data_CurrencyData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
