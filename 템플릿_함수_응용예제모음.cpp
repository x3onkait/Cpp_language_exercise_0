#include <iostream>

using namespace std;

//전달 받은 값을 1 증가시켜주기
template <typename val>

void addOneMore(val v) {
	v++;
	cout << "1 더해신 값은 " << v << " 입니다." << endl;
}

//두 값을 입력받아 최소값을 구하기
template <typename diff>

diff checkTwoSomething(diff first, diff second) {
	if (first < second)
		return first;
	else
		return second;
}

//세 값을 입력받아 최대값을 구하기
template <typename three>

three checkThreeSomething(three first, three second, three third) {
	int result;
	/*if (first >= second)
		result = first;
	else
		result = second;
	if (third > result)
		result = third;*/
	result = first > second ? first : second;
	result = third > result ? third : result;

	return result;
}



void main() {
	addOneMore(1);
	addOneMore('a');

	cout << checkTwoSomething(22, 101) << endl;
	cout << checkTwoSomething('a', 'z') << endl;

	cout << checkThreeSomething(10, 25, 90) << endl;
	cout << checkThreeSomething('a', 'b', 'x') << endl;
}