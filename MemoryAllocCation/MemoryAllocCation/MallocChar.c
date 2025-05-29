#include<stdio.h>
#include<stdlib.h>
/*
	알파벳 대문자 저장할 문자형 배열 26개 동적 할당
	메모리 영역 - 힙(heap) 영역 (빌려오는 것)
*/
int main() {
	char* pc;
	int i;
	pc = (char*)malloc(sizeof(char) * 26);     // 1 x 26 = 26
	if (pc == NULL) { printf("동적 메모리 할당에 실패했습니다.\n"); 
					exit(1); //강제종료
	}
	
	pc[0] = 'A';
	pc[1] = 'A' + 1;  //B
	pc[2] = 'A' + 2;  //C
	printf("%c %c\n", pc[0], pc[1]);
	for (i = 0; i < 26; i++) {
		 pc[i] = (65 + i);
	}	

	for (i = 0; i < 26; i++) {
		printf("%c ", pc[i]);
	}
	printf("\n");

	/**pc = 'A';
	*(pc + 1) = 'A' + 1;
	*(pc + 2) = 'A' + 2;

	printf("%c %c %c\n", *(pc+0), *(pc+1),*(pc+2));*/
	for (i = 0; i < 26; i++) {
		*(pc + i) = (65 + i);
	}
	for (i = 0; i < 26; i++) {
		printf("%c ", pc[i]);
	}

	free(pc);  //메모리 반납


	return 0;
}