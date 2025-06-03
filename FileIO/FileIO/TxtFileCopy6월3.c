#include<stdio.h>
/*
	텍스트 파일 복사하기
*/
int main() {
	FILE* fin, *fout;
	int input = 0;  //문자 코드값 저장

	fopen_s(&fin, "gugudan.txt", "r");
	fopen_s(&fout, "gugudan2.txt", "w");
	if (fin == NULL || fout == NULL) { perror("파일 열기 실패");
	return -1;
	}

	puts("파일에 데이터 쓰기(저장)\n");

	//파일을 읽어서 쓰기
	while (input != EOF) {
		input = fgetc(fin);
		fputc(input, fout);
	}

	fclose(fin);
	fclose(fout);


	return 0;
}