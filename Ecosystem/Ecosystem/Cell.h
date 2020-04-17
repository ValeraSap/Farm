#pragma once

/*********************************************
* ���� ������� �� �������, ������� ����� ��������� ��� ���������� ��� ������
* CGI - ����������� ����������������� ������� ��� �����������
* grassMass - ��������� ����� �� �������
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
	int animalCount;//����������� ����������������� ������� ��� ����������
	//Animal** herbivorous;
	/*
	*������ ���� �� ������ �� ��������, � ������� � ����������� �����������-�������� ���������!!!
	*/
};

