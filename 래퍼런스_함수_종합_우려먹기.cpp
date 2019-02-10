#include <iostream>
#include <algorithm>		//대문자를 소문자로
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
	cout << "두개의 수 입력 -> ";
	cin >> f1 >> f2;
	findBiggerInteger(f1, f2, fmax);
	cout << "두 수 중 큰 수는 " << fmax << " 입니다" << endl;
	cout << endl;

	int o1, ores = 0;
	cout << "1 ~ 100까지의 수 입력 : ";
	cin >> o1;
	oneToHundredxx(o1, ores);
	cout << "입력한 값의 1~100사이의 배수들의 합은 " << ores << " 입니다" << endl;
	cout << endl;

	char t;
	cout << "문자 하나를 입력 : ";
	cin >> t;
	cout << "변환 전의 문자 : " << t << endl;
	toUpperCase(t);
	cout << "변환 후의 문자 : " << t << endl;
	cout << endl;


}