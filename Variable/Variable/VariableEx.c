#include <stdio.h>

/*
  ���� - ���α׷����� �����͸� �����ϴ� �޸� ����\
  �ڷ��� - �� ����(char), ����(int), �Ǽ�(double)
*/
int main()
{
	//���� ���� ��� - �ڷ��� �����̸�
	int n1; //������ ���� ����
	n1 = 5; //���� ����(�ʱ� ȭ, �Ҵ�)

	int n2 = 100; //����� ���ÿ� �ʱ�ȭ

	// &:�޸��� �ּ�(���ۻ���, �ּҿ�����)
	printf("%d\t %x\n", n1, &n1);
	printf("%d\t %x\n", n2, &n2);

	printf("�μ� �� ��: %d\n", n1 + n2);
	printf("�μ� �� ��: %d\n", n1 - n2);
	
	//�Ǽ��� ���� ����, ���Ĺ��� - %lf(long float) �Ǽ���
	double rateOFBirth = 0.75;
	
	printf("���ѹα��� 2024�� ������� %.2lf%\%�Դϴ�.\n", rateOFBirth);
	
	//������ ���� ����
	char grade = 'A';

	printf("�� ȣ���� ���񽺴� %c����̴�.\n", grade);

	//���ڿ� �迭 ����
	char nameOFFruit[] = "���";

	printf("�� ������ �̸��� %s�Դϴ�.\n", nameOFFruit);
	
	//�����̸��� �ǹ̰� �ְ� �����, ī�� ǥ��� ���
	
	/*���� �̸� �ۼ��� ����
	int 2n = 20; //���ڷ� ���� �ȵ�
	int a ge = 25; //����(����) �Ұ�
	int for = 3;  //�����(������ ��ɾ�) ��� �Ұ�
	*/ 
	
	//�ڷ����� ũ�� - sizeof()
	printf("===�ڷ����� ũ�� ===\n");
	printf("int �� %dByte\n", sizeof(n1));
	printf("double �� %dByte\n", sizeof(rateOFBirth));
	printf("char �� %dByte\n", sizeof(grade));
	printf("���ڿ� �迭�� %dByte\n", sizeof(nameOFFruit));
	


	return 0;
}