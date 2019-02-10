#include <iostream>

using namespace std;

namespace KIM {
	void Func();
	void Func2();
}

namespace LEE {
	void Func();
}

void main() {
	KIM::Func();
	LEE::Func();
}

void KIM::Func() {
	cout << "KIM이 정의한 함수" << endl;
	Func2();
}

void LEE::Func() {
	cout << "LEE가 정의한 함수" << endl;
}

void KIM::Func2() {
	cout << "KIM이 정의한 두번째 함수" << endl;
}