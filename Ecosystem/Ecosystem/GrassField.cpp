#include "GrassField.h"



GrassField::GrassField()
{
	// Binding texture with sprite
	texture.loadFromFile("Textures/GField.jpg");
	sprite.setTexture(texture);

	//creating weather. Here cause it's inappropriate to do in grassfield & also for doing it in field creator'e we need it to be friend class to field
	weather = Weather::Instance();



}
void GrassField::update(float elapsed)
{
	gametime.update(elapsed);
	if(gametime.getCurrentHour()==7 || gametime.getCurrentHour() == 21) //weather changes at  7 a.m and 9 p.m
		weather->update(elapsed);

	//cell->upd()
	//fauna->upd()
}
void GrassField::draw(RenderWindow* renderWindow) {
	(*renderWindow).draw(sprite);
	weather->draw(renderWindow);
	gametime.draw(renderWindow);
}

GrassField::~GrassField()
{
}
