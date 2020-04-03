#include "Field.h"
#include <iostream>




Field::Field()
{		
	//creating weather. Here cause it's inappropriate to do in grassfield & also for doing it in field creator'e we need it to be friend class to field
	weather = Weather::getWeather(); 
}

Sprite Field::getSprite()
{
	return sprite;
}

double Field::timer = 0;

void Field::update(float elapsed)
{
	timer += elapsed;	
	if (timer>1) {                         //weather updates once per second
		weather->update(elapsed);
		std::cout << timer<<'\t';
		timer = 0;		
	}

	//cell->upd()
	//fauna->upd()
}
Field::~Field()
{
}
void Field::draw(RenderWindow* renderWindow) {
	(*renderWindow).draw(sprite);
	weather->draw(renderWindow);
	
}
