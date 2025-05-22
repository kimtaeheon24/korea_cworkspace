#include<stdio.h>

//과일 구조체 정의
typedef struct {
	//Fruit의 속성(멤버 변수)
	char name[20];   //과일 이름
	int quantity;    //수량
	char* type;       //과일 종류
}Fruit;

int main() {
	//포인터 배열 선언
	char* types[] = { "Apple", "Banana", "Orange" };
	Fruit f = {
		.name = "대구 사과",
		.quantity = 100,
		.type = types[0]
	};
	Fruit* ptr;  //구조체 포인터 선언
	
	ptr = &f;   //구조체 변수에 주소를 저장

	printf("=== 포인터로 접근 ===");
	printf("과일 이름: %s\n", ptr->name);
	printf("수량: %d\n", ptr->quantity);
	f.type = "Grepe";
	printf("과일 종류: %s\n", ptr->type);

	//printf("=== 변수로 접근 ====\n");
	//printf("과일 이름: %s\n", f.name);
	//printf("수량: %d\n", f.quantity);
	//f.type = "Grepe";
	//printf("과일 종류: %s\n", f.type);


	return 0;
}