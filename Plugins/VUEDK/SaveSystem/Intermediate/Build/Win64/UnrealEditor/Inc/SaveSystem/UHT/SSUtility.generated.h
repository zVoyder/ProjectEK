// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utility/SSUtility.h"

#ifdef SAVESYSTEM_SSUtility_generated_h
#error "SSUtility.generated.h already included, missing '#pragma once' in SSUtility.h"
#endif
#define SAVESYSTEM_SSUtility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAutoSaveManager;
class UDefaultSaveGame;
class UObject;
class USaveManager;

// ********** Begin Class USSUtility ***************************************************************
#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Utility_SSUtility_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSaveMasterID); \
	DECLARE_FUNCTION(execSetSaveMasterID); \
	DECLARE_FUNCTION(execHasSharedInstanceEverSaved); \
	DECLARE_FUNCTION(execHasSharedInstanceEverLoaded); \
	DECLARE_FUNCTION(execHasInstanceEverSaved); \
	DECLARE_FUNCTION(execHasInstanceEverLoaded); \
	DECLARE_FUNCTION(execStartTimePlayedTimer); \
	DECLARE_FUNCTION(execLoadSelectedSlotAndSharedSlot); \
	DECLARE_FUNCTION(execLoadSharedSlot); \
	DECLARE_FUNCTION(execLoadSelectedSlot); \
	DECLARE_FUNCTION(execSelectAndSaveOnSlot); \
	DECLARE_FUNCTION(execManualAndSharedSave); \
	DECLARE_FUNCTION(execSharedSave); \
	DECLARE_FUNCTION(execManualSave); \
	DECLARE_FUNCTION(execStartNewSaveGame); \
	DECLARE_FUNCTION(execGetSharedSaveGame); \
	DECLARE_FUNCTION(execGetSaveGame); \
	DECLARE_FUNCTION(execGetAutoSaveManager); \
	DECLARE_FUNCTION(execGetSaveManager);


SAVESYSTEM_API UClass* Z_Construct_UClass_USSUtility_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Utility_SSUtility_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSSUtility(); \
	friend struct Z_Construct_UClass_USSUtility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SAVESYSTEM_API UClass* Z_Construct_UClass_USSUtility_NoRegister(); \
public: \
	DECLARE_CLASS2(USSUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SaveSystem"), Z_Construct_UClass_USSUtility_NoRegister) \
	DECLARE_SERIALIZER(USSUtility)


#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Utility_SSUtility_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USSUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USSUtility(USSUtility&&) = delete; \
	USSUtility(const USSUtility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USSUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USSUtility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USSUtility) \
	NO_API virtual ~USSUtility();


#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Utility_SSUtility_h_11_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Utility_SSUtility_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Utility_SSUtility_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Utility_SSUtility_h_14_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Utility_SSUtility_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USSUtility;

// ********** End Class USSUtility *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Utility_SSUtility_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
