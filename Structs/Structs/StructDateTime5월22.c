#define _CRT_SECURE_NO_WANINGS   //localtime(&ct)
#include<stdio.h>
#include<time.h>
int main() {
	time_t ct = time(NULL);  //현재 시간
	//tm 구조체 포인터의 변수 생성
	struct tm* now = localtime(&ct);  //현재 날짜와 시간 생성
	
	printf("현재 날짜: %d. %d. %d.\n", now->tm_year + 1900,
		now->tm_mon + 1, now->tm_mday);

	//24시각제
	printf("현재 시간: %d : %d : %d\n", now->tm_hour,
		now->tm_min, now->tm_sec);

	//12시각제
	int hour = (now->tm_hour > 12) ? now->tm_hour - 12 : now->tm_hour;
	char* ampm = (now->tm_hour < 12 ? "오전" : "오후");
	printf("%s %d시 %d분 %d초\n", ampm, hour, now->tm_min, now->tm_sec);

	//요일(0-일, 1-월, 2-화.....)
	printf("현재 요일: %d\n", now->tm_wday);

	//요일 출력
	char* days[] = {"일","월","화","수","목","금","토"};
	int idx = now->tm_wday;

	printf("%s요일 입니다.\n", days[idx]);

	return 0;
}