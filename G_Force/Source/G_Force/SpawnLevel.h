// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Base_Level.h" //not sure if I am using this one or BaseLevel.h
#include "Components/BoxComponent.h"
#include "Engine.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnLevel.generated.h"


class ABase_Level;

UCLASS()
class G_FORCE_API ASpawnLevel : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnLevel();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UFUNCTION() 
	void SpawnLevel(bool isFirst); //is this the first level?
	
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

protected:
	APawn* Player;

	UPROPERTY(EditAnywhere) //will be able to edit in the blueprint
		TSubclassOf<ABase_Level> Level1;
	
	UPROPERTY(EditAnywhere)
		TSubclassOf<ABase_Level> Level2;

	UPROPERTY(EditAnywhere)
		TSubclassOf<ABase_Level> Level3;
	
	UPROPERTY(EditAnywhere)
		TSubclassOf<ABase_Level> Level4;
	
	UPROPERTY(EditAnywhere)
		TSubclassOf<ABase_Level> Level5;

	TArray<ABase_Level*> levelList; //array to hold the levels

public:
	int randomLevel;

	FVector spawnLocation = FVector();
	FRotator spawnRotation = FRotator();
	FActorSpawnParameters spawnInfo = FActorSpawnParameters();
};
