#include <iostream>

using namespace std;

void func(int a, int b) {
	a += 5;
	b += 10;
	cout << a << b << endl;
}

void main() {
	int a = 5, b = 10;
	func(a, b);
	cout << a << b << endl;
}