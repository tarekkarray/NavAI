// Fill out your copyright notice in the Description page of Project Settings.

#include "NavAIPlugin.h"
#include "MyActor.h"
#include "Return.h"
#include "GoAway.h"

GoAway::GoAway()
{
}

GoAway::~GoAway()
{
}

void GoAway::Execute(AMyActor * Actor)
{
	if (Actor->GetActorLocation().X <= 300.0f)
	{
		Actor->AddActorLocalOffset(FVector(10.0f, 0.0f, 0.0f));
	}
	else
	{
		Actor->ChangeState(new Return());
	}
}