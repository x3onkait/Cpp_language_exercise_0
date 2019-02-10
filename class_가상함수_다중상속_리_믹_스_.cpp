#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
	char name[20];
public:
	Person(const char n[20]) {
		strcpy(name, n);
	}
	void printJob() {
		cout << "Person : " << name;
	}
};

class Actor : virtual public Person {
public:
	Actor(const char n[20]) : Person(n){ }
	/*
	���� Actor(char n[20]) : Person(n){ } �� �ʱ�ȭ ����Ʈ��� �Ѵ�.
	���� ������ �Ʒ� �Լ��� �����Ų�Ͱ� ����

	Actor(char n[20]){
		Person = n;
	}
	*/
	void printJob() {
		cout << "Actor : " << name;
	}
};

class Singer : virtual public Person {
public:
	Singer (const char n[20]) : Person(n){ } 
	void printJob() {
		cout << "Singer : " << name;
	}
};

class ActorSinger : public Actor, public Singer {
public:
	ActorSinger(const char n[20]) : Person(n), Actor(n), Singer(n) { } 
	void printJob() {
		cout << "name : " << Actor::name;
	}
};

void main() {
	ActorSinger obj("ȫ�浿");
	obj.printJob();
}