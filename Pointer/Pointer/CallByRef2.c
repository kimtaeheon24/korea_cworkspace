#include<stdio.h>
void func1(int i, int j);
void func2(int* i, int* j);
int main() {
	int a = 3, b = 12;
	func1(a, b);   //fun1 호출
	printf("=== main() func1 호출 후 출력 ===\n");
	printf("%d %d\n", a, b);

	func2(&a, &b);  //fun2 호출
	printf("=== main() fumc2 호출 후 출력 ===\n");
	printf("%d %d\n", a, b);
	return 0;
}

void func1(int i, int j) {
	i *= 3;  //i = i * 3
	j /= 3;  //j = j / 3
	printf("=== func1() 함수 내 출력 ===\n");
	printf("%d %d\n", i, j);
}
void func2(int* i, int* j) {  //*i =&a, *j = &b

	*i *= 3;   //*i = *i * 3
	*j /= 3;   //*j = *j / 3
	printf("=== func2() 함수 내 출력 ===\n");
	printf("%d %d\n", *i, *j);
}