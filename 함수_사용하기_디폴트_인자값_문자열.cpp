#include <iostream>

using namespace std;

void Func1(char a = 'Z') {
	cout << "�Ű����� a = " << a << endl;
}

void Func2(char b = 'X') {
	cout << "�Ű����� b = " << b << endl;
}

void main() {
	Func1();
	Func2();
}