#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
	텍스트 파일(.txt)을 읽기
	- fgetc() - 한 문자씩 읽기
	- fgets() - 여러개 문자 읽기
*/
int main() {
	FILE* fp; //파일
	int ch;  //읽은 문자(아스키 코드값) 저장할 변수

	fp = fopen("c:/cfile/out.txt", "r");
	if (fp == NULL) {
		printf("파일 읽기에 실패함\n");
		return 1;
	}

	//파일 읽기
	//ch = fgetc(fp);
	//printf("%c\n", ch);

	//while (1) {
	//	ch = fgetc(fp);
	//	//EOF(EndOfFile)는 -1과 같다
	//	if (ch == EOF) break;
	//	printf("%c", ch);
	//}

	while ((ch = fgetc(fp)) != EOF) {
		printf("%c", ch);
	}
	ch = fgets(fp);
	printf("%s", ch);
	fclose(fp);

	return 0;
}