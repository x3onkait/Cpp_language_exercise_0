//3의 배수를 판별하는 함수
int find3xNumber(int number) {
	if (number % 3 == 0) 
		cout << "입력하신 숫자 " << number << " 는 3의 배수가 맞습니다." << endl;
	if (number % 3 != 0) 
		cout << "입력하신 숫자 " << number << " 는 3의 배수가 아닙니다." << endl;

	cout << "입력한 숫자의 3n...을 출력합니다" << endl;

	for (int i = 0; i < number; i++) {
		if (i == 0)
			continue;
		if (i % 3 == 0)
			cout << i << " ";
		if (i % 30 == 0)
			cout << endl;	//보기좋게 줄바꿈
	}
	cout << endl;
}