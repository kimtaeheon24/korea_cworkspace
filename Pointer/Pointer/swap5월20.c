#include<stdio.h>
void callByVal(int, int);//선언부 매개변수는 자료형만 사용 가능
void callByRef(int*, int* );
int main()
{
	int x = 1, y = 2;
	int temp;

	printf("값에 의한 호출\n");
	callByVal(x, y);
	printf("x = %d,y = %d\n", x, y);
	printf("참조에 의한 호출\n");
	callByRef(&x, &y);
	printf("x = %d,y = %d\n", x, y);
	
	

	return 0;
}

void callByVal(int a, int b) {
	//교환
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void callByRef(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}