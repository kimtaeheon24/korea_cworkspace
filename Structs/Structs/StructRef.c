#include<stdio.h>
/*
	중첩 구조체
	- 구조체의 멤버 변수가 다른 구조체의 자료형인 경우
	- 하나의 구조체가 다른 구조체를 참조한 경우
*/
struct Point {
	int x;
	int y;

};
struct Rectangle {
	struct Point p1;
	struct Point p2;

};
int main() {
	/*
		두 점을 이용한 직사각형 만들기
		좌측 상단 좌표, 우측 하단 좌표
	*/
	//방법 1
	/*struct Rectangle rect;
	rect.p1.x = 1;
	rect.p1.y = 5;

	rect.p2.x = 4;
	rect.p2.y = 2;

	//출력
	printf("점1(%d, %d), 점2(%d, %d)\n", rect.p1.x, rect.p1.y, rect.p2.x, rect.p2.y);
	*/
	//방법 2
	struct Rectangle rect = {
		.p1 = {1, 5},
		.p2 = {4, 2}
	};
	int width, height;

	//너비와 높이 계산
	width = abs(rect.p2.x - rect.p1.x);
	height = abs(rect.p2.y - rect.p1.y);
	printf("너비: %d, 높이: %d\n", width, height);

	return 0;
}