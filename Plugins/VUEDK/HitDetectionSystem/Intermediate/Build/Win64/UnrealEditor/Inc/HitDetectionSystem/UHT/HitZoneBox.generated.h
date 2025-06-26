// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HitZones/HitZoneBox.h"

#ifdef HITDETECTIONSYSTEM_HitZoneBox_generated_h
#error "HitZoneBox.generated.h already included, missing '#pragma once' in HitZoneBox.h"
#endif
#define HITDETECTIONSYSTEM_HitZoneBox_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHitZoneBox **************************************************************
HITDETECTIONSYSTEM_API UClass* Z_Construct_UClass_UHitZoneBox_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneBox_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHitZoneBox(); \
	friend struct Z_Construct_UClass_UHitZoneBox_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HITDETECTIONSYSTEM_API UClass* Z_Construct_UClass_UHitZoneBox_NoRegister(); \
public: \
	DECLARE_CLASS2(UHitZoneBox, UBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HitDetectionSystem"), Z_Construct_UClass_UHitZoneBox_NoRegister) \
	DECLARE_SERIALIZER(UHitZoneBox) \
	virtual UObject* _getUObject() const override { return const_cast<UHitZoneBox*>(this); }


#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneBox_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHitZoneBox(UHitZoneBox&&) = delete; \
	UHitZoneBox(const UHitZoneBox&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHitZoneBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHitZoneBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHitZoneBox) \
	NO_API virtual ~UHitZoneBox();


#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneBox_h_11_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneBox_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneBox_h_14_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneBox_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHitZoneBox;

// ********** End Class UHitZoneBox ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_HitZones_HitZoneBox_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
