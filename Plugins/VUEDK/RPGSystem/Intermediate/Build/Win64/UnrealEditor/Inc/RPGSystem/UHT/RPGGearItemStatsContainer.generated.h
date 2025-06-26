// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RPGInventory/Stats/RPGGearItemStatsContainer.h"

#ifdef RPGSYSTEM_RPGGearItemStatsContainer_generated_h
#error "RPGGearItemStatsContainer.generated.h already included, missing '#pragma once' in RPGGearItemStatsContainer.h"
#endif
#define RPGSYSTEM_RPGGearItemStatsContainer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URPGGearItemStatsContainer ***********************************************
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGGearItemStatsContainer_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Stats_RPGGearItemStatsContainer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGGearItemStatsContainer(); \
	friend struct Z_Construct_UClass_URPGGearItemStatsContainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGSYSTEM_API UClass* Z_Construct_UClass_URPGGearItemStatsContainer_NoRegister(); \
public: \
	DECLARE_CLASS2(URPGGearItemStatsContainer, UCoreStatsContainer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPGSystem"), Z_Construct_UClass_URPGGearItemStatsContainer_NoRegister) \
	DECLARE_SERIALIZER(URPGGearItemStatsContainer)


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Stats_RPGGearItemStatsContainer_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGGearItemStatsContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URPGGearItemStatsContainer(URPGGearItemStatsContainer&&) = delete; \
	URPGGearItemStatsContainer(const URPGGearItemStatsContainer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGGearItemStatsContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGGearItemStatsContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGGearItemStatsContainer) \
	NO_API virtual ~URPGGearItemStatsContainer();


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Stats_RPGGearItemStatsContainer_h_9_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Stats_RPGGearItemStatsContainer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Stats_RPGGearItemStatsContainer_h_12_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Stats_RPGGearItemStatsContainer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URPGGearItemStatsContainer;

// ********** End Class URPGGearItemStatsContainer *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Stats_RPGGearItemStatsContainer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
