#include<stdio.h>
/*
	���� Ž��(�˻�) - ó������ ������ ������� ã��
	���� Ž��(�˻�) - ���ĵ� �����͸� �¿� �ѷ� ������ ã�� ����
					 ������ �������� ���
	**��� ���(mid) = (ù�ε��� + ���ε���) / 2
	- ã���� < ��� ��� -> �����ʹ��� �˻� �������� ���ܽ�Ŵ
	- ã���� > ��� ��� -> ���ʹ��� �˻� �������� ���ܽ�Ŵ
	- ã���� = ��� ��� -> �˻��� �Ϸ���
*/
int main() {
	int a[9] = { 1,2,3,4,5,6,7,8,9 };
	int i;   //�ε���
	int x = 8; //ã�� ��
	printf("======== ���� �˻� ========\n");
	for (i = 0; i < 9; i++) {
		if (a[i] == x) { printf("%d�� a[%d]�� �ֽ��ϴ�\n", x, i); }
	}
	
	printf("======== �̺� �˻� =========\n");
	int low, high, mid;  //ù �ε���, �� �ε���, �߰� �ε���
	int serch; //�˻� ��

	low = 0, high = 8, serch = 6;
	while (low <= high) {
		mid = (low + high) / 2;
		if (a[mid] == serch) { break; }
		else if (a[mid] < serch) {
			low = mid + 1; 
		}
		else {
			high = mid - 1;
		}
	}
	if (a[mid] == serch) {
		printf("%d�� a[%d]�� �ֽ��ϴ�.\n", serch, mid);
	}
	else {
		printf("%d�� �����ϴ�.\n", serch);
	}

	return 0;
}