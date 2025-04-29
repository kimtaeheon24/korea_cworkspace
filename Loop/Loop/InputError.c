#include <stdio.h> //printf(), getchar()
int main() {
	/*
		숫자 입력시 문자 입력으로 인한 오류 처리
	*/
	int num;
	/*printf("숫자를 입력하세요:");
	scanf_s("%d", &num);

	printf("%d\n", num);*/

	char ch;
	//printf("1개의 문자 입력: ");
	//ch = getchar(); //오류처리 할때 쓴다
	//printf("입력한 문자: %c", ch);
	
	int ch2;
	//printf("1개의 문자 입력: ");
	//ch2 = getchar();
	//printf("입력한 문자: %c", ch2); 

	//문자 입력시 오류 처리
	while (1) {
		printf("숫자를 입력하세요:");
		int result = scanf_s("%d", &num);
		//c언어 - 1이 (true), 0(false)
		if (result == 1) {
			printf("%d\n", num);
			break;
		}
		else {
			//버퍼(임시기억공간) 비우기
			//'\n' (제어문자 - LF(10))
			while (getchar() != '\n');  //'\n'이 나올때까지 모든 문자 제거
			printf("잘못된 입력입니다.\n");
		}
	}

	return 0;
}