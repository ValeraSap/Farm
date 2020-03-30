#include "Field.h"

void Field::update(float dtAsSeconds)
{
	// TODO : implement
}

Field::Field()
{
	// Связываем текстуру и спрайт
	texture.loadFromFile("Textures/GField.jpg");
	sprite.setTexture(texture);

	// Устанавливаем начальную позицию Боба в пикселях
	position.x = 300;
	position.y = 300;

	weather = Weather::getWeather();
}
Sprite Field::getSprite()
{
	return sprite;
}

Field::~Field()
{
}
