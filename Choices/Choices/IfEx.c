#include <stdio.h> //printf()

int main()
{
	/*
		if(���ǽ�){ //���ǽ��� ��(ture - 1) 
		  ���๮
		}
		���̰� 15���̻��̸� "������" ���
	*/
	int age;

	/*if (age >= 15)
	{
		printf("������!\n");
	}
	printf("���̴� %d�� �Դϴ�.\n", age);*/

	//���̰� 15���̻��̸� "������", �ƴϸ� "�����Ұ�" ���
	printf("���̸� �Է��ϼ���: ");
	scanf_s("%d", &age);
	if (age >= 15){
		printf("������!\n");
	}
	else{
		printf("�����Ұ�!\n");
	}
	printf("���̴� %d�� �Դϴ�\n", age);
	return 0;
}