#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;
/*********************************************
* ���� ������� �� �������, ������� ����� ��������� ��� ���������� ��� ������
* CGI - ����������� ����������������� ������� ��� �����������
* grassMass - ��������� ����� �� �������
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
	int animalCount;//����������� ����������������� ������� ��� ����������
	//Animal** herbivorous;
	/*
	*������ ���� �� ������ �� ��������, � ������� � ����������� �����������-�������� ���������!!!
	*/
};

