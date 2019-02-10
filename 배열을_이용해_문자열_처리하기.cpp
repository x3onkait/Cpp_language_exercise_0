#include <iostream>

using namespace std;

void main() {
	char str[100];
	
	cout << "문자열 입력 -> ";
	cin.getline(str, 100);

	cout << "입력한 문자열은...-> ";
	for (int i = 0; i < strlen(str); i++) {
		cout << str[i];
	}
	cout << endl << endl;

	cout << "입력한 문자열의 길이 : " << strlen(str) << endl;
}