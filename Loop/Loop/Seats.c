#include <stdio.h>
int main() {
	/*
	�ڸ� ��ġ�� ���α׷�
	- ���尴���� �¼� ������ �־�������
	- ��(��) �� ����ϰ�
	- �ڸ� ���
	*/
	int customer;  //���尴 ��
	int culumn;     //�¼� �� ��
	int row;        //�¼� �� ��
	int seat;       //�¼�

	printf("���尴 �� �Է�: ");
	scanf_s("%d", &customer);
	printf("�¼� �� �Է�: ");
	scanf_s("%d", &culumn);
	if (customer % culumn == 0) {
		//�������� int���� ��
		row = (int)(customer / culumn);
	}
	else {
		row = (int)(customer / culumn) + 1;
	}
	//printf("�� ��: %d\n", row);

	//�ڸ� ��ġ - ��ø for -> �ܺ�(��), ����(��)
	for (int i = 0; i <row; i++) {
		for (int j = 1; j <= culumn; j++) {
			seat = culumn * i + j;
			if (seat > customer)break;
			printf("�¼�%d", seat);
		}
		printf("\n");
	}


	return 0;
}