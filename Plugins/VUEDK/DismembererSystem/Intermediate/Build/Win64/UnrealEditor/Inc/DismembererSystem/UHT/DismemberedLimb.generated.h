// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DismemberedLimb.h"

#ifdef DISMEMBERERSYSTEM_DismemberedLimb_generated_h
#error "DismemberedLimb.generated.h already included, missing '#pragma once' in DismemberedLimb.h"
#endif
#define DISMEMBERERSYSTEM_DismemberedLimb_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class AController;
class UDamageType;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class ADismemberedLimb *********************************************************
#define FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_DismemberedLimb_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRadialDamage); \
	DECLARE_FUNCTION(execOnPointDamage); \
	DECLARE_FUNCTION(execOnAnyDamage);


DISMEMBERERSYSTEM_API UClass* Z_Construct_UClass_ADismemberedLimb_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_DismemberedLimb_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADismemberedLimb(); \
	friend struct Z_Construct_UClass_ADismemberedLimb_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DISMEMBERERSYSTEM_API UClass* Z_Construct_UClass_ADismemberedLimb_NoRegister(); \
public: \
	DECLARE_CLASS2(ADismemberedLimb, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DismembererSystem"), Z_Construct_UClass_ADismemberedLimb_NoRegister) \
	DECLARE_SERIALIZER(ADismemberedLimb) \
	virtual UObject* _getUObject() const override { return const_cast<ADismemberedLimb*>(this); }


#define FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_DismemberedLimb_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADismemberedLimb(ADismemberedLimb&&) = delete; \
	ADismemberedLimb(const ADismemberedLimb&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADismemberedLimb); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADismemberedLimb); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADismemberedLimb) \
	NO_API virtual ~ADismemberedLimb();


#define FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_DismemberedLimb_h_17_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_DismemberedLimb_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_DismemberedLimb_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_DismemberedLimb_h_20_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_DismemberedLimb_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADismemberedLimb;

// ********** End Class ADismemberedLimb ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_DismemberedLimb_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
