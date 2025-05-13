#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/*
	숫자 추측 게임
	-컴퓨터가 난수를 생성
	-사용자가 예측한 수를 입력
	1.정답
	2.추측한수 > 난수
	3.추측한수 < 난수
*/
int main() {
	srand(time(NULL));
	int randNum;   //컴퓨터가 생성한 난수
	int guessNum;  //사용자가 추측한 수
	int count =5;     //시도한 횟수

	randNum = rand() % 50 + 1;  //1 ~ 50까지의 난수
	//printf("컴푸터의 수: %d\n", randNum);

	while (1) {
		printf("남은 횟수: %d번\n", count--);
		printf("1~50 까지의 숫자를 입력하세요: ");
		scanf_s("%d", &guessNum);
		
		if (guessNum == randNum) {
			printf("정답이에요\n");
			printf("컴퓨터의 수 : %d\n", randNum);
			break;
		}
		else if (guessNum > randNum) {
			printf("작아야 됩니다.\n");
		}
		else {
			printf("커야 됩니다.\n");
		}

		if (count == 0) {
			printf("남은 횟수가 0입니다. 아쉽게 실패했어요..");
			printf("컴퓨터의 수 : %d\n", randNum);
			break; 
		}
	}


	return 0;
}