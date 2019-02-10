#include <iostream>
#include <string>

using namespace std;

void main() {
	string ID = "홍길동", PASSWORD = "1";	//설정된 패스워드
	string entered_id, entered_password;	//입력될 패스워드

	while (1) {
		cout << "ID를 입력해 주세요 -> ";
		cin >> entered_id;
		cout << "PASSWORD를 입력해 주세요 -> ";
		cin >> entered_password;

		if (entered_id == ID && entered_password == PASSWORD) {
			cout << "로그인에 성공했어요!" << endl;
			break;
		}
		else {
			if (entered_id == ID) {
				cout << "잘못된 비밀번호를 입력했습니다." << endl;
			}
			if (entered_password == PASSWORD) {
				cout << "잘못된 아이디를 입력했습니다. " << endl;
			}
			if (entered_id != ID && entered_password != PASSWORD) {
				cout << "아예 없는 정보를 입력했습니다. " << endl;
			}
			cout << "다시 시도하세요." << endl;
			system("pause");
			system("cls");
		}
	}
}