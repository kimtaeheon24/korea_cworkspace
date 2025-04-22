#include <stdio.h>
/*
	switch(변수){
	  case: 실행문; break;
	  default: 실행문; break;
	}
*/
int main() {
	//엘레베이터 타기 - 건물 층이(1 ~ 3)
	int floor;
	printf("가고 싶은 층을 눌러주세요: ");
	scanf_s("%d", &floor);
	
	switch (floor) {
	case 1:
		printf("1층을 눌렀습니다.\n");
		break;
	case 2:
		printf("2층을 눌렀습니다.\n");
		break;
	case 3:
		printf("3층을 눌렀습니다.\n");
		break;
	default:
		printf("건물에 없는 층입니다.\n");
		break;
	}

	return 0;
}