#include <iostream>

using namespace std;

class Mammal {
public:
	void Speak(int cnt) {
		cout << cnt << " ¹ø Â¢´Ù.\n";
	}
	void Speak() {
		cout << "Â¢´Ù.\n";
	}
};

class Dog : public Mammal {
public:
	void Speak() {
		cout << "¸Û¸Û\n";
	}
};

void main() {
	Mammal *ptr;
	Dog jindo;
	ptr = &jindo;

	ptr->Speak();
	ptr->Speak(5);
}