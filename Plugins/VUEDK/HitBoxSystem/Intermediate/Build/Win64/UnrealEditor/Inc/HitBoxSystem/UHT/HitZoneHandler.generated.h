// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HitZones/HitZoneHandler.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class UDamageType;
class UPrimitiveComponent;
struct FHitResult;
#ifdef HITBOXSYSTEM_HitZoneHandler_generated_h
#error "HitZoneHandler.generated.h already included, missing '#pragma once' in HitZoneHandler.h"
#endif
#define HITBOXSYSTEM_HitZoneHandler_generated_h

#define FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneHandler_h_17_DELEGATE \
HITBOXSYSTEM_API void FOnZoneHitAnyDamage_DelegateWrapper(const FMulticastScriptDelegate& OnZoneHitAnyDamage, float PureDamage, float TotalDamage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);


#define FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneHandler_h_29_DELEGATE \
HITBOXSYSTEM_API void FOnZoneHitPointDamage_DelegateWrapper(const FMulticastScriptDelegate& OnZoneHitPointDamage, float PureDamage, float TotalDamage, FVector HitLocation, FVector HitNormal, FName BoneName, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);


#define FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneHandler_h_40_DELEGATE \
HITBOXSYSTEM_API void FOnZoneHitRadialDamage_DelegateWrapper(const FMulticastScriptDelegate& OnZoneHitRadialDamage, float PureDamage, float TotalDamage, const UDamageType* DamageType, FVector Origin, FHitResult const& HitInfo, AController* InstigatedBy, AActor* DamageCauser);


#define FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneHandler_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTakeRadialDamage); \
	DECLARE_FUNCTION(execOnTakePointDamage);


#define FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneHandler_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHitZoneHandler(); \
	friend struct Z_Construct_UClass_UHitZoneHandler_Statics; \
public: \
	DECLARE_CLASS(UHitZoneHandler, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HitBoxSystem"), NO_API) \
	DECLARE_SERIALIZER(UHitZoneHandler)


#define FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneHandler_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHitZoneHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHitZoneHandler(UHitZoneHandler&&); \
	UHitZoneHandler(const UHitZoneHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHitZoneHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHitZoneHandler); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHitZoneHandler) \
	NO_API virtual ~UHitZoneHandler();


#define FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneHandler_h_42_PROLOG
#define FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneHandler_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneHandler_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneHandler_h_45_INCLASS_NO_PURE_DECLS \
	FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneHandler_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HITBOXSYSTEM_API UClass* StaticClass<class UHitZoneHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
