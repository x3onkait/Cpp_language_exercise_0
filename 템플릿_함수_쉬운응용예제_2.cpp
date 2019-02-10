#include <iostream>

using namespace std;

template <typename t1, typename t2>

t1 func(t2 num) {
	cout << num << endl;
	return num;
}

void main() {
	double su = 10.2;
	//func(su); <- 실행시키면 오류 발생함
	cout << func<int>(su) << endl;
				//<int>라고 쓴 이유는 t1을 int로 반환하기 위함이다
}