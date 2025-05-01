#include <stdio.h>
//return이 있는 함수
//제곱수를 계산하는 함수 정의
int square(int x) {
	return x * x;
}

//절대값을 계산하는 함수
int myAbs(int x) {
	//x가 음수와 양수일 때 구분
	if (x < 0) {
		return -x;
	}
	else {  // x > 0
		return x;
	}
}
//두 수를 더하는 함수 정의
double add(double x, double y) {
	
	return x + y;
}

int main() {
	int value1, value2;
	double value3;
	value1 = square(4);	//square() 함수 호출
	value2 = myAbs(-5);	//myAbs() 호출
	value3 = add(2.54, 3.3); //add() 호출

	//출력
	printf("%d\n", value1);
	printf("%d\n", value2);
	printf("%.2lf\n", value3);



	return 0;
}