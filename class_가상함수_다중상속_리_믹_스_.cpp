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
	위의 Actor(char n[20]) : Person(n){ } 은 초기화 리스트라고 한다.
	위의 문장은 아래 함수를 실행시킨것과 같다

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
	ActorSinger obj("홍길동");
	obj.printJob();
}