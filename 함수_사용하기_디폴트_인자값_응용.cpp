#include <iostream>

using namespace std;

//�������� ���� �ð��� �Է¹޾� �ӱ� ���(����Ʈ 40, �ð��� 7.5K)
int calculateWorkersPay(int workedTime = 40) {
	return workedTime * 7500;
}

//1���� �Է� ���� �� ������ ���� ���ϴ� �Լ�(����Ʈ 10)
int add1ToEnteredInteger(int hit = 10) {
	int result = 0;
	for (int i = 1; i <= hit; i++) {
		result += i;
	}
	return result;
}

//�ϳ��� ���ڸ� �Է¹޾� �������� ����ϴ� �Լ�(����Ʈ 9��)
void printMultiplicationTable(int trigger = 9) {
	for (int i = 1; i <= 9; i++) {
		cout << trigger << " * " << i << " = " << trigger * i << endl;
	}
}

void main() {
	int CWP_entered;
	cout << "�������� �ð� ���߽��ϱ�? -> ";
	cin >> CWP_entered;
	cout << "default�� �Լ� ����" << calculateWorkersPay() << endl;
	cout << "�������� �޾ƾ� �ϴ� �ӱ��� " << calculateWorkersPay(CWP_entered) << "�� �Դϴ�" << endl << endl;

	int A1TI_entered;
	cout << "������ �Է��ϼ��� -> ";
	cin >> A1TI_entered;
	cout << "default�� �Լ� ����" << add1ToEnteredInteger() << endl;
	cout << "1���� �Է¹��� �������� ���� " << add1ToEnteredInteger(A1TI_entered) << "�Դϴ�" << endl << endl;

	int PMPT_entered;
	cout << "���� �Է��ϼ��� -> ";
	cin >> PMPT_entered;
	cout << PMPT_entered << "�� ���" << endl;
	cout << "default�� �Լ� ����";
	printMultiplicationTable();
	cout << "�Ʒ��� �Է��� ���" << endl;
	printMultiplicationTable(PMPT_entered);
}