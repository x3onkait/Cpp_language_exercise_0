#include <iostream>

using namespace std;

class A {
protected:
	A() {
		cout << "A maked" << endl;
	}
};

//가상 상속을 하는것 : 이 대상 경로를 가지고 온다
//포인터 개념이라고 생각하면 이해하는데 좀 더 편함
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
	//순서대로 A-B-C-D 로 만들어지기 마련이다
	D d;
}

//상속을 함으로써 상속받은 클래스의 instance가 계층 구조 상에 여러 개 존재하는 것을 방지
//인스턴트 : 메모리에 구현된 실체