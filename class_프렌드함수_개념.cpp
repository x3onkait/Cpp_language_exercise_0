#include <iostream>

using namespace std;

class Dog {
private:
	int Age;
	int Weight;
public:
	Dog(int age, int weight) {
		Age = age;
		Weight = weight;
	}
	friend void Display(Dog &obj);
};

void Display(Dog &obj) {
	cout << obj.Age << endl;
	cout << obj.Weight << endl;
}

void main() {
	Dog jindo(4, 3);
	Display(jindo);
}