// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RPGInventory/Items/RPGItem.h"

#ifdef RPGSYSTEM_RPGItem_generated_h
#error "RPGItem.generated.h already included, missing '#pragma once' in RPGItem.h"
#endif
#define RPGSYSTEM_RPGItem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class URPGItemData;

// ********** Begin Class URPGItem *****************************************************************
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Items_RPGItem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRPGItemData);


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Items_RPGItem_h_19_CALLBACK_WRAPPERS
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGItem_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Items_RPGItem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGItem(); \
	friend struct Z_Construct_UClass_URPGItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGSYSTEM_API UClass* Z_Construct_UClass_URPGItem_NoRegister(); \
public: \
	DECLARE_CLASS2(URPGItem, UTetrisItem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPGSystem"), Z_Construct_UClass_URPGItem_NoRegister) \
	DECLARE_SERIALIZER(URPGItem)


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Items_RPGItem_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URPGItem(URPGItem&&) = delete; \
	URPGItem(const URPGItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URPGItem) \
	NO_API virtual ~URPGItem();


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Items_RPGItem_h_16_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Items_RPGItem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Items_RPGItem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Items_RPGItem_h_19_CALLBACK_WRAPPERS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Items_RPGItem_h_19_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Items_RPGItem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URPGItem;

// ********** End Class URPGItem *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Items_RPGItem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
