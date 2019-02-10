#include <iostream>

using namespace std;

class AAA {
	int a;
public:
	void SetA(int num) {
		a = num;
	}
	int GetA() {
		return a;
	}
};

void main() {
	AAA a;
	a.SetA(10);
	cout << a.GetA() << endl;
}