#pragma once
/***************************************************
* �������� ����. 
* weatherChanged - ���������� ������������ ������ �� ���������� IWeatherObserver
* ������ �������� � ����������� �� ��������� �������, �� �����
****************************************************/
#include "Weather.h"
#include "Field.h"
#include "Cell.h"
#include "config.h"

class GrassField :	public Field //need singleon!
{

public:

	void update(float elapsed);
	void draw(RenderWindow* renderWindow);
	void weatherChanged(Seasons, Rain, Wind, TimeOfDay); //������������ ������ ������ 4 ����������?
	
	GrassField(FieldSize);
	~GrassField();
private:	
	Cell** cells;
};

