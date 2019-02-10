#include <iostream>

using namespace std;

class calctime {
	int hour, minute;
public:
	calctime(int x, int y) {
		hour = x;
		minute = y;
	}
	void print() {
		cout << "�� �ð���.." << hour << " �ð� " << minute << " �� �Դϴ�." << endl;
	}
	friend calctime operator + (calctime x, calctime y);
};

calctime operator + (calctime x, calctime y) {
	x.hour = x.hour + y.hour;
	x.minute = x.minute + y.minute;
	if (x.minute % 60 > 0) {
		x.hour++;
		x.minute = x.minute - 60;
	}
	return x;
}

void main() {
	calctime yesterday(3, 48), today(4, 37), sum(0, 0);
	sum = yesterday + today;
	sum.print();
}