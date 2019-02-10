#include <iostream>

using namespace std;

class Point {
	int xp, yp;
public:
	Point() {
		xp = yp = 5;
	}
	int GetX(){ return xp; }
	int GetY(){ return yp; }
};

void main() {
	Point p1;
	cout << "x : " << p1.GetX() << ", y : " << p1.GetY() << endl;
}