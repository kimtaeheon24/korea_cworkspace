#define _CRT_SECURE_NO_WARNINGS //���� ��� ����
#include<stdio.h>
#include<string.h> //strcpy(), strlen(), strcmp(), strncmp(), strcat(), strncat()
/*
	���ڿ� ���� - strcpy()
	���ڿ��� ���� - strlen()
	���ڿ��� �� - strcmp()
*/
int main(){
	char msg1[] = "Good Luck";
	char msg2[20];  //���ڿ��� ������ �迭 ����
	char msg3[20];

	printf("%d\n", strlen(msg1));  //���ڿ��� ���� - 9
	printf("%d\n", sizeof(msg1));  //�޸��� ũ��(�뷮) 10 - '\0'(NULL) ����
	
	//���ڿ� ����
	strcpy(msg2, msg1);  //msg2 = msg1
	printf("%s\n", msg2);

	strcpy(msg3, "Have a good time!");  //msg3 = "Have a good time!"
	printf("%s\n", msg3);

	//���ڿ��� ��
	char greet1[] = "hello";
	char greet2[] = "Hello";
	int result;

	result = strcmp(greet1, greet2);  //0 - ����
	printf("%d\n", result);  //0 - ����, 1 - ����ġ

	if (result == 0) {
		printf("���ڿ��� ��ġ�մϴ�.\n");
	}
	else {
		printf("���ڿ��� ����ġ�մϴ�.\n");
	}

return 0;
}