#include <stdio.h>
int main() {
	/*
		성적의 개수, 합계, 평균, 최대값, 최소값
	*/

	int score[5] = { 85, 75, 90, 75, 80 };
	int sum = 0; //합계
	int i;       //반복 변수
	double avg; //평균
	int min, max;    //최소값, 최대값

	//배열의 크기(개수)
	int count = sizeof(score) / sizeof(score[0]);  //20byte / 4byte = 5 
	printf("배열의 크기: %d\n", count);

	//성적의 합계
	//sum = score[0] + score[1] + score[2] ...
	for (i = 0; i < count; i++) {
		sum += score[i]; //sum = sum + score[i];
	}
	printf("sum = %d\n", sum);
	
	//평균 계산
	avg = (double)sum / count;  //우측이 int가 되므로 (double)로 강제 형변환
	printf("평균 = %.1f\n", avg);

	//최소값
	min = score[0];  //배열의 첫째값을 최소값으로 설정
	for (i = 1; i < count; i++) {
		if (score[i] < min)  //비교할 점수가 최소값보다 작으면
			min = score[i];  //그 점수를 최소값에 저장
	}
	/*
		i = 1; 85 < 75, min = 75
		i = 2; 90 < 75, min = 75
		i = 3; 75 < 75, min = 75
		i = 4; 80 < 75, min = 75
	*/
	printf("최소값: %d\n", min);
	max = score[0];
	for (i = 1; i < count; i++) {
		if (score[i] > max)   //비교할 점수가 최대값보다 크면
			max = score[i];   //그 점수를 최대값에 저장
	}
	printf("최대값: %d\n", max);

	return 0;
}