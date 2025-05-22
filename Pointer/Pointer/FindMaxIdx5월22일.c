#include<stdio.h>
/*
	- 배열 최대값의 위치 찾기
	- 포인터 배열에서 최대값의 위치 찾기
*/
int main() {

	int arr[] = { 21,35,71,2,97,66 };
	int maxIdx1, maxIdx2;
	maxIdx1 = findMaxIdx(arr, 6); //배열과 개수를 전달함
	printf("최대값: %d\n", maxIdx1);

	maxIdx2 = findMax2Idx(arr, 6);
	printf("최대값: %d\n", maxIdx2);

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