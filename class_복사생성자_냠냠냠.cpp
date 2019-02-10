#include <iostream>
#include <string>

using namespace std;

class str {
	char *data;
	int len;
public:
	//복사생성자. &tmp는 객체의 주소값(여기서는 pb()...)
	str(const str &tmp) {
		len = tmp.len;
		data = new char[len + 1];
		strcpy(data, tmp.data);
	}
	str(const char *x) {
		len = strlen(x);
		data = new char[len + 1];
		strcpy(data, x);
	}
	void print() {
		cout << "data = " << data << "(" << len << ")" << endl;
	}
	~str() {
		cout << data << "동적할당을 해제합니다. " << endl;
		delete[]data;
	}
};

void main() {
	str ob("korea"), pb(ob);
	ob.print();
	pb.print();
}


