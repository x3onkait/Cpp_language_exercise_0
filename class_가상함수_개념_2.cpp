#include <iostream>

using namespace std;

class Mammal {
public:
	void Speak(int cnt) {
		cout << cnt << "�� ¢��.\n";
	}
	virtual void Speak() = 0;
};

class Dog : public Mammal {
public:
	void Speak() {
		cout << "�۸�\n";
	}
};

void main() {
	Mammal *pt;
	Dog jindo;
	pt = &jindo;

	pt->Speak();
	pt->Speak(5);
}