#include <iostream>
#include <string>

using namespace std;

class nike {
	int nai;
	double ki;
public:
	nike(int x, double y) {
		nai = ki = 0;
		cout << "생성자 함수가 실행 " << endl;
		nai = x, ki = y;
	}
	void printf() {
		cout << "nai = " << nai << "ki = " << ki << endl;
	}
};

void main() {
	nike ob{ 10, 100.5 }.pb(ob);
	ob.printf();
	pb.printf();
}


