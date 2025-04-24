#include <stdio.h>
/*
	입장객수에 따른 좌석의 줄수 계산
	-입장객수가 좌석열수로 나누어 떨어지는 경우
	-입장객수가 좌석열수로 나누어 떨어지지 않는 경우
*/
int main() {
	int customer;  //입장객 수
	int column; //열
	int row;        //줄(행) 수
	printf("입장객 수 입력: ");
	scanf_s("%d", &customer);

	printf("좌석 열 수: ");
	scanf_s("%d", &column);

	if (customer % column == 0) {
		row = customer / column;  //계산결과 int
	}
	else{
		row = customer / column + 1;
	}
	printf("%d개의 줄이 필요합니다.\n", row);

	return 0;
}