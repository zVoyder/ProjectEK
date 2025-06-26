// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HitDetectionSubsystem.h"

#ifdef HITDETECTIONSYSTEM_HitDetectionSubsystem_generated_h
#error "HitDetectionSubsystem.generated.h already included, missing '#pragma once' in HitDetectionSubsystem.h"
#endif
#define HITDETECTIONSYSTEM_HitDetectionSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AController;

// ********** Begin Delegate FHitDetectionDelegate *************************************************
#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitDetectionSubsystem_h_17_DELEGATE \
HITDETECTIONSYSTEM_API void FHitDetectionDelegate_DelegateWrapper(const FMulticastScriptDelegate& HitDetectionDelegate, FVector HitLocation, FVector HitNormal, FName BoneName, float DamageMultiplier, float TotalDamage, float BaseDamage);


// ********** End Delegate FHitDetectionDelegate ***************************************************

// ********** Begin Class UHitDetectionSubsystem ***************************************************
#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitDetectionSubsystem_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCallForHit);


HITDETECTIONSYSTEM_API UClass* Z_Construct_UClass_UHitDetectionSubsystem_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitDetectionSubsystem_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHitDetectionSubsystem(); \
	friend struct Z_Construct_UClass_UHitDetectionSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HITDETECTIONSYSTEM_API UClass* Z_Construct_UClass_UHitDetectionSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UHitDetectionSubsystem, ULocalPlayerSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HitDetectionSystem"), Z_Construct_UClass_UHitDetectionSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UHitDetectionSubsystem)


#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitDetectionSubsystem_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHitDetectionSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHitDetectionSubsystem(UHitDetectionSubsystem&&) = delete; \
	UHitDetectionSubsystem(const UHitDetectionSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHitDetectionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHitDetectionSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHitDetectionSubsystem) \
	NO_API virtual ~UHitDetectionSubsystem();


#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitDetectionSubsystem_h_19_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitDetectionSubsystem_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitDetectionSubsystem_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitDetectionSubsystem_h_22_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitDetectionSubsystem_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHitDetectionSubsystem;

// ********** End Class UHitDetectionSubsystem *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitDetectionSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
