#pragma once
class StateSheep
{
public:
	StateSheep();
	virtual ~StateSheep();
	virtual void Grazing(void) = 0;
	virtual void Idle(void) = 0;
};

