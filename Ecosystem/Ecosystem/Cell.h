#pragma once

//#include "Animal.h"
#include <utility>
class Cell
{
public:
	void update(void);
	
	Cell(std::pair<int,int> spriteSizes, int pos);
	~Cell();
private:

	std::pair<int, int> position;
	std::pair<int, int> size;
	int grassMass;
	int CGI; //коэффициент привлекательности участка для травоядных
	//Animal** herbivorous;
};

