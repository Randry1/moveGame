// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFirstActor.h"

// Sets default values
AMyFirstActor::AMyFirstActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//Создание сцены рут компонента
	mySceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MyScene"));
	RootComponent = mySceneComponent;
	// создание компонента
	myMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyMesh"));
	myMeshComponent->SetupAttachment(RootComponent);
	// Our root component will be a sphere that reacts to physics
	mySphere = CreateDefaultSubobject<USphereComponent>(TEXT("RootComponent"));
	mySphere->SetupAttachment(RootComponent);
	mySphere->InitSphereRadius(40.0f);
	mySphere->SetCollisionProfileName(TEXT("Pawn"));
}

// Called when the game starts or when spawned
void AMyFirstActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyFirstActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	myMeshComponent->AddLocalRotation(FRotator(0.f, 1.f, 0.f), false);
	mySphere->SetSphereRadius(50);

}

