#include<stdio.h>

//Employee(���) ����ü ����
typedef struct {
	int id;  //��� ���̵�
	char name[20];  //��� �̸�
	int salary;   //�޿�
}Employee;
int main() {
	//struct ���� ����ü ���� ����
	Employee e1 = { 1, "�̻��", 3000000 };

	printf("��� ID: %d\n", e1.id);
	printf("�̸�: %s\n", e1.name);
	printf("�޿�: %d\n", e1.salary);
	
	//����ü �迭 3��
	/*Employee e1[3] = {
		{142, "�̻��", 3300000},
		{424,"ȫ�浿",324242},
		{4224,"������",4234523}
	};*/

	/*for (int i = 0; i < 3; i++) {
		printf("���ID: %d, �̸�: %s, �޿�: %d\n", e1[i].id,e1[i].name,e1[i].salary);

	}*/


	return 0;
}