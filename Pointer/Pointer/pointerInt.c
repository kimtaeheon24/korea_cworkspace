#include<stdio.h>

/*
	포인터 - 메모리의 주소를 저장
*/

int main() {
	int n;
	int* pn; //pn이라는 이름의 정수형 포인터 선언

	n = 3;
	pn = &n;  //변수 n의 주소를 저장함

	printf("변수의 값: %d\n", n);
	printf("변수의 메모리 번지: %p\n", &n);
	printf("포인터의 값: %p\n", pn);
	printf("포인터의 메모리 번지: %p\n", &pn);

	//포인터를 사용해서 값을 출력 하는 것이 역참조
	//포인터가 가리키는 메모리의 값 - 역참조
	printf("포인터가 가리키는 메모리의 값: %x\n", *pn);

	//자료형의 크기 비교 - 포인터는 자료형의 종류 관계없이 모두 8byte
	printf("%dbyte %dbyte\n", sizeof(n), sizeof(pn));


	//정수형 포인터 사용
	int a = 10;
	int* b;

	printf("a의 값: %d\n", a);

	b = &a;
	*b = 20;  //20으로 변경

	printf("b가 가리키는 값: %d\n", *b);
	printf("a의 값: %d\n", a);  //a도 20으로 바뀜


	return 0;
}