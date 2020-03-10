#pragma once
#include "StateSheep.h"
class HealthySheep :
	public StateSheep
{
public:
	HealthySheep();
	~HealthySheep();
	void Grazing(void);
	void Idle(void);
};

