#include <iostream>

using namespace std;

//콜론 초기화(Initializer)
//대입연산을 통한 초기화보다 더욱 빠른 초기화가 가능하다
//변수가 사용할 공간을 할당하면서 값이 초기화된다
class AAA {
	const int num;
public:
	AAA(int x) : num(x) {
		cout << "num = " << num << endl;
	}
};

void main() {
	AAA a(10);
}