// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Base/InventoryBase.h"

#ifdef INVENTORYSYSTEM_InventoryBase_generated_h
#error "InventoryBase.generated.h already included, missing '#pragma once' in InventoryBase.h"
#endif
#define INVENTORYSYSTEM_InventoryBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UEquipment;
class UInventoryBaseSaveData;
class UItemBase;
class UItemDataBase;
class USaveData;
struct FGuid;

// ********** Begin Delegate FOnAnyItemAdded *******************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_InventoryBase_h_22_DELEGATE \
INVENTORYSYSTEM_API void FOnAnyItemAdded_DelegateWrapper(const FMulticastScriptDelegate& OnAnyItemAdded, UItemBase* Item);


// ********** End Delegate FOnAnyItemAdded *********************************************************

// ********** Begin Delegate FOnAnyItemConsumed ****************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_InventoryBase_h_27_DELEGATE \
INVENTORYSYSTEM_API void FOnAnyItemConsumed_DelegateWrapper(const FMulticastScriptDelegate& OnAnyItemConsumed, UItemBase* Item);


// ********** End Delegate FOnAnyItemConsumed ******************************************************

// ********** Begin Delegate FOnAnyItemUsed ********************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_InventoryBase_h_32_DELEGATE \
INVENTORYSYSTEM_API void FOnAnyItemUsed_DelegateWrapper(const FMulticastScriptDelegate& OnAnyItemUsed, UItemBase* Item);


// ********** End Delegate FOnAnyItemUsed **********************************************************

// ********** Begin Delegate FOnAnyItemRemoved *****************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_InventoryBase_h_37_DELEGATE \
INVENTORYSYSTEM_API void FOnAnyItemRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnAnyItemRemoved, UItemBase* Item);


// ********** End Delegate FOnAnyItemRemoved *******************************************************

// ********** Begin Delegate FOnInventoryCleared ***************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_InventoryBase_h_41_DELEGATE \
INVENTORYSYSTEM_API void FOnInventoryCleared_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryCleared);


// ********** End Delegate FOnInventoryCleared *****************************************************

// ********** Begin Delegate FOnInventoryModified **************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_InventoryBase_h_45_DELEGATE \
INVENTORYSYSTEM_API void FOnInventoryModified_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryModified);


// ********** End Delegate FOnInventoryModified ****************************************************

// ********** Begin Class UInventoryBase ***********************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_InventoryBase_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnClearedInventory_Implementation(); \
	virtual void OnItemRemoved_Implementation(UItemBase* Item); \
	virtual void OnItemAdded_Implementation(UItemBase* Item); \
	virtual void LoadInventorySaveData_Implementation(UInventoryBaseSaveData* InventorySaveData); \
	virtual USaveData* CreateInventorySaveData_Implementation(USaveData* SaveData, TArray<UItemBase*>& ItemsToSave); \
	virtual USaveData* CreateSaveDataObject_Implementation(); \
	DECLARE_FUNCTION(execOnClearedInventory); \
	DECLARE_FUNCTION(execOnItemRemoved); \
	DECLARE_FUNCTION(execOnItemAdded); \
	DECLARE_FUNCTION(execLoadInventorySaveData); \
	DECLARE_FUNCTION(execCreateInventorySaveData); \
	DECLARE_FUNCTION(execCreateSaveDataObject); \
	DECLARE_FUNCTION(execGetCurrentWeight); \
	DECLARE_FUNCTION(execGetItems); \
	DECLARE_FUNCTION(execGetItemDataFromRegistry); \
	DECLARE_FUNCTION(execHasEnoughQuantityToConsume); \
	DECLARE_FUNCTION(execHasItemOfDataID); \
	DECLARE_FUNCTION(execHasItemOfTypeID); \
	DECLARE_FUNCTION(execCanSupportAdditionalWeight); \
	DECLARE_FUNCTION(execCanContainItem); \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execIsCompletelyFull); \
	DECLARE_FUNCTION(execFind); \
	DECLARE_FUNCTION(execClearInventory); \
	DECLARE_FUNCTION(execConsumeItem); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execRemoveItemByDataID); \
	DECLARE_FUNCTION(execTryAddItem); \
	DECLARE_FUNCTION(execAddNewItem); \
	DECLARE_FUNCTION(execGetEquipment); \
	DECLARE_FUNCTION(execUnlinkEquipment); \
	DECLARE_FUNCTION(execLinkEquipment); \
	DECLARE_FUNCTION(execLoadSaveData); \
	DECLARE_FUNCTION(execCreateSaveData);


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_InventoryBase_h_50_CALLBACK_WRAPPERS
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInventoryBase_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_InventoryBase_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryBase(); \
	friend struct Z_Construct_UClass_UInventoryBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInventoryBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UInventoryBase, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventorySystem"), Z_Construct_UClass_UInventoryBase_NoRegister) \
	DECLARE_SERIALIZER(UInventoryBase) \
	virtual UObject* _getUObject() const override { return const_cast<UInventoryBase*>(this); }


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_InventoryBase_h_50_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInventoryBase(UInventoryBase&&) = delete; \
	UInventoryBase(const UInventoryBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UInventoryBase) \
	NO_API virtual ~UInventoryBase();


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_InventoryBase_h_47_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_InventoryBase_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_InventoryBase_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_InventoryBase_h_50_CALLBACK_WRAPPERS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_InventoryBase_h_50_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_InventoryBase_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInventoryBase;

// ********** End Class UInventoryBase *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_InventoryBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
