#include <iostream>

using namespace std;

//(const char *a = "~") 처럼 const를 사용해야 한다! (상수로 받아오는 거니까..)
void Func1(const char * a = "서울") {
	cout << "매개변수 a=" << a << endl;
}

void Func2(const char b[] = "삼선동1가") {
	cout << "매개변수 b=" << b << endl;
}

void main() {
	Func1();
	Func2();
}