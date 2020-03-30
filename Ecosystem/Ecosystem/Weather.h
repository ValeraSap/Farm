#pragma once
#if !defined(__FarmClassDiagram_Weather_h)
#define __FarmClassDiagram_Weather_h
//#include "Field.h"
 class Weather 
{	
	
public:
	//void update(void);	
	~Weather();

	//static Weather* getWeather(Field* f);
	static Weather* getWeather();

protected:
	//Weather(Field* f);
	Weather();
private:
	
	static Weather* _instance; //указатель на уникальный экземпл€р 

	//—сылка на поле
	//Field* field;  //shared ptr!?
};
#endif

