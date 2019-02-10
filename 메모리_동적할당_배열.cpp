#include <iostream>

using namespace std;

void main() {
	int *ptr;
	ptr = new int[2];

	ptr[0] = 10;
	ptr[1] = 20;
	cout << ptr[0] << ',' << ptr[1] << endl;

	delete []ptr;
}