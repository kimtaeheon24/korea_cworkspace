#include<stdio.h>
#include<time.h>    //time()
#include<stdlib.h>  //srand(), rand()
/*
	동전 던지기 게임
	- 동전을 던진다.
	- 사용자가 답을 입력
*/
int main() {
	int coin; //컴퓨터의 난수
	int you;  //사용자

	//문자 여러개
	//char aspect[][10] = { "앞면","뒷면" };
	char* aspect[] = {"", "앞면","뒷면"};  //문자 여러개
	
	srand(time(NULL));
	printf("앞면은 1, 뒷면은 2, 종료는 다른 값을 입력하세요\n");
	while (1) {
		coin = rand() % 2 + 1;
		printf("동전을 던졌습니다. 앞면? 뒷면? : ");
		scanf_s("%d", &you); //사용자 입력
		if (you < 1 || you>2) { printf("게임을 종료합니다.\n");break; }
		else {
			printf("사용자: %s,전 : %s\n", aspect[you], aspect[coin]);
			//조건 연산자 활용
			printf("%s\n", (you == coin) ? "맞았음" : "꽝");
		}
	}
	



	
	return 0;
}