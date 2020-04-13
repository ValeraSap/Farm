#include "Animator.h"



Animator::Animator(Texture texture, int frameCount)    //texture, frame count
{
	this->frameCount = frameCount;      //because we counting from zero 
	this->texture = texture;
	currentFrame = 0;	
	frameWidth = texture.getSize().x / frameCount;
	frameHeight = texture.getSize().y;
}


void Animator::leftAnimation(float time) 
{	
	currentFrame += 500 * time;
	if ((int)currentFrame > (frameCount / 2 )) {   
		currentFrame=0;
	}		
}


void Animator::rightAnimation(float time) 
{
	currentFrame += 500 * time;
	if ((int)currentFrame > frameCount ) {
		currentFrame = 0;
	}
}


void Animator::draw(RenderWindow* renderWindow, Sprite* sprite)
{
	sprite->setTextureRect(IntRect(currentFrame, 0, frameWidth, frameHeight));
	renderWindow->draw(*sprite);
}


Animator::~Animator()
{
	//TODO
}
