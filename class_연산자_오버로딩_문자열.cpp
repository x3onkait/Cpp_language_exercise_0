#include <iostream>
#include <string>

using namespace std;

class String {
private:
	char *str;
public:
	String();
	String(const char *s);
	String operator + (String s);
	void PrintString();
};

String::String() {
	str = new char[20];
}

String::String(const char *s) {
	str = new char[20];
	strcpy(str, s);
}

void String::PrintString() {
	cout << str << "\n";
}

String String::operator+(String s) {
	String temp;
	strcpy(temp.str, this->str);
	strcat(temp.str, s.str);
	return temp;
}

void main() {
	String str1("C++");
	String str2("Language");
	String str3;
	
	str1.PrintString();
	str2.PrintString();

	str3 = str1 + str2;
	str3.PrintString();
}