#include<stdio.h>
#include<time.h>    //time()
#include<stdlib.h>  //srand(), rand()
/*
	���� ������ ����
	- ������ ������.
	- ����ڰ� ���� �Է�
*/
int main() {
	int coin; //��ǻ���� ����
	int you;  //�����

	//���� ������
	//char aspect[][10] = { "�ո�","�޸�" };
	char* aspect[] = {"", "�ո�","�޸�"};  //���� ������
	
	srand(time(NULL));
	printf("�ո��� 1, �޸��� 2, ����� �ٸ� ���� �Է��ϼ���\n");
	while (1) {
		coin = rand() % 2 + 1;
		printf("������ �������ϴ�. �ո�? �޸�? : ");
		scanf_s("%d", &you); //����� �Է�
		if (you < 1 || you>2) { printf("������ �����մϴ�.\n");break; }
		else {
			printf("�����: %s,�� : %s\n", aspect[you], aspect[coin]);
			//���� ������ Ȱ��
			printf("%s\n", (you == coin) ? "�¾���" : "��");
		}
	}
	



	
	return 0;
}