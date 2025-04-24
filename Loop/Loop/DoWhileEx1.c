#include <stdio.h>
/*
	do ~ while문
	- while문과 유사함
	- 꼭 한번은 실행 될 수 있도록 할때 사용한다.
*/
int main() {

	//1~10까지 출력
	int n = 1;
	/*while (n < 11) {
		printf("%d ", n);
		n++;
	}*/
	// do ~ while 구문
	do {
		printf("%d ", n);
		n++;
	} while (n < 11);


	return 0;
}