#include<stdio.h>

//Employee(사운) 구조체 정의
typedef struct {
	int id;  //사원 아이디
	char name[20];  //사원 이름
	int salary;   //급여
}Employee;
int main() {
	//struct 없이 구조체 변수 선언
	Employee e1 = { 1, "이사원", 3000000 };

	printf("사원 ID: %d\n", e1.id);
	printf("이름: %s\n", e1.name);
	printf("급여: %d\n", e1.salary);
	
	//구조체 배열 3명
	/*Employee e1[3] = {
		{142, "이사원", 3300000},
		{424,"홍길동",324242},
		{4224,"김태헌",4234523}
	};*/

	/*for (int i = 0; i < 3; i++) {
		printf("사원ID: %d, 이름: %s, 급여: %d\n", e1[i].id,e1[i].name,e1[i].salary);

	}*/


	return 0;
}