// Fill out your copyright notice in the Description page of Project Settings.


#include "RunnerCharacter.h"
#include "Components//CapsuleComponent.h"
#include "Camera/CameraComponent.h"
//#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include <iostream>

// Sets default values
ARunnerCharacter::ARunnerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f); //capsule size is 42 on the x and 90 of hte y
	//setting the collision response with overlap
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_GameTraceChannel1, ECR_Overlap);
	
	//we don't want the character to rotate based on the controller, controlling clas within itself
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false; 
	bUseControllerRotationYaw = false; 

	//Configure camera
	SideViewCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	SideViewCamera->bUsePawnControlRotation = false; //we don't want the camera to rotate based on the controller

	//set character movement to the direction we are moving to
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f); //how fast we rotate
	GetCharacterMovement()->GravityScale = 2.0f; //gravity scale
	GetCharacterMovement()->AirControl = 0.80f; //how much control we have of the character while in the air, higher the # higher the control
	GetCharacterMovement()->JumpZVelocity = 1000.f; //how high we jump
	GetCharacterMovement()->GroundFriction = 3.0f; //how much we slow down when we stop moving, the friciton between teh character and the ground
	GetCharacterMovement()->MaxWalkSpeed = 600.0f; //max speed we can walk
	GetCharacterMovement()->MaxFlySpeed = 600.0f; //max speed we can fly

	//get temp position
	tempPos = GetActorLocation();
	zPosition = tempPos.Z + 300.0f; //check how the 300 affects the game


}


// Called when the game starts or when spawned
void ARunnerCharacter::BeginPlay()
{
	Super::BeginPlay();
	CanMove = true; //at the start of the game we can move
	
}

// Called every frame
void ARunnerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//get current position of the character and set the camera to that position
	tempPos = GetActorLocation(); //get the current position of the character
	tempPos.X -= 850.0f; //changing 850 to negative so the camera is in front of the character
	tempPos.Z = zPosition; //keep the z position constant
	SideViewCamera->SetWorldLocation(tempPos); //set the camera to the new position

}

// Called to bind functionality to input
void ARunnerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump); //whne spacebar is clicked, call the jump function from character that is inhereted
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping); //this stops the jump when we release the spacebar, for gforce this may be what's changed

	PlayerInputComponent->BindAxis("MoveRight", this, &ARunnerCharacter::MoveRight); //bind the axis MoveRight to the function MoveRight in this class
}


void ARunnerCharacter::MoveRight(float value)
{
	UE_LOG(LogTemp, Warning, TEXT("Movement function called."));

	if(CanMove) {
		UE_LOG(LogTemp, Warning, TEXT("CanMove is true")); //debugging line to see if the function is being called
		AddMovementInput(FVector(0.f, 1.0f, 0.f), value); //add movement input in the y direction, negative because we want to move left when we press right
		UE_LOG(LogTemp, Warning, TEXT("after movement input"));//debugging line to see the current location of the character
	}
}
void ARunnerCharacter::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
}

void ARunnerCharacter::RestartLevel() {

}

