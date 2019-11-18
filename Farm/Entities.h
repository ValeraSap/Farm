#pragma once
class Entitiy {

};
class UnInteractiveObj :public Entitiy { //object without posibility to interact 

};
class Stone :public UnInteractiveObj {

};
class InteractiveObj :public Entitiy {
	
};
class Tree :public InteractiveObj {
	
};