#include <iostream>
#include <algorithm>		//�빮�ڸ� �ҹ��ڷ�
#include <string>

using namespace std;

void findBiggerInteger(int number1, int number2, int & fmax) {
	(number1 > number2) ? fmax = number1 : fmax = number2;
}

void oneToHundredxx(int trigger, int & ores) {
	for (int i = 1; i <= 100; i++) {
		(i % trigger == 0) ? ores += i : ores += 0;
	}
}

void toUpperCase(char & t) {
	if (t >= 'a' && t <= 'z')
		t = t - 32;
}

void reverseAllIntegers(int a, int & b) {
	int tmp, result = 0;
	while (true) {
		tmp = a % 10;
		a = 10;
		result = (result + tmp) * 10;
		if (a == 0) {
			b = result / 10;
			break;
		}
	}
}

void main() {
	int f1, f2, fmax;
	cout << "�ΰ��� �� �Է� -> ";
	cin >> f1 >> f2;
	findBiggerInteger(f1, f2, fmax);
	cout << "�� �� �� ū ���� " << fmax << " �Դϴ�" << endl;
	cout << endl;

	int o1, ores = 0;
	cout << "1 ~ 100������ �� �Է� : ";
	cin >> o1;
	oneToHundredxx(o1, ores);
	cout << "�Է��� ���� 1~100������ ������� ���� " << ores << " �Դϴ�" << endl;
	cout << endl;

	char t;
	cout << "���� �ϳ��� �Է� : ";
	cin >> t;
	cout << "��ȯ ���� ���� : " << t << endl;
	toUpperCase(t);
	cout << "��ȯ ���� ���� : " << t << endl;
	cout << endl;


}