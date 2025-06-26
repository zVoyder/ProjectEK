// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HitBoxManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class UDamageType;
class UPrimitiveComponent;
struct FHitResult;
#ifdef HITBOXSYSTEM_HitBoxManager_generated_h
#error "HitBoxManager.generated.h already included, missing '#pragma once' in HitBoxManager.h"
#endif
#define HITBOXSYSTEM_HitBoxManager_generated_h

#define FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitBoxManager_h_17_DELEGATE \
HITBOXSYSTEM_API void FOnHitBoxAnyDamage_DelegateWrapper(const FMulticastScriptDelegate& OnHitBoxAnyDamage, float PureDamage, float TotalDamage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);


#define FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitBoxManager_h_29_DELEGATE \
HITBOXSYSTEM_API void FOnHitBoxPointDamage_DelegateWrapper(const FMulticastScriptDelegate& OnHitBoxPointDamage, float PureDamage, float TotalDamage, FVector HitLocation, FVector HitNormal, FName BoneName, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);


#define FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitBoxManager_h_39_DELEGATE \
HITBOXSYSTEM_API void FOnHitBoxRadialDamage_DelegateWrapper(const FMulticastScriptDelegate& OnHitBoxRadialDamage, float PureDamage, float TotalDamage, const UDamageType* DamageType, FVector Origin, FHitResult const& HitInfo, AController* InstigatedBy);


#define FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitBoxManager_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnZoneHitRadialDamage); \
	DECLARE_FUNCTION(execOnZoneHitPointDamage); \
	DECLARE_FUNCTION(execOnTakeRadialDamage); \
	DECLARE_FUNCTION(execOnTakePointDamage); \
	DECLARE_FUNCTION(execHasHitBoxPerBones);


#define FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitBoxManager_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHitBoxManager(); \
	friend struct Z_Construct_UClass_UHitBoxManager_Statics; \
public: \
	DECLARE_CLASS(UHitBoxManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HitBoxSystem"), NO_API) \
	DECLARE_SERIALIZER(UHitBoxManager)


#define FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitBoxManager_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHitBoxManager(UHitBoxManager&&); \
	UHitBoxManager(const UHitBoxManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHitBoxManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHitBoxManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHitBoxManager) \
	NO_API virtual ~UHitBoxManager();


#define FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitBoxManager_h_41_PROLOG
#define FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitBoxManager_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitBoxManager_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitBoxManager_h_44_INCLASS_NO_PURE_DECLS \
	FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitBoxManager_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HITBOXSYSTEM_API UClass* StaticClass<class UHitBoxManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitBoxManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
