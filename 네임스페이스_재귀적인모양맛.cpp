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
	cout << "KIM�� ������ �Լ�" << endl;
	Func2();
}

void LEE::Func() {
	cout << "LEE�� ������ �Լ�" << endl;
}

void KIM::Func2() {
	cout << "KIM�� ������ �ι�° �Լ�" << endl;
}