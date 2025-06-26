// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SaveManager.h"

#ifdef SAVESYSTEM_SaveManager_generated_h
#error "SaveManager.generated.h already included, missing '#pragma once' in SaveManager.h"
#endif
#define SAVESYSTEM_SaveManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UDefaultSaveGame;
class UObject;
class USlotInfoItem;
struct FSaveManagerData;
struct FSlotInfoData;

// ********** Begin Delegate FOnPrepareSave ********************************************************
#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveManager_h_21_DELEGATE \
SAVESYSTEM_API void FOnPrepareSave_DelegateWrapper(const FMulticastScriptDelegate& OnPrepareSave, UDefaultSaveGame* SaveGameData, USlotInfoItem* SlotInfoItem, UObject* Instigator);


// ********** End Delegate FOnPrepareSave **********************************************************

// ********** Begin Delegate FOnPrepareSharedSave **************************************************
#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveManager_h_28_DELEGATE \
SAVESYSTEM_API void FOnPrepareSharedSave_DelegateWrapper(const FMulticastScriptDelegate& OnPrepareSharedSave, UDefaultSaveGame* SaveGameData, USlotInfoItem* SlotInfoItem, UObject* Instigator);


// ********** End Delegate FOnPrepareSharedSave ****************************************************

// ********** Begin Delegate FOnPrepareLoad ********************************************************
#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveManager_h_34_DELEGATE \
SAVESYSTEM_API void FOnPrepareLoad_DelegateWrapper(const FMulticastScriptDelegate& OnPrepareLoad, UDefaultSaveGame* SaveGameData, UObject* Instigator);


// ********** End Delegate FOnPrepareLoad **********************************************************

// ********** Begin Delegate FOnPrepareSharedLoad **************************************************
#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveManager_h_40_DELEGATE \
SAVESYSTEM_API void FOnPrepareSharedLoad_DelegateWrapper(const FMulticastScriptDelegate& OnPrepareSharedLoad, UDefaultSaveGame* SaveGameData, UObject* Instigator);


// ********** End Delegate FOnPrepareSharedLoad ****************************************************

// ********** Begin Delegate FOnSaveGame ***********************************************************
#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveManager_h_49_DELEGATE \
SAVESYSTEM_API void FOnSaveGame_DelegateWrapper(const FMulticastScriptDelegate& OnSaveGame, const FString& SlotName, const int32 UserIndex, bool bSuccess, UDefaultSaveGame* SaveGameData, UObject* Instigator);


// ********** End Delegate FOnSaveGame *************************************************************

// ********** Begin Delegate FOnSharedSaveGame *****************************************************
#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveManager_h_58_DELEGATE \
SAVESYSTEM_API void FOnSharedSaveGame_DelegateWrapper(const FMulticastScriptDelegate& OnSharedSaveGame, const FString& SlotName, const int32 UserIndex, bool bSuccess, UDefaultSaveGame* SaveGameData, UObject* Instigator);


// ********** End Delegate FOnSharedSaveGame *******************************************************

// ********** Begin Delegate FOnLoadGame ***********************************************************
#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveManager_h_66_DELEGATE \
SAVESYSTEM_API void FOnLoadGame_DelegateWrapper(const FMulticastScriptDelegate& OnLoadGame, const FString& SlotName, const int32 UserIndex, UDefaultSaveGame* SaveGameData, UObject* Instigator);


// ********** End Delegate FOnLoadGame *************************************************************

// ********** Begin Delegate FOnSharedLoadGame *****************************************************
#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveManager_h_74_DELEGATE \
SAVESYSTEM_API void FOnSharedLoadGame_DelegateWrapper(const FMulticastScriptDelegate& OnSharedLoadGame, const FString& SlotName, const int32 UserIndex, UDefaultSaveGame* SaveGameData, UObject* Instigator);


// ********** End Delegate FOnSharedLoadGame *******************************************************

// ********** Begin Delegate FOnPendingSharedSave **************************************************
#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveManager_h_79_DELEGATE \
SAVESYSTEM_API void FOnPendingSharedSave_DelegateWrapper(const FMulticastScriptDelegate& OnPendingSharedSave, UObject* Instigator);


// ********** End Delegate FOnPendingSharedSave ****************************************************

// ********** Begin Delegate FOnPendingSharedLoad **************************************************
#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveManager_h_84_DELEGATE \
SAVESYSTEM_API void FOnPendingSharedLoad_DelegateWrapper(const FMulticastScriptDelegate& OnPendingSharedLoad, UObject* Instigator);


// ********** End Delegate FOnPendingSharedLoad ****************************************************

// ********** Begin Delegate FOnNewSaveGame ********************************************************
#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveManager_h_88_DELEGATE \
SAVESYSTEM_API void FOnNewSaveGame_DelegateWrapper(const FMulticastScriptDelegate& OnNewSaveGame);


// ********** End Delegate FOnNewSaveGame **********************************************************

// ********** Begin Class USaveManager *************************************************************
#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveManager_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPendingSharedLoadEvent); \
	DECLARE_FUNCTION(execOnPendingSharedSaveEvent); \
	DECLARE_FUNCTION(execGetSaveMasterID); \
	DECLARE_FUNCTION(execSetSaveMasterID); \
	DECLARE_FUNCTION(execStartTimePlayedTimer); \
	DECLARE_FUNCTION(execHasSharedInstanceEverLoaded); \
	DECLARE_FUNCTION(execHasSharedInstanceEverSaved); \
	DECLARE_FUNCTION(execHasInstanceEverLoaded); \
	DECLARE_FUNCTION(execHasInstanceEverSaved); \
	DECLARE_FUNCTION(execGetStatus); \
	DECLARE_FUNCTION(execGetSaveInfos); \
	DECLARE_FUNCTION(execLoadSharedSlot); \
	DECLARE_FUNCTION(execLoadSelectedSlot); \
	DECLARE_FUNCTION(execLoadSelectedSlotAndSharedSlot); \
	DECLARE_FUNCTION(execManualAndSharedSave); \
	DECLARE_FUNCTION(execSharedSave); \
	DECLARE_FUNCTION(execManualSave); \
	DECLARE_FUNCTION(execStartNewSaveGame); \
	DECLARE_FUNCTION(execDeleteAllSlots); \
	DECLARE_FUNCTION(execDeleteSlot); \
	DECLARE_FUNCTION(execGetSharedSaveGameInstance); \
	DECLARE_FUNCTION(execGetSaveGameInstance); \
	DECLARE_FUNCTION(execInit);


SAVESYSTEM_API UClass* Z_Construct_UClass_USaveManager_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveManager_h_93_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveManager(); \
	friend struct Z_Construct_UClass_USaveManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SAVESYSTEM_API UClass* Z_Construct_UClass_USaveManager_NoRegister(); \
public: \
	DECLARE_CLASS2(USaveManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SaveSystem"), Z_Construct_UClass_USaveManager_NoRegister) \
	DECLARE_SERIALIZER(USaveManager)


#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveManager_h_93_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USaveManager(USaveManager&&) = delete; \
	USaveManager(const USaveManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USaveManager) \
	NO_API virtual ~USaveManager();


#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveManager_h_90_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveManager_h_93_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveManager_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveManager_h_93_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveManager_h_93_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USaveManager;

// ********** End Class USaveManager ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
