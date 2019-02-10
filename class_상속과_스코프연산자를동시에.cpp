#include <iostream>

using namespace std;

class A {
public:
	void func() {
		cout << "a함수입니다." << endl;
	}
};

class B {
public:
	void func() {
		cout << "b함수입니다." << endl;
	}
};

class C : public A, public B{
public:
	void func3() {
		A::func();
		B::func();
	}
};

void main() {
	C c;
	c.func3();
}