#include <stdio.h>
int main() {
	//구구단 전체 출력
	int i, j;   //i - 단, j - 곱하는 수
	for (i = 2;i < 10;i++) {
		for (j = 1;j < 10;j++) {
			printf("%d x %d = %d\n", i, j, (i * j));
		}
		printf("\n");
	}

	return 0;
}