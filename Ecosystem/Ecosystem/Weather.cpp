#include "Weather.h"



Weather::Weather() {

	texture.loadFromFile("Textures/rain.png");
	sprite.setTexture(texture);

	rain = false;
	wind = no_wind;

	animator = new Animator(texture, 4);
}
Weather::~Weather()
{
	//_instance is static. does it mean we don't need to delete it?
}
Weather* Weather::_instance = 0;

Weather* Weather::getWeather() {
	if (_instance == 0)
		_instance = new Weather();
	return _instance;
}

Sprite Weather::getSprite()
{
	return sprite;
}

void Weather::update(float elapsedTime) {
	if (rain) {
		//need time limitation : while (elapsedTime*100>10)
		animator->leftAnimation();
	}
}