#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
/*
	영어 타자 게임
	- 문자열 -> 배열 : strtok()
	- 랜덤한 단어 출제: srand(), rand()
	- 사용자 입력 : malloc(), free()
*/
#define MAX_WORDS 20  // 단어의 최대 개수
#define MAX_LENGTH 20
int main() {

	//1. 단어 분리 및 저장
	char words[] = "ant bear chicken cow dog elephant horse monkey lion tiger";
	char* wordList[MAX_WORDS];  //분리된 단어 저장할 배열
	int idxOfWords = 0;

	char* ptr = strtok(words, " ");
	while (ptr != NULL) {
		wordList[idxOfWords++] = ptr;
		ptr = strtok(NULL, " ");
	}
	//2. 타자 게임 준비
	char* question;  //문제
	char* answer = (char*)malloc(sizeof(char) * MAX_LENGTH);  //사용자 입력
	int n = 1; //문제 번호
	clock_t start, end;  //시작시간, 종료시간
	double elapsed;   //소요 시간
	srand(time(NULL));

	printf("타자 게임, 준비되면 엔터");
	getchar();
	start = clock();
	while (n < 11) {
		printf("\n문제 %d\n", n);
		int rndIdx = rand() % idxOfWords;
		question = wordList[rndIdx];  //랜덤한 문제
		printf("%s\n", question);
		scanf("%s", answer);
		if (strcmp(question, answer) == 0) {
			printf("통과!\n");
			n++;
		}
		else {
			printf("오타! 다시 도전!\n");
		}
	}
	end = clock();
	elapsed = (double)(end - start) / CLOCKS_PER_SEC;
	printf("소요 시간: %.1lf", elapsed);

	free(answer); //메모리 반납
	return 0;
}