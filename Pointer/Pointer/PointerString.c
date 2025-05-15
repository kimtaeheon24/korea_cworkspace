#include<stdio.h>
/*
	문자열과 포인터
*/

int main() {
	char msg[] = "Good Luck"; //이 문자열의 크기 - 10
	char* p = msg;  //&msg[0]


	printf("%d %d\n", sizeof(msg),sizeof(p));
	printf("%s\n", msg);

	//문자열의 시작 주소와 배열의 이름은 동일하다.
	//포인터를 사용할 경우에는 - 서식문자 %p를 이용해도 됨
	printf("%p, %p\n", msg, p);

	//p 포인터로 출력
	printf("%s\n", p+0);  //Good Luck
	printf("%s\n", p+1);  //ood Luck
	printf("%s\n", p+2);  //od Luck
	printf("%s\n", p+3);  //d Luck
	printf("\n");

	//p포인터의 역참조로 출력
	//printf("%c\n", *(p+0));  //G
	//printf("%c\n", *(p+1));  //o
	int size = sizeof(msg) / sizeof(msg[0]);  //10 / 1 = 10

	for(int i = 0; i<size;i++){
		printf("%c", *(p + i));  //Good Luck
	}



	return 0;
}