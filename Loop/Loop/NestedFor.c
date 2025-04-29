#include <stdio.h>
/*
	중첩된 for문
	외부 for(){
		내부 for(){

		}
	}
	
*/
int main() {
	//5행 5열 문자 채우기
	int i, j;  //반복 변수 선언
	for (int i = 1; i <= 5; i++) {
		for (int j = 1;j <= 5;j++) {
			printf("가");
		}
		printf("\n");
	}
	/*
	  i=1, j=1,  가
	       j=2,  가가
		   j=3,  가가가
		   j=4,  가가가가
		   j=5,  가가가가가
	*/
	//직각삼각형 모양의 별
	for (int i = 1; i <= 5; i++) {
		for (int j = 1;j <= i;j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i <= 5; i++) {
		for (int j = 1;j <= 6 - i;j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	//1부터 순서대로 출력
	/*
	   1 2 3 4 5
	   6 7 8 9 10
	   11 12 13 14 15
	   16 17 18 19 20
	*/
	int num;
	for (int i = 0; i < 4; i++) {
		for (int j = 1; j <= 5; j++) {
			//j의 종료값(배수)
			num = 5 * i + j;
			printf("%d ",num);
		}
		printf("\n");
	}
	printf("\n");
	//특정 수에서 멈추기
	for (int i = 0; i < 4; i++) {
		for (int j = 1; j <= 5; j++) {
			//j의 종료값(배수)
			num = 5 * i + j;
			if(num > 17) break;
			printf("%d ", num);
		}
		printf("\n");
	}


	return 0;
}