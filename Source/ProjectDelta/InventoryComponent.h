// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Item.h"
#include "Inventory/Money.h"

#include "InventoryComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTDELTA_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();

	UFUNCTION(BlueprintCallable, Category = "Debug")
	FString InitialiseInventory(TArray<UItem*> ItemArray, int32 StartingGold, int32 StartingCredits, int32 StartingSouls);

	FWallet Wallet;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "Debug")
	FString PrintDebugInventory();

	UPROPERTY(BlueprintReadWrite, Category = "Items")
	TArray<UItem*> ItemArray;	

private:
	
};
