#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define BUFFER_SIZE 4096   //4KB 버퍼 크기
/*
	이미지 파일 복사하기
*/
int main() {
	FILE* fin = fopen("flower.jpg", "rb");  //읽기
	FILE* fout = fopen("flower2.jpg", "wb"); //쓰기
	if (fin == NULL || fout == NULL) {
		printf("파일 열기에 실패");
		return 1;
	}

	//버퍼를 이용한 복사(빠르게 복사)
	int buf[BUFFER_SIZE];
	int bytesRead;  //읽은 바이트 저장

	while ((bytesRead = fread(buf, sizeof(int), BUFFER_SIZE, fin))>0) {
		fwrite(buf, sizeof(int), bytesRead, fout);
	}

	fclose(fin);
	fclose(fout);

	return 0;
}