//��ȣ��(Ambiguity)����

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

	//�̷��� Ȯ���ϰ� �����ָ� ������ ���� �� ����!!
	c.B::Display();
}