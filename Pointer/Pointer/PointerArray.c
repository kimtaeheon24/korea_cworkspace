#include<stdio.h>
/*
	정수형 배열과 포인터
*/

int main() {
	//배열을 선언과 동시에 초기화(저장)
	int a[4] = { 10,20,30,40 };
	int* pa;  //포인터(변수)
	int i;

	//배열의 이름은 배열의 시작 주소이다.
	//printf("%d %x %x\n", a[0], &a[0], a);
	//printf("%d %x %x\n", a[1], &a[1], a + 1);
	//printf("%d %x %x\n", a[2], &a[2], a + 2);
	//printf("%d %x %x\n", a[3], &a[3], a + 3);

	for (i = 0; i < 4; i++) {
		printf("%d %x %x\n", a[i], &a[i], a + i);
	}
	printf("============================\n");

	//포인터에 배열(시작주소)을 저장
	pa = a;
	printf("포인터 pa의 값: %x\n", pa + 0);
	printf("포인터 pa가 가리키는 값: %d\n", *(pa+0));

	printf("%x %d\n", pa + 1, *(pa + 0));
	printf("%x %d\n", pa + 1, *(pa + 1));
	printf("%x %d\n", pa + 1, *(pa + 2));
	printf("%x %d\n", pa + 1, *(pa + 3));

	for (i = 0; i < 4; i++) {
		printf("%x %d\n", pa + i,*(pa + i));
	}

	//배열과 포인터의 크기
	printf("%dbyte %dbyte", sizeof(a), sizeof(pa));

	return 0;
}