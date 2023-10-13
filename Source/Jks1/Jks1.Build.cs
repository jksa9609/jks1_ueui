// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Jks1 : ModuleRules
{
	public Jks1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
