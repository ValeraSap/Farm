#pragma once

#include <SFML/Graphics.hpp>
using namespace sf;

class Animator  //for !a&1
{
	Texture texture;
	int frameCount;
	int currentFrame;
	int frameWidth;

public:
	Animator(Texture texture, int frameCount);
	~Animator();

	int leftAnimation(float time);
	void rightAnimation();
};

