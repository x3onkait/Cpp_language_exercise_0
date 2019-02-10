#include <iostream>

using namespace std;

int *func() {
	int arr[4] = { 10,20,30,40 };
	return arr;
}

int *func2() {
	int *arr = new int[4];
	for (int i = 0; i < 4; i++) {
		arr[i] = i + 1;
	}
	return arr;
}

void main() {
	int *ip;
	ip = func();
	for (int i = 0; i < 4; i++) {
		cout << ip[i] << endl;
	}
	cout << endl << endl;

	ip = func2();
	for (int i = 0; i < 4; i++) {
		cout << ip[i] << endl;
	}
	cout << endl << endl;
	delete[]ip;
}