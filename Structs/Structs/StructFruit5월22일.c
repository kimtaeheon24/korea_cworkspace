#include<stdio.h>

//���� ����ü ����
typedef struct {
	//Fruit�� �Ӽ�(��� ����)
	char name[20];   //���� �̸�
	int quantity;    //����
	char* type;       //���� ����
}Fruit;

int main() {
	//������ �迭 ����
	char* types[] = { "Apple", "Banana", "Orange" };
	Fruit f = {
		.name = "�뱸 ���",
		.quantity = 100,
		.type = types[0]
	};
	Fruit* ptr;  //����ü ������ ����
	
	ptr = &f;   //����ü ������ �ּҸ� ����

	printf("=== �����ͷ� ���� ===");
	printf("���� �̸�: %s\n", ptr->name);
	printf("����: %d\n", ptr->quantity);
	f.type = "Grepe";
	printf("���� ����: %s\n", ptr->type);

	//printf("=== ������ ���� ====\n");
	//printf("���� �̸�: %s\n", f.name);
	//printf("����: %d\n", f.quantity);
	//f.type = "Grepe";
	//printf("���� ����: %s\n", f.type);


	return 0;
}