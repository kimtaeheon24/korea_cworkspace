#define _CRT_SECURE_NO_WARNINGS //scaf() 사용시 보안 오류
#include <stdio.h>
int main() {
	//회원이 정보 입력 - 아이디, 패스워드, 이름, 몸무게, 키
	char id[20], password[256], name[30];
	float weight, height;

	printf("\n=====회원 정보 입력 =====\n");
	printf("아이디 입력: ");
	//scanf("%s", id); //배열은 주소 연산자(&)를 사용하지 않음
	//sizeof(id) - 입력크기를 제안해서 버퍼 오버플로우(넘치는 거) 방지
	scanf_s("%s", id, sizeof(id)); 

	printf("패스워드 입력: ");
	scanf_s("%s", password, sizeof(password));
	
	printf("이름 입력: ");
	scanf_s("%s", name, sizeof(name));

	printf("몸무게 입력: ");
	scanf_s("%f", &weight);

	printf("키 입력: ");
	scanf_s("%f", &height);

	//회원 정보 출력
	printf("\n===== 회원 정보 출력 =====\n");
	printf("아이디: %s\n", id);
	printf("패스워드: %s\n", password);
	printf("이름: %s\n", name);
	printf("몸무게: %3.1f\n", weight);
	printf("키: %.1f\n", height);

	return 0;
}