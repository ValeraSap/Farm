#include "GrassField.h"



GrassField::GrassField()
{
	// Binding texture with sprite
	texture.loadFromFile("Textures/GField.jpg");
	sprite.setTexture(texture);

	//here we should create cells and fauna

}


GrassField::~GrassField()
{
}
