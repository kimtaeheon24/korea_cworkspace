#include <stdio.h>

int main() 
{
	/*
	   ��� ������ - +, -, *, /, %, ++, --
	 */

	int a = 99;
	int b = 2;

	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%.1lf\n", (double)a / b); //����(�����) ����ȯ(Type Conversion)
	printf("%d\n", a % b);
	
	//���� ������ - ++(1����), --(1����)
	// +=2 (2����)
	printf("%d\n", a++); //��ġ ������   //a = a + 1
	printf("%d\n", a);   //100

	printf("%d\n", ++a); //��ġ ������   //a = 1 + a
	printf("%d\n", a); // 101

	printf("%d\n", a--); // ��ġ ������ // a = a - 1
	printf("%d\n", a); // 100
	
	printf("%d\n", --a);  // ��ġ ������ // a = 1 - a
	printf("%d\n", a); //100


	return 0;
}
