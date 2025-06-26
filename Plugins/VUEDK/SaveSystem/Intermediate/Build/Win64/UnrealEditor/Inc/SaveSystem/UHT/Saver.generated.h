// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Savers/Saver.h"

#ifdef SAVESYSTEM_Saver_generated_h
#error "Saver.generated.h already included, missing '#pragma once' in Saver.h"
#endif
#define SAVESYSTEM_Saver_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UDefaultSaveGame;
class UObject;
class USlotInfoItem;

// ********** Begin Delegate FOnBeginWithNewSaveGame ***********************************************
#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Components_Savers_Saver_h_14_DELEGATE \
SAVESYSTEM_API void FOnBeginWithNewSaveGame_DelegateWrapper(const FMulticastScriptDelegate& OnBeginWithNewSaveGame, UDefaultSaveGame* SaveGame);


// ********** End Delegate FOnBeginWithNewSaveGame *************************************************

// ********** Begin Delegate FOnBegingWithLoadedSharedSaveGame *************************************
#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Components_Savers_Saver_h_19_DELEGATE \
SAVESYSTEM_API void FOnBegingWithLoadedSharedSaveGame_DelegateWrapper(const FMulticastScriptDelegate& OnBegingWithLoadedSharedSaveGame, UDefaultSaveGame* SharedSaveGame);


// ********** End Delegate FOnBegingWithLoadedSharedSaveGame ***************************************

// ********** Begin Delegate FOnBeginWithNewSharedSaveGame *****************************************
#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Components_Savers_Saver_h_24_DELEGATE \
SAVESYSTEM_API void FOnBeginWithNewSharedSaveGame_DelegateWrapper(const FMulticastScriptDelegate& OnBeginWithNewSharedSaveGame, UDefaultSaveGame* SharedSaveGame);


// ********** End Delegate FOnBeginWithNewSharedSaveGame *******************************************

// ********** Begin Class USaver *******************************************************************
#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Components_Savers_Saver_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnBeginWithNewSharedSaveGameEvent_Implementation(UDefaultSaveGame* SaveGame); \
	virtual void OnBeginWithLoadedSharedSaveGameEvent_Implementation(UDefaultSaveGame* SaveGame); \
	virtual void OnBeginWithNewSaveGameEvent_Implementation(UDefaultSaveGame* SaveGame); \
	virtual void OnSharedLoadCompletedEvent_Implementation(const FString& SlotName, const int32 UserIndex, UDefaultSaveGame* LoadedData, UObject* Instigator); \
	virtual void OnSharedSaveCompletedEvent_Implementation(const FString& SlotName, const int32 UserIndex, bool bSuccess, UDefaultSaveGame* SaveGame, UObject* Instigator); \
	virtual void OnPrepareSharedLoad_Implementation(UDefaultSaveGame* SaveGame, UObject* Instigator); \
	virtual void OnPrepareSharedSave_Implementation(UDefaultSaveGame* SaveGame, USlotInfoItem* SlotInfoItem, UObject* Instigator); \
	virtual void OnLoadCompletedEvent_Implementation(const FString& SlotName, const int32 UserIndex, UDefaultSaveGame* LoadedData, UObject* Instigator); \
	virtual void OnSaveCompletedEvent_Implementation(const FString& SlotName, const int32 UserIndex, bool bSuccess, UDefaultSaveGame* SaveGame, UObject* Instigator); \
	virtual void OnPrepareLoad_Implementation(UDefaultSaveGame* SaveGame, UObject* Instigator); \
	virtual void OnPrepareSave_Implementation(UDefaultSaveGame* SaveGame, USlotInfoItem* SlotInfoItem, UObject* Instigator); \
	DECLARE_FUNCTION(execOnBeginWithNewSharedSaveGameEvent); \
	DECLARE_FUNCTION(execOnBeginWithLoadedSharedSaveGameEvent); \
	DECLARE_FUNCTION(execOnBeginWithNewSaveGameEvent); \
	DECLARE_FUNCTION(execOnSharedLoadCompletedEvent); \
	DECLARE_FUNCTION(execOnSharedSaveCompletedEvent); \
	DECLARE_FUNCTION(execOnPrepareSharedLoad); \
	DECLARE_FUNCTION(execOnPrepareSharedSave); \
	DECLARE_FUNCTION(execOnLoadCompletedEvent); \
	DECLARE_FUNCTION(execOnSaveCompletedEvent); \
	DECLARE_FUNCTION(execOnPrepareLoad); \
	DECLARE_FUNCTION(execOnPrepareSave); \
	DECLARE_FUNCTION(execPrepareSharedLoad); \
	DECLARE_FUNCTION(execPrepareSharedSave); \
	DECLARE_FUNCTION(execPrepareLoad); \
	DECLARE_FUNCTION(execPrepareSave); \
	DECLARE_FUNCTION(execGetUniqueSaveID);


#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Components_Savers_Saver_h_29_CALLBACK_WRAPPERS
SAVESYSTEM_API UClass* Z_Construct_UClass_USaver_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Components_Savers_Saver_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaver(); \
	friend struct Z_Construct_UClass_USaver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SAVESYSTEM_API UClass* Z_Construct_UClass_USaver_NoRegister(); \
public: \
	DECLARE_CLASS2(USaver, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SaveSystem"), Z_Construct_UClass_USaver_NoRegister) \
	DECLARE_SERIALIZER(USaver)


#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Components_Savers_Saver_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USaver(USaver&&) = delete; \
	USaver(const USaver&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaver); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USaver) \
	NO_API virtual ~USaver();


#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Components_Savers_Saver_h_26_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Components_Savers_Saver_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Components_Savers_Saver_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Components_Savers_Saver_h_29_CALLBACK_WRAPPERS \
	FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Components_Savers_Saver_h_29_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Components_Savers_Saver_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USaver;

// ********** End Class USaver *********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Components_Savers_Saver_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
