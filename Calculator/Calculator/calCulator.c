//calCulator.c

//함수 구현부
int add(int x, int y) {
	return x + y;
}

//팩토리알 - 계승(3! = 3x2x1)
//1부터 특정 수 까지 곱하기
int factorial(int n) {
	int facto = 1;  //곱하기는 1로 초기화
	for (int i = 1; i <= n; i++) {
		//facto = facto * i;
		facto *= i;
	}
	return facto;

}