#define _CRT_SECURE_NO_WARNINGS //fopen()
#include<stdio.h>

int main() {
	//파일 열기
	FILE* fp;
	int ch;   //아스키 코드를 읽어 저장할 변수
	fp = fopen("ascii.txt", "r");
	if (fp == NULL) { printf("파일 읽기에 실패함."); return 1; }

	//파일 읽기
	//while (1) {
	//	ch = fgetc(fp);
	//	if (ch == EOF) { break; }//EOF(End Of File) = -1
	//	printf("%c", ch);

	//}
	while ((ch = fgetc(fp)) != EOF) {
		printf("%c", ch);
	}

	//파일 종료
	
	fclose(fp);


	return 0;
}