//3�� ����� �Ǻ��ϴ� �Լ�
int find3xNumber(int number) {
	if (number % 3 == 0) 
		cout << "�Է��Ͻ� ���� " << number << " �� 3�� ����� �½��ϴ�." << endl;
	if (number % 3 != 0) 
		cout << "�Է��Ͻ� ���� " << number << " �� 3�� ����� �ƴմϴ�." << endl;

	cout << "�Է��� ������ 3n...�� ����մϴ�" << endl;

	for (int i = 0; i < number; i++) {
		if (i == 0)
			continue;
		if (i % 3 == 0)
			cout << i << " ";
		if (i % 30 == 0)
			cout << endl;	//�������� �ٹٲ�
	}
	cout << endl;
}