#define _CRT_SECURE_NO_WARNINGS  //fopne()
#include<stdio.h>
/*
	텍스트 파일 - 문자를 쓰는(저장) 파일
*/
int main() {
	//파일 구조체 포인터 변수 선언
	FILE* fp;

	//파일을 열기
	//fopen(파일, 쓰기모드) //파일 위치 - 절대 경로
	// cfile 디렉터리(폴더)는 미리 생성되어야 함
	//out.txt는 기존에 있으면 저장이 되고, 없으면 새로 생성됨
	fp = fopen("c:/cfile/out.txt","w");
	if (fp == NULL) {
		printf("파일 열기에 실패했습니다.\n");
		return 1;
	}
	//파일 쓰기
	//문자 1개 쓰기
	fputc('H', fp);
	fputc('e', fp);
	fputc('l', fp);
	fputc('l', fp);
	fputc('o', fp);

	//문자열 쓰기
	fputs("\nApple\n", fp);  //영어
	fputs("\n좋아욤\n", fp);  //한글



	//파일 종료
	fclose(fp);


	return 0;
}