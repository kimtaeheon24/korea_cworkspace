#include <stdio.h>
#define RATE_KPH_MPH 1.6093 //변환 상수

/*
   KPH(킬로미터)를 MPH(마일)로 변환
*/

int main()
{
	int kph;  //kilometer per hour 킬로미터 퍼 아워
	double mph;  //mile per hour 마일

	printf("당신의 구속을 입력하세요[KPH]: ");
	scanf_s("%d", &kph);

	//변환 : 킬로미터 / 변환상수
	mph = kph / RATE_KPH_MPH;

	printf("당신의 구속은 %.2lf[MPH]입니다.\n", mph);

	return 0;
}