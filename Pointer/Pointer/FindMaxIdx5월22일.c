#include<stdio.h>
/*
	- �迭 �ִ밪�� ��ġ ã��
	- ������ �迭���� �ִ밪�� ��ġ ã��
*/
int main() {

	int arr[] = { 21,35,71,2,97,66 };
	int maxIdx1, maxIdx2;
	maxIdx1 = findMaxIdx(arr, 6); //�迭�� ������ ������
	printf("�ִ밪: %d\n", maxIdx1);

	maxIdx2 = findMax2Idx(arr, 6);
	printf("�ִ밪: %d\n", maxIdx2);

	return 0;
}
int findMaxIdx(int arr[], int len) {
	int maxIdx = 0;
	for (int i = 1; i < len; i++) {
		if (arr[i] > arr[maxIdx]) { maxIdx = i; }
	}
	return maxIdx;
}
int findMax2Idx(int* arr, int len) {
	int maxIdx = 0;
	for (int i = 1; i < len; i++) {
		if (*(arr + i) > *(arr + maxIdx)) { maxIdx = i; }
	}
	return maxIdx;
}