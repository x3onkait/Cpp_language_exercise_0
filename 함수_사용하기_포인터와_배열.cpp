#include <iostream>

using namespace std;

//(const char *a = "~") ó�� const�� ����ؾ� �Ѵ�! (����� �޾ƿ��� �Ŵϱ�..)
void Func1(const char * a = "����") {
	cout << "�Ű����� a=" << a << endl;
}

void Func2(const char b[] = "�Ｑ��1��") {
	cout << "�Ű����� b=" << b << endl;
}

void main() {
	Func1();
	Func2();
}