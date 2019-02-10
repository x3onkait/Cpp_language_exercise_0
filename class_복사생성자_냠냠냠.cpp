#include <iostream>
#include <string>

using namespace std;

class str {
	char *data;
	int len;
public:
	//���������. &tmp�� ��ü�� �ּҰ�(���⼭�� pb()...)
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
		cout << data << "�����Ҵ��� �����մϴ�. " << endl;
		delete[]data;
	}
};

void main() {
	str ob("korea"), pb(ob);
	ob.print();
	pb.print();
}


