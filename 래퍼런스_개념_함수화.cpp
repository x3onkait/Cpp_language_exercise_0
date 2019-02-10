#include <iostream>

using namespace std;

int & func() {
	int num = 10;
	int &su = num;
	return su;
}

void main() {
	int su;
	su = func();
	cout << su << endl;
	su++;
	cout << su << endl;
}
