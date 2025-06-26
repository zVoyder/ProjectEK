// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/RPGFactory.h"

#ifdef RPGSYSTEM_RPGFactory_generated_h
#error "RPGFactory.generated.h already included, missing '#pragma once' in RPGFactory.h"
#endif
#define RPGSYSTEM_RPGFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UBridgeStatOperation;
class UCoreStatData;
class UObject;
class URPGGearItem;
class URPGGearItemData;
class URPGGearItemFixedStatsGenerationData;
class URPGGearItemGenerationData;
class URPGGearItemGenerationSet;
class URPGItem;
class URPGItemBaseGenerationData;
class URPGItemData;
class USpecialStatData;
class UStatOperation;
class UStatsBridgeBase;

// ********** Begin Class URPGFactory **************************************************************
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_Factories_RPGFactory_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateBridgeStatOperation); \
	DECLARE_FUNCTION(execCreateItemStatOperation); \
	DECLARE_FUNCTION(execCreateRPGGearItemWithFixedStats); \
	DECLARE_FUNCTION(execCreateRPGGearItemWithGenerationSet); \
	DECLARE_FUNCTION(execCreateRPGGearItem); \
	DECLARE_FUNCTION(execCreateRPGGenericItems); \
	DECLARE_FUNCTION(execCreateRPGGenericItem);


RPGSYSTEM_API UClass* Z_Construct_UClass_URPGFactory_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_Factories_RPGFactory_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGFactory(); \
	friend struct Z_Construct_UClass_URPGFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGSYSTEM_API UClass* Z_Construct_UClass_URPGFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(URPGFactory, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPGSystem"), Z_Construct_UClass_URPGFactory_NoRegister) \
	DECLARE_SERIALIZER(URPGFactory)


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_Factories_RPGFactory_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URPGFactory(URPGFactory&&) = delete; \
	URPGFactory(const URPGFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGFactory) \
	NO_API virtual ~URPGFactory();


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_Factories_RPGFactory_h_17_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_Factories_RPGFactory_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_Factories_RPGFactory_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_Factories_RPGFactory_h_20_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_Factories_RPGFactory_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URPGFactory;

// ********** End Class URPGFactory ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_Factories_RPGFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
