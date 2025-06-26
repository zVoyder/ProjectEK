// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Dismemberer.h"

#ifdef DISMEMBERERSYSTEM_Dismemberer_generated_h
#error "Dismemberer.generated.h already included, missing '#pragma once' in Dismemberer.h"
#endif
#define DISMEMBERERSYSTEM_Dismemberer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class AController;
class ADismemberedLimb;
class UDamageType;
class UPrimitiveComponent;
class USkeletalMeshComponent;

// ********** Begin Class UDismemberer *************************************************************
#define FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Dismemberer_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnTakePointDamage); \
	DECLARE_FUNCTION(execGetDismemberedLimbs); \
	DECLARE_FUNCTION(execGetDismemberedRootBonesNames); \
	DECLARE_FUNCTION(execGetDismemberedBonesNames); \
	DECLARE_FUNCTION(execIsLimbDismemberable); \
	DECLARE_FUNCTION(execIsLimbDismembered); \
	DECLARE_FUNCTION(execStopAllBloodSpills); \
	DECLARE_FUNCTION(execStopBloodSpills); \
	DECLARE_FUNCTION(execStopBloodSpill); \
	DECLARE_FUNCTION(execDismemberAllLimbs); \
	DECLARE_FUNCTION(execDismemberRandomLimbs); \
	DECLARE_FUNCTION(execDismemberLimbs); \
	DECLARE_FUNCTION(execDismemberLimb); \
	DECLARE_FUNCTION(execReconstructAllLimbs); \
	DECLARE_FUNCTION(execReconstructLimbs); \
	DECLARE_FUNCTION(execReconstructLimb); \
	DECLARE_FUNCTION(execInit);


DISMEMBERERSYSTEM_API UClass* Z_Construct_UClass_UDismemberer_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Dismemberer_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDismemberer(); \
	friend struct Z_Construct_UClass_UDismemberer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DISMEMBERERSYSTEM_API UClass* Z_Construct_UClass_UDismemberer_NoRegister(); \
public: \
	DECLARE_CLASS2(UDismemberer, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DismembererSystem"), Z_Construct_UClass_UDismemberer_NoRegister) \
	DECLARE_SERIALIZER(UDismemberer)


#define FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Dismemberer_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDismemberer(UDismemberer&&) = delete; \
	UDismemberer(const UDismemberer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDismemberer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDismemberer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDismemberer) \
	NO_API virtual ~UDismemberer();


#define FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Dismemberer_h_15_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Dismemberer_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Dismemberer_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Dismemberer_h_18_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Dismemberer_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDismemberer;

// ********** End Class UDismemberer ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Dismemberer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
