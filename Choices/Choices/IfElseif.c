#include <stdio.h>
/*
   ���� ���ǹ�(���� if)
   if(���ǽ�){}
   else if(){}
   else{}
*/
int main(){
	/*
	   ������ ������ ���� ���� ����ϱ�
	   - 90~100�� : A
	   - 80~89�� : B
	   - 70~79�� : C
	   - 70�� �̸�: F
	*/

	int score;  //������ ������ ������ ����
	char grade; //������ ������ ������ ����

	printf("������ �Է��ϼ���:");
	scanf_s("%d", &score);
	
	if (score >= 90 && score <= 100) {
		grade = 'A';
	}
	else if (score >= 80) {
		grade = 'B';
	}
	else if (score >= 70) {
		grade = 'C';
	}
	else{
		grade = 'F';
	}
	printf("������ %c�Դϴ�.\n", grade);

	return 0;
}