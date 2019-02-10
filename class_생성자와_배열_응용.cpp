#include <iostream>

using namespace std;

class Point {
	int xp, yp;
public:
	Point(int x, int y) {
		xp = x;
		yp = y;
	}
	int GetX() { return xp; }
	int GetY() { return yp; }
};


void main() {
	Point a[3] = {Point(3,5), Point(20,40), Point(100,200)};
	cout << "a[0].x : " << a[0].GetX() << "\t a[0].y : " << a[0].GetY() << endl;
	cout << "a[1].x : " << a[1].GetX() << "\t a[1].y : " << a[1].GetY() << endl;
	cout << "a[2].x : " << a[2].GetX() << "\t a[2].y : " << a[2].GetY() << endl;
}