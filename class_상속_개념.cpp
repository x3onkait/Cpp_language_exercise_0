#include <iostream>

using namespace std;

class A {
public:
	A() {
		cout << "A maked!!" << endl;
	}
};

//class subClassname : ���������� superClassName
class B : public A {
public:
	B() {
		cout << "B maked!!" << endl;
	}
};

void main() {
	//���� main()�������� ��ü B�� �����ؼ� ������ ���̴�!
	B b;
}