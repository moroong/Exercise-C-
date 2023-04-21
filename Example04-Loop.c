/*
	File Name : Example04-Loop.c
	Data	  : 2023. 03. 11.
*/

#include <stdio.h>

int main()
{
	// 100부터 150 까지의 정수 중에서
	// 3의 배수이거나 5의 배수인 정수들을
	// 모두 출력하는 프로그램을 작성

	for (int n = 100; n <= 150; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
			printf("n = %d\n", n);
	}

	return 0;
}