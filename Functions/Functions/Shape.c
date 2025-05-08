#include <stdio.h>

//실습 문제 풀이
int square(int);
double triangle(int size, int height);
int main() {
	int rectArea;
	double triArea;
	//정사각형의 넓이 계산
	rectArea = square(4);
	//삼각형의 넓이 계산
	triArea = triangle(3, 5);

	printf("정사각형의 넓이: %d\n", rectArea);
	printf("삼각형의 넓이: %.2lf\n", triArea);
	return 0;
}
int square(int x) {
	return x * x;
}
double triangle(int size, int height) {
	double area = (size * height) / 2.0;
	return area;


}
