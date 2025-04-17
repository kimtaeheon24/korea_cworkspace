#include <stdio.h>

/*
  변수 - 프로그램에서 데이터를 저장하는 메모리 공간\
  자료형 - 한 문자(char), 정수(int), 실수(double)
*/
int main()
{
	//변수 선언 방법 - 자료형 변수이름
	int n1; //정수형 변수 선언
	n1 = 5; //값을 저장(초기 화, 할당)

	int n2 = 100; //선언과 동시에 초기화

	// &:메모리의 주소(엠퍼샌드, 주소연산자)
	printf("%d\t %x\n", n1, &n1);
	printf("%d\t %x\n", n2, &n2);

	printf("두수 의 합: %d\n", n1 + n2);
	printf("두수 의 차: %d\n", n1 - n2);
	
	//실수형 변수 선언, 서식문자 - %lf(long float) 실수형
	double rateOFBirth = 0.75;
	
	printf("대한민국의 2024년 출산율은 %.2lf%\%입니다.\n", rateOFBirth);
	
	//문자형 변수 선언
	char grade = 'A';

	printf("그 호텔의 서비스는 %c등급이다.\n", grade);

	//문자열 배열 선언
	char nameOFFruit[] = "사과";

	printf("그 과일의 이름은 %s입니다.\n", nameOFFruit);
	
	//변수이름은 의미가 있게 만들고, 카멜 표기법 사용
	
	/*변수 이름 작성시 오류
	int 2n = 20; //숫자로 시작 안됨
	int a ge = 25; //공백(문자) 불가
	int for = 3;  //예약어(제공된 명령어) 사용 불가
	*/ 
	
	//자료형의 크기 - sizeof()
	printf("===자료형의 크기 ===\n");
	printf("int 형 %dByte\n", sizeof(n1));
	printf("double 형 %dByte\n", sizeof(rateOFBirth));
	printf("char 형 %dByte\n", sizeof(grade));
	printf("문자열 배열형 %dByte\n", sizeof(nameOFFruit));
	


	return 0;
}