#include "Field.h"

void Field::update(float dtAsSeconds)
{
	// TODO : implement
}

Field::Field()
{
	// ��������� �������� � ������
	texture.loadFromFile("Textures/GField.jpg");
	sprite.setTexture(texture);

	// ������������� ��������� ������� ���� � ��������
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
