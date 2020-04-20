#pragma once
/*
*UI отрисовывает: время, дождь, розу ветров
*/
#include <SFML/Graphics.hpp>
#include "GameTime.h"
#include "config.h"
#include "IWeatherObserver.h"

using namespace sf;


class UI : IWeatherObserver
{
public:

	void update(float elapsed);
	void draw(RenderWindow &rw);
	void weatherChanged(Seasons, Rain, Wind, TimeOfDay);

	Vector2f getSpriteCoordinates(); //если появится еще одно табло интерфейса, необходимо будет сделать еще метод
	Vector2f getSpriteSize();

	UI();
	~UI();

private:
	Texture menuFrameTexture, pauseButtonTexture, windRoseTexture, rainTexture;
	Sprite menuFrame, pauseButton, windRose, rainNotifier;	

	GameTime* gametime;

	Text timer;
	Font font;	

};

