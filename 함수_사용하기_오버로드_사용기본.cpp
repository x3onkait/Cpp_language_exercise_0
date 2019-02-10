#include <iostream>
#include <string>

using namespace std;

//두 정수를 입력받아 앞에 정수에 대한 뒤의 정수 승을 구해 반환하는 함수
//만약 문자, 숫자로 올시 문자와 숫자의 합을 구한다

int returnSomethingForWhat(int under, int upper) {
	int result = under;
	for (int i = 1; i < upper; i++) {
		result *= under;
	}
	return result;
}

char returnSomethingForWhat(char first, int second) {
	first += second;
	return first;
}

void main() {
	int RSFW_entered_first, RSFW_entered_second;
	char RSFW_char;
	cout << "인자(정수^정수) -> ";
	cin >> RSFW_entered_first >> RSFW_entered_second;
	cout << "결과값은 -> " << returnSomethingForWhat(RSFW_entered_first, RSFW_entered_second) << endl;

	cout << "인자(문자^정수) -> ";
	cin >> RSFW_char, RSFW_entered_second;
	cout << "결과값은 -> " << returnSomethingForWhat(RSFW_char, RSFW_entered_second) << endl;
}