#include <stdio.h>

//�ǽ� ���� Ǯ��
int square(int);
double triangle(int size, int height);
int main() {
	int rectArea;
	double triArea;
	//���簢���� ���� ���
	rectArea = square(4);
	//�ﰢ���� ���� ���
	triArea = triangle(3, 5);

	printf("���簢���� ����: %d\n", rectArea);
	printf("�ﰢ���� ����: %.2lf\n", triArea);
	return 0;
}
int square(int x) {
	return x * x;
}
double triangle(int size, int height) {
	double area = (size * height) / 2.0;
	return area;


}
