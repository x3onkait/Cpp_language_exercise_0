#include <iostream>

using namespace std;

class A {
protected:
	A() {
		cout << "A 持失切" << endl;
	}
	~A() {
		cout << "A 社瑚切" << endl;
	}
};

class B : public A {
protected:
	B() {
		cout << "B 持失切" << endl;
	}
	~B() {
		cout << "B 社瑚切" << endl;
	}
};

class C : public A {
protected:
	C() {
		cout << "C 持失切" << endl;
	}
	~C() {
		cout << "C 社瑚切" << endl;
	}
};

class D : public B, public C {
public:
	D() {
		cout << "D 持失切" << endl;
	}
	~D() {
		cout << "D 社瑚切" << endl;
	}
};

void main() {
	D d;
}