// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/DataAssets/QuestLogData.h"

#ifdef QUESTSYSTEM_QuestLogData_generated_h
#error "QuestLogData.generated.h already included, missing '#pragma once' in QuestLogData.h"
#endif
#define QUESTSYSTEM_QuestLogData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UQuestLogData ************************************************************
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestLogData_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_QuestLogData_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestLogData(); \
	friend struct Z_Construct_UClass_UQuestLogData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestLogData_NoRegister(); \
public: \
	DECLARE_CLASS2(UQuestLogData, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestSystem"), Z_Construct_UClass_UQuestLogData_NoRegister) \
	DECLARE_SERIALIZER(UQuestLogData)


#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_QuestLogData_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestLogData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UQuestLogData(UQuestLogData&&) = delete; \
	UQuestLogData(const UQuestLogData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestLogData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestLogData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestLogData) \
	NO_API virtual ~UQuestLogData();


#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_QuestLogData_h_11_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_QuestLogData_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_QuestLogData_h_14_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_QuestLogData_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UQuestLogData;

// ********** End Class UQuestLogData **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_QuestLogData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
