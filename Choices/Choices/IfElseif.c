#include <stdio.h>
/*
   다중 조건문(다중 if)
   if(조건식){}
   else if(){}
   else{}
*/
int main(){
	/*
	   과목의 점수에 따른 학점 계산하기
	   - 90~100점 : A
	   - 80~89점 : B
	   - 70~79점 : C
	   - 70점 미만: F
	*/

	int score;  //점수를 저장할 정수형 변수
	char grade; //학점을 저장할 문자형 변수

	printf("학점을 입력하세요:");
	scanf_s("%d", &score);
	
	if (score >= 90 && score <= 100) {
		grade = 'A';
	}
	else if (score >= 80) {
		grade = 'B';
	}
	else if (score >= 70) {
		grade = 'C';
	}
	else{
		grade = 'F';
	}
	printf("학점은 %c입니다.\n", grade);

	return 0;
}