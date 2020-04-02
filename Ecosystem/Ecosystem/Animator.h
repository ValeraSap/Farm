#pragma once

#include <SFML/Graphics.hpp>
using namespace sf;

/********************************************************
		* What part of responsibilities animator should take?
		*1)it can return current frame
		*2)it can return sprite
		*3)it can implement its own draw()
		*********************************************************/

class Animator  //for !a&1 count of frames
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

