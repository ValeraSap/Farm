#include "Cell.h"
#include <iostream>
void Cell::update(void)
{
	// TODO : implement
}

Cell::Cell(std::pair<int, int> spriteSizes, int count, int fieldSize):grassMass(30),CGI(.5f)
{
	//Подготавливаем переменные к расчетам	
	fieldSize *= 2;											//потому что в строке ячеек в два раза больше чем текстур поля

	size.first = spriteSizes.first / fieldSize;
	size.second = spriteSizes.second / fieldSize;
	position.first = size.first * (count % fieldSize);
	position.second = size.second * (int)(count / fieldSize + 0.1f); //// 0.1 нужен для того, 2/2 давало 0, а не 1

	std::cout << position.first << " " << position.second << std::endl;
}
int Cell::getCGI() 
{
	return CGI;
 }
int Cell::getGrassMass()
{
	return grassMass;
}
int Cell::getAnimalCount()
{
	return animalCount;
}

Cell::~Cell()
{
}
