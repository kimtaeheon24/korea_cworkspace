#include <stdio.h>
/*
	반복 조건문
	while(1) //무한반복
	{
		if(){break;}
	}

*/

int main() {
	//1부터 10까지 합계 출력
	int n = 1; 
	int hap = 0;
	while (1)//무한 반복(1 - 참) 
	{
		if (n > 10)
			break;
		hap += n; //hap = hap + n ;
		printf("%d ", n);
		n++;
	}
	printf("\nn=%d, hap = %d\n", n, hap);

	return 0;
}