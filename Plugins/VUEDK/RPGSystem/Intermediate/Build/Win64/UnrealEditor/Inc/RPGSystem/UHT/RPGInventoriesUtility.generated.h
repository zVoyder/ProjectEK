// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RPGInventory/Utility/RPGInventoriesUtility.h"

#ifdef RPGSYSTEM_RPGInventoriesUtility_generated_h
#error "RPGInventoriesUtility.generated.h already included, missing '#pragma once' in RPGInventoriesUtility.h"
#endif
#define RPGSYSTEM_RPGInventoriesUtility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UEquipment;
class UEquipSlotKey;
class URPGGearItem;
class URPGInventoriesManager;

// ********** Begin Class URPGInventoriesUtility ***************************************************
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Utility_RPGInventoriesUtility_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTargetComparingEquipSlotKey); \
	DECLARE_FUNCTION(execGetComparingItem); \
	DECLARE_FUNCTION(execGetTargetComparingEquipment); \
	DECLARE_FUNCTION(execIsComparing); \
	DECLARE_FUNCTION(execRequestCompare); \
	DECLARE_FUNCTION(execSetTargetEquipSlotKeyForCompare); \
	DECLARE_FUNCTION(execSetTargetEquipmentForCompare); \
	DECLARE_FUNCTION(execGetRPGInventoriesManager);


RPGSYSTEM_API UClass* Z_Construct_UClass_URPGInventoriesUtility_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Utility_RPGInventoriesUtility_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGInventoriesUtility(); \
	friend struct Z_Construct_UClass_URPGInventoriesUtility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGSYSTEM_API UClass* Z_Construct_UClass_URPGInventoriesUtility_NoRegister(); \
public: \
	DECLARE_CLASS2(URPGInventoriesUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPGSystem"), Z_Construct_UClass_URPGInventoriesUtility_NoRegister) \
	DECLARE_SERIALIZER(URPGInventoriesUtility)


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Utility_RPGInventoriesUtility_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGInventoriesUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URPGInventoriesUtility(URPGInventoriesUtility&&) = delete; \
	URPGInventoriesUtility(const URPGInventoriesUtility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGInventoriesUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGInventoriesUtility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGInventoriesUtility) \
	NO_API virtual ~URPGInventoriesUtility();


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Utility_RPGInventoriesUtility_h_12_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Utility_RPGInventoriesUtility_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Utility_RPGInventoriesUtility_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Utility_RPGInventoriesUtility_h_15_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Utility_RPGInventoriesUtility_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URPGInventoriesUtility;

// ********** End Class URPGInventoriesUtility *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Utility_RPGInventoriesUtility_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
