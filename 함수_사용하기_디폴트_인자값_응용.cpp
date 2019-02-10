#include <iostream>

using namespace std;

//종업원이 일한 시간을 입력받아 임금 출력(디폴트 40, 시간당 7.5K)
int calculateWorkersPay(int workedTime = 40) {
	return workedTime * 7500;
}

//1부터 입력 받은 수 까지의 합을 구하는 함수(디폴트 10)
int add1ToEnteredInteger(int hit = 10) {
	int result = 0;
	for (int i = 1; i <= hit; i++) {
		result += i;
	}
	return result;
}

//하나의 숫자를 입력받아 구구단을 출력하는 함수(디폴트 9단)
void printMultiplicationTable(int trigger = 9) {
	for (int i = 1; i <= 9; i++) {
		cout << trigger << " * " << i << " = " << trigger * i << endl;
	}
}

void main() {
	int CWP_entered;
	cout << "종업원이 시간 일했습니까? -> ";
	cin >> CWP_entered;
	cout << "default로 함수 실행" << calculateWorkersPay() << endl;
	cout << "종업원이 받아야 하는 임금은 " << calculateWorkersPay(CWP_entered) << "원 입니다" << endl << endl;

	int A1TI_entered;
	cout << "정수를 입력하세요 -> ";
	cin >> A1TI_entered;
	cout << "default로 함수 실행" << add1ToEnteredInteger() << endl;
	cout << "1부터 입력받은 값까지의 합은 " << add1ToEnteredInteger(A1TI_entered) << "입니다" << endl << endl;

	int PMPT_entered;
	cout << "단을 입력하세요 -> ";
	cin >> PMPT_entered;
	cout << PMPT_entered << "단 출력" << endl;
	cout << "default로 함수 실행";
	printMultiplicationTable();
	cout << "아래는 입력한 결과" << endl;
	printMultiplicationTable(PMPT_entered);
}