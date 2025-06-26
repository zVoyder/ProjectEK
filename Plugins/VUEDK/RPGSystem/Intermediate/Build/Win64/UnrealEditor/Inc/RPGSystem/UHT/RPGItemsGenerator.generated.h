// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RPGItemsGeneration/RPGItemsGenerator.h"

#ifdef RPGSYSTEM_RPGItemsGenerator_generated_h
#error "RPGItemsGenerator.generated.h already included, missing '#pragma once' in RPGItemsGenerator.h"
#endif
#define RPGSYSTEM_RPGItemsGenerator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class URPGGearItem;
class URPGGearItemFixedStatsGenerationData;
class URPGGearItemGenerationData;
class URPGItem;
class URPGItemBaseGenerationData;

// ********** Begin Class URPGItemsGenerator *******************************************************
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_RPGItemsGenerator_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTryGenerateRPGGearItemWithFixedStats); \
	DECLARE_FUNCTION(execTryGenerateRPGGearItem); \
	DECLARE_FUNCTION(execTryGenerateRPGItem);


RPGSYSTEM_API UClass* Z_Construct_UClass_URPGItemsGenerator_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_RPGItemsGenerator_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGItemsGenerator(); \
	friend struct Z_Construct_UClass_URPGItemsGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGSYSTEM_API UClass* Z_Construct_UClass_URPGItemsGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(URPGItemsGenerator, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPGSystem"), Z_Construct_UClass_URPGItemsGenerator_NoRegister) \
	DECLARE_SERIALIZER(URPGItemsGenerator)


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_RPGItemsGenerator_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGItemsGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URPGItemsGenerator(URPGItemsGenerator&&) = delete; \
	URPGItemsGenerator(const URPGItemsGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGItemsGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGItemsGenerator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGItemsGenerator) \
	NO_API virtual ~URPGItemsGenerator();


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_RPGItemsGenerator_h_15_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_RPGItemsGenerator_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_RPGItemsGenerator_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_RPGItemsGenerator_h_18_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_RPGItemsGenerator_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URPGItemsGenerator;

// ********** End Class URPGItemsGenerator *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_RPGItemsGenerator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
