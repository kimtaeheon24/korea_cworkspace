#include <stdio.h>
/*
	for(�ʱⰪ; ���ᰪ; ������){
		���๮;
		}
*/
int main() {
	//1���� 10���� ����Ѵ�
	for (int i = 1; i <= 10; i++) {
		printf("%d ", i);
	}

	//1���� 10���� �հ�
	int sum = 0;  //�հ踦 ������ ���� ����
	int n; //���� ����
	for (n = 1; n <= 10; n++) {
		if (n % 2 != 0) {
			sum += n;
		}
		printf("n=%d, sum = %d\n", n, sum);
	}
	printf("n=%d, Ȧ���� �հ� = %d\n", n, sum);

	

	return 0;
}