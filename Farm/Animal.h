#pragma once
class Animal {
public:
	Animal();
	virtual void Move();
	virtual void Eat();
	virtual void Idle();
};
class Sheep :public Animal {
public:
	Sheep();
	void Move();
	void Eat();
	void Idle();
};