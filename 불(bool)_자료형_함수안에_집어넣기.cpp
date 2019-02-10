#include <iostream>

using namespace std;

bool Func(bool boo) {
	cout << boo << endl;
	return boo;
}

void main() {
	bool t, f;
	t = false;
	f = Func(t);

	cout << f << endl;
}