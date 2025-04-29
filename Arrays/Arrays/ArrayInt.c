#include <stdio.h>
int main() {
	/*
		배열(array) - 동일한 자료형의 여러 개의 값을 저장할 때 사용
		- 배열의 각각의 값을 = 요소(element)라 함
		- 배열의 값은 인덱스(index)라는 번호로 구분함
		- 배열의 선언 : 자료형 배열이름 [배열의 크기]
	*/
	//배열의 필요성 - 변수가 많아지면 비 효율적
	//int num1 = 10;
	//int num2 = 20;
	//int num3 = 30;
	//printf("%d %d %d\n", num1, num2, num3);
/*	int num[4];*/ // 배열의 크기가 4인 정수형 num이라는 배열

	//요소 추가
	//num[0] = 10;
	//num[1] = 20;
	//num[2] = 30;
	//num[3] = 40;

	//배열의 선언과 동시에 초기화
	int num[4] = { 10, 20, 30, 40 };

	//특정 요소 출력
	printf("%d\n", num[0]); //10

	//요소 수정
	num[1] = 50;

	//전체 요소 출력
	for (int i = 0; i < 4; i++) {
		printf("%-3d", num[i]);
	}
	printf("\n");

	//메모리 주소 출력(int형이므로 4byte이다.)
	printf("%x %x %x\n", &num[0], &num[1], &num[2]);
	//배열의 이름은 배열의 시작 주소이다.
	printf("%x %x %x\n", num, num+1, num+2);


	return 0;
}