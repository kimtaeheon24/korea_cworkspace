#include <stdio.h>
int main()
{
	//������ ��ȯ�ϱ�
	//'=' - ���� ������
	int x = 1;
	int y = 2;
	int temp;  //��ȯ�� ���� ����

	printf("====== ��ȯ�� ======\n");
	printf("x = %d, y = %d\n", x, y);
	
	printf("====== ��ȯ�� =====\n");
	temp = x;
	x = y;
	y = temp;
	printf("x = %d, y = %d\n", x, y);

	printf("\n");

	//���մ��� ������ -> ��� ������ + ���� ������
	
	int val = 10;
	
	val += 3;  //val = val + 3;
	printf("%d\n", val); //13

	val -= 3;  //val = val - 3;
	printf("%d\n", val); //10

	val *= 3;  //val = val * 3;
	printf("%d\n", val); //30

	val /= 3;  //val = val / 3;
	printf("%d\n", val); //10

	val %= 3;  //val = val % 3;
	printf("%d\n", val); //1

	return 0;
}