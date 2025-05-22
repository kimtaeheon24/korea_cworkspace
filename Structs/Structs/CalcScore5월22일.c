#include<stdio.h>
/*
	- 중첩 구조체 포인터 활용
	- 학생 구조체가 성적 구조체 자료형을 참조
*/
//성적 구조체 정의
typedef struct {
	int math, eng;  //수학, 영어 점수
	double avg;     //평균
}Score;
//학생 구조체
typedef struct {
	int number;  //학번
	char name[20];  //이름
	Score score; //성적 구조체 참조

}Student;
//과목의 평균
void calcAvg(Score* score) { //포인터를 필수적으로 전달함
	score->avg = (score->math + score->eng) / 2.0;  //실수형으로 자동형변환
}
//학생의 정보 출력
void showInfo(Student* s) {
	printf("학번: %d 이름: %s\n", s->number, s->name);
	printf("수학: %d, 영어: %d\n", s->score.math, s->score.eng);
	printf("평균: %.1lf\n", s->score.avg);
}
int main() {
	Student st1 = { 
		.number = 101, 
		.name = "임시현",
		.score = {95,88, 0.0} 
	};
	Student st2 = {
		.number = 102,
		.name = "이정후",
		.score = {80,85,0.0}
	};

	//과목의 평균
	calcAvg(&st1.score);
	calcAvg(&st2.score);

	//학생의 정보 출력
	//호출(매개변수로 구조체 변수를 전달)
	//포인터(8byte)를 사용하면 매개변수로 복사시 용량을 축소함
	showInfo(&st1);  
	showInfo(&st2);  


	return 0;
}