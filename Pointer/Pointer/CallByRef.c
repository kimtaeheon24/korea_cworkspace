#include<stdio.h>
/*
	���� ������ ���� ȣ��
*/
int callByVal(int n);
int callByRef(int* p);
int main() {
	int num = 10;
	printf("=== ���� ���� ȣ�� ===\n");
	printf("%d\n", num);       //10
	printf("%d\n", callByVal(num));  //11

	printf("=== ������ ���� ȣ�� ===\n");
	printf("%d\n", callByRef(&num)); //11
	printf("%d\n", num);             //11

	return 0;
}
int callByVal(int n) {
	n++;
	return n;  //n�� 11�� ��ȯ�ϰ� �޸𸮿��� ����(�Ҹ�) �����ֱ�
}

int callByRef(int* p) {
	*p += 1;   //*p = *p + 1
	return *p;
}
