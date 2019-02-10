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
	//<int>, <char>, <double>ó�� �����ϸ� 
	//��»Ӹ� �ƴ϶� �Էºκе� ������ �ش�.
	InputData<int> intData;
	InputData<char> charData;
	InputData<double> doubleData;

	intData.input();
	charData.input();
	doubleData.input();

	//�ڷ����� �°� ���� �ִ´�.
	intData.Display();
	charData.Display();
	doubleData.Display();
}