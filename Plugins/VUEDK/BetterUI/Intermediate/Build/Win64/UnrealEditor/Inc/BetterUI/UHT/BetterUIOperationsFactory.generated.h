// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/BetterUIOperationsFactory.h"

#ifdef BETTERUI_BetterUIOperationsFactory_generated_h
#error "BetterUIOperationsFactory.generated.h already included, missing '#pragma once' in BetterUIOperationsFactory.h"
#endif
#define BETTERUI_BetterUIOperationsFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UBetterSwitchOperation;
class UBetterWidget;
class UPanelWidget;
class UUserWidget;
class UWidgetSwitcher;

// ********** Begin Class UBetterUIOperationsFactory ***********************************************
#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Factories_BetterUIOperationsFactory_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateBetterSwichOperationWithContainer); \
	DECLARE_FUNCTION(execCreateBetterSwichOperation);


BETTERUI_API UClass* Z_Construct_UClass_UBetterUIOperationsFactory_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Factories_BetterUIOperationsFactory_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBetterUIOperationsFactory(); \
	friend struct Z_Construct_UClass_UBetterUIOperationsFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BETTERUI_API UClass* Z_Construct_UClass_UBetterUIOperationsFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UBetterUIOperationsFactory, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BetterUI"), Z_Construct_UClass_UBetterUIOperationsFactory_NoRegister) \
	DECLARE_SERIALIZER(UBetterUIOperationsFactory)


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Factories_BetterUIOperationsFactory_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBetterUIOperationsFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBetterUIOperationsFactory(UBetterUIOperationsFactory&&) = delete; \
	UBetterUIOperationsFactory(const UBetterUIOperationsFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBetterUIOperationsFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBetterUIOperationsFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBetterUIOperationsFactory) \
	NO_API virtual ~UBetterUIOperationsFactory();


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Factories_BetterUIOperationsFactory_h_12_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Factories_BetterUIOperationsFactory_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Factories_BetterUIOperationsFactory_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Factories_BetterUIOperationsFactory_h_15_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Factories_BetterUIOperationsFactory_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBetterUIOperationsFactory;

// ********** End Class UBetterUIOperationsFactory *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Factories_BetterUIOperationsFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
