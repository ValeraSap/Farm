class Object {

};
class UnInteractiveObj:public Object { //object without posibility to interact 

};
class Stone:public UnInteractiveObj {

};
class InteractiveObj :public Object {
	virtual void Interact();
};
class Tree :public InteractiveObj {
	void Interact();
};