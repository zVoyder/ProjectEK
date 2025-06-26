// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HitZones/HitZoneSphere.h"

#ifdef HITDETECTIONSYSTEM_HitZoneSphere_generated_h
#error "HitZoneSphere.generated.h already included, missing '#pragma once' in HitZoneSphere.h"
#endif
#define HITDETECTIONSYSTEM_HitZoneSphere_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHitZoneSphere ***********************************************************
HITDETECTIONSYSTEM_API UClass* Z_Construct_UClass_UHitZoneSphere_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneSphere_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHitZoneSphere(); \
	friend struct Z_Construct_UClass_UHitZoneSphere_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HITDETECTIONSYSTEM_API UClass* Z_Construct_UClass_UHitZoneSphere_NoRegister(); \
public: \
	DECLARE_CLASS2(UHitZoneSphere, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HitDetectionSystem"), Z_Construct_UClass_UHitZoneSphere_NoRegister) \
	DECLARE_SERIALIZER(UHitZoneSphere) \
	virtual UObject* _getUObject() const override { return const_cast<UHitZoneSphere*>(this); }


#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneSphere_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHitZoneSphere(UHitZoneSphere&&) = delete; \
	UHitZoneSphere(const UHitZoneSphere&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHitZoneSphere); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHitZoneSphere); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHitZoneSphere) \
	NO_API virtual ~UHitZoneSphere();


#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneSphere_h_11_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneSphere_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneSphere_h_14_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneSphere_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHitZoneSphere;

// ********** End Class UHitZoneSphere *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneSphere_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
