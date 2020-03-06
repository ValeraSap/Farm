#pragma once
#include "StateWolf.h"
class RaisingOffspring :
	public StateWolf
{
public:
	RaisingOffspring();
	~RaisingOffspring();
	void Hunt(void);
	void Idle(void);
};

