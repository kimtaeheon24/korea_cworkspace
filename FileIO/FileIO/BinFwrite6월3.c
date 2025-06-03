#define _CRT_SECURE_NO_WARNINGS  //fopen()
#include<stdio.h>
/*
	바이너리 파일 읽고 쓰기
	- byte 기반
	- .dat, .db, 이미지, 음성, 영상
*/
int main() {
	//파일 열기
	//데이터 패킷 저장
	int buf1[4] = { 0xff,0x56,0x78,0xfa };
	int buf2[4]; //읽은 데이터 저장할 배열
	FILE* fp;

	//쓰기 모드 - "wb"
	fp = fopen("datas.dat", "wb");
	if (fp == NULL) { printf("쓰기 실패\n");return 1; }
	//파일 쓰기 - size_t형 -> int형
	//fwrite(버퍼공간, 버퍼의 크기, 요소의 크기, 파일스트림);
	fwrite(buf1, sizeof(int), 4, fp);


	//파일 종료
	fclose(fp);

	//바이너리 파일 읽기

	fp = fopen("datas.dat", "rb");
	if (fp == NULL) { printf("읽기 실패\n");return 1; }
	//fread(버퍼공간, 버퍼의 크기, 요소의 크기, 파일스트림)
	fread(buf2, sizeof(int), 4, fp);

	//모니터에 출력(표준 출력 스트림)
	printf("%x %x %x %x\n", buf2[0], buf2[1], buf2[2], buf2[3]);//16진수
	printf("%d %d %d %d\n", buf2[0], buf2[1], buf2[2], buf2[3]);//10진수

	return 0;
}