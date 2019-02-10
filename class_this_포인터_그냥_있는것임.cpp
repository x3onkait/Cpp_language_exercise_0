#include <iostream>
#include <string>

using namespace std;

class login {
private:
	string id = "xkde2";
	string password = "cpp";
public:
	void checklogin(string id, string password) {
		if (this->id == id && this->password == password) {
			cout << "로그인에 성공했습니다." << endl;
		}
		else {
			cout << "로그인에 실패했습니다. 다시 시도해 주세요." << endl << endl;
			doLogin();
		}
	}
	void doLogin() {
		string enteredId, enteredPassword;
		cout << "ENTER ID : ";
		cin >> enteredId;
		cout << "ENTER PASSWORD : ";
		cin >> enteredPassword;
		checklogin(enteredId, enteredPassword);
	}
	void startLoginSystem() {
		doLogin();
	}
};

void main() {
	login SYS;
	SYS.startLoginSystem(); //로그인 클래스 가동!
}