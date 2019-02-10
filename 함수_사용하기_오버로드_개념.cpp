#include <iostream>

using namespace std;

void MyFunc() {
	cout << "MyFunc(void) called" << endl;
}

void MyFunc(int a) {
	cout << "MyFunc(int a) called" << endl;
}

void main(void) {
	MyFunc();
	MyFunc(1);
}