#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "M_Player.generated.h"

class UCameraComponent;
class USpringArmComponent;

UCLASS()
class COMMITPRACTICE_API AM_Player : public ACharacter
{
	GENERATED_BODY()

public:
	AM_Player();
protected:
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnywhere,Category="Camera|SpringArm")
	TObjectPtr<USpringArmComponent> SpringArmComp;
	UPROPERTY(VisibleAnywhere, Category="Camera")
	TObjectPtr<UCameraComponent> CameraComp;
public:
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
