#include <stdio.h>

int main() {
	/*
	continue�� - �ݺ��� ���ο��� continue �� ������
	             �ݺ��Ǵ� �κ��� �������� �ʰ�, ������ �Ǵ� ���ǽ��� ������
	*/
	//1 ~ 10 �߿��� 5, 10�� �����ϰ� ����ϱ�

	for (int i = 1; i < 11; i++) {
		if (i % 5==0) {
			continue;
		}
		printf("%d ", i);
	}

	// 1 ~ 10������ ¦���� ��
	int n, sum;
	for (n = 1, sum = 0; n <= 10; n++) {
		if (n % 2 != 0) {
			continue;
		}
		sum += n;
		printf("%d ", n);
	}
	printf("¦���� ��: %d ", sum);

	return 0;
}
