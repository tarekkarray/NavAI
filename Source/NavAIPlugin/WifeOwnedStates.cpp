// Fill out your copyright notice in the Description page of Project Settings.

#include "NavAIPlugin.h"
#include "WifeOwnedStates.h"

WifeOwnedStates::WifeOwnedStates()
{
}

WifeOwnedStates::~WifeOwnedStates()
{
}

void WifeGlobalState::Execute(AWife* Actor)
{

}

void WifeGlobalState::Enter(AWife* Actor)
{

}

void WifeGlobalState::Exit(AWife* Actor)
{

}

WifeGlobalState* WifeGlobalState::Instance()
{
	static WifeGlobalState* instance = new WifeGlobalState();
	return instance;
}

DoHouseWork* DoHouseWork::Instance()
{
	static DoHouseWork* instance = new DoHouseWork();
	return instance;
}

void DoHouseWork::Enter(AWife* wife)
{

}

void DoHouseWork::Execute(AWife* wife)
{

}

void DoHouseWork::Exit(AWife* wife)
{

}

VisitBathroom* VisitBathroom::Instance()
{
	static VisitBathroom* instance = new VisitBathroom();
	return instance;
}

void VisitBathroom::Enter(AWife* wife)
{

}

void VisitBathroom::Execute(AWife* wife)
{

}

void VisitBathroom::Exit(AWife* wife)
{

}
