#include <stdio.h>

/*main() 함수 
- 프로그램을 실행하는 기능
- return이 있는 함수(운영체제에게 반환)
- 함수 형태
 (반환)자료형 함수이름(){}
 void형 - 반환자료형이 없을 때(return이 없음)
 - 함수의 위치
  .main()의 위 - 정의된 함수
  .main()의 아래 - 선언부는 위, 구현부는 아래에 위치
*/
void sayHello();       //선언부(프로토타입)를 명시
void sayHello2(char name[]);
int main() {
	//함수 호출
	sayHello();
	sayHello2("Elsa");

	return 0;
}

//인사하기 기능을 하는 함수 정의
void sayHello() {
	printf("안녕하세요~\n");
}

//이름을 부르는 인사하기 기능 확장
//char name[] - 매개 변수(Parameter)
void sayHello2(char name[]) {
	printf("%s님, 안녕하세요~\n", name);
}

