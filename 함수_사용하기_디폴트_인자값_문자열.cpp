#include <iostream>

using namespace std;

void Func1(char a = 'Z') {
	cout << "매개변수 a = " << a << endl;
}

void Func2(char b = 'X') {
	cout << "매개변수 b = " << b << endl;
}

void main() {
	Func1();
	Func2();
}