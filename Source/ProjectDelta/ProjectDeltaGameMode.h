// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Engine/DataTable.h"
#include "ProjectDeltaGameMode.generated.h"

UCLASS(minimalapi)
class AProjectDeltaGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AProjectDeltaGameMode();

	class UDataTable* FoodDataTable;
};



