#include <iostream>

using namespace std;

namespace KIM {
	void Func() {
		cout << "KIM이 정의한 함수 " << endl;
	}
}

namespace LEE {
	void Func() {
		cout << "LEE가 정의한 함수 " << endl;
	}
}

void main() {
	KIM::Func();
	LEE::Func();
}
