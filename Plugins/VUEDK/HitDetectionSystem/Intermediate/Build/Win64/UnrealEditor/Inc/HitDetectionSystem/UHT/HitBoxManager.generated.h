// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HitBoxManager.h"

#ifdef HITDETECTIONSYSTEM_HitBoxManager_generated_h
#error "HitBoxManager.generated.h already included, missing '#pragma once' in HitBoxManager.h"
#endif
#define HITDETECTIONSYSTEM_HitBoxManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class AController;
class UDamageType;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Delegate FOnHitBoxAnyDamage ****************************************************
#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitBoxManager_h_18_DELEGATE \
HITDETECTIONSYSTEM_API void FOnHitBoxAnyDamage_DelegateWrapper(const FMulticastScriptDelegate& OnHitBoxAnyDamage, float BaseDamage, float TotalDamage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);


// ********** End Delegate FOnHitBoxAnyDamage ******************************************************

// ********** Begin Delegate FOnHitBoxPointDamage **************************************************
#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitBoxManager_h_30_DELEGATE \
HITDETECTIONSYSTEM_API void FOnHitBoxPointDamage_DelegateWrapper(const FMulticastScriptDelegate& OnHitBoxPointDamage, float BaseDamage, float TotalDamage, FVector HitLocation, FVector HitNormal, FName BoneName, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);


// ********** End Delegate FOnHitBoxPointDamage ****************************************************

// ********** Begin Delegate FOnHitBoxRadialDamage *************************************************
#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitBoxManager_h_40_DELEGATE \
HITDETECTIONSYSTEM_API void FOnHitBoxRadialDamage_DelegateWrapper(const FMulticastScriptDelegate& OnHitBoxRadialDamage, float BaseDamage, float TotalDamage, const UDamageType* DamageType, FVector Origin, FHitResult const& HitInfo, AController* InstigatedBy);


// ********** End Delegate FOnHitBoxRadialDamage ***************************************************

// ********** Begin Class UHitBoxManager ***********************************************************
#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitBoxManager_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnZoneHitRadialDamage); \
	DECLARE_FUNCTION(execOnZoneHitPointDamage); \
	DECLARE_FUNCTION(execOnTakeRadialDamage); \
	DECLARE_FUNCTION(execOnTakePointDamage); \
	DECLARE_FUNCTION(execOnTakeAnyDamage); \
	DECLARE_FUNCTION(execHasHitBoxPerBones);


HITDETECTIONSYSTEM_API UClass* Z_Construct_UClass_UHitBoxManager_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitBoxManager_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHitBoxManager(); \
	friend struct Z_Construct_UClass_UHitBoxManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HITDETECTIONSYSTEM_API UClass* Z_Construct_UClass_UHitBoxManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UHitBoxManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HitDetectionSystem"), Z_Construct_UClass_UHitBoxManager_NoRegister) \
	DECLARE_SERIALIZER(UHitBoxManager)


#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitBoxManager_h_45_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHitBoxManager(UHitBoxManager&&) = delete; \
	UHitBoxManager(const UHitBoxManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHitBoxManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHitBoxManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHitBoxManager) \
	NO_API virtual ~UHitBoxManager();


#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitBoxManager_h_42_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitBoxManager_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitBoxManager_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitBoxManager_h_45_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitBoxManager_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHitBoxManager;

// ********** End Class UHitBoxManager *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitBoxManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
