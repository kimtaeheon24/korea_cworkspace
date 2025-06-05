#include<stdio.h>
/*
	연결 리스트(배열을 보완한 자료구조)
	- 자기 참조 구조체 : struct 내부에 동일한 타입의 포인터 멤버 포함
	- 포인터를 이용한 노드 연결과 순회
*/
typedef struct List {
	int data;
	struct L* next;   //자기 참조
}L;
int main() {
	L x, y, z;  //구조체의 변수(노드)
	//초기화
	x.data = 10;
	y.data = 20;
	z.data = 30;

	//노드 연결(Liked List 구성)
	x.next = &y;   //x -> y
	y.next = &z;   //y -> z
	z.next = NULL; //z는 마지막 노드(리스트 끝)

	//포인터를 사용 - 리스트 순회
	L* p;
	p = &x;  //초기화
	
	printf("%d %p\n", x.data, p->next); //10 F720FFBE8

	p = p->next;
	printf("%d %p\n", y.data, p->next); //20 F720FFC18

	//노드 삭제(y 제거)
	x.next = y.next;
	y.next = NULL;

	printf("구조체 y 삭제후\n");


	//전체 출력
	for (p = &x; p != NULL; p = p->next) {
		printf("%d ", p->data);
	}

	return 0;
}