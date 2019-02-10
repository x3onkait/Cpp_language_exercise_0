#include <iostream>

using namespace std;

void main() {
	int *ptr;
	int size;

	cout << "동적 할당할 크기(int개수)를 입력하세요 : ";
	cin >> size;

	ptr = new int[size];	//new란 개념을 사용하는 것에 익숙해져야 한다.

	for (int i = 0; i < size; i++) {
		cout << i+1 << "번째 값을 입력하세요 -> ";
		cin >> ptr[i];
	}

	cout << endl;

	for (int k = 0; k < size; k++) {
		cout << k+1 << "번째 배열의 값은 " << ptr[k] << " 입니다" << endl;
	}

	delete []ptr;
}