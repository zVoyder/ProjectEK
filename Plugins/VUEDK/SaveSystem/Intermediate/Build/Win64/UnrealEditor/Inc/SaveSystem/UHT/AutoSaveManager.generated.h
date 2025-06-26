// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutoSaveManager.h"

#ifdef SAVESYSTEM_AutoSaveManager_generated_h
#error "AutoSaveManager.generated.h already included, missing '#pragma once' in AutoSaveManager.h"
#endif
#define SAVESYSTEM_AutoSaveManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAutoSaveManager *********************************************************
#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_AutoSaveManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsAutoSavePaused); \
	DECLARE_FUNCTION(execUnpauseAutoSave); \
	DECLARE_FUNCTION(execPauseAutoSave);


SAVESYSTEM_API UClass* Z_Construct_UClass_UAutoSaveManager_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_AutoSaveManager_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutoSaveManager(); \
	friend struct Z_Construct_UClass_UAutoSaveManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SAVESYSTEM_API UClass* Z_Construct_UClass_UAutoSaveManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UAutoSaveManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SaveSystem"), Z_Construct_UClass_UAutoSaveManager_NoRegister) \
	DECLARE_SERIALIZER(UAutoSaveManager)


#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_AutoSaveManager_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAutoSaveManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAutoSaveManager(UAutoSaveManager&&) = delete; \
	UAutoSaveManager(const UAutoSaveManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutoSaveManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutoSaveManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutoSaveManager) \
	NO_API virtual ~UAutoSaveManager();


#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_AutoSaveManager_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_AutoSaveManager_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_AutoSaveManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_AutoSaveManager_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_AutoSaveManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAutoSaveManager;

// ********** End Class UAutoSaveManager ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_AutoSaveManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
