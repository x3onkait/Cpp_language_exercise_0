#include <iostream>

using namespace std;

void Exception(int n) {
	try {
		if (n < 0)
			throw "Minus";
		else if (n == 0)
			throw "Zero";
		else
			throw "Plus";
	}
	catch (const char * msg) {
		cout << "Exception : " << msg << endl;
	}
}

void main() {
	Exception(-10);
	Exception(0);
	Exception(10);
}