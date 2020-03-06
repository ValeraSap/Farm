#pragma once
#if !defined(__FarmClassDiagram_SheepFlock_h)
#define __FarmClassDiagram_SheepFlock_h

#include "Sheep.h"
//class Sheep;

class SheepFlock
{
public:
	void Alert(void);
	SheepFlock();
	~SheepFlock();

	Sheep** sheep;

protected:
private:
	int sheeps;
	int territory;


};

#endif
