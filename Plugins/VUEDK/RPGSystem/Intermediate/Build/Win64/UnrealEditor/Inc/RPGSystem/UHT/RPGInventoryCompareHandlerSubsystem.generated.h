// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RPGInventory/RPGInventoryCompareHandlerSubsystem.h"

#ifdef RPGSYSTEM_RPGInventoryCompareHandlerSubsystem_generated_h
#error "RPGInventoryCompareHandlerSubsystem.generated.h already included, missing '#pragma once' in RPGInventoryCompareHandlerSubsystem.h"
#endif
#define RPGSYSTEM_RPGInventoryCompareHandlerSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UEquipment;
class UEquipSlotKey;
class URPGGearItem;

// ********** Begin Delegate FOnRequestCompare *****************************************************
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventoryCompareHandlerSubsystem_h_15_DELEGATE \
RPGSYSTEM_API void FOnRequestCompare_DelegateWrapper(const FMulticastScriptDelegate& OnRequestCompare, URPGGearItem* ComparingItem, bool bCompare);


// ********** End Delegate FOnRequestCompare *******************************************************

// ********** Begin Class URPGInventoryCompareHandlerSubsystem *************************************
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventoryCompareHandlerSubsystem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTargetComparingEquipSlotKey); \
	DECLARE_FUNCTION(execGetComparingItem); \
	DECLARE_FUNCTION(execGetTargetComparingEquipment); \
	DECLARE_FUNCTION(execIsComparing); \
	DECLARE_FUNCTION(execRequestCompare); \
	DECLARE_FUNCTION(execSetTargetEquipSlotKeyForCompare); \
	DECLARE_FUNCTION(execSetTargetEquipmentForCompare);


RPGSYSTEM_API UClass* Z_Construct_UClass_URPGInventoryCompareHandlerSubsystem_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventoryCompareHandlerSubsystem_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGInventoryCompareHandlerSubsystem(); \
	friend struct Z_Construct_UClass_URPGInventoryCompareHandlerSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGSYSTEM_API UClass* Z_Construct_UClass_URPGInventoryCompareHandlerSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(URPGInventoryCompareHandlerSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPGSystem"), Z_Construct_UClass_URPGInventoryCompareHandlerSubsystem_NoRegister) \
	DECLARE_SERIALIZER(URPGInventoryCompareHandlerSubsystem)


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventoryCompareHandlerSubsystem_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGInventoryCompareHandlerSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URPGInventoryCompareHandlerSubsystem(URPGInventoryCompareHandlerSubsystem&&) = delete; \
	URPGInventoryCompareHandlerSubsystem(const URPGInventoryCompareHandlerSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGInventoryCompareHandlerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGInventoryCompareHandlerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URPGInventoryCompareHandlerSubsystem) \
	NO_API virtual ~URPGInventoryCompareHandlerSubsystem();


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventoryCompareHandlerSubsystem_h_17_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventoryCompareHandlerSubsystem_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventoryCompareHandlerSubsystem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventoryCompareHandlerSubsystem_h_20_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventoryCompareHandlerSubsystem_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URPGInventoryCompareHandlerSubsystem;

// ********** End Class URPGInventoryCompareHandlerSubsystem ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventoryCompareHandlerSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
