#include <stdio.h>
int main() {
	/*
	자리 배치도 프로그램
	- 입장객수와 좌석 열수가 주어졌을때
	- 줄(행) 수 계산하고
	- 자리 출력
	*/
	int customer;  //입장객 수
	int culumn;     //좌석 열 수
	int row;        //좌석 줄 수
	int seat;       //좌석

	printf("입장객 수 입력: ");
	scanf_s("%d", &customer);
	printf("좌석 열 입력: ");
	scanf_s("%d", &culumn);
	if (customer % culumn == 0) {
		//오른쪽이 int형이 됨
		row = (int)(customer / culumn);
	}
	else {
		row = (int)(customer / culumn) + 1;
	}
	//printf("줄 수: %d\n", row);

	//자리 배치 - 중첩 for -> 외부(줄), 내부(열)
	for (int i = 0; i <row; i++) {
		for (int j = 1; j <= culumn; j++) {
			seat = culumn * i + j;
			if (seat > customer)break;
			printf("좌석%d", seat);
		}
		printf("\n");
	}


	return 0;
}