#include <iostream>

using namespace std;

template <typename Type>
void Sum(Type su1, Type su2) {
	Type sum;
	sum = su1 + su2;
	cout << sum << endl;
}

void main() {
	int a = 1, b = 2;
	//char a = "1", b = "2"; is also available
	Sum(a, b);
}