#include <iostream>

using namespace std;

namespace KIM {
	void Func() {
		cout << "KIM�� ������ �Լ� " << endl;
	}
}

using namespace KIM;

namespace LEE {
	void Func() {
		cout << "LEE�� ������ �Լ� " << endl;
	}
}

void main() {
	Func();
	LEE::Func();
}