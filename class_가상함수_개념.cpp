#include <iostream>

using namespace std;

class bumo {
public:
	//virtual~ 이니까 이건 가상함수이다! 
	virtual void print() {
		cout << "난 부모의 print()" << endl;
	}
};

class jasic : public bumo {
public:
	void print() {
		cout << "난 자식의 print()" << endl;
	}
};

void main() {
	jasic ob;
	bumo *mom = &ob;
	mom->print();
}