#pragma once

/*Purpose: Declaration of the class Animal*/

#if !defined(__FarmClassDiagram_Animal_h)
#define __FarmClassDiagram_Animal_h

//class Info;

class Animal
{
public:
	Animal();	
	void Death(void);
	void Sleep(void);
	void Travail(void);
	virtual ~Animal();

//	Info** info;

protected:
private:
	int Weight;
	int Sex;
	int Speed;
	int Hunger;
	int Energy;
	int Age;
	int Info;
	int Health;
	int Pregnancy;


};

#endif