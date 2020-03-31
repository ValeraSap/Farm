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
	void update(float elapsedTime);

protected:

	//SIZE size;

	//позиция
	Vector2f position;
	
	Sprite sprite;
	Texture texture;

private:
//	Cell** cells;
//	Fauna** fauna;
	Weather* weather;

};

#endif