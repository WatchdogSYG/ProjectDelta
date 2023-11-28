// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ProjectDelta : ModuleRules
{
	public ProjectDelta(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "UMG" });
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "SlateCore" });

        //https://forums.unrealengine.com/t/when-i-create-a-new-c-class-in-a-subfolder/246215/3

        PrivateIncludePaths.AddRange(
            new string[] {
                "Spells",
                "Inventory"
                // ... add other private include paths required here ...
            }
        );
    }
}
