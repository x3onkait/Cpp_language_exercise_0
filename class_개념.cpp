#include <iostream>

using namespace std;

class jumsu {	//class
public:		//class�� ��, �ܺο��� ����ϰ� ������
	int kor, eng, math;				//class�� �Ӽ���
	int sum(int kor, int eng, int math) {	//class�� �Ӽ����� �̿��ϴ� �Լ�
		return kor + eng + math;
	}
};

void main() {
	jumsu st;	//class�� �̿��� st�� jumsu��ü�� ����� ��
	cout << "��, ��, �� �Է� -> ";
	cin >> st.kor >> st.eng >> st.math;
	cout << "���� = " << st.sum(st.kor, st.eng, st.math) << endl;
}