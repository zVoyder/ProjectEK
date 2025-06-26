// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utility/AIUtility.h"

#ifdef AISYSTEM_AIUtility_generated_h
#error "AIUtility.generated.h already included, missing '#pragma once' in AIUtility.h"
#endif
#define AISYSTEM_AIUtility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAIPerceptionComponent;
class UAISense;
class UAISenseConfig;

// ********** Begin Class UAIUtility ***************************************************************
#define FID_ProjectEK_Plugins_VUEDK_AISystem_Source_AISystem_Public_Utility_AIUtility_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestStimuliListenerUpdate); \
	DECLARE_FUNCTION(execSetLoseSightRadius); \
	DECLARE_FUNCTION(execSetSightRadius); \
	DECLARE_FUNCTION(execGetSenseConfig); \
	DECLARE_FUNCTION(execSetPeripheralVisionAngle);


AISYSTEM_API UClass* Z_Construct_UClass_UAIUtility_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_AISystem_Source_AISystem_Public_Utility_AIUtility_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIUtility(); \
	friend struct Z_Construct_UClass_UAIUtility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AISYSTEM_API UClass* Z_Construct_UClass_UAIUtility_NoRegister(); \
public: \
	DECLARE_CLASS2(UAIUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AISystem"), Z_Construct_UClass_UAIUtility_NoRegister) \
	DECLARE_SERIALIZER(UAIUtility)


#define FID_ProjectEK_Plugins_VUEDK_AISystem_Source_AISystem_Public_Utility_AIUtility_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAIUtility(UAIUtility&&) = delete; \
	UAIUtility(const UAIUtility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIUtility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIUtility) \
	NO_API virtual ~UAIUtility();


#define FID_ProjectEK_Plugins_VUEDK_AISystem_Source_AISystem_Public_Utility_AIUtility_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_AISystem_Source_AISystem_Public_Utility_AIUtility_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_AISystem_Source_AISystem_Public_Utility_AIUtility_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_AISystem_Source_AISystem_Public_Utility_AIUtility_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_AISystem_Source_AISystem_Public_Utility_AIUtility_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAIUtility;

// ********** End Class UAIUtility *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_AISystem_Source_AISystem_Public_Utility_AIUtility_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
