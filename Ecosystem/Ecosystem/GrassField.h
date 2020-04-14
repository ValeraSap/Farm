#pragma once

#include "Weather.h"
#include "Field.h"
#include "Cell.h"

class GrassField :	public Field //need singleon!
{

public:

	void update(float elapsed);
	void draw(RenderWindow* renderWindow);
	void weatherChanged(Seasons, Rain, Wind, TimeOfDay); //������������ ������ ������ 4 ����������?

	GrassField();
	~GrassField();
private:
	
	Cell** cells;

/*	template <class T>  //will it work if private?
	void weatherChanged(T changedParameter);*/
};

