// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ChestInteract.h"
#include "ItemChest.generated.h"

class UStaticMeshComponent;

UCLASS()
class ACTION_API AItemChest : public AActor,public IChestInteract
{
	GENERATED_BODY()
	
public:	

	UPROPERTY(EditAnywhere)
	float TargetPitch;

	void Interact_Implementation(APawn* InstigatorPawn);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* BaseMesh;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* LibMesh;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	AItemChest();

};
