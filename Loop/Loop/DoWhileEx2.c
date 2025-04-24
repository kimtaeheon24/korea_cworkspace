#include <stdio.h>
/*
	숫자를 계속 입력받는데
	-1을 입력하면 종료
*/

int main() {
	int num = -1;
	//1. while문
	//while (num != -1) {    //while문 안으로 들어갈 수 없음
	//	printf("-1을 입력시 종료: ");
	//	scanf_s("%d", &num);
	
	
	//2. do ~ while 문
	/*do {
		printf("-1을 입력시 종료: ");
		scanf_s("%d", &num);
	} while (num !=-1 );*/

	//3.while ~ if ~ break(조건반복문)
	while(1) {
	printf("-1을 입력시 종료: ");
	scanf_s("%d", &num);
	if (num == -1)
		break;
}

	return 0;
}