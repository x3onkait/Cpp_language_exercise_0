#include <iostream>
#include <string>

using namespace std;

//�� ������ �Է¹޾� �տ� ������ ���� ���� ���� ���� ���� ��ȯ�ϴ� �Լ�
//���� ����, ���ڷ� �ý� ���ڿ� ������ ���� ���Ѵ�

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
	cout << "����(����^����) -> ";
	cin >> RSFW_entered_first >> RSFW_entered_second;
	cout << "������� -> " << returnSomethingForWhat(RSFW_entered_first, RSFW_entered_second) << endl;

	cout << "����(����^����) -> ";
	cin >> RSFW_char, RSFW_entered_second;
	cout << "������� -> " << returnSomethingForWhat(RSFW_char, RSFW_entered_second) << endl;
}