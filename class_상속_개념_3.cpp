#include <iostream>

using namespace std;

class Mammal {
public:
	void Speak(int cnt) {
		cout << cnt << " �� ¢��.\n";
	}
	void Speak() {
		cout << "¢��.\n";
	}
};

class Dog : public Mammal {
public:
	void Speak() {
		cout << "�۸�\n";
	}
};

void main() {
	Mammal *ptr;
	Dog jindo;
	ptr = &jindo;

	ptr->Speak();
	ptr->Speak(5);
}