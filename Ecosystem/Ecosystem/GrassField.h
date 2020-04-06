#pragma once
#if !defined(__FarmClassDiagram_GrassField_h)
#define __FarmClassDiagram_GrassField_h
#include "Weather.h"
#include "Field.h"
class GrassField :	public Field //need singleon!
{

public:

	void update(float elapsed);
	void draw(RenderWindow* renderWindow);

	GrassField();
	~GrassField();
private:
	
	Weather* weather;

/*	template <class T>  //will it work if private?
	void weatherChanged(T changedParameter);*/
};

#endif