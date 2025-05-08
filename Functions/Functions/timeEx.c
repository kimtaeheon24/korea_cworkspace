#include <stdio.h>
#include <time.h> //time()
#include <Windows.h>  //Sleep()
/*
	시간 함수 - time.h 포함
	- time_t 자료형을 사용
*/

int main() {
	time_t now;
	//long now;
	now = time(NULL); //time(NULL) - 시간이 계속 흐름을 의미

	//ld - long decimal
	//유닉스(운영체제)가 사용을 기준으로 함
	//초(second) 기준
	printf("1970년 1월 1일(0시 0분 0초)이후 %ld초\n", now);
	//일(day)로 환산
	printf("1970년 1월 1일(0시 0분 0초)이후 %ld일\n", now/(24*60*60));
	//년(year)로 환산
	printf("1970년 1월 1일(0시 0분 0초)이후 %ld년\n", now / (365* 24 * 60 * 60));

	//수행 시간 측정
	/*time_t start, end;

	start = time(NULL); //시작 시간
	printf("시작 시간: %ld초\n", start);

	//1~10까지 출력
	for (int i = 1; i < 11; i++) {
		printf("%d\n", i);
		Sleep(1000);  //1초 - 1000
	}

	end = time(NULL);
	printf("시작 시간: %ld초\n", start);
	printf("수행시간: %ld초\n", (end - start));
	*/
	//정밀한 수행시간 측정
	clock_t start, end;
	double elapsedTime; //소요 시간
	 
	start = clock(); //시작 시각

	//1~10까지 출력
	for (int i = 1; i < 11; i++) {
		printf("%d\n", i);
		Sleep(500);  //1초 - 1000
	}
	end = clock(); //종료 시각

	//ClOCKS_PER_SEC - 초당 시각 상수
	elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
	printf("소요 시간: %.2lf초\n", elapsedTime);

	return 0;
}