// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Item.h"
#include "InventoryComponent.generated.h"




UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTDELTA_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();

	UInventoryComponent(int bagSize, int wearSize, int hotbarSize);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	TArray<Item> Bag;
	TArray<Item> Wear;
	TArray<Item> Hotbar;

	int BagSize = 10;
	int EquippedSize = 5;
	int HotbarSize = 10;
};
