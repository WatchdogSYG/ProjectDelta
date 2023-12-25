// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectDeltaGameMode.h"
#include "ProjectDeltaCharacter.h"
#include "Engine/DataTable.h"
#include "UObject/ConstructorHelpers.h"
#include "FItemData.h"

AProjectDeltaGameMode::AProjectDeltaGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/ProjectDelta/Characters/FirstPerson/Blueprints/BP_FirstPersonCharacter.BP_FirstPersonCharacter_C"));	
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	static ConstructorHelpers::FObjectFinder<UDataTable> GetDT(TEXT("DataTable'/Game/ProjectDelta/Food/Data/Delta.Delta'"));
	if (GetDT.Succeeded()) {
		FoodDataTable = GetDT.Object;
	}

	static const FString ContextString(TEXT("MyContextString"));
	FItemData* d;

	d =  FoodDataTable->FindRow<FItemData>(FName(TEXT("Potato")), ContextString, true);

	UE_LOG(LogTemp, Warning, TEXT("%s"),*d->Texture);

}