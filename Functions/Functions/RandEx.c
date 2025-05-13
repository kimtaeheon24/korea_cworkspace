#include <stdio.h>
#include <stdlib.h>   //srand(), rand()
#include <time.h>     //time()

int main() {
	//난수(무작위 수) 사용
	//srand(10);   //시드(seed) 배정
	srand(time(NULL));

	//int rndVal = rand();
	//printf("%d\n", rndVal);

	//동전(2가지 경우)
	int coin = rand() % 2;  //0, 1
	printf("%d\n", coin);

	//앞면 - 0, 뒷면 - 1
	if (coin % 2 == 0) {
		printf("앞면\n");
	}
	else {
		printf("뒷면\n");
	}
	
	//가위, 바위, 보
	int num = rand() % 3;
	printf("%d\n", num);
	switch (num) {
	case 0:
		printf("가위\n"); break;
	case 1:
		printf("바위\n"); break;
	case 2 :
		printf("보\n"); break;
	default :
		printf("없음\n"); break;
	}
	
	//주사위의 눈(1 ~ 6)
	int dice = rand() % 6 + 1;
	printf("%d\n", dice);
	printf("==================\n");
	
	//주사위 10번 던지기
	for (int i = 0; i < 10; i++) {
		dice = rand() % 6 + 1;
		printf("%d\n", dice);
	}
	





	return 0;
}