#include "Animator.h"



Animator::Animator(Texture texture, int frameCount) //texture, frame count
{
	this->frameCount = frameCount;    //because we counting from zero 
	this->texture = texture;
	currentFrame = 0;	
	frameWidth = texture.getSize().x / frameCount;
}


Animator::~Animator()
{
}

int Animator::leftAnimation(float time) {
	//currentFrame += 0.005 * time;
	if (currentFrame >= (frameCount / 2 ) && currentFrame < frameCount-1) {  //bigger than first elem after middle && less than last
		currentFrame++;
	}
	else {
		currentFrame = frameCount / 2 ;
	}
	return currentFrame;
}

void Animator::rightAnimation() {
	if (currentFrame < frameCount/2-1) {
		currentFrame++;
	}
	else {
		currentFrame = 0;  //beginning
	}
}

