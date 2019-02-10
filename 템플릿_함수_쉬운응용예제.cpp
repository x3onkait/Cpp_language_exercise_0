#include <iostream>

using namespace std;

template <typename t>

t Big(t x, t y) {
	if (x > y)
		return x;
	else
		return y;
}

void main() {
	cout << Big(20, 10) << endl;
	cout << Big(2.2, 1.1) << endl;
	cout << Big('Z', 'a') << endl;
	cout << Big("def", "abc") << endl;
}