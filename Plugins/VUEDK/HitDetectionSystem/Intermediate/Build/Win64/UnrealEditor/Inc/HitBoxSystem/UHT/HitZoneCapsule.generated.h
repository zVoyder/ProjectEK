// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HitZones/HitZoneCapsule.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HITBOXSYSTEM_HitZoneCapsule_generated_h
#error "HitZoneCapsule.generated.h already included, missing '#pragma once' in HitZoneCapsule.h"
#endif
#define HITBOXSYSTEM_HitZoneCapsule_generated_h

#define FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneCapsule_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHitZoneCapsule(); \
	friend struct Z_Construct_UClass_UHitZoneCapsule_Statics; \
public: \
	DECLARE_CLASS(UHitZoneCapsule, UCapsuleComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HitBoxSystem"), NO_API) \
	DECLARE_SERIALIZER(UHitZoneCapsule) \
	virtual UObject* _getUObject() const override { return const_cast<UHitZoneCapsule*>(this); }


#define FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneCapsule_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHitZoneCapsule(UHitZoneCapsule&&); \
	UHitZoneCapsule(const UHitZoneCapsule&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHitZoneCapsule); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHitZoneCapsule); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHitZoneCapsule) \
	NO_API virtual ~UHitZoneCapsule();


#define FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneCapsule_h_11_PROLOG
#define FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneCapsule_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneCapsule_h_14_INCLASS_NO_PURE_DECLS \
	FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneCapsule_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HITBOXSYSTEM_API UClass* StaticClass<class UHitZoneCapsule>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_HitZones_HitZoneCapsule_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
