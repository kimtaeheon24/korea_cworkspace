#include<stdio.h>
/*
	- 토글 알고르즘 : 상태(플로그)를 바꾸는 알고리즘
	  어떤 상태가 계속 유지되는 것
	  예) 한/영, CapsLock
*/
int main() {
	int a[5] = { 9,8,7,6,7 };
	int count = 0;  //찾은 요소 개수
	//요소 7 찾기
	for (int i = 0; i < 5; i++) {
		if (a[i] == 7) {
			printf("7 발견!\n");
			count++;
		}
	}
	printf("%d개 발견\n", count);
	printf("\n");

	//요소 7을 1개 발견하면 종료
	int sw = 0;  //상태(플래그)  0 = 찾지못함, 1 = 찾음
	for (int i = 0; i < 5; i++) {
		if (a[i] == 7) {
			printf("7 발견!\n");
			sw = 1;
			break;
		}
	}
	if (sw == 0) { printf("7 발견 못함!\n"); }
	


	return 0;
}