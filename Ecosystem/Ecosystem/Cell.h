#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;
/*********************************************
* Поле делится на участки, которые имеют приоритет для травоядных при выпасе
* CGI - коэффициент приклекательности участка для травоядного
* grassMass - килограмм травы на участке
*********************************************/

//#include "Animal.h"

class Cell
{
public:
	void update(void);
	int getCGI();
	int getGrassMass();
	int getAnimalCount();
	
	Cell(Vector2f spriteSizes, int pos,int fieldSize);
	~Cell();
private:

	Vector2f position;
	Vector2f size;
	int grassMass;
	int CGI; 
	int animalCount;//коэффициент привлекательности участка для травоядных
	//Animal** herbivorous;
	/*
	*Должна быть не ссылка на животных, а счетчик и возможность регистрации-удаления животного!!!
	*/
};

