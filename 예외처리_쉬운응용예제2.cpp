#include <iostream>

using namespace std;

void main() {
	try {
		//char형 값을 throw해준다
		throw 'a';
	}
	//오버로딩
	catch (int) {
		cout << "Exception int" << endl;
	}
	catch (char) {
		cout << "Exception unsigned char" << endl;
	}
}