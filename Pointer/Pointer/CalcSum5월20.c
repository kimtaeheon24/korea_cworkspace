#include<stdio.h>
/*
	���� : �޸��� �Ҵ�� ������ ����	�����ϴ� ����
	������ : �޸��� �Ҵ�� ������ �ּҸ� �����ϴ� ���� - &
*/
void calcsum(x, y);
int main() {
	//x���� y���� ���ϱ�
	calcsum(1, 5);
	calcsum(2, 5 );


	//int x = 10;
	//int* ptr = &x;
	////%p -> �������� �ּҸ� ����ϴ� ���� ��ȣ
	////%p, %x -> �ּҿ� �����ϴ� ���� ��ȣ
	//printf("%d %p\n", x, &x);
	//printf("%d %p\n", *ptr, ptr);  //�������� ���� ����(*ptr)
	return 0;
}
void calcsum(x, y) {
	int i;
	int sum = 0;
	for (i = x; i <= y; i++) {
		sum += i;
	}
	printf("%d\n", sum);
}