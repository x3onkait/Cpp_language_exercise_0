//모호함(Ambiguity)예제

#include <iostream>

using namespace std;

class A {
public:
	void Display() {
		cout << "A" << endl;
	}
};

class B {
public:
	void Display() {
		cout << "B" << endl;
	}
};

class C : public A, public B {
public:
};

void main() {
	C c;

	//이렇게 확실하게 정해주면 오류가 절대 안 난다!!
	c.B::Display();
}