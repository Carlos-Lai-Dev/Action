// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemChest.h"
#include "Components/StaticMeshComponent.h"



// Sets default values
AItemChest::AItemChest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
	RootComponent = BaseMesh;
	LibMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LibMesh"));
	LibMesh->SetupAttachment(BaseMesh);
	TargetPitch = 110;
}

void AItemChest::Interact_Implementation(APawn* InstigatorPawn)
{
	LibMesh->SetRelativeRotation(FRotator(TargetPitch, 0, 0));
}

// Called when the game starts or when spawned
void AItemChest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AItemChest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

