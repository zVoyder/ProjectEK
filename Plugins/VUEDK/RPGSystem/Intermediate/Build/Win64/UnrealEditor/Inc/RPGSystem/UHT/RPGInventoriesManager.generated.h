// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RPGInventory/RPGInventoriesManager.h"

#ifdef RPGSYSTEM_RPGInventoriesManager_generated_h
#error "RPGInventoriesManager.generated.h already included, missing '#pragma once' in RPGInventoriesManager.h"
#endif
#define RPGSYSTEM_RPGInventoriesManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UCoreStatData;
class URPGRarityLevelData;
struct FGuid;

// ********** Begin Class URPGInventoriesManager ***************************************************
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventoriesManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetItemStatByID); \
	DECLARE_FUNCTION(execGetItemRarityByID);


RPGSYSTEM_API UClass* Z_Construct_UClass_URPGInventoriesManager_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventoriesManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGInventoriesManager(); \
	friend struct Z_Construct_UClass_URPGInventoriesManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGSYSTEM_API UClass* Z_Construct_UClass_URPGInventoriesManager_NoRegister(); \
public: \
	DECLARE_CLASS2(URPGInventoriesManager, UTetrisInventoriesManager, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPGSystem"), Z_Construct_UClass_URPGInventoriesManager_NoRegister) \
	DECLARE_SERIALIZER(URPGInventoriesManager)


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventoriesManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URPGInventoriesManager(URPGInventoriesManager&&) = delete; \
	URPGInventoriesManager(const URPGInventoriesManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGInventoriesManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGInventoriesManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URPGInventoriesManager) \
	NO_API virtual ~URPGInventoriesManager();


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventoriesManager_h_13_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventoriesManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventoriesManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventoriesManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventoriesManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URPGInventoriesManager;

// ********** End Class URPGInventoriesManager *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_RPGInventoriesManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
