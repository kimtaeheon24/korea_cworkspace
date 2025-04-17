#include <stdio.h>
/*
   조건 연산자
   (조건식) ? 참 : 거짓;
*/
int main()
{
	int value;
	value = (3 > 4) ? 10 : 20;
	printf("결과값 : %d\n", value);

	int fatherAge = 44;
	int motherAge = 46;
	char result;  //'T' / 'F'를 저장할 변수

	result = (fatherAge > motherAge) ? 'T' : 'F';
	printf("결과값 : %c\n", result);

	//절대값
	int x = 5;
	int adsult2;

	result = (x < 0) ? -x : x;
	printf("결과값 : %d\n", rlsult2);


	return 0;
}