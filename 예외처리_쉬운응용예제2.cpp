#include <iostream>

using namespace std;

void main() {
	try {
		//char�� ���� throw���ش�
		throw 'a';
	}
	//�����ε�
	catch (int) {
		cout << "Exception int" << endl;
	}
	catch (char) {
		cout << "Exception unsigned char" << endl;
	}
}