#include <iostream>

using namespace std;

void main() {
	int *ptr;
	int size;

	cout << "���� �Ҵ��� ũ��(int����)�� �Է��ϼ��� : ";
	cin >> size;

	ptr = new int[size];	//new�� ������ ����ϴ� �Ϳ� �ͼ������� �Ѵ�.

	for (int i = 0; i < size; i++) {
		cout << i+1 << "��° ���� �Է��ϼ��� -> ";
		cin >> ptr[i];
	}

	cout << endl;

	for (int k = 0; k < size; k++) {
		cout << k+1 << "��° �迭�� ���� " << ptr[k] << " �Դϴ�" << endl;
	}

	delete []ptr;
}