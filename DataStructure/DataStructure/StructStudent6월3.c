#include<stdio.h>
typedef struct Student{
	int number;

}S;
int main() {
	S s[10];  //구조체 배열 10개
	int i;
	for (i = 0; i < 10; i++) {
		s[i].number = i + 1;
	}
	for (i = 0; i < 10; i++) {
		printf("%d ", s[i].number);
	}
	printf("\n");
	s[1].number = 0;  //2번 학생 전학(삭제)
	for (i = 0; i < 10; i++) {
		printf("%d ", s[i].number);
	}
	//오른쪽 방에서 왼쪽으로 이동
	for (i = 1; i < 9; i++) {
		s[i].number = s[i + 1].number;
	}
	printf("\n");
	s[9].number = 0;
	for (i = 0; i < 10; i++) {
		printf("%d ", s[i].number);
	}

	return 0;
}