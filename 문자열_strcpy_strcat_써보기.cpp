#include <iostream>

using namespace std;

void main() {
	char str[20] = "hello";
	char str1[20];

	strcpy(str1, " world");
	cout << "���� �� str : " << str << endl;
	strcat(str, str1);
	cout << "���� �� str : " << str << endl;
	cout << "str 1 : " << str1 << endl;
}