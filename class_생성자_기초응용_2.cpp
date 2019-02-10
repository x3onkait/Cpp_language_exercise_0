#include <iostream>

using namespace std;

class Point {
	int xp, yp;
public:
	Point(int x, int y) {
		xp = x; 
		yp = y;
	}
	int GetX(){ return xp; }
	int GetY(){ return yp; }
};

void main() {
	Point p2(10, 20);
	cout << "x : " << p2.GetX() << ", y : " << p2.GetY() << endl;
}