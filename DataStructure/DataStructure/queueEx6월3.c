#include<stdio.h>
#define MAX_LEN 10
/*
	큐(Queue) 자료구조
	- 배열에서 먼저 들어간 요소르 먼저 꺼냄
	- 맨 뒤(rear)에서 요소 저장,
	- 맨 앞(front)에서 요소 꺼냄
	- frount: 첫 인덱스, rear: 끝인덱스
*/
int queue[MAX_LEN];  //정수형 배열 queue 생성
int front = 0;  //배열의 첫 인덱스
int rear = 0;   //배열의 끝 인덱스
void enQueue(int x) {
	queue[rear] = x;
	printf(" %d %d", rear, queue[rear]);
	rear++;
}
int deQueue() {
	if (front == rear) {
		printf("큐가 비었습니다.\n"); return 0;
	}
	return queue[front++];
}
int main() {
	printf("큐 방식으로 자료 저장(넣기)\n");
	enQueue(10);
	enQueue(20);
	enQueue(30);
	printf("\n");


	printf("큐 방식으로 자료 삭제(빼기)\n");
	printf("%d ", deQueue());  //10
	printf("%d ", deQueue());  //20
	printf("%d ", deQueue());  //30
	printf("%d ", deQueue());  //큐가 비었습니다. 0

	return 0;
}