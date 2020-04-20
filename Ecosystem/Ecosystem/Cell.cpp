#include "Cell.h"
#include <iostream>
void Cell::update(void)
{
	// TODO : implement
}

Cell::Cell(Vector2f spriteSizes, int count, int fieldSize):grassMass(30),CGI(.5f)
{
	//�������������� ���������� � ��������	
	fieldSize *= 2;											//������ ��� � ������ ����� � ��� ���� ������ ��� ������� ����

	size.x = spriteSizes.x / fieldSize;
	size.y = spriteSizes.y / fieldSize;
	position.x = size.x * (count % fieldSize);
	position.y = size.y * (int)(count / fieldSize + 0.1f); //// 0.1 ����� ��� ����, 2/2 ������ 0, � �� 1

	//std::cout << position.x << " " << position.y << std::endl;
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
