// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class EndOfLine_3D : ModuleRules
{
	public EndOfLine_3D(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
