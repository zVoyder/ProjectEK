// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HitZones/HitZoneHandler.h"

#ifdef HITDETECTIONSYSTEM_HitZoneHandler_generated_h
#error "HitZoneHandler.generated.h already included, missing '#pragma once' in HitZoneHandler.h"
#endif
#define HITDETECTIONSYSTEM_HitZoneHandler_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class AController;
class UDamageType;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Delegate FOnZoneHitAnyDamage ***************************************************
#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneHandler_h_17_DELEGATE \
HITDETECTIONSYSTEM_API void FOnZoneHitAnyDamage_DelegateWrapper(const FMulticastScriptDelegate& OnZoneHitAnyDamage, float BaseDamage, float TotalDamage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);


// ********** End Delegate FOnZoneHitAnyDamage *****************************************************

// ********** Begin Delegate FOnZoneHitPointDamage *************************************************
#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneHandler_h_29_DELEGATE \
HITDETECTIONSYSTEM_API void FOnZoneHitPointDamage_DelegateWrapper(const FMulticastScriptDelegate& OnZoneHitPointDamage, float BaseDamage, float TotalDamage, FVector HitLocation, FVector HitNormal, FName BoneName, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);


// ********** End Delegate FOnZoneHitPointDamage ***************************************************

// ********** Begin Delegate FOnZoneHitRadialDamage ************************************************
#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneHandler_h_40_DELEGATE \
HITDETECTIONSYSTEM_API void FOnZoneHitRadialDamage_DelegateWrapper(const FMulticastScriptDelegate& OnZoneHitRadialDamage, float BaseDamage, float TotalDamage, const UDamageType* DamageType, FVector Origin, FHitResult const& HitInfo, AController* InstigatedBy, AActor* DamageCauser);


// ********** End Delegate FOnZoneHitRadialDamage **************************************************

// ********** Begin Class UHitZoneHandler **********************************************************
#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneHandler_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTakeRadialDamage); \
	DECLARE_FUNCTION(execOnTakePointDamage);


HITDETECTIONSYSTEM_API UClass* Z_Construct_UClass_UHitZoneHandler_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneHandler_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHitZoneHandler(); \
	friend struct Z_Construct_UClass_UHitZoneHandler_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HITDETECTIONSYSTEM_API UClass* Z_Construct_UClass_UHitZoneHandler_NoRegister(); \
public: \
	DECLARE_CLASS2(UHitZoneHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HitDetectionSystem"), Z_Construct_UClass_UHitZoneHandler_NoRegister) \
	DECLARE_SERIALIZER(UHitZoneHandler)


#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneHandler_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHitZoneHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHitZoneHandler(UHitZoneHandler&&) = delete; \
	UHitZoneHandler(const UHitZoneHandler&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHitZoneHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHitZoneHandler); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHitZoneHandler) \
	NO_API virtual ~UHitZoneHandler();


#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneHandler_h_42_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneHandler_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneHandler_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneHandler_h_45_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneHandler_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHitZoneHandler;

// ********** End Class UHitZoneHandler ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneHandler_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
