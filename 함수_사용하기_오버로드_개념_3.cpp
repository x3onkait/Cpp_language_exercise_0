#include <iostream>

using namespace std;

void MyFunc(int data) {
	cout << data << "매개변수로 받아온 MyFunc함수" << endl;
}

void MyFunc(int data, int data2) {
	cout << data << ',' << data2 << "매개변수로 받아온 MyFunc함수" << endl;
}

void MyFunc(int data, int data2, int data3) {
	cout << data << ',' << data2 << ',' << data3 << ',' << "매개변수로 받아온 MyFunc함수" << endl;
}

void main(void) {
	MyFunc(10);
	MyFunc(10, 20);
	MyFunc(10, 20, 30);
}