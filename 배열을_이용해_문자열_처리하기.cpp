#include <iostream>

using namespace std;

void main() {
	char str[100];
	
	cout << "���ڿ� �Է� -> ";
	cin.getline(str, 100);

	cout << "�Է��� ���ڿ���...-> ";
	for (int i = 0; i < strlen(str); i++) {
		cout << str[i];
	}
	cout << endl << endl;

	cout << "�Է��� ���ڿ��� ���� : " << strlen(str) << endl;
}