#include<stdio.h>
int main() {
	int a = 10;
	int* b;

	printf("a�� ���� %d\n", a); // a�� ���� 10

	b = &a;
	*b = 20;

	printf("b�� ���� %d\n", *b); //20
	printf("b�� ���� %d\n", *b); //20

	return 0;
}
int maxFind(int* arr, int len) {
	int max = *(arr+ 0);
	for (int i = 0; i < len; i++) {
		if (max < *(arr + i)) { max = *(arr + i); }
	}
	return max;
}
int maxFindArr(int* arr, int len) {
	int idx = 0;
	for (int i = 0; i < len; i++) {
		if(*(arr + idx)< *(arr+ i)){ idx = i; }


	}

}