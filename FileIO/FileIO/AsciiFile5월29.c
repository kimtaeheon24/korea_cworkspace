#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
	�ƽ�Ű �ڵ�(32 ~ 127)�� �ؽ�Ʈ ���Ͽ� ���� �б�
*/
int main() {
	FILE* fp;
	//��� ��� - �� ������ �������� ��ġ�� ����
	fp = fopen("ascii.txt", "w");
	if (fp == NULL) {
		printf("���� ���⿡ �����߽��ϴ�.\n");
		return 1;  //������ 1 or -1
	}

	printf("======== ASCII ���̺� ========\n");
	for (int i = 32; i < 128; i++) {  //32(���鹮��)
		if (i % 10 == 0)
			fputc('\n', fp);
		fputc(i, fp);
		fputc('\t', fp);  //��(����) Ű ����
	}
	
	fclose(fp);

	return 0;
}