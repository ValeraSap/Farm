#pragma once
#if !defined(__FarmClassDiagram_Field_h)
#define __FarmClassDiagram_Field_h
//#include "Cell.h"
//#include "Weather.h"
#include "config.h"
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
	SIZE size;

private:
	//позиция
	Vector2f position;

	// Объявляем объект Sprite
	Sprite sprite;

	// Добавляем текстуру
	Texture texture;

//	Cell cells;
//	Fauna fauna;
//	Weather weather;

};

#endif