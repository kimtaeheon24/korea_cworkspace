#include <stdio.h>

int main() {
	//int a = 1;
	//printf("a = %d\n", a);

	//a++;  //a = a + 1
	//printf("a = %d\n", a);

	//a++;  //a = a + 1
	//printf("a = %d\n", a);

	//"¾È³ç~"À» 10¹ø ¹Ýº¹ÇÏ±â
	int n = 1; //ÃÊ±â°ª
	/*printf("¾È³ç~ %d\n", n++);
	printf("¾È³ç~ %d\n", n++);
	printf("¾È³ç~ %d\n", n++);
	printf("¾È³ç~ %d\n", n++);
	printf("¾È³ç~ %d\n", n++);
	printf("¾È³ç~ %d\n", n++);
	printf("¾È³ç~ %d\n", n++);
	printf("¾È³ç~ %d\n", n++);
	printf("¾È³ç~ %d\n", n++);
	printf("¾È³ç~ %d\n", n++);*/

	while (n <= 10)//Á¶°Ç½Ä(Á¾·á°ª)
	{
		printf("¾È³ç~ %d\n", n);
		n++; //Áõ°­°ª
	}
	printf("\n");
	n = 10;
	while (n>0) {
		printf("¾È³ç~ %d\n", n);
		n--;
	}

	// 1ºÎÅÍ 10±îÁö ÇÕ°è
	int i = 1, hap = 0;
	
	while (i < 11) {
		hap += i;      //hap = hap + i;
		printf("i=%d, hap=%d\n", i, hap);
		i++;
	}
	printf("i=%d, hap = %d\n", i, hap);

	return 0;
}