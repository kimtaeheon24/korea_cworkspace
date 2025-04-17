#include <stdio.h>
int main()
{
	//변수값 교환하기
	//'=' - 대입 연산자
	int x = 1;
	int y = 2;
	int temp;  //교환을 위한 변수

	printf("====== 교환전 ======\n");
	printf("x = %d, y = %d\n", x, y);
	
	printf("====== 교환후 =====\n");
	temp = x;
	x = y;
	y = temp;
	printf("x = %d, y = %d\n", x, y);

	printf("\n");

	//복합대입 연산자 -> 산술 연산자 + 대입 연산자
	
	int val = 10;
	
	val += 3;  //val = val + 3;
	printf("%d\n", val); //13

	val -= 3;  //val = val - 3;
	printf("%d\n", val); //10

	val *= 3;  //val = val * 3;
	printf("%d\n", val); //30

	val /= 3;  //val = val / 3;
	printf("%d\n", val); //10

	val %= 3;  //val = val % 3;
	printf("%d\n", val); //1

	return 0;
}