#include <stdio.h>

int main()
{
	/*
	  비교 연산 - 참이면 1, 거짓이면 0
	  논리 연산 - &&(논리곱), ||(논리합), !(논리 부정)
	*/
	int a = 5, b = 3, c = 2;

	//비교 연산
	printf("(a > b) = %d\n", a > b); //1
	printf("(a < b) = %d\n", a < b); //0
	printf("(a == b) = %d\n", a == b); //0
	printf("(a != b) = %d\n", a != b); //1

	//논리 연산 - 비교연산이 2개 이상인 경우
	printf("%d\n", (a < b) && (b < c)); // 0 && 0 = 0
	printf("%d\n", (a > b) && (b < c)); // 0 && 0 = 0
	printf("%d\n", (a > b) && (b > c)); // 1 && 1 = 1

	printf("%d\n", (a > b) || (b < c)); // 1 || 0 = 1
	printf("%d\n", !(a > b)); // !1(1) = 0
	
	int val = 10;
	val += 3;
	printf("%d\n", val);

	return 0;
}