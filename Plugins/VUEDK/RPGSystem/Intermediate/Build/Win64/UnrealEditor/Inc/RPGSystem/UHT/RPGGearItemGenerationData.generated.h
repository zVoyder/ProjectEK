// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RPGItemsGeneration/Data/Generations/RPGGearItemGenerationData.h"

#ifdef RPGSYSTEM_RPGGearItemGenerationData_generated_h
#error "RPGGearItemGenerationData.generated.h already included, missing '#pragma once' in RPGGearItemGenerationData.h"
#endif
#define RPGSYSTEM_RPGGearItemGenerationData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FStatOperationWithProbability *************************************
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Generations_RPGGearItemGenerationData_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStatOperationWithProbability_Statics; \
	static class UScriptStruct* StaticStruct();


struct FStatOperationWithProbability;
// ********** End ScriptStruct FStatOperationWithProbability ***************************************

// ********** Begin Class URPGGearItemGenerationData ***********************************************
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGGearItemGenerationData_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Generations_RPGGearItemGenerationData_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGGearItemGenerationData(); \
	friend struct Z_Construct_UClass_URPGGearItemGenerationData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGSYSTEM_API UClass* Z_Construct_UClass_URPGGearItemGenerationData_NoRegister(); \
public: \
	DECLARE_CLASS2(URPGGearItemGenerationData, URPGItemBaseGenerationData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPGSystem"), Z_Construct_UClass_URPGGearItemGenerationData_NoRegister) \
	DECLARE_SERIALIZER(URPGGearItemGenerationData)


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Generations_RPGGearItemGenerationData_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGGearItemGenerationData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URPGGearItemGenerationData(URPGGearItemGenerationData&&) = delete; \
	URPGGearItemGenerationData(const URPGGearItemGenerationData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGGearItemGenerationData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGGearItemGenerationData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGGearItemGenerationData) \
	NO_API virtual ~URPGGearItemGenerationData();


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Generations_RPGGearItemGenerationData_h_29_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Generations_RPGGearItemGenerationData_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Generations_RPGGearItemGenerationData_h_32_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Generations_RPGGearItemGenerationData_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URPGGearItemGenerationData;

// ********** End Class URPGGearItemGenerationData *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Generations_RPGGearItemGenerationData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
