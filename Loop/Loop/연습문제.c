#include <stdio.h>
int main() {
	int arr[4] = { 10,20,30,40 };
	printf("%x,%x,%x\n", arr[1], arr[2],arr[3]);
	printf("%x,%x,%x\n", arr, arr+1,arr+2);
	printf("%d\n", arr[0]);
	arr[1] = 55;
	for (int i = 0; i < 4;i++) {
		printf("%d", arr[i]);
	}
	printf("\n");


	return 0;
}