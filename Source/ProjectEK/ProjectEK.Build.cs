// Copyright zVoyder, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ProjectEK : ModuleRules
{
	public ProjectEK(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"GameplayTags"
		});

		// VUEDK Modules
		PublicDependencyModuleNames.AddRange(new string[]
		{
			"InputsHandlerSystem",
			"InventorySystem",
			"RPGSystem",
			"SaveSystem",
			"BetterUI",
			"WeaponSystem"
		});

		PublicIncludePaths.AddRange(new string[]
		{
			"ProjectEK"
		});

		// Templates
		PrivateIncludePaths.AddRange(new string[]
		{
			"ProjectEK/Templates/Variant_Horror",
			"ProjectEK/Templates/Variant_Shooter",
			"ProjectEK/Templates/Variant_Shooter/AI",
		});
	}
}