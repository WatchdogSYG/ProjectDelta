// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FItemData.h"

#include "Item.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class PROJECTDELTA_API UItem : public UObject
{
	
	GENERATED_BODY()

public:

	UItem();

	UPROPERTY(BlueprintReadWrite, Category = "Item Data")
	FItemData Properties;

	UFUNCTION(BlueprintCallable, Category = "Item Data")
	UItem* SetProperties(UItem* item, FItemData inProperties);

	UFUNCTION(BlueprintCallable, Category = "Debug")
	FString ToString();

private:
	
	float Value;
	float Freshness;
	float Temperature;
	uint32 StackSize;
	

};
