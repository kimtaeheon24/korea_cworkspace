# include<stdio.h>
#include<stdlib.h>  //malloc(), free() 사용 
/*
	포인터를 ㅅ하용한 동적 할당
	- 프로그램이 실행(run time) 되는 동안에 메모리 사용하고 해제(반납)함
*/

int main() {
	//크기가 4인 정수형 배열 생성 - 정적 할당
	//메모리 영역 - 스택(stack) 영역

	/*int n[4];
	n[0] = 1;
	n[1] = 2;*/
	
	//포인터를 활용한 동적 할당 - 힙(heap) 영역
	int* pn = (int *)malloc(sizeof(int) * 4);  //16byte
	if (pn == NULL) {
		printf("동적 메모리 할당에 실패했습니다.\n");
		exit(1);  //프로그램 종료
	}

	pn[0] = 10;
	pn[1] = 20;
	pn[2] = 30;
	pn[3] = 40;

	/*for (int i = 0; i < 4; i++) {
		printf("%d ", *(pn+i));
	}*/

	/*printf("%d %d\n", *(pn + 0), pn[0]);
	printf("%d %d\n", *(pn + 1), pn[1]);*/

	//값 변경
	*pn = 50;
	*(pn + 1) = 60;
	*(pn + 2) = 70;
	*(pn + 3) = 80;

	for (int i = 0; i < 4; i++) {
		printf("%d ", *(pn + i));
	}
	printf("\n");
	for (int i = 0; i < 4; i++) {
		printf("%d ", pn[i]);
	}

	free(pn);  //메모리 해제
	return 0;
}