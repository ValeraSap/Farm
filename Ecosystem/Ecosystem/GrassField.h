#pragma once
/***************************************************
* Травяное поле. 
* weatherChanged - реализация абстрактного метода из интерфейса IWeatherObserver
* меняет текстуры в зависимости от изменений сезонов, вр суток
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
	void weatherChanged(Seasons, Rain, Wind, TimeOfDay); //использовать кортеж вместо 4 параметров?
	
	GrassField(FieldSize);
	~GrassField();
private:	
	Cell** cells;
};

