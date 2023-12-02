// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/DataTable.h"
#include "CoreMinimal.h"
#include "FItemData.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FItemData : public FTableRowBase
{

	GENERATED_USTRUCT_BODY()

public:

	//FTableRowBase() {}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	int32 UID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	FString Faction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	int32 SWE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	int32 SLT;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	int32 BIT;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	int32 ACD;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	int32 UMA;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	int32 SAN;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	int32 PRT;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	int32 FAT;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	int32 VIT;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	int32 EGY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	int32 WTR;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	int32 TEMP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	int32 FRSH;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	int32 VALUE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	FString Unit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	float Weight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	float WeightVariation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	FString Colour;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	FString Texture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	FString LookupString;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	FString Model;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	FString Sprite;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	FString PixelSprite;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	bool STAPLE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	bool PROTEIN;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	bool SAUCE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	bool HERB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	bool SEASONING;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	bool VEGETABLE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	bool FRUIT;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	bool DAIRY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	bool WRAP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	bool SPICE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	bool ARTEFACT;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	bool QUANTUM;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	bool NUT;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	bool RAW;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	bool CURSED;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	bool BEAN;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	bool GARNISH;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item Data")
	bool BREAD;

};
