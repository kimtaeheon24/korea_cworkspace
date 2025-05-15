#include<stdio.h>
/*
	값과 참조에 의한 호출
*/
int callByVal(int n);
int callByRef(int* p);
int main() {
	int num = 10;
	printf("=== 값에 의한 호출 ===\n");
	printf("%d\n", num);       //10
	printf("%d\n", callByVal(num));  //11

	printf("=== 참조에 의한 호출 ===\n");
	printf("%d\n", callByRef(&num)); //11
	printf("%d\n", num);             //11

	return 0;
}
int callByVal(int n) {
	n++;
	return n;  //n은 11일 반환하고 메모리에서 해제(소멸) 생명주기
}

int callByRef(int* p) {
	*p += 1;   //*p = *p + 1
	return *p;
}
