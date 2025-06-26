// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EquipmentSystem/EquipActorSwitcher.h"

#ifdef INVENTORYSYSTEM_EquipActorSwitcher_generated_h
#error "EquipActorSwitcher.generated.h already included, missing '#pragma once' in EquipActorSwitcher.h"
#endif
#define INVENTORYSYSTEM_EquipActorSwitcher_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

 class AActor;
class AActor;
class UEquipment;
class UEquipSlotKey;
class UItemBase;
class USceneComponent;

// ********** Begin Delegate FOnActorHold **********************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_EquipActorSwitcher_h_13_DELEGATE \
INVENTORYSYSTEM_API void FOnActorHold_DelegateWrapper(const FMulticastScriptDelegate& OnActorHold, AActor* Actor);


// ********** End Delegate FOnActorHold ************************************************************

// ********** Begin Delegate FOnActorWithdraw ******************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_EquipActorSwitcher_h_18_DELEGATE \
INVENTORYSYSTEM_API void FOnActorWithdraw_DelegateWrapper(const FMulticastScriptDelegate& OnActorWithdraw, AActor* Actor);


// ********** End Delegate FOnActorWithdraw ********************************************************

// ********** Begin Delegate FOnActorDisposed ******************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_EquipActorSwitcher_h_23_DELEGATE \
INVENTORYSYSTEM_API void FOnActorDisposed_DelegateWrapper(const FMulticastScriptDelegate& OnActorDisposed, AActor* Actor);


// ********** End Delegate FOnActorDisposed ********************************************************

// ********** Begin Delegate FOnEquipActorsChanged *************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_EquipActorSwitcher_h_27_DELEGATE \
INVENTORYSYSTEM_API void FOnEquipActorsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnEquipActorsChanged);


// ********** End Delegate FOnEquipActorsChanged ***************************************************

// ********** Begin Class UEquipActorSwitcher ******************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_EquipActorSwitcher_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CanAddActor_Implementation(const UItemBase* Item) const; \
	virtual void DisposeActor_Implementation(AActor* Actor); \
	virtual AActor* CreateActorToHold_Implementation(UItemBase* Item) const; \
	virtual void OnActorDisposed_Implementation(AActor* Actor) const; \
	virtual void OnWithdrawActor_Implementation(AActor* Actor) const; \
	virtual void OnHoldActor_Implementation(AActor* Actor) const; \
	DECLARE_FUNCTION(execOnAnyItemSwapWithInventoryItem); \
	DECLARE_FUNCTION(execOnItemsSwitchedSlots); \
	DECLARE_FUNCTION(execOnAnyItemEquipSlotChanged); \
	DECLARE_FUNCTION(execOnAnyItemUnequipped); \
	DECLARE_FUNCTION(execOnAnyItemEquipped); \
	DECLARE_FUNCTION(execCanAddActor); \
	DECLARE_FUNCTION(execDisposeActor); \
	DECLARE_FUNCTION(execCreateActorToHold); \
	DECLARE_FUNCTION(execOnActorDisposed); \
	DECLARE_FUNCTION(execOnWithdrawActor); \
	DECLARE_FUNCTION(execOnHoldActor); \
	DECLARE_FUNCTION(execGetCurrentActors); \
	DECLARE_FUNCTION(execWithdrawActorAtSlot); \
	DECLARE_FUNCTION(execHoldActorAtSlot); \
	DECLARE_FUNCTION(execHoldLastActor); \
	DECLARE_FUNCTION(execHoldFirstActor); \
	DECLARE_FUNCTION(execHoldPreviousActor); \
	DECLARE_FUNCTION(execHoldNextActor); \
	DECLARE_FUNCTION(execIsHoldingActor); \
	DECLARE_FUNCTION(execGetHeldActor); \
	DECLARE_FUNCTION(execInit);


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_EquipActorSwitcher_h_35_CALLBACK_WRAPPERS
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UEquipActorSwitcher_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_EquipActorSwitcher_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEquipActorSwitcher(); \
	friend struct Z_Construct_UClass_UEquipActorSwitcher_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UEquipActorSwitcher_NoRegister(); \
public: \
	DECLARE_CLASS2(UEquipActorSwitcher, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventorySystem"), Z_Construct_UClass_UEquipActorSwitcher_NoRegister) \
	DECLARE_SERIALIZER(UEquipActorSwitcher)


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_EquipActorSwitcher_h_35_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEquipActorSwitcher(UEquipActorSwitcher&&) = delete; \
	UEquipActorSwitcher(const UEquipActorSwitcher&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEquipActorSwitcher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquipActorSwitcher); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEquipActorSwitcher) \
	NO_API virtual ~UEquipActorSwitcher();


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_EquipActorSwitcher_h_32_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_EquipActorSwitcher_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_EquipActorSwitcher_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_EquipActorSwitcher_h_35_CALLBACK_WRAPPERS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_EquipActorSwitcher_h_35_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_EquipActorSwitcher_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEquipActorSwitcher;

// ********** End Class UEquipActorSwitcher ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_EquipActorSwitcher_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
