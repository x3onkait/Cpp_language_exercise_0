#include <iostream>

using namespace std;

class Mammal {
public:
	virtual void Speak() {
		cout << "¢��\n";
	}
};

class Dog : public Mammal {
public:
	void Speak() {
		cout << "�۸�";
	}
};

void Display(Mammal *ptr) {
	ptr->Speak();
}

void main() {
	Dog jindo;
	Mammal mammal;
	Display(&mammal);	// ¢�� �� ��µ�
	Display(&jindo);	// �۸� �� ��µ�
}