#include <iostream>

using namespace std;

template <typename val>

void func(val v) {
	cout << "Template Function \t\t\t" << v << endl;
}

//Ưȭ�� ���뿡 ���ؼ� ���ڴ�...~
template<>

//���� �ʿ��ϴ� ���� �� �̷��� �����Ҽ��� �ִ�  $D
void func<char>(char v) {
	cout << "Specialization Template Function \t" << v << endl;
}

void main() {
	func(10);
	func(10.1);
	func(0x10);
	func('a');
	func("abc");
}