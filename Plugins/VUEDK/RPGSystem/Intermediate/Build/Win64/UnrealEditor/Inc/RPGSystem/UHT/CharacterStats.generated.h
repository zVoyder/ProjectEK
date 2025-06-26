// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StatsSystem/CharacterStats/CharacterStats.h"

#ifdef RPGSYSTEM_CharacterStats_generated_h
#error "CharacterStats.generated.h already included, missing '#pragma once' in CharacterStats.h"
#endif
#define RPGSYSTEM_CharacterStats_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UEquipment;
class UEquipSlotKey;
class UItemBase;

// ********** Begin Class UCharacterStats **********************************************************
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_CharacterStats_CharacterStats_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnItemsSwitchedSlots); \
	DECLARE_FUNCTION(execOnItemSwappedWithInventoryItem); \
	DECLARE_FUNCTION(execOnItemEquippedOrUnequipped); \
	DECLARE_FUNCTION(execInit);


RPGSYSTEM_API UClass* Z_Construct_UClass_UCharacterStats_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_CharacterStats_CharacterStats_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterStats(); \
	friend struct Z_Construct_UClass_UCharacterStats_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGSYSTEM_API UClass* Z_Construct_UClass_UCharacterStats_NoRegister(); \
public: \
	DECLARE_CLASS2(UCharacterStats, UStatsBridgeBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPGSystem"), Z_Construct_UClass_UCharacterStats_NoRegister) \
	DECLARE_SERIALIZER(UCharacterStats)


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_CharacterStats_CharacterStats_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCharacterStats(UCharacterStats&&) = delete; \
	UCharacterStats(const UCharacterStats&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterStats); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCharacterStats) \
	NO_API virtual ~UCharacterStats();


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_CharacterStats_CharacterStats_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_CharacterStats_CharacterStats_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_CharacterStats_CharacterStats_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_CharacterStats_CharacterStats_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_CharacterStats_CharacterStats_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCharacterStats;

// ********** End Class UCharacterStats ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_CharacterStats_CharacterStats_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
