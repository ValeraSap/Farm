#pragma once
#if !defined(__FarmClassDiagram_Field_h)
#define __FarmClassDiagram_Field_h

#include <SFML/Graphics.hpp>
#include "GameTime.h"
using namespace sf;

class Field  // нужен для того, чтобы все поля имели общий интерфейс
{ 
public:
	
	Field();
	virtual ~Field();
	
	Sprite getSprite() const;		

	virtual void update(float elapsed)=0;
	virtual void draw(RenderWindow* renderWindow)=0;

protected:
	
	Vector2f position;	
	Sprite sprite;
	Texture texture;	
	GameTime gametime;
	
	
};

#endif