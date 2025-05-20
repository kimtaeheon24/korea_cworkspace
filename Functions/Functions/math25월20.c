#include<stdio.h>
#define _USE_MATH_DEFINES  //M_PI ��� ����� ���� ��ũ�� ����
#include<math.h> //round(), floor(), ceil(), abs(), pow(), sqrt()

int myPow(int x, int y) {
	int gob = 1;
	for (int i = 0; i < y; i++) {
		gob *= x;
	}
	return gob;
}
/*
	x=2, y=3
	2x2x2
	i=0, gob = 1 x 2
	i=1, gob = 2 x 2
	i=2, gob = 4 x 2
	i=3, �ݺ� ����
*/

int main() {
	//������ - ���(M_PI)
	printf("%f\n", M_PI);
	printf("%.3f\n", M_PI);

	int ans = pow(2, ceil(M_PI)); //ceil(M_PI) -> 4.0
	printf("%d\n", ans);  //2^4 = 16

	//�ŵ����� ȣ��
	printf("%d\n", myPow(2, 3));

	//1���� 5���� ���ϱ�
	//int result = 1;
	//for (int i = 1; i <= 5; i++) {
	//	result *= i;  //result = result * i;
	//	printf("i = %d, result = %d\n", i ,result);
	//}
	//printf("%d\n", result);  //1*2*3*4*5 = 120


	return 0;
}