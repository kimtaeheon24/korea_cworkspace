#include <stdio.h>
int main() {
	/*
		2 x 1 = 2
		2 x 2 = 4
		2 x 3 = 6
		....
		2 x 8 = 16
		2 x 9 = 18
		    �ݺ� ������ ���ϴ� ����
	*/
	int dan;
	printf("���� �Է� �ϼ���: ");
	scanf_s("%d", &dan);
	while (1) {
		if (dan == 0) {
			printf("����");
			break;
		}
		for (int i = 1; i < 10; i++) {
			printf("%d x %d = %d\n", dan, i, (dan * i));
		}
		printf("���� �Է��ϼ���: ");
		scanf_s("%d",&dan);
	}
	return 0;
}