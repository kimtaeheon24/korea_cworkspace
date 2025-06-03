#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
	아스키 코드(32 ~ 127)를 텍스트 파일에 쓰고 읽기
*/
int main() {
	FILE* fp;
	//상대 경로 - 내 파일을 기준으로 위치를 정함
	fp = fopen("ascii.txt", "w");
	if (fp == NULL) {
		printf("파일 열기에 실패했습니다.\n");
		return 1;  //에러시 1 or -1
	}

	printf("======== ASCII 테이블 ========\n");
	for (int i = 32; i < 128; i++) {  //32(공백문자)
		if (i % 10 == 0)
			fputc('\n', fp);
		fputc(i, fp);
		fputc('\t', fp);  //탭(간격) 키 넣음
	}
	
	fclose(fp);

	return 0;
}