#include <iostream>

using namespace std;

class bumo {
public:
	//virtual~ �̴ϱ� �̰� �����Լ��̴�! 
	virtual void print() {
		cout << "�� �θ��� print()" << endl;
	}
};

class jasic : public bumo {
public:
	void print() {
		cout << "�� �ڽ��� print()" << endl;
	}
};

void main() {
	jasic ob;
	bumo *mom = &ob;
	mom->print();
}