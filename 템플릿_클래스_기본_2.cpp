#include <iostream>

using namespace std;

template <typename Type>

class Point {
	Type x, y;
public:
	Point(Type a, Type b) {
		x = a;
		y = b;
	}
	void Display();
};

template <typename Type>
void Point<Type>::Display() {
	cout << "x : " << x << endl;
	cout << "y : " << y << endl;
}

void main() {
	Point <int>PInt(10, 20);
	Point <double>PDouble(10.4, 20.6);
	PInt.Display();
	PDouble.Display();
}