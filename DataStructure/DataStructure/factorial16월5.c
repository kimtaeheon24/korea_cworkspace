#include<stdio.h>
/*
	십진수를 이진수로 변환하는 프로그램 - 재귀함수
*/
int printBin(int a) {
	if (a == 0 || a == 1) {
		printf("%d", a);
	}
	else {
		printBin(a / 2);
		printf("%d", a % 2);
	}
}
int main() {
	int x = 11;
	printBin(x);


	return 0;
}