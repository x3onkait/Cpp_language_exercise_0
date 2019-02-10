#include <iostream>

using namespace std;

class jumsu {	//class
public:		//class를 내, 외부에서 사용하게 개방함
	int kor, eng, math;				//class의 속성값
	int sum(int kor, int eng, int math) {	//class의 속성값을 이용하는 함수
		return kor + eng + math;
	}
};

void main() {
	jumsu st;	//class를 이용해 st란 jumsu객체를 만드는 것
	cout << "국, 영, 수 입력 -> ";
	cin >> st.kor >> st.eng >> st.math;
	cout << "총점 = " << st.sum(st.kor, st.eng, st.math) << endl;
}