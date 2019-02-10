#include <iostream>

using namespace std;

template <typename Type>

class InputData {
private:
	Type data;
public:
	void input() {
		cout << "input : ";
		cin >> data;
	}
	void Display() {
		cout << "Output : " << data << endl;
	}
};

void main() {
	//<int>, <char>, <double>처럼 선언하면 
	//출력뿐만 아니라 입력부분도 영향을 준다.
	InputData<int> intData;
	InputData<char> charData;
	InputData<double> doubleData;

	intData.input();
	charData.input();
	doubleData.input();

	//자료형에 맞게 값을 넣는다.
	intData.Display();
	charData.Display();
	doubleData.Display();
}