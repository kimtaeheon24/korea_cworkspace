#include<stdio.h>
/*
	x부터 y까지의 합계
	1. 출력형태
	1+2+3+4+5 = 15
	2. calcSum2(1,5);  //x > y
	2. calcSum2(5,1);  //x < y
*/
void calcSum(int, int );
void swap(int*, int* );
int main() {
	calcSum(1, 5); //호출
	calcSum(5, 1); 



	return 0;
}
void swap(int* x, int* y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void calcSum(int x, int y) {
	int sum, i;
	//첫번째 수가 두번째수보다 클때
	if (x > y)
		swap(&x, &y);

	printf("%d", x);
	sum = x;
	for (i = x + 1; i <= y; i++) {
		printf("+%d", i);
		sum = sum + i;
	}
	printf("=%d\n", sum);
	printf("%d에서 %d까지의 합은 %d\n", x, y, sum);
}