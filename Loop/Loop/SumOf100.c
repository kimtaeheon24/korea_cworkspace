#include <stdio.h>
int main() {
	int N = 1;
	int SUM = 0;
	while (1) {
		SUM += N;
		if (SUM > 100)
			break;
		N++;
	}
		printf("%d,%d", SUM, N);
	
	

	return 0;
}