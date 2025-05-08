#include <stdio.h>
#include "calCulator.h"  //사용자 정의 헤더파일은 쌍따옴표 사용해야 함

int main() {
	//변수(지역) 선언
	int value1, value2;
	int x = 3, y = 4;
	
	//연산 및 함수 호출
	value1 = add(x, y);
	value2 = factorial(y);
	count++;

	//출력
	printf("vaule1 = %d\n", value1);
	printf("%d! = %d\n",y, value2);
	printf("%5! = %d\n", factorial(5));
	printf("count = %d\n", count);
	
	system("pause");  //exe 실행파일이 꺼지지 않도록 험

	return 0;
}