﻿#pragma once
#include <SFML/Graphics.hpp>
#include "GameTime.h"
#include "config.h"
using namespace sf;

/*
*UI будет отрисовывать пользователю текущее положение вещей: время, погоду и пр
*/

class UI 
{
public:

	void update(float elapsed);
	void draw(RenderWindow* rw);

	UI();
	~UI();

private:
	Texture menuFrameTexture, pauseButtonTexture, windRoseTexture, rainTexture;
	Sprite menurame, pauseButton, windRose, rainDrops;
	
	Rain rain;
	Wind wind;

	GameTime* gametime;
	
};

