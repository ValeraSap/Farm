#include "Field.h"

void Field::update(float dtAsSeconds)
{
	/*
	*We need to call this funktion
	*once per for e.g. minute
	*1) invokes?
	*2) sf::Clock?
	*/
	weather->update(dtAsSeconds);

	//cell->upd()
	//fauna->upd()
}

Field::Field()
{	

	//creating weather. Here cause it's inappropriate to do in grassfield & also for doing it in field creator'e we need it to be friend class to field
	weather = Weather::getWeather(); 
}
Sprite Field::getSprite()
{
	return sprite;
}

Field::~Field()
{
}
void Field::draw(RenderWindow* renderWindow) {
	(*renderWindow).draw(sprite);
	weather->draw(renderWindow);
	
}