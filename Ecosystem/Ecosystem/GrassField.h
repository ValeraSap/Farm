#pragma once

#include "Weather.h"
#include "Field.h"
#include "Cell.h"
#include "config.h"

class GrassField :	public Field //need singleon!
{

public:

	void update(float elapsed);
	void draw(RenderWindow* renderWindow);
	void weatherChanged(Seasons, Rain, Wind, TimeOfDay); //использовать кортеж вместо 4 параметров?

	GrassField();
	GrassField(FieldSize);
	~GrassField();
private:
	
	Cell** cells;

/*	template <class T>  //will it work if private?
	void weatherChanged(T changedParameter);*/
};

