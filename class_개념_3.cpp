#include <iostream>

using namespace std;

class jumsu {
private: 
	int kor, eng, math;
public :
	void SetJumsu(int a, int b, int c);
	int sum();
};

void jumsu::SetJumsu(int a, int b, int c) {
	kor = a;
	eng = b;
	math = c;
}

int jumsu::sum() {
	return kor + eng + math;
}

void main() {
	jumsu st;
	st.SetJumsu(95, 80, 20);
	cout << "รัมก = " << st.sum() << endl;
}
