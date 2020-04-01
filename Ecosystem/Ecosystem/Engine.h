#pragma once
#include <SFML/Graphics.hpp>
#include "GrassField.h"
#include "GrassFieldCreator.h"

using namespace sf;

class Engine
{
private:

	RenderWindow renderWindow;

	// ��������� ������ � �������� ��� ����
	//Sprite m_BackgroundSprite;
	//Texture m_BackgroundTexture;

	Field* field;

	void input();
	void update(float dtAsSeconds);
	void draw();

public:
	// ����������� ������
	Engine();

	// ������� ����� ������� ��� ��������� �������
	void start();

};