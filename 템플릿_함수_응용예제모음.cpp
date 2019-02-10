#include <iostream>

using namespace std;

//���� ���� ���� 1 ���������ֱ�
template <typename val>

void addOneMore(val v) {
	v++;
	cout << "1 ���ؽ� ���� " << v << " �Դϴ�." << endl;
}

//�� ���� �Է¹޾� �ּҰ��� ���ϱ�
template <typename diff>

diff checkTwoSomething(diff first, diff second) {
	if (first < second)
		return first;
	else
		return second;
}

//�� ���� �Է¹޾� �ִ밪�� ���ϱ�
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