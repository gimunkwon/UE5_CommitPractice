#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "M_Player.generated.h"

UCLASS()
class COMMITPRACTICE_API AM_Player : public ACharacter
{
	GENERATED_BODY()

public:
	
	AM_Player();

protected:
	
	virtual void BeginPlay() override;

public:
	
	virtual void Tick(float DeltaTime) override;

	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
