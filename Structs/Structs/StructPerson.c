#define _CRT_SECURE_NO_WARNIGS  //scanf, strcpy
#include<stdio.h>
/*
	구조체 - 여러가지 자료형을 묶어서 새로운 자료형을 만드는 것
*/

struct Person {
	char name[20]; //이름
	int age; //나이
	float height; //키
};
int main() {
	/*
	//구조체의 변수 선언 
	//방법 1
	//struct Person p1 = { "이정후", 26, 175.8f }; //초기화
	
	//방법2
	struct Person p1;
	strcpy_s(p1.name, sizeof(p1.name), "이정후");
	p1.age = 26;
	p1.height = 174.2f;
	

	//멤버변수에 접근할때 점(.) 연산자를 사용한다.
	printf("이름: %s\n", p1.name); 
	printf("나이: %d\n", p1.age); 
	printf("키: %.1lf\n", p1.height); 
	*/

	//구조체 배열
	struct Person p[3] = {
		{"이산",15,171.9f},
		{"한강",35,163.3f},
		{"박봄", 22, 178.4f}
	};
	int i;
	
	//p[0]의 정보
	/*printf("이름: %s\n", p[0].name);
	printf("나이: %d\n", p[0].age);
	printf("키: %.1lf\n", p[0].height);*/

	//전체출력
	for (i = 0; i < 3; i++) {
		printf("이름: %s 나이: %d 키: %.2lf\n", p[i].name, p[i].age,p[i].height);
	}


	return 0;
}