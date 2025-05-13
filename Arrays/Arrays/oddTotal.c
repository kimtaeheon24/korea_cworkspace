#include<stdio.h>
int main() {

	int arr[10];
	int oddTotal = 0;
	for (int i = 1; i < 10; i+=2) {
		arr[i] = i + 1;
		oddTotal += arr[i];
		printf("%d, %d\n", arr[i], oddTotal);
	}

		return 0;
}