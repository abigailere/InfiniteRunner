// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnLevel.h"

// Sets default values
ASpawnLevel::ASpawnLevel()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpawnLevel::BeginPlay()
{
	Super::BeginPlay();
	//spawn the first level at the beginning of the game
	SpawnLevel(true);
	SpawnLevel(false);
	SpawnLevel(false);
	SpawnLevel(false);
	
}

// Called every frame
void ASpawnLevel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//based on random level it will return a number between 1 and 5 inclusive and spawn the corresponding level
	//if isFirst is true it will spawn the first level at the origin, otherwise it will spawn the next level at the end of the last level
	//the newLevel is a nullptr and when a level is spawned it will be assigned to each level
void ASpawnLevel::SpawnLevel(bool isFirst)
{
	spawnLocation = FVector(0.0f, 2000.0f, 0.0f); // spawn location, adjust as needed. the level should be 2000 units long
	spawnRotation = FRotator(0, 90, 0); // spawn rotation, adjust as needed

	if(!isFirst){
		ABase_Level* lastLevel = levelList.Last(); //get the last level in the array
		spawnLocation = lastLevel->GetSpawnLocation()->GetComponentTransform().GetTranslation(); //get the spawn location of the last level
	} 

	randomLevel = FMath::RandRange(1, 5); //random level between 1 and 5
	ABase_Level* newLevel = nullptr;
	
	//spawn the level based on the random number
	if(randomLevel == 1){
		newLevel = GetWorld()->SpawnActor<ABase_Level>(Level1, spawnLocation, spawnRotation, spawnInfo);
	} else if(randomLevel == 2){
		newLevel = GetWorld()->SpawnActor<ABase_Level>(Level2, spawnLocation, spawnRotation, spawnInfo);
	} else if(randomLevel == 3){
		newLevel = GetWorld()->SpawnActor<ABase_Level>(Level3, spawnLocation, spawnRotation, spawnInfo);
	} else if(randomLevel == 4){
		newLevel = GetWorld()->SpawnActor<ABase_Level>(Level4, spawnLocation, spawnRotation, spawnInfo);
	} else if(randomLevel == 5){
		newLevel = GetWorld()->SpawnActor<ABase_Level>(Level5, spawnLocation, spawnRotation, spawnInfo);
	}

	if (newLevel){
		if (newLevel->GetTrigger()) {
			newLevel->GetTrigger()->OnComponentBeginOverlap.AddDynamic(this, &ASpawnLevel::OnOverlapBegin); 
			//when overlapped with the trigger, it will call the OnOverlapBegin function in SpawnLevel
			//add dynamic: assign func thatll be executedd when there is an overlap
		}
		levelList.Add(newLevel); //add the new level to the array
		if (levelList.Num() > 5) { //if there are more than 5 levels in the array, remove the first level
			levelList.RemoveAt(0);
			
		}
	}

	
}

void ASpawnLevel::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	SpawnLevel(false); //spawn a new level when the player overlaps with the trigger
}
