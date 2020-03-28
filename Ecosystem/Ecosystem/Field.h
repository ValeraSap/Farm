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

	// ��� �������� ������� � ������� �������
	Sprite getSprite();
		
	// ��� ������� ����� ���������� �� ������ ����
	void update(float elapsedTime);

protected:
	SIZE size;

private:
	//�������
	Vector2f position;

	// ��������� ������ Sprite
	Sprite sprite;

	// ��������� ��������
	Texture texture;

//	Cell cells;
//	Fauna fauna;
//	Weather weather;

};

#endif