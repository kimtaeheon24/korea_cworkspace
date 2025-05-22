#include<stdio.h>
#include<string.h>
typedef struct {
	int no;
	char name[20];
	int age;
}Hero;
int main() {
	//구조체 변수 선언
	Hero hero1 = { 1, "고담덕", 39 };
	
	//구조체 포인터 선언
	//동적 할당


	//정보 출력
	printf("%d %s %d\n", hero1.no, hero1.name, hero1.age);
	return 0;
}