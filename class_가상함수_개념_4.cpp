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

	//�θ� Ŭ������ ������ ��ӵǸ鼭 �ָ�������.
	Pet.Display();
}