#include<stdio.h>
/*
	재귀(recursive) 알고리즘 : 자기 자신을 호출(함수)하는 것을 말한다.
	함수 내부에 같은 자기 자신 함수()
	무한 반복을 하므로 종료 조건이 필수다.
	if문을 사용함

	팩토리얼(계승) 구현하기
	5! = 5 x 4 x 3 x 2 x 1
*/
int getGob(int n) {
	int gob = 1;
	for (int i = 1; i <= n; i++) {
		gob *= i;
	}
	return gob;
}
int facto(int n) {
	if (n == 0) return 1;
	else
	return n * facto(n- 1);
}
int main() {
	//1부터 5까지 곱하기
	/*int gob = 1;
	for (int i = 1; i <= 5; i++) {
		gob *= i;
	}
	printf("결과값1: %d\n", getGob(5));*/

	//재귀 호출
	printf("0! = %d\n", facto(0));  //1
	printf("1! = %d\n", facto(1));  //1
	printf("2! = %d\n", facto(2));  //2
	printf("3! = %d\n", facto(3));  //6
	printf("4! = %d\n", facto(4));  //24
	printf("5! = %d\n", facto(5));  //120




	return 0;
}