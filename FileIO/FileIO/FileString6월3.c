#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	FILE* fp;
	char str[] = "abcdefg\nhijklmn\nopqrstu\nvwxyz";
	int ch;  //fgetc 파일 읽기 변수 
	int i = 1;
	char buf[256];  //문자를 저장할 배열 생성
	/*파일 쓰기
	-fputs(fp);
	- fprintf(fp, "서식문자", 데이터);
	
	파일 읽기
	- int ch(변수), fgetc(fp) EOF(-1)와 비교
	- char str[](배열), fgets(데이터, 데이트의 크기, fp)NULL과 비교*/

	//파일 쓰기
	fopen_s(&fp, "data.txt", "w");
	if (fp == NULL) { printf("파일 열기 실패"); return 1; }

	fprintf(fp, "%s\n", str);

	fclose(fp);

	//파일 읽기
	fopen_s(&fp, "data.txt", "r");
	if (fp == NULL) { printf("파일 열기 실패"); return 1; }

	//fgetc로 읽기
	/*while ((ch = fgetc(fp)) != EOF) {
		printf("%c", ch);
	}*/


	//fgets(저장공간, 크기, 스트림파일)로 읽기 - 문자열로 출력
	while(fgets(buf, sizeof(buf), fp)!= NULL){
		printf("%d %s", i,buf);
		i++;
	}

	fclose(fp);

	return 0;
}