#include <stdio.h>
/*
	for(초기값; 종료값; 증감값){
		실행문;
		}
*/
int main() {
	//1부터 10까지 출력한다
	for (int i = 1; i <= 10; i++) {
		printf("%d ", i);
	}

	//1부터 10까지 합계
	int sum = 0;  //합계를 저장할 변수 선언
	int n; //전역 변수
	for (n = 1; n <= 10; n++) {
		if (n % 2 != 0) {
			sum += n;
		}
		printf("n=%d, sum = %d\n", n, sum);
	}
	printf("n=%d, 홀수의 합계 = %d\n", n, sum);

	

	return 0;
}