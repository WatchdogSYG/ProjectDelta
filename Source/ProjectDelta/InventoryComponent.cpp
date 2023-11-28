// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"
#include "Item.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent() {
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

FString UInventoryComponent::InitialiseInventory(TArray<UItem*> a) {
	ItemArray.Append(a);
	return FString::Printf(TEXT("Num: %i, Texture: "),ItemArray.Num()).Append(a[0]->Properties.Texture);
}


// Called when the game starts
void UInventoryComponent::BeginPlay() {
	Super::BeginPlay();

	// ...


	//ItemArray.Add(UItem(FString("Item Example 1")));
	//ItemArray.Add(UItem(FString("Item Example 2")));
	//ItemArray.Add(UItem(FString("Item Example 3")));

}


// Called every frame
void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) {
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

FString UInventoryComponent::PrintDebugInventory() {
	FString s = FString("----------------\nInventory\n----------------\n");
	FItemData p;

	//p = ItemArray[0].Properties;

	//s = *p.Texture;

	/*for (int i = 0; i < ItemArray.Num(); i++) {
		s.Append(ItemArray[i].GetTexture().Append("\n"));
	};*/

	return s;
}
