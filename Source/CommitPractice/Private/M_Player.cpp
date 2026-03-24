#include "CommitPractice/Public/M_Player.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

AM_Player::AM_Player()
{
	PrimaryActorTick.bCanEverTick = false;
	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
}


void AM_Player::BeginPlay()
{
	Super::BeginPlay();
}


void AM_Player::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void AM_Player::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

