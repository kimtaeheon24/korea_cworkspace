#include <stdio.h>



int main() {
	int a[] = { 21,35,71,2,97,66 };

	int max = findMax(a, 6);

	//출력
	printf("최대값: %d\n", max);

	return 0;
}

//최대값을 계산하는 함수 정의
int findMax(int arr[], int len) {
	int maxVal = arr[0];  //최대값 설정
	for (int i = 1; i < len; i++) {
		if (arr[i] > maxVal)
			maxVal = arr[i];
	}
	return maxVal;

}