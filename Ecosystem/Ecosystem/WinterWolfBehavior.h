#pragma once
#include "StateWolf.h"



class WinterWolfBehavior :
	public StateWolf
{
public:
	WinterWolfBehavior();
	virtual ~WinterWolfBehavior();
	void Hunt(void);
	void Idle(void);
};

