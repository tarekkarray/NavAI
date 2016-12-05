// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "State.h"
/**
 * 
 */
class NAVAIPLUGIN_API Return:public State
{
public:
	Return();
	~Return();
	void Execute(class AMyActor* Actor) override;
};
