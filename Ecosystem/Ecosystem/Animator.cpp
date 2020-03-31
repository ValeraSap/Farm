#include "Animator.h"



Animator::Animator(Texture texture, int frameCount) //texture, frame count
{
	this->frameCount = frameCount-1;    //because we counting from zero 
	this->texture = texture;
	currentFrame = 0;	
	frameWidth = texture.getSize().x / frameCount;
}


Animator::~Animator()
{
}

void Animator::leftAnimation() {
	if (currentFrame >= (frameCount / 2 + 1) && currentFrame < frameCount) {  //bigger than first elem after middle and less than last
		currentFrame++;
	}
	else {
		currentFrame = frameCount / 2 + 1;
	}
}

void Animator::rightAnimation() {
	if (currentFrame < frameCount/2) {
		currentFrame++;
	}
	else {
		currentFrame = 0;  //beginning
	}
}