#include "GrassField.h"



GrassField::GrassField()
{
	// Binding texture with sprite
	texture.loadFromFile("Textures/GField.jpg");
	sprite.setTexture(texture);

	//creating weather. Here cause it's inappropriate to do in grassfield & also for doing it in field creator'e we need it to be friend class to field
	weather = Weather::Instance();

	gametime = GameTime::Instatce();

}
void GrassField::update(float elapsed)
{	
	//TODO weather -> update
	//weather->update(gametime->getCurrentDay(),gametime->getCurrentHour());

	//cell->upd()
	//fauna->upd()
}
void GrassField::draw(RenderWindow* renderWindow) {
	(*renderWindow).draw(sprite);
	weather->draw(renderWindow);
	
}

GrassField::~GrassField()
{
}
