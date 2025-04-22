#define _CRT_SECURE_NO_WARNINGS //scanf()
#include <stdio.h>


int main()
{
	/*	
	짝수/홀수를 판정하는 프로그램
	짝수 - 2, 4, 6, 8...(2로 나누면 나머지가 0)
	홀수 - 1, 3, 5, 7...(2로 나누면 나머지가 1)
	*/
	//int num = 12;
	int num;
	printf("수를 입력하세요: ");
	scanf("%d", &num);
	
	/*
		어떤 수가 10보다 큰지 작은지를 구분하고,
		10보다 큰 경우의 짝수와 홀수를 구분하고
		10보다 작은 경우의 짝수와 홀수 구분
	*/
	if (num > 10) {
		if (num % 2 == 0)
		{
			printf("%d는 10보다 큰 짝수입니다.\n", num);
		}
		else //(num % 2 != 0)
		{
			printf("%d는 10보다 큰 홀수입니다.\n", num);
		}
	}
	else {
		if (num % 2 == 0)
		{
			printf("%d는 10보다 작은 짝수입니다.\n", num);
		}
		else //(num % 2 != 0)
		{
			printf("%d는 10보다 작은 홀수입니다.\n", num);
		}
	}
	return 0;
}