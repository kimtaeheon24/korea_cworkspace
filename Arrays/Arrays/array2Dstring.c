#include<stdio.h>
/*
	2차원 배열 - 문자열
*/
int main() {
	//문자열 배열 생성
	//char greet[] = "hello";

	//printf("%s\n", greet);

	//2차원 배열 - words[단어의 개수][최대 문자의 수]
	char words[][10] = {
		"sun",
		"moon",
		"earth",
		"flower"
	};
	int i, j;
	
	//특정 단어 조회
	printf("%s\n", words[0]);
	printf("%s\n", words[3]);

	//전체 조회
	//배열의 크기
	int size = sizeof(words) / sizeof(words[0]);  //배열의 크기
	printf("%d\n", size);
	
	for (i = 0; i < size; i++) {
		printf("%s\n", words[i]);
	}

	//문자로 출력
	for (i = 0; i < size; i++) {
		for (j = 0; words[i][j] != NULL; j++) {
			printf("%c ", words[i][j]);
		}
		printf("\n");
	}

	return 0;
}