// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/DataAssets/QuestData.h"

#ifdef QUESTSYSTEM_QuestData_generated_h
#error "QuestData.generated.h already included, missing '#pragma once' in QuestData.h"
#endif
#define QUESTSYSTEM_QuestData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UQuestData ***************************************************************
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestData_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_QuestData_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestData(); \
	friend struct Z_Construct_UClass_UQuestData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestData_NoRegister(); \
public: \
	DECLARE_CLASS2(UQuestData, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestSystem"), Z_Construct_UClass_UQuestData_NoRegister) \
	DECLARE_SERIALIZER(UQuestData)


#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_QuestData_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UQuestData(UQuestData&&) = delete; \
	UQuestData(const UQuestData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestData) \
	NO_API virtual ~UQuestData();


#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_QuestData_h_11_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_QuestData_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_QuestData_h_14_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_QuestData_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UQuestData;

// ********** End Class UQuestData *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_QuestData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
