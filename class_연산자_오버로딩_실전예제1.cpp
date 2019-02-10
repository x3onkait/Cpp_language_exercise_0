#include <iostream>

using namespace std;

class Exer {
	int x, y;
public:
	Exer(int a, int b) {
		x = a;
		y = b;
	}
	void Print() {
		cout << "x = " << x << ",y = " << y << endl;
	}

	//���ϱ�
	friend Exer operator + (Exer tmp, int data);
	friend Exer operator + (int data, Exer tmp);
	friend Exer operator + (Exer a, Exer data);

	//����
	friend Exer operator - (Exer tmp, int data);
	friend Exer operator - (int data, Exer tmp);
	friend Exer operator - (Exer tmp, Exer data);

	//���ϱ�
	friend Exer operator * (Exer tmp, int data);
	friend Exer operator * (int data, Exer tmp);
	friend Exer operator * (Exer tmp, Exer data);

	//������
	friend Exer operator / (Exer tmp, int data);
	friend Exer operator / (int data, Exer tmp);
	friend Exer operator / (Exer tmp, Exer data);
};

Exer operator + (Exer tmp, int data) {
	cout << "��ü + ����" << endl;
	tmp.x = tmp.x + data;
	tmp.y = tmp.y + data;
	return tmp;
}
Exer operator + (int data, Exer tmp) {
	cout << "���� + ��ü" << endl;
	tmp.x = tmp.x + data;
	tmp.y = tmp.y + data;
	return tmp;
}
Exer operator + (Exer tmp, Exer data) {
	cout << "��ü + ��ü" << endl;
	tmp.x = tmp.x + data.x;
	tmp.y = tmp.y + data.y;
	return tmp;
}

Exer operator - (Exer tmp, int data) {
	cout << "��ü - ����" << endl;
	tmp.x = tmp.x - data;
	tmp.y = tmp.y - data;
	return tmp;
}
Exer operator - (int data, Exer tmp) {
	cout << "���� - ��ü" << endl;
	tmp.x = data - tmp.x;
	tmp.y = data - tmp.y;
	return tmp;
}
Exer operator - (Exer tmp, Exer data) {
	cout << "��ü - ��ü" << endl;
	tmp.x = tmp.x + data.x;
	tmp.y = tmp.y + data.y;
	return tmp;
}

Exer operator * (Exer tmp, int data) {
	cout << "��ü * ����" << endl;
	tmp.x = tmp.x * data;
	tmp.y = tmp.y * data;
	return tmp;
}
Exer operator * (int data, Exer tmp) {
	cout << "���� * ��ü" << endl;
	tmp.x = tmp.x * data;
	tmp.y = tmp.y * data;
	return tmp;
}
Exer operator * (Exer tmp, Exer data) {
	cout << "��ü * ��ü" << endl;
	tmp.x = tmp.x * data.x;
	tmp.y = tmp.y * data.y;
	return tmp;
}

Exer operator / (Exer tmp, int data) {
	cout << "��ü / ����" << endl;
	tmp.x = tmp.x / data;
	tmp.y = tmp.y / data;
	return tmp;
}
Exer operator / (int data, Exer tmp) {
	cout << "���� / ��ü" << endl;
	tmp.x = data / tmp.x;
	tmp.y = data / tmp.y;
	return tmp;
}
Exer operator / (Exer tmp, Exer data) {
	cout << "��ü / ��ü" << endl;
	tmp.x = tmp.x / data.x;
	tmp.y = tmp.y / data.y;
	return tmp;
}

void main() {
	//���ϱ�
	Exer addone(10, 20), addtwo(10, 10), addthree(20, 30);
	addtwo = addone + 10;
	addtwo.Print();
	addtwo = 30 + addone;
	addtwo.Print();
	addtwo = addone + addthree;
	addtwo.Print();
	cout << endl;

	//����
	Exer minusone(10, 20), minustwo(10, 10), minusthree(20, 30);
	minustwo = minusone - 10;
	minustwo.Print();
	minustwo = 30 - minusone;
	minustwo.Print();
	minustwo = minusone - minusthree;
	minustwo.Print();
	cout << endl;

	//���ϱ�
	Exer multione(10, 20), multitwo(10, 10), multithree(20, 30);
	multitwo = multione * 10;
	multitwo.Print();
	multitwo = 30 * multione;
	multitwo.Print();
	multitwo = multione * multithree;
	multitwo.Print();
	cout << endl;

	//������
	Exer divideone(10, 20), dividetwo(10, 10), dividethree(20, 30);
	dividetwo = divideone / 10;
	dividetwo.Print();
	dividetwo = 30 / divideone;
	dividetwo.Print();
	dividetwo = divideone / dividethree;
	dividetwo.Print();
	cout << endl;
}