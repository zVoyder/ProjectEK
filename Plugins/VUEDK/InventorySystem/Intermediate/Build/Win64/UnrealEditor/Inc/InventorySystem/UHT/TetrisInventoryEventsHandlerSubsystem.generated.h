// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TetrisInventory/TetrisInventoryEventsHandlerSubsystem.h"

#ifdef INVENTORYSYSTEM_TetrisInventoryEventsHandlerSubsystem_generated_h
#error "TetrisInventoryEventsHandlerSubsystem.generated.h already included, missing '#pragma once' in TetrisInventoryEventsHandlerSubsystem.h"
#endif
#define INVENTORYSYSTEM_TetrisInventoryEventsHandlerSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnRequestDrag ********************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventoryEventsHandlerSubsystem_h_11_DELEGATE \
INVENTORYSYSTEM_API void FOnRequestDrag_DelegateWrapper(const FMulticastScriptDelegate& OnRequestDrag);


// ********** End Delegate FOnRequestDrag **********************************************************

// ********** Begin Delegate FOnRequestDrop ********************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventoryEventsHandlerSubsystem_h_15_DELEGATE \
INVENTORYSYSTEM_API void FOnRequestDrop_DelegateWrapper(const FMulticastScriptDelegate& OnRequestDrop);


// ********** End Delegate FOnRequestDrop **********************************************************

// ********** Begin Delegate FOnRequestRotate ******************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventoryEventsHandlerSubsystem_h_19_DELEGATE \
INVENTORYSYSTEM_API void FOnRequestRotate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestRotate);


// ********** End Delegate FOnRequestRotate ********************************************************

// ********** Begin Delegate FOnRequestEquipUnequip ************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventoryEventsHandlerSubsystem_h_24_DELEGATE \
INVENTORYSYSTEM_API void FOnRequestEquipUnequip_DelegateWrapper(const FMulticastScriptDelegate& OnRequestEquipUnequip, int32 SwapPriority);


// ********** End Delegate FOnRequestEquipUnequip **************************************************

// ********** Begin Delegate FOnRequestDiscard *****************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventoryEventsHandlerSubsystem_h_28_DELEGATE \
INVENTORYSYSTEM_API void FOnRequestDiscard_DelegateWrapper(const FMulticastScriptDelegate& OnRequestDiscard);


// ********** End Delegate FOnRequestDiscard *******************************************************

// ********** Begin Delegate FOnRequestSplit *******************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventoryEventsHandlerSubsystem_h_32_DELEGATE \
INVENTORYSYSTEM_API void FOnRequestSplit_DelegateWrapper(const FMulticastScriptDelegate& OnRequestSplit);


// ********** End Delegate FOnRequestSplit *********************************************************

// ********** Begin Delegate FOnRequestCancelSplit *************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventoryEventsHandlerSubsystem_h_36_DELEGATE \
INVENTORYSYSTEM_API void FOnRequestCancelSplit_DelegateWrapper(const FMulticastScriptDelegate& OnRequestCancelSplit);


// ********** End Delegate FOnRequestCancelSplit ***************************************************

// ********** Begin Class UTetrisInventoryEventsHandlerSubsystem ***********************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventoryEventsHandlerSubsystem_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsSplitting); \
	DECLARE_FUNCTION(execRequestCancelSplit); \
	DECLARE_FUNCTION(execRequestSplit); \
	DECLARE_FUNCTION(execRequestDiscard); \
	DECLARE_FUNCTION(execRequestEquipUnequip); \
	DECLARE_FUNCTION(execRequestRotate); \
	DECLARE_FUNCTION(execRequestDrop); \
	DECLARE_FUNCTION(execRequestDrag);


INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventoryEventsHandlerSubsystem_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTetrisInventoryEventsHandlerSubsystem(); \
	friend struct Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UTetrisInventoryEventsHandlerSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventorySystem"), Z_Construct_UClass_UTetrisInventoryEventsHandlerSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UTetrisInventoryEventsHandlerSubsystem)


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventoryEventsHandlerSubsystem_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTetrisInventoryEventsHandlerSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTetrisInventoryEventsHandlerSubsystem(UTetrisInventoryEventsHandlerSubsystem&&) = delete; \
	UTetrisInventoryEventsHandlerSubsystem(const UTetrisInventoryEventsHandlerSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTetrisInventoryEventsHandlerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTetrisInventoryEventsHandlerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTetrisInventoryEventsHandlerSubsystem) \
	NO_API virtual ~UTetrisInventoryEventsHandlerSubsystem();


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventoryEventsHandlerSubsystem_h_38_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventoryEventsHandlerSubsystem_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventoryEventsHandlerSubsystem_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventoryEventsHandlerSubsystem_h_41_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventoryEventsHandlerSubsystem_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTetrisInventoryEventsHandlerSubsystem;

// ********** End Class UTetrisInventoryEventsHandlerSubsystem *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventoryEventsHandlerSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
