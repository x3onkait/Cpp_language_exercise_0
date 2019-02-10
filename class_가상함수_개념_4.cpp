#include <iostream>

using namespace std;

class Mammal {
protected:
	int Age;
public:
	Mammal() {
		Age = 4;
	}
};

class Dog : virtual public Mammal {
public:
	Dog() {
		Age = 5;
	}
};

class Cat : virtual public Mammal {
public:
	Cat() {
		Age = 6;
	}
};

class Pet : public Dog, public Cat {
public:
	void Display() {
		cout << Age << endl;
	}
};

void main() {
	Pet Pet;

	//부모 클래스가 여러개 상속되면서 애매해진다.
	Pet.Display();
}