#define _CRT_SECURE_NO_WARNINGS  //fopen()
#include<stdio.h>
/*
	���� ���� �߰� ��� - "a"
*/
int main() {
	FILE* fp;
	char msg[] = "����� �����~";
	fp = fopen("out.txt", "a");
	if (fp == NULL) { printf("���� ���⿡ ����"); return 1; }

	//���Ͽ� �߰��� ����
	fputs("Good Look~\n",fp);

	//���� ���� ���� ����
	fprintf(fp, "%s\n", "����� �����~");
	fprintf(fp, "%s\n", msg);

	fclose(fp);
	
	printf("���� ���� �Ϸ�!\n");

	return 0;
}