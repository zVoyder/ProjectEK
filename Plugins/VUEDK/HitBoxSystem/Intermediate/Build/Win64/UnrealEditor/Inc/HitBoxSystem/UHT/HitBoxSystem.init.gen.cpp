// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitBoxSystem_init() {}
	HITBOXSYSTEM_API UFunction* Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxAnyDamage__DelegateSignature();
	HITBOXSYSTEM_API UFunction* Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxPointDamage__DelegateSignature();
	HITBOXSYSTEM_API UFunction* Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxRadialDamage__DelegateSignature();
	HITBOXSYSTEM_API UFunction* Z_Construct_UDelegateFunction_HitBoxSystem_OnZoneHitAnyDamage__DelegateSignature();
	HITBOXSYSTEM_API UFunction* Z_Construct_UDelegateFunction_HitBoxSystem_OnZoneHitPointDamage__DelegateSignature();
	HITBOXSYSTEM_API UFunction* Z_Construct_UDelegateFunction_HitBoxSystem_OnZoneHitRadialDamage__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_HitBoxSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_HitBoxSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_HitBoxSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxAnyDamage__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxPointDamage__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_HitBoxSystem_OnHitBoxRadialDamage__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_HitBoxSystem_OnZoneHitAnyDamage__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_HitBoxSystem_OnZoneHitPointDamage__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_HitBoxSystem_OnZoneHitRadialDamage__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/HitBoxSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xAE1BADDD,
				0xFFF1D64E,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_HitBoxSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_HitBoxSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_HitBoxSystem(Z_Construct_UPackage__Script_HitBoxSystem, TEXT("/Script/HitBoxSystem"), Z_Registration_Info_UPackage__Script_HitBoxSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xAE1BADDD, 0xFFF1D64E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
