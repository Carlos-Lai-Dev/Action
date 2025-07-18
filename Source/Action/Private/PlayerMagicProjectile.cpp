// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerMagicProjectile.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Particles/ParticleSystemComponent.h"

// Sets default values
APlayerMagicProjectile::APlayerMagicProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SphereComp = CreateDefaultSubobject<USphereComponent>("SphereComp");
	RootComponent = SphereComp;

	EffectComp = CreateDefaultSubobject<UParticleSystemComponent>("EffectComp");
	EffectComp->SetupAttachment(SphereComp);

	MovementComp = CreateDefaultSubobject<UProjectileMovementComponent>("MovementComp");
	MovementComp->InitialSpeed = 1000.0f;
	MovementComp->bInitialVelocityInLocalSpace = true;
	MovementComp->bRotationFollowsVelocity = true;
}

// Called when the game starts or when spawned
void APlayerMagicProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerMagicProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

