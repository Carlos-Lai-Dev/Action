// Fill out your copyright notice in the Description page of Project Settings.


#include "ExpolsiveBarrel.h"
#include "Components/StaticMeshComponent.h"
#include "PhysicsEngine/RadialForceComponent.h"

// Sets default values
AExpolsiveBarrel::AExpolsiveBarrel()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("StaticMesh");
	RootComponent = StaticMesh;
	RadialForceComp = CreateDefaultSubobject<URadialForceComponent>("RadialForceComp");
	RadialForceComp->SetupAttachment(StaticMesh);
}

// Called when the game starts or when spawned
void AExpolsiveBarrel::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AExpolsiveBarrel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

