// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitDetectionSystem_init() {}
	HITDETECTIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_HitDetectionSystem_HitDetectionDelegate__DelegateSignature();
	HITDETECTIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxAnyDamage__DelegateSignature();
	HITDETECTIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxPointDamage__DelegateSignature();
	HITDETECTIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxRadialDamage__DelegateSignature();
	HITDETECTIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitAnyDamage__DelegateSignature();
	HITDETECTIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitPointDamage__DelegateSignature();
	HITDETECTIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitRadialDamage__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_HitDetectionSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_HitDetectionSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_HitDetectionSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_HitDetectionSystem_HitDetectionDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxAnyDamage__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxPointDamage__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_HitDetectionSystem_OnHitBoxRadialDamage__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitAnyDamage__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitPointDamage__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_HitDetectionSystem_OnZoneHitRadialDamage__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/HitDetectionSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x0357B106,
				0x65E86FEB,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_HitDetectionSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_HitDetectionSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_HitDetectionSystem(Z_Construct_UPackage__Script_HitDetectionSystem, TEXT("/Script/HitDetectionSystem"), Z_Registration_Info_UPackage__Script_HitDetectionSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0357B106, 0x65E86FEB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
