#include <iostream>

using namespace std;

void main() {
	char str[20] = "hello";
	char str1[20];

	strcpy(str1, " world");
	cout << "수정 전 str : " << str << endl;
	strcat(str, str1);
	cout << "수정 후 str : " << str << endl;
	cout << "str 1 : " << str1 << endl;
}