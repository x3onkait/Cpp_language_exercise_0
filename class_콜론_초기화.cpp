#include <iostream>

using namespace std;

//�ݷ� �ʱ�ȭ(Initializer)
//���Կ����� ���� �ʱ�ȭ���� ���� ���� �ʱ�ȭ�� �����ϴ�
//������ ����� ������ �Ҵ��ϸ鼭 ���� �ʱ�ȭ�ȴ�
class AAA {
	const int num;
public:
	AAA(int x) : num(x) {
		cout << "num = " << num << endl;
	}
};

void main() {
	AAA a(10);
}