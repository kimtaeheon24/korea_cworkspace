#include <stdio.h>
//return�� �ִ� �Լ�
//�������� ����ϴ� �Լ� ����
int square(int x) {
	return x * x;
}

//���밪�� ����ϴ� �Լ�
int myAbs(int x) {
	//x�� ������ ����� �� ����
	if (x < 0) {
		return -x;
	}
	else {  // x > 0
		return x;
	}
}
//�� ���� ���ϴ� �Լ� ����
double add(double x, double y) {
	
	return x + y;
}

int main() {
	int value1, value2;
	double value3;
	value1 = square(4);	//square() �Լ� ȣ��
	value2 = myAbs(-5);	//myAbs() ȣ��
	value3 = add(2.54, 3.3); //add() ȣ��

	//���
	printf("%d\n", value1);
	printf("%d\n", value2);
	printf("%.2lf\n", value3);



	return 0;
}