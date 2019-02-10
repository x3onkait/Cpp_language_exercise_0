#include <iostream>

using namespace std;

class A {
protected:
	A() {
		cout << "A ������" << endl;
	}
	~A() {
		cout << "A �Ҹ���" << endl;
	}
};

class B : public A {
protected:
	B() {
		cout << "B ������" << endl;
	}
	~B() {
		cout << "B �Ҹ���" << endl;
	}
};

class C : public A {
protected:
	C() {
		cout << "C ������" << endl;
	}
	~C() {
		cout << "C �Ҹ���" << endl;
	}
};

class D : public B, public C {
public:
	D() {
		cout << "D ������" << endl;
	}
	~D() {
		cout << "D �Ҹ���" << endl;
	}
};

void main() {
	D d;
}