#define _CRT_SECURE_NO_WARNINGS //보안 경고 방지
#include<stdio.h>
#include<string.h> //strcpy(), strlen(), strcmp(), strncmp(), strcat(), strncat()
/*
	문자열 복사 - strcpy()
	문자열의 개수 - strlen()
	문자열의 비교 - strcmp()
*/
int main(){
	char msg1[] = "Good Luck";
	char msg2[20];  //문자열을 저장할 배열 선언
	char msg3[20];

	printf("%d\n", strlen(msg1));  //문자열의 개수 - 9
	printf("%d\n", sizeof(msg1));  //메모리의 크기(용량) 10 - '\0'(NULL) 포함
	
	//문자열 복사
	strcpy(msg2, msg1);  //msg2 = msg1
	printf("%s\n", msg2);

	strcpy(msg3, "Have a good time!");  //msg3 = "Have a good time!"
	printf("%s\n", msg3);

	//문자열의 비교
	char greet1[] = "hello";
	char greet2[] = "Hello";
	int result;

	result = strcmp(greet1, greet2);  //0 - 같음
	printf("%d\n", result);  //0 - 같음, 1 - 불일치

	if (result == 0) {
		printf("문자열이 일치합니다.\n");
	}
	else {
		printf("문자열이 불일치합니다.\n");
	}

return 0;
}