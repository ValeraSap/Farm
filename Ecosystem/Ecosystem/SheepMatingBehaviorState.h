#pragma once
#include "StateSheep.h"
class SheepMatingBehaviorState :
	public StateSheep
{
public:
	SheepMatingBehaviorState();
	~SheepMatingBehaviorState();
	void Grazing(void);
	void Idle(void);
};

