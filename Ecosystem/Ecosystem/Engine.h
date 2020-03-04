#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;
class Engine
{
private:

	RenderWindow m_Window;

	// Объявляем спрайт и текстуру для фона
	//Sprite m_BackgroundSprite;
	//Texture m_BackgroundTexture;

	

	void input();
	void update(float dtAsSeconds);
	void draw();

public:
	// Конструктор движка
	Engine();

	// Функция старт вызовет все приватные функции
	void start();

};