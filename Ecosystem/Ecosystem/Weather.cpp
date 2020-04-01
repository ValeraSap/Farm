#include "Weather.h"



Weather::Weather() {

	texture.loadFromFile("Textures/rain.png");
	sprite.setTexture(texture);
	frameWidth = texture.getSize().x;

	rectangle = IntRect(0, 0, frameWidth/4, texture.getSize().y);
	sprite.setTextureRect(rectangle); //кусок текстуры
	sprite.setPosition(250, 250); //расположение на экране

	rain = false;
	wind = no_wind;

	animator = new Animator(texture, 4);


}
Weather::~Weather()
{
	//_instance is static. does it mean we don't need to call function delete for it
}
Weather* Weather::_instance = 0;

Weather* Weather::getWeather() {
	if (_instance == 0)
		_instance = new Weather();
	return _instance;
}



void Weather::update(float elapsedTime) {
	if (rain) {
		//need time limitation : CurrentFrame += 0.005*time;
		rectangle.left = animator->leftAnimation(elapsedTime) * frameWidth;
			sprite.setTextureRect(rectangle);
		
		
	}
}
void Weather::draw(RenderWindow* renderWindow) {
	
	renderWindow->draw(sprite);
}