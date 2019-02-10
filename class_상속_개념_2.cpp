#include <iostream>

using namespace std;

class Mammal {
private:
	int age, weight;
public:
	Mammal() {
		age = 5;
		weight = 15;
	}
	void Disp() {
		cout << age << endl;
		cout << weight << endl;
	}
};

class Dog : public Mammal {
public:
	void Bowwow() {
		cout << "¸Û¸Û! \n";
	}
};

void main() {
	Dog jindo;
	jindo.Disp();
	jindo.Bowwow();
}