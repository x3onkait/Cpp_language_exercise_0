#include <iostream>

using namespace std;

class A {
protected:
	A() {
		cout << "A maked" << endl;
	}
};

//���� ����� �ϴ°� : �� ��� ��θ� ������ �´�
//������ �����̶�� �����ϸ� �����ϴµ� �� �� ����
class B : virtual public A {
protected:
	B() {
		cout << "B maked" << endl;
	}
};

class C : virtual public A {
protected:
	C() {
		cout << "C maked" << endl;
	}
};

class D : public B, public C {
public:
	D() {
		cout << "D maked" << endl;
	}
};

void main() {
	//������� A-B-C-D �� ��������� �����̴�
	D d;
}

//����� �����ν� ��ӹ��� Ŭ������ instance�� ���� ���� �� ���� �� �����ϴ� ���� ����
//�ν���Ʈ : �޸𸮿� ������ ��ü