// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "WidgetAnchorComponent.generated.h"

//https://stackoverflow.com/questions/74201681/why-can-i-not-choose-my-uobject-class-as-a-parent-for-a-blueprint
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) , BlueprintType, Blueprintable)
class PROJECTDELTA_API UWidgetAnchorComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWidgetAnchorComponent();

	UFUNCTION(BlueprintCallable, Category = "Constructor")
	UWidgetAnchorComponent* Initialise(AActor* parentLink);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void SetText(FString string);
	void SetValue(float value);
	AActor* Parent;
};
