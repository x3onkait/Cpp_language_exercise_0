#include <iostream>

using namespace std;

int SumFunc(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += 1;
	}
	return sum;
}

void main() {
	int ret, n;
	cin >> n;
	ret = SumFunc(n);
	cout << ret << endl;
}