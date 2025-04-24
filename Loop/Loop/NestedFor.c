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
	return 0;
}