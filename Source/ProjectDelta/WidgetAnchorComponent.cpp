// Fill out your copyright notice in the Description page of Project Settings.


#include "WidgetAnchorComponent.h"
#include "NameplateActor.h"
#include "Engine/World.h"

// Sets default values for this component's properties
UWidgetAnchorComponent::UWidgetAnchorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

UWidgetAnchorComponent* UWidgetAnchorComponent::Initialise(AActor* parentLink)
{
	//https://stackoverflow.com/questions/56397879/how-to-fix-factorspawnparameters-is-not-defined-error-in-c-in-ue4
	//https://docs.unrealengine.com/5.2/en-US/API/Runtime/Engine/Engine/FActorSpawnParameters/

	//FActorSpawnParameters fasp;
	//fasp.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	//fasp.Owner = Cast<AActor>(this);

	//GetWorld()->SpawnActor<ANameplateActor>(ANameplateActor::StaticClass(),GetOwner()->GetActorTransform(), fasp);
	
	Parent = parentLink;
	return this;
}


// Called when the game starts
void UWidgetAnchorComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UWidgetAnchorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UWidgetAnchorComponent::SetText(FString string)
{
	//UUserWidget* a = Parent->GetComponentByClass(ANameplateActor::StaticClass())->GetMyWidget();
}

void UWidgetAnchorComponent::SetValue(float value)
{
}

