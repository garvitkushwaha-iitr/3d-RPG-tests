// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class test3 : ModuleRules
{
	public test3(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
