#include<stdio.h>
/*
	���(recursive) �˰��� : �ڱ� �ڽ��� ȣ��(�Լ�)�ϴ� ���� ���Ѵ�.
	�Լ� ���ο� ���� �ڱ� �ڽ� �Լ�()
	���� �ݺ��� �ϹǷ� ���� ������ �ʼ���.
	if���� �����

	���丮��(���) �����ϱ�
	5! = 5 x 4 x 3 x 2 x 1
*/
int getGob(int n) {
	int gob = 1;
	for (int i = 1; i <= n; i++) {
		gob *= i;
	}
	return gob;
}
int facto(int n) {
	if (n == 0) return 1;
	else
	return n * facto(n- 1);
}
int main() {
	//1���� 5���� ���ϱ�
	/*int gob = 1;
	for (int i = 1; i <= 5; i++) {
		gob *= i;
	}
	printf("�����1: %d\n", getGob(5));*/

	//��� ȣ��
	printf("0! = %d\n", facto(0));  //1
	printf("1! = %d\n", facto(1));  //1
	printf("2! = %d\n", facto(2));  //2
	printf("3! = %d\n", facto(3));  //6
	printf("4! = %d\n", facto(4));  //24
	printf("5! = %d\n", facto(5));  //120




	return 0;
}