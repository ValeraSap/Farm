#include "Cell.h"
#include <iostream>
void Cell::update(void)
{
	// TODO : implement
}

Cell::Cell(std::pair<int, int> spriteSizes, int count):grassMass(30),CGI(.5f)
{
	//For Four cells!!! //TODO: make universal
	count++; //cause we counting from 1 irl
	size.first = spriteSizes.first / 2;
	size.second = spriteSizes.second / 2;
	position.first = size.first * (count % 2);
	position.second = size.second * (int)(count / 2.1);

	//std::cout << position.first << " " << position.second << std::endl;
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
