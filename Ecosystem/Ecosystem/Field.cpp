#include "Field.h"

void Field::update(float dtAsSeconds)
{
	weather->update(dtAsSeconds);
	//cell->upd()
	//fauna->upd()
}

Field::Field()
{
	// Устанавливаем начальную позицию  //видимо позиции текстуры
	position.x = 300;
	position.y = 300;

	//creating weather. Here 'cause it's inappropriate to do in grassfield & also for doing it in field creator'e we need it to be friend class to field
	weather = Weather::getWeather(); 
}
Sprite Field::getSprite()
{
	return sprite;
}

Field::~Field()
{
}
