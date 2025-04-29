#include <stdio.h>
int main() {
	//배열의 크기가 5인 문자형 배열 생성 및 요소 저장
	//hello -> yellow로 변경
	char msg[6] = { 'h', 'e', 'l','l','o' };

	//특정 요소 검색
	printf("%c\n", msg[4]);
	
	//요소 수정
	msg[0] = 'y';
	
	//요소 추가
	msg[5] = 'w';

	//전체 출력
	for (int i = 0; i < 6; i++) {
		printf("%c ", msg[i]);
	}
	printf("\n");

	//메모리 주소 출력(문자형이므로 1byte씩 증가함)
	printf("%x %x %x\n", &msg[0], &msg[1], &msg[2]);
	printf("%x %x %x\n", msg, msg+1, msg+2);

	return 0;
}