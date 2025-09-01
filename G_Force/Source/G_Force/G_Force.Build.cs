// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class G_Force : ModuleRules
{
	public G_Force(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
