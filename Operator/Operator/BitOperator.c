#include <stdio.h>
/*
   비트 연산자 - 비트이동, 비트 논리
*/

int main()
{
	//비트 논리 연산
	int num1 = 5;    // 00000101
	int num2 = 10;   // 00001010
	int result;

	result = num1 & num2;  //모두 1일때만 1
	printf("result = %d\n", result); //00000000

	result = num1 | num2;  //둘중의 하나만 1이어도 1
	printf("result = %d\n", result);  //00001111
	printf("========================\n");
	//비트 이동
	int num3 = 2; //00000010
	int val1, val2, val3;

	val1 = (num3 << 2);  //00001000
	printf("result = %d\n", val1);

	val2 = (num3 << 1);  //00000100
	printf("result = %d\n", val2);

	val3 = (num3 >> 1);  //00000001
	printf("result = %d\n", val3);

	return 0;
}