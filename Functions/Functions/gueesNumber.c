#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/*
	���� ���� ����
	-��ǻ�Ͱ� ������ ����
	-����ڰ� ������ ���� �Է�
	1.����
	2.�����Ѽ� > ����
	3.�����Ѽ� < ����
*/
int main() {
	srand(time(NULL));
	int randNum;   //��ǻ�Ͱ� ������ ����
	int guessNum;  //����ڰ� ������ ��
	int count =5;     //�õ��� Ƚ��

	randNum = rand() % 50 + 1;  //1 ~ 50������ ����
	//printf("��Ǫ���� ��: %d\n", randNum);

	while (1) {
		printf("���� Ƚ��: %d��\n", count--);
		printf("1~50 ������ ���ڸ� �Է��ϼ���: ");
		scanf_s("%d", &guessNum);
		
		if (guessNum == randNum) {
			printf("�����̿���\n");
			printf("��ǻ���� �� : %d\n", randNum);
			break;
		}
		else if (guessNum > randNum) {
			printf("�۾ƾ� �˴ϴ�.\n");
		}
		else {
			printf("Ŀ�� �˴ϴ�.\n");
		}

		if (count == 0) {
			printf("���� Ƚ���� 0�Դϴ�. �ƽ��� �����߾��..");
			printf("��ǻ���� �� : %d\n", randNum);
			break; 
		}
	}


	return 0;
}