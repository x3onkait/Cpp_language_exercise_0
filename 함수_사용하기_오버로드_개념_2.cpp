#include <iostream>

using namespace std;

void MyFunc(int a) {
	cout << "MyFunc(int a) called" << endl;
}

void MyFunc(char a) {
	cout << "MyFunc(char a) called" << endl;
}

void main(void) {
	MyFunc(85);
	MyFunc('A');
}