#include <iostream>

using namespace std;

template <typename t1, typename t2>

t1 func(t2 num) {
	cout << num << endl;
	return num;
}

void main() {
	double su = 10.2;
	//func(su); <- �����Ű�� ���� �߻���
	cout << func<int>(su) << endl;
				//<int>��� �� ������ t1�� int�� ��ȯ�ϱ� �����̴�
}