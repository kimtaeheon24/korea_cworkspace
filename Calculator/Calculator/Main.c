#include <stdio.h>
#include "calCulator.h"  //����� ���� ��������� �ֵ���ǥ ����ؾ� ��

int main() {
	//����(����) ����
	int value1, value2;
	int x = 3, y = 4;
	
	//���� �� �Լ� ȣ��
	value1 = add(x, y);
	value2 = factorial(y);
	count++;

	//���
	printf("vaule1 = %d\n", value1);
	printf("%d! = %d\n",y, value2);
	printf("%5! = %d\n", factorial(5));
	printf("count = %d\n", count);
	
	system("pause");  //exe ���������� ������ �ʵ��� ��

	return 0;
}