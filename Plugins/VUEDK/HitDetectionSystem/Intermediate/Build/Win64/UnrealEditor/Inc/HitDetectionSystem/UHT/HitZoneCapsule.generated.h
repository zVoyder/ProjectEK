// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HitZones/HitZoneCapsule.h"

#ifdef HITDETECTIONSYSTEM_HitZoneCapsule_generated_h
#error "HitZoneCapsule.generated.h already included, missing '#pragma once' in HitZoneCapsule.h"
#endif
#define HITDETECTIONSYSTEM_HitZoneCapsule_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHitZoneCapsule **********************************************************
HITDETECTIONSYSTEM_API UClass* Z_Construct_UClass_UHitZoneCapsule_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneCapsule_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHitZoneCapsule(); \
	friend struct Z_Construct_UClass_UHitZoneCapsule_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HITDETECTIONSYSTEM_API UClass* Z_Construct_UClass_UHitZoneCapsule_NoRegister(); \
public: \
	DECLARE_CLASS2(UHitZoneCapsule, UCapsuleComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HitDetectionSystem"), Z_Construct_UClass_UHitZoneCapsule_NoRegister) \
	DECLARE_SERIALIZER(UHitZoneCapsule) \
	virtual UObject* _getUObject() const override { return const_cast<UHitZoneCapsule*>(this); }


#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneCapsule_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHitZoneCapsule(UHitZoneCapsule&&) = delete; \
	UHitZoneCapsule(const UHitZoneCapsule&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHitZoneCapsule); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHitZoneCapsule); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHitZoneCapsule) \
	NO_API virtual ~UHitZoneCapsule();


#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneCapsule_h_11_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneCapsule_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneCapsule_h_14_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneCapsule_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHitZoneCapsule;

// ********** End Class UHitZoneCapsule ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneCapsule_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
