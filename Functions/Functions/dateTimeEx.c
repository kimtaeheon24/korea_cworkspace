#define _CRT_SECURE_NO_WARNINGS //local time(&ct)오류 처리
#include <stdio.h>
#include <time.h>

int main() {
	//날짜 표시
	time_t ct;  //현재 시간 변수 선언
	struct tm* now;  //구조체 변수 선언
	
	//현재 시간 가져오기
	ct = time(NULL);
	now = localtime(&ct);  //ct의 주소를 매개로 전달

	printf("%d년\n", now->tm_year + 1900);
	printf("%d월\n", now->tm_mon + 1);
	printf("%d일\n", now->tm_mday);


	return 0;
}