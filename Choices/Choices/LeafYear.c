#include <stdio.h>

/*
   윤년(2월이 29일까지 있는 해)을 판정하기
   -4년에 한 번 윤년이 있다.
   -100의 배수는 윤년이 아니다.
   -400의 배수는 윤년이다.
*/

int main()
{
	int year;
	printf("년도를 입력하세요: ");
	scanf_s("%d", &year);

	// 거짓(0) || 참(1)
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
		printf("윤년입니다.\n");
	}
	else {
		printf("윤년이 아닙니다.\n");
	}
	return 0;
}