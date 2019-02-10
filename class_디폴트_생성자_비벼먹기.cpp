#include <iostream>

using namespace std;

class Point {
	int xp, yp;
public:
	Point() {
		xp = yp = 5;
	}
	Point(int x, int y) {
		xp = x; 
		yp = y;
	}
	int GetX() { return xp; }
	int GetY() { return yp; }
};

void main() {
	Point p1;
	Point p2(10, 20);
	cout << "p1 -> x : " << p1.GetX() << ", y : " << p1.GetY() << endl;
	cout << "p2 -> x : " << p2.GetX() << ", y : " << p2.GetY() << endl;
}