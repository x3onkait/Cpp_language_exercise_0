#include <iostream>

using namespace std;

void main() {
	int *ptr;
	ptr = new int;
	//new연산자 -> a = new * : a에 *만큼(자료형)의 메모리를 알아서 할당

	*ptr = 10;
	cout << *ptr << endl;
	cout << ptr << endl;

	//free()와 같이 메모리를 해제
	delete ptr;
}