#include <iostream>

using namespace std;

class A {
public:
	A() {
		cout << "A maked!!" << endl;
	}
};

//class subClassname : 접근제한자 superClassName
class B : public A {
public:
	B() {
		cout << "B maked!!" << endl;
	}
};

void main() {
	//단지 main()문에서는 객체 B를 선언해서 돌렸을 뿐이다!
	B b;
}