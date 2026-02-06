// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Base_Level.generated.h"


class UBoxComponent; //forward declaraction so we don't have to use include

UCLASS()
class G_FORCE_API ABase_Level : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABase_Level();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "My Triggers");
	UBoxComponent* Trigger; //can be read and written, editted in editor, blueprint, etc, belongs to category Triggers

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "My Triggers");
	UBoxComponent* SpawnLocation;

public:
	UBoxComponent* GetTrigger();
	UBoxComponent* GetSpawnLocation();
};
