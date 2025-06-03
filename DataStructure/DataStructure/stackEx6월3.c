#include<stdio.h>
#define MAX_LEN 10
/*
	스택 자료구조
	- 배열에서 나중에 저장한 자료를 먼저 꺼내는 방식
*/
int stack[MAX_LEN];  //stack이라는 이름의 배열 생성
int top = -1;	//배열의 인덱스

void push(int x) {
	top++;   //top = top + 1;
	stack[top] = x;  //stack[0] = 10
	printf("%d %d\n", top, stack[top]);
}
int pop() {
	if (top < 0) {
		printf("스택이 비었습니다.\n"); return 0;
	}
	return stack[top--];  //후치연산
}
int main() {
	printf("스택 방식으로 자료 저장(넣기)\n");
	push(10);
	push(20);
	push(30);

	printf("스택 방식으로 자료 삭제(빼기)\n");
	printf("%d\n",pop());  //30
	printf("%d\n",pop());  //20
	printf("%d\n",pop());  //10
	printf("%d\n",pop());  //
	printf("%d\n",pop());  // 

	return 0;
}