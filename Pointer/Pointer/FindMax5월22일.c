#include<stdio.h>
/*
	1. �迭���� �ִ밪 ã��
	2. ������ �迭���� �ִ밪 ã��
*/
int findMax(int arr[], int len);
int findMax2(int*, int );
int findIdx(int* arr, int len);
int main() {
	int arr[] = { 21,35,71,2,97,66 };
	int max1, max2, idx;
	max1 = findMax(arr, 6); //�迭�� ������ ������
	printf("�ִ밪: %d\n", max1);

	max2 = findMax2(arr, 6);
	printf("�ִ밪: %d\n", max2);


	return 0;
}
int findMax(int arr[], int len) {
	int maxVal = arr[0];
	for (int i = 1; i < len; i++) {
		if (arr[i] > maxVal) { maxVal = arr[i]; }
	}
	return maxVal;
}
int findMax2(int* arr, int len) {
	int maxVal;
	maxVal = *(arr + 0);
	for (int i = 1; i < len; i++) {
		if (*(arr + i) > maxVal) { maxVal = *(arr + i); }
	}
	return maxVal;
}
