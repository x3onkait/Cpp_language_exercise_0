#include <iostream>

using namespace std;

void main() {
	int *ptr;
	ptr = new int;
	//new������ -> a = new * : a�� *��ŭ(�ڷ���)�� �޸𸮸� �˾Ƽ� �Ҵ�

	*ptr = 10;
	cout << *ptr << endl;
	cout << ptr << endl;

	//free()�� ���� �޸𸮸� ����
	delete ptr;
}