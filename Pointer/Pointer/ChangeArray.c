#include<stdio.h>

//매개변수로 배열 포인터를 전달
void changeArray(int* ptr) {  //int a[] - 전달 가능
	ptr[1] = 50;
}

int main() {
	int arr[] = { 10,20,30 };

	changeArray(arr);  //int* ptr = arr;

	for (int i = 0; i < 3; i++) {
		printf("%d\n", arr[i]);
	}


	return 0;
}