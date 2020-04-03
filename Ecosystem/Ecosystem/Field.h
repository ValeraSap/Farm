#pragma once
#if !defined(__FarmClassDiagram_Field_h)
#define __FarmClassDiagram_Field_h
//#include "Cell.h"
#include "Weather.h"
//#include "config.h"
#include <SFML/Graphics.hpp>
using namespace sf;

class Field
{
public:
	
	Field();
	virtual ~Field();

	// Для отправки спрайта в главную функцию
	Sprite getSprite();
		
	// Эта функция будет вызываться на каждый кадр
	void update(float elapsed);

	void draw(RenderWindow* renderWindow);

protected:
	
	//texture pos
	Vector2f position;	
	Sprite sprite;
	Texture texture;

private:
//	Cell** cells;
//	Fauna** fauna;
	Weather* weather;

	//we need global time counter
	static double timer;

	//TODO Time!
};

#endif