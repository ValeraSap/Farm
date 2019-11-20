#pragma once
#include "Entities.h"
class Cell {
	Entitiy* ent;

public:
	Cell();
	void setOblect(Entitiy* obj);
	Entitiy* getOblect();
	~Cell();
};
