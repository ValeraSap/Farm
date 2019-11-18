#pragma once
class Entitiy {

};
class UnInteractiveObj :public Entitiy { //object without posibility to interact 

};
class Stone :public UnInteractiveObj {

};
class InteractiveObj :public Entitiy {
	virtual void Interact();
};
class Tree :public InteractiveObj {
	void Interact();
};