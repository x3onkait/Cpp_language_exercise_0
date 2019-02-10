#include <iostream>

using namespace std;

class Point {
	int x, y;
public:
	Point(int a, int b) {
		x = a;
		y = b;
	}
	bool operator < (Point tmp);
};

bool Point::operator < (Point tmp) {
	if ((x < tmp.x) && (y < tmp.y))
		return true;
	else
		return false;
}

void main() {
	Point ov1(10, 20), ov2(30, 40);
	if (ov1 < ov2)
		cout << "ov2가 더 크다" << endl;
	else
		cout << "ov1이 더 크다" << endl;
}