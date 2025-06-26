// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CheckpointsManager.h"

#ifdef CHECKPOINTSYSTEM_CheckpointsManager_generated_h
#error "CheckpointsManager.generated.h already included, missing '#pragma once' in CheckpointsManager.h"
#endif
#define CHECKPOINTSYSTEM_CheckpointsManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FCheckpointsSaveData;

// ********** Begin Delegate FOnCheckpointReached **************************************************
#define FID_ProjectEK_Plugins_VUEDK_CheckpointSystem_Source_CheckpointSystem_Public_CheckpointsManager_h_15_DELEGATE \
CHECKPOINTSYSTEM_API void FOnCheckpointReached_DelegateWrapper(const FMulticastScriptDelegate& OnCheckpointReached);


// ********** End Delegate FOnCheckpointReached ****************************************************

// ********** Begin Class UCheckpointsManager ******************************************************
#define FID_ProjectEK_Plugins_VUEDK_CheckpointSystem_Source_CheckpointSystem_Public_CheckpointsManager_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTryGetLastCheckpoint); \
	DECLARE_FUNCTION(execTryGetCheckpoint); \
	DECLARE_FUNCTION(execTrySetCheckpoint); \
	DECLARE_FUNCTION(execLoadSaveData); \
	DECLARE_FUNCTION(execCreateSaveData);


CHECKPOINTSYSTEM_API UClass* Z_Construct_UClass_UCheckpointsManager_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_CheckpointSystem_Source_CheckpointSystem_Public_CheckpointsManager_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCheckpointsManager(); \
	friend struct Z_Construct_UClass_UCheckpointsManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHECKPOINTSYSTEM_API UClass* Z_Construct_UClass_UCheckpointsManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UCheckpointsManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CheckpointSystem"), Z_Construct_UClass_UCheckpointsManager_NoRegister) \
	DECLARE_SERIALIZER(UCheckpointsManager)


#define FID_ProjectEK_Plugins_VUEDK_CheckpointSystem_Source_CheckpointSystem_Public_CheckpointsManager_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCheckpointsManager(UCheckpointsManager&&) = delete; \
	UCheckpointsManager(const UCheckpointsManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCheckpointsManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCheckpointsManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCheckpointsManager) \
	NO_API virtual ~UCheckpointsManager();


#define FID_ProjectEK_Plugins_VUEDK_CheckpointSystem_Source_CheckpointSystem_Public_CheckpointsManager_h_17_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_CheckpointSystem_Source_CheckpointSystem_Public_CheckpointsManager_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_CheckpointSystem_Source_CheckpointSystem_Public_CheckpointsManager_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_CheckpointSystem_Source_CheckpointSystem_Public_CheckpointsManager_h_20_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_CheckpointSystem_Source_CheckpointSystem_Public_CheckpointsManager_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCheckpointsManager;

// ********** End Class UCheckpointsManager ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_CheckpointSystem_Source_CheckpointSystem_Public_CheckpointsManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
