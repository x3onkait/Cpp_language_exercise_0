#include <iostream>

using namespace std;

class Mammal {
public:
	virtual void Speak() {
		cout << "Â¢´Ù\n";
	}
};

class Dog : public Mammal {
public:
	void Speak() {
		cout << "¸Û¸Û";
	}
};

void Display(Mammal *ptr) {
	ptr->Speak();
}

void main() {
	Dog jindo;
	Mammal mammal;
	Display(&mammal);	// Â¢´Ù °¡ Ãâ·ÂµÊ
	Display(&jindo);	// ¸Û¸Û ÀÌ Ãâ·ÂµÊ
}