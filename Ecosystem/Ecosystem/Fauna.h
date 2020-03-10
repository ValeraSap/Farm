#pragma once
#if !defined(__FarmClassDiagram_Fauna_h)
#define __FarmClassDiagram_Fauna_h

//Проблема! Необожимо решить, будут ли овцы сами обнаруживать и реагировать на изменение, напр. погоды или 
//мы будем их об этом уведомлять. Если первое, то зачем нам нужен этот класс

class Fauna //Нужен singleon!
{
public:
	Fauna();
	~Fauna();
private:
	
};
#endif

