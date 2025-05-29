#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
	구조체 배열의 동적 할당(포인터)
*/
typedef struct {
	int id;        //사원 아이디
	char name[20]; //이름
	int salary;    //급여
}Employee;

//정보 출력 함수 정의
void displayInfo(Employee* e,int len) {   //매개변수로 구조체 포인터 전달
	for(int i = 0; i<len; i++){
		printf("id: %d, 이름: %s, 월급: %d\n", (e+i)->id, (e+i)->name, (e+i)->salary);
	}
}
int main() {
	//구조체 배열 동적 할당
	Employee* emp;
	emp = (Employee*)malloc(sizeof(Employee) * 3);
	if (emp == NULL) {
		printf("동적 메모리 할당에 실패했습니다.\n");
		exit(1);
	}
	//printf("%d\n", sizeof(emp));   //8byte

	//사원 1명 생성
	emp->id = 1001;  //포인터는 화살표 연산자로 접근
	strcpy(emp->name, "강사원");
	emp->salary = 2000000;
	
	//사원 2명 생성
	(emp + 1)->id = 1002;
	strcpy((emp + 1)->name, "박대리");
	(emp + 1)->salary = 3000000;
	
	//사원 3명 생성
	(emp + 2)->id = 1003;
	strcpy((emp + 2)->name, "한과장");
	(emp + 2)->salary = 4000000;

	//정보 출력
	displayInfo(emp, 3);


	free(emp);
	return 0;
}