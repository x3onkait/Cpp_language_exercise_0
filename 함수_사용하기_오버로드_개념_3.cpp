#include <iostream>

using namespace std;

void MyFunc(int data) {
	cout << data << "�Ű������� �޾ƿ� MyFunc�Լ�" << endl;
}

void MyFunc(int data, int data2) {
	cout << data << ',' << data2 << "�Ű������� �޾ƿ� MyFunc�Լ�" << endl;
}

void MyFunc(int data, int data2, int data3) {
	cout << data << ',' << data2 << ',' << data3 << ',' << "�Ű������� �޾ƿ� MyFunc�Լ�" << endl;
}

void main(void) {
	MyFunc(10);
	MyFunc(10, 20);
	MyFunc(10, 20, 30);
}