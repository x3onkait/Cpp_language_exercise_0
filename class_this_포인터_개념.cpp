#include <iostream>

using namespace std;

class calc {
	int num1, num2;
public:
	void SetData(int num1, int num2) {
		this->num1 = num1;
		this->num2 = num2;
	}
	int GetSum() {
		return num1 + num2;
	}
};

void main() {
	int su1, su2;
	calc ca;
	cout << "���� 2�� �Է� : ";
	cin >> su1 >> su2;
	ca.SetData(su1, su2);
	cout << ca.GetSum() << endl;
}