// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RPGInventory/Items/RPGGearItem.h"

#ifdef RPGSYSTEM_RPGGearItem_generated_h
#error "RPGGearItem.generated.h already included, missing '#pragma once' in RPGGearItem.h"
#endif
#define RPGSYSTEM_RPGGearItem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UCoreStatData;
class URPGGearItemData;
class UStatOperation;

// ********** Begin Class URPGGearItem *************************************************************
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Items_RPGGearItem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRPGGearItemData); \
	DECLARE_FUNCTION(execAddItemStatWithValue); \
	DECLARE_FUNCTION(execAddItemStatWithOperation);


RPGSYSTEM_API UClass* Z_Construct_UClass_URPGGearItem_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Items_RPGGearItem_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGGearItem(); \
	friend struct Z_Construct_UClass_URPGGearItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGSYSTEM_API UClass* Z_Construct_UClass_URPGGearItem_NoRegister(); \
public: \
	DECLARE_CLASS2(URPGGearItem, URPGItem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPGSystem"), Z_Construct_UClass_URPGGearItem_NoRegister) \
	DECLARE_SERIALIZER(URPGGearItem)


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Items_RPGGearItem_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URPGGearItem(URPGGearItem&&) = delete; \
	URPGGearItem(const URPGGearItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGGearItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGGearItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URPGGearItem) \
	NO_API virtual ~URPGGearItem();


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Items_RPGGearItem_h_18_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Items_RPGGearItem_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Items_RPGGearItem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Items_RPGGearItem_h_21_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Items_RPGGearItem_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URPGGearItem;

// ********** End Class URPGGearItem ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Items_RPGGearItem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
