#include <iostream>

using namespace std;

template <typename val>

void func(val v) {
	cout << "Template Function \t\t\t" << v << endl;
}

//특화된 내용에 대해서 쓰겠다...~
template<>

//내가 필요하는 것은 또 이렇게 설정할수도 있다  $D
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