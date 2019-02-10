#include <iostream>

using namespace std;

template <typename Type>

void Add(Type n1, Type n2);

void main() {
	int su1, su2;
	double num1, num2;
	cout << "두 정수 입력 : ";
	cin >> su1 >> su2;
	cout << "두 실수 입력 : ";
	cin >> num1 >> num2;
	Add(su1, su2);
	Add(num1, num2);
}

template <typename Type>

void Add(Type n1, Type n2) {
	Type sum;
	sum = n1 + n2;
	cout << "n1 + n2 =" << sum;
	cout << endl;
}