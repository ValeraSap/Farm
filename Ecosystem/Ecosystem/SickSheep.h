#pragma once
#include "StateSheep.h"
class SickSheep :
	public StateSheep
{
public:
	SickSheep();
	~SickSheep();
	void Grazing(void);
	void Idle(void);
};

