#include <iostream>

using namespace std;

namespace KIM {
	void Func() {
		cout << "KIM�� ������ �Լ� " << endl;
	}
}

namespace LEE {
	void Func() {
		cout << "LEE�� ������ �Լ� " << endl;
	}
}

void main() {
	KIM::Func();
	LEE::Func();
}
