#include<stdio.h>
#define MAX_LEN 10
/*
	���� �ڷᱸ��
	- �迭���� ���߿� ������ �ڷḦ ���� ������ ���
*/
int stack[MAX_LEN];  //stack�̶�� �̸��� �迭 ����
int top = -1;	//�迭�� �ε���

void push(int x) {
	top++;   //top = top + 1;
	stack[top] = x;  //stack[0] = 10
	printf("%d %d\n", top, stack[top]);
}
int pop() {
	if (top < 0) {
		printf("������ ������ϴ�.\n"); return 0;
	}
	return stack[top--];  //��ġ����
}
int main() {
	printf("���� ������� �ڷ� ����(�ֱ�)\n");
	push(10);
	push(20);
	push(30);

	printf("���� ������� �ڷ� ����(����)\n");
	printf("%d\n",pop());  //30
	printf("%d\n",pop());  //20
	printf("%d\n",pop());  //10
	printf("%d\n",pop());  //
	printf("%d\n",pop());  // 

	return 0;
}