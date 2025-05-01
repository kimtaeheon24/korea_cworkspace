#include <stdio.h>
int main() {
	/*
		크기가 10인 정수형 배열의 선언
		1부터 10까지 저장하고, 합계 계산하기
	*/
	int a[10];
	int i;   //반복 변수 선언
	int total = 0; //합계를 저장할 변수

	//요소 저장
	//a[0] = 1;
	//a[1] = 2;
	//a[2] = 3;
	
	for (i = 0; i < 10; i++) {
		a[i] = i + 1;
		total += a[i];  //total = total + a[i];  
		printf("a[%d]=%d, total = %d\n", i, a[i], total);
	}
	printf("합계: %d\n", total);
	//출력
	//for (i = 0; i < 10; i++) {
	//	printf("%d ", a[i]);
	//}
	
	


	return 0;
}