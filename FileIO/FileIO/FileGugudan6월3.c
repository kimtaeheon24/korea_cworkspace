#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	FILE* fp;
	char b[256];
	/*fp = fopen("gugudan.txt", "w");
	if (fp == NULL) { printf("���� ���⿡ ����"); return 1; }
	for (int i = 2; i < 10; i++) {
		for (int x = 1; x < 10; x++) {
			fprintf(fp, "%d x %d = %d\n", i, x, (i * x));
		}
		fprintf(fp, "\n");
	}
	fclose(fp);
	*/
	//���� �б� - fgets() �̿�
	fp = fopen("gugudan.txt", "r");
	if (fp == NULL) { printf("�б� ����");return 1; }
	
	while (fgets(b,sizeof(b),fp)!=NULL) {
		printf("%s", b);
	}

	fclose(fp);

	return 0;
}