// Fill out your copyright notice in the Description page of Project Settings.

#include "Money.generated.h"

UENUM(BlueprintType)
enum class EMoney : uint8 {

	CURRENCY_LOCAL	UMETA(DisplayName = "Gold"),
	CURRENCY_SPACE	UMETA(DisplayName = "Credits"),
	CURRENCY_MYSTIC	UMETA(DisplayName = "Souls"),

};

USTRUCT(BlueprintType)
struct FWallet {
	GENERATED_BODY()

	UPROPERTY()
	int32 Gold;

	UPROPERTY()
	int32 Credits;

	UPROPERTY()
	int32 Souls;
};