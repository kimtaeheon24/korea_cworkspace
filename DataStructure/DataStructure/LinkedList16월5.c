#include<stdio.h>
/*
	���� ����Ʈ(�迭�� ������ �ڷᱸ��)
	- �ڱ� ���� ����ü : struct ���ο� ������ Ÿ���� ������ ��� ����
	- �����͸� �̿��� ��� ����� ��ȸ
*/
typedef struct List {
	int data;
	struct L* next;   //�ڱ� ����
}L;
int main() {
	L x, y, z;  //����ü�� ����(���)
	//�ʱ�ȭ
	x.data = 10;
	y.data = 20;
	z.data = 30;

	//��� ����(Liked List ����)
	x.next = &y;   //x -> y
	y.next = &z;   //y -> z
	z.next = NULL; //z�� ������ ���(����Ʈ ��)

	//�����͸� ��� - ����Ʈ ��ȸ
	L* p;
	p = &x;  //�ʱ�ȭ
	
	printf("%d %p\n", x.data, p->next); //10 F720FFBE8

	p = p->next;
	printf("%d %p\n", y.data, p->next); //20 F720FFC18

	//��� ����(y ����)
	x.next = y.next;
	y.next = NULL;

	printf("����ü y ������\n");


	//��ü ���
	for (p = &x; p != NULL; p = p->next) {
		printf("%d ", p->data);
	}

	return 0;
}