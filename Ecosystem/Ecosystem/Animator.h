#pragma once
/********************************************************
*	Класс для анимации лент спрайтов. Не предусмотрена анимация спрайтов 
*	соединенных в виде матриц или разделенных на отдельные файлы. 
*	Реализует собственный метод draw(). 
*******************************************************/

#include <SFML/Graphics.hpp>
using namespace sf;

class Animator  //for !a&1 count of frames
{
	Texture texture;
	int frameCount;
	int currentFrame;
	int frameWidth, frameHeight;

public:
	Animator(Texture texture, int frameCount);
	~Animator();

	void leftAnimation(float time);
	void rightAnimation(float time);
	void draw(RenderWindow* renderWindow, Sprite* sprite);
};

