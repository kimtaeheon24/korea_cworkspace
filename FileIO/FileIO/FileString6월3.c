#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	FILE* fp;
	char str[] = "abcdefg\nhijklmn\nopqrstu\nvwxyz";
	int ch;  //fgetc ���� �б� ���� 
	int i = 1;
	char buf[256];  //���ڸ� ������ �迭 ����
	/*���� ����
	-fputs(fp);
	- fprintf(fp, "���Ĺ���", ������);
	
	���� �б�
	- int ch(����), fgetc(fp) EOF(-1)�� ��
	- char str[](�迭), fgets(������, ����Ʈ�� ũ��, fp)NULL�� ��*/

	//���� ����
	fopen_s(&fp, "data.txt", "w");
	if (fp == NULL) { printf("���� ���� ����"); return 1; }

	fprintf(fp, "%s\n", str);

	fclose(fp);

	//���� �б�
	fopen_s(&fp, "data.txt", "r");
	if (fp == NULL) { printf("���� ���� ����"); return 1; }

	//fgetc�� �б�
	/*while ((ch = fgetc(fp)) != EOF) {
		printf("%c", ch);
	}*/


	//fgets(�������, ũ��, ��Ʈ������)�� �б� - ���ڿ��� ���
	while(fgets(buf, sizeof(buf), fp)!= NULL){
		printf("%d %s", i,buf);
		i++;
	}

	fclose(fp);

	return 0;
}