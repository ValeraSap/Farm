#pragma once

/*********************************************
* Поле делится на участки, которые имеют приоритет для травоядных при выпасе
* CGI - коэффициент приклекательности участка для травоядного
* grassMass - килограмм травы на участке
*********************************************/

//#include "Animal.h"
#include <utility>
class Cell
{
public:
	void update(void);
	int getCGI();
	int getGrassMass();
	int getAnimalCount();
	
	Cell(std::pair<int,int> spriteSizes, int pos,int fieldSize);
	~Cell();
private:

	std::pair<int, int> position;
	std::pair<int, int> size;
	int grassMass;
	int CGI; 
	int animalCount;//коэффициент привлекательности участка для травоядных
	//Animal** herbivorous;
	/*
	*Должна быть не ссылка на животных, а счетчик и возможность регистрации-удаления животного!!!
	*/
};

