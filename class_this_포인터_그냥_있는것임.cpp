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
			cout << "�α��ο� �����߽��ϴ�." << endl;
		}
		else {
			cout << "�α��ο� �����߽��ϴ�. �ٽ� �õ��� �ּ���." << endl << endl;
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
	SYS.startLoginSystem(); //�α��� Ŭ���� ����!
}