#pragma once
/************************************************
*	Класс нужен для того, чтобы все поля имели общий интерфейс
*	Наследование от IWeatherObserver - чтобы поля могли 
*	менять текстуры в зависимости от вр года или вр суток*
***********************************************/
#include <SFML/Graphics.hpp>
#include "GameTime.h"
#include "IWeatherObserver.h"
#include <utility>
using namespace sf;

class Field : public IWeatherObserver     //нужно ли здесь позаботиться о виртуальном наследовании?
{ 
public:
	
	Field();
	virtual ~Field();
	
	Sprite getSprite() const;	
	std::pair<int, int> getSize() const;

	virtual void update(float elapsed)=0;
	virtual void draw(RenderWindow* renderWindow)=0;

protected:

	Sprite sprite;
	Texture texture;	
	std::pair<int, int> size;	
	
};

