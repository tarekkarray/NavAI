// Fill out your copyright notice in the Description page of Project Settings.

#include "NavAIPlugin.h"
#include "MyActor.h"
#include "GoAway.h"
#include "Return.h"

Return::Return()
{
}

Return::~Return()
{
}

void Return::Execute(AMyActor * Actor)
{
	if (Actor->GetActorLocation().X >=0)
	{
		Actor->AddActorLocalOffset(FVector(-10.0f, 0.0f, 0.0f));
	}
	else
	{
		Actor->ChangeState(new GoAway());
	}
}
