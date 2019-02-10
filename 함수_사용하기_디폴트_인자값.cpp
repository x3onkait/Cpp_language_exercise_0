#include <iostream>

using namespace std;

void Func(int a = 10, int b = 20, int c = 30) {
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl << endl;
}

void main() {
	Func();
	Func(40);
	Func(40, 50);
	Func(40, 50, 60);
}