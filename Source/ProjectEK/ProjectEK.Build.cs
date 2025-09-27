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
			"WeaponSystem",
			"ResourceAttributesSystem",
			"VUEDKCore",
			"CheckpointSaveBridge",
			"InventorySaveBridge",
			"RPGSaveBridge"
		});

		PublicIncludePaths.AddRange(new string[]
		{
			"ProjectEK"
		});
	}
}