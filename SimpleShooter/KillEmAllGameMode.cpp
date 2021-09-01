// Fill out your copyright notice in the Description page of Project Settings.


#include "KillEmAllGameMode.h"


void AKillEmAllGameMode::PawnKilled(APawn* Killed) 
{
    Super::PawnKilled(Killed);

    UE_LOG(LogTemp, Warning, TEXT("Game Change"));
    
    APlayerController* PlayerController = Cast<APlayerController>(Killed->GetController());

    if(PlayerController == nullptr) {return;}

    PlayerController->GameHasEnded(nullptr, false);

}
