// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class PROJECTDELTA_API UItem : public UObject
{
	GENERATED_BODY()

public:
	UItem();

	FString GetName();
private:
	FString name;

};
