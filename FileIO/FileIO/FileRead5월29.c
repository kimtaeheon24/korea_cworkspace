#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
	�ؽ�Ʈ ����(.txt)�� �б�
	- fgetc() - �� ���ھ� �б�
	- fgets() - ������ ���� �б�
*/
int main() {
	FILE* fp; //����
	int ch;  //���� ����(�ƽ�Ű �ڵ尪) ������ ����

	fp = fopen("c:/cfile/out.txt", "r");
	if (fp == NULL) {
		printf("���� �б⿡ ������\n");
		return 1;
	}

	//���� �б�
	//ch = fgetc(fp);
	//printf("%c\n", ch);

	//while (1) {
	//	ch = fgetc(fp);
	//	//EOF(EndOfFile)�� -1�� ����
	//	if (ch == EOF) break;
	//	printf("%c", ch);
	//}

	while ((ch = fgetc(fp)) != EOF) {
		printf("%c", ch);
	}
	ch = fgets(fp);
	printf("%s", ch);
	fclose(fp);

	return 0;
}