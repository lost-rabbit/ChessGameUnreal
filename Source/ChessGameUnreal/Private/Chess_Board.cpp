// Fill out your copyright notice in the Description page of Project Settings.


#include "Chess_Board.h"

// Sets default values
AChess_Board::AChess_Board()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChess_Board::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AChess_Board::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AChess_Board::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

