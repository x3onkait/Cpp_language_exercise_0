#include <iostream>
#include <string>

using namespace std;

void main() {
	string ID = "ȫ�浿", PASSWORD = "1";	//������ �н�����
	string entered_id, entered_password;	//�Էµ� �н�����

	while (1) {
		cout << "ID�� �Է��� �ּ��� -> ";
		cin >> entered_id;
		cout << "PASSWORD�� �Է��� �ּ��� -> ";
		cin >> entered_password;

		if (entered_id == ID && entered_password == PASSWORD) {
			cout << "�α��ο� �����߾��!" << endl;
			break;
		}
		else {
			if (entered_id == ID) {
				cout << "�߸��� ��й�ȣ�� �Է��߽��ϴ�." << endl;
			}
			if (entered_password == PASSWORD) {
				cout << "�߸��� ���̵� �Է��߽��ϴ�. " << endl;
			}
			if (entered_id != ID && entered_password != PASSWORD) {
				cout << "�ƿ� ���� ������ �Է��߽��ϴ�. " << endl;
			}
			cout << "�ٽ� �õ��ϼ���." << endl;
			system("pause");
			system("cls");
		}
	}
}