// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Base/ItemBase.h"

#ifdef INVENTORYSYSTEM_ItemBase_generated_h
#error "ItemBase.generated.h already included, missing '#pragma once' in ItemBase.h"
#endif
#define INVENTORYSYSTEM_ItemBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AItemDropActor;
class UEquipSlotKey;
class UInventoryBase;
class UItemBase;
class UItemDataBase;
class UStaticMesh;
struct FSlateBrush;

// ********** Begin Delegate FOnItemAdded **********************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemBase_h_20_DELEGATE \
INVENTORYSYSTEM_API void FOnItemAdded_DelegateWrapper(const FMulticastScriptDelegate& OnItemAdded, UItemBase* Item, UInventoryBase* Inventory);


// ********** End Delegate FOnItemAdded ************************************************************

// ********** Begin Delegate FOnItemUsed ***********************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemBase_h_25_DELEGATE \
INVENTORYSYSTEM_API void FOnItemUsed_DelegateWrapper(const FMulticastScriptDelegate& OnItemUsed, UItemBase* Item);


// ********** End Delegate FOnItemUsed *************************************************************

// ********** Begin Delegate FOnItemConsumed *******************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemBase_h_30_DELEGATE \
INVENTORYSYSTEM_API void FOnItemConsumed_DelegateWrapper(const FMulticastScriptDelegate& OnItemConsumed, UItemBase* Item);


// ********** End Delegate FOnItemConsumed *********************************************************

// ********** Begin Delegate FOnItemRemoved ********************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemBase_h_36_DELEGATE \
INVENTORYSYSTEM_API void FOnItemRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnItemRemoved, UItemBase* Item, UInventoryBase* Inventory);


// ********** End Delegate FOnItemRemoved **********************************************************

// ********** Begin Delegate FOnItemEquipped *******************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemBase_h_41_DELEGATE \
INVENTORYSYSTEM_API void FOnItemEquipped_DelegateWrapper(const FMulticastScriptDelegate& OnItemEquipped, UItemBase* Item);


// ********** End Delegate FOnItemEquipped *********************************************************

// ********** Begin Delegate FOnItemUnequipped *****************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemBase_h_46_DELEGATE \
INVENTORYSYSTEM_API void FOnItemUnequipped_DelegateWrapper(const FMulticastScriptDelegate& OnItemUnequipped, UItemBase* Item);


// ********** End Delegate FOnItemUnequipped *******************************************************

// ********** Begin Delegate FOnItemQuantityChanged ************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemBase_h_52_DELEGATE \
INVENTORYSYSTEM_API void FOnItemQuantityChanged_DelegateWrapper(const FMulticastScriptDelegate& OnItemQuantityChanged, UItemBase* Item, int32 Quantity);


// ********** End Delegate FOnItemQuantityChanged **************************************************

// ********** Begin Delegate FOnItemMeshLoaded *****************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemBase_h_57_DELEGATE \
INVENTORYSYSTEM_API void FOnItemMeshLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnItemMeshLoaded, UStaticMesh* Mesh);


// ********** End Delegate FOnItemMeshLoaded *******************************************************

// ********** Begin Class UItemBase ****************************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemBase_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnConsume_Implementation(); \
	virtual void OnUse_Implementation(); \
	virtual void OnUnequip_Implementation(); \
	virtual void OnEquip_Implementation(); \
	virtual void OnRemove_Implementation(); \
	virtual void OnAdd_Implementation(); \
	virtual void OnInit_Implementation(); \
	virtual bool HasEquipPermission_Implementation() const; \
	virtual bool CanStackItem_Implementation(UItemBase* OtherItem) const; \
	virtual float GetItemFullWeight_Implementation() const; \
	virtual float GetItemWeight_Implementation() const; \
	DECLARE_FUNCTION(execOnConsume); \
	DECLARE_FUNCTION(execOnUse); \
	DECLARE_FUNCTION(execOnUnequip); \
	DECLARE_FUNCTION(execOnEquip); \
	DECLARE_FUNCTION(execOnRemove); \
	DECLARE_FUNCTION(execOnAdd); \
	DECLARE_FUNCTION(execOnInit); \
	DECLARE_FUNCTION(execTrySplitItem); \
	DECLARE_FUNCTION(execTryStackItem); \
	DECLARE_FUNCTION(execGetCurrentQuantity); \
	DECLARE_FUNCTION(execIsStackable); \
	DECLARE_FUNCTION(execIsMaxStacked); \
	DECLARE_FUNCTION(execAreEquipPreconditionsMet); \
	DECLARE_FUNCTION(execHasEquipPermission); \
	DECLARE_FUNCTION(execIsEquippable); \
	DECLARE_FUNCTION(execCanStackItem); \
	DECLARE_FUNCTION(execCanStack); \
	DECLARE_FUNCTION(execGetEquipSlotKey); \
	DECLARE_FUNCTION(execGetEquipSlotIndex); \
	DECLARE_FUNCTION(execGetItemFullWeight); \
	DECLARE_FUNCTION(execGetItemWeight); \
	DECLARE_FUNCTION(execLoadItemMeshAsync); \
	DECLARE_FUNCTION(execLoadItemMeshSync); \
	DECLARE_FUNCTION(execGetItemDescription); \
	DECLARE_FUNCTION(execGetItemIcon); \
	DECLARE_FUNCTION(execGetItemFullName); \
	DECLARE_FUNCTION(execConsume); \
	DECLARE_FUNCTION(execUse); \
	DECLARE_FUNCTION(execRemove); \
	DECLARE_FUNCTION(execTryDrop); \
	DECLARE_FUNCTION(execIsEquipped); \
	DECLARE_FUNCTION(execGetItemData);


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemBase_h_62_CALLBACK_WRAPPERS
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemBase_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemBase_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemBase(); \
	friend struct Z_Construct_UClass_UItemBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UItemBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InventorySystem"), Z_Construct_UClass_UItemBase_NoRegister) \
	DECLARE_SERIALIZER(UItemBase)


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemBase_h_62_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UItemBase(UItemBase&&) = delete; \
	UItemBase(const UItemBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UItemBase) \
	NO_API virtual ~UItemBase();


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemBase_h_59_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemBase_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemBase_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemBase_h_62_CALLBACK_WRAPPERS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemBase_h_62_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemBase_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UItemBase;

// ********** End Class UItemBase ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
