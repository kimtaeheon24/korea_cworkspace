#include<stdio.h>
/*
	- ��� �˰��� : ����(�÷α�)�� �ٲٴ� �˰���
	  � ���°� ��� �����Ǵ� ��
	  ��) ��/��, CapsLock
*/
int main() {
	int a[5] = { 9,8,7,6,7 };
	int count = 0;  //ã�� ��� ����
	//��� 7 ã��
	for (int i = 0; i < 5; i++) {
		if (a[i] == 7) {
			printf("7 �߰�!\n");
			count++;
		}
	}
	printf("%d�� �߰�\n", count);
	printf("\n");

	//��� 7�� 1�� �߰��ϸ� ����
	int sw = 0;  //����(�÷���)  0 = ã������, 1 = ã��
	for (int i = 0; i < 5; i++) {
		if (a[i] == 7) {
			printf("7 �߰�!\n");
			sw = 1;
			break;
		}
	}
	if (sw == 0) { printf("7 �߰� ����!\n"); }
	


	return 0;
}