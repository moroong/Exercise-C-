/*
	File Name : Example03-Loop.c
	Data	  : 2023. 03. 11.
*/

#include <stdio.h>

int main()
{
	// 1 부터 20 까지의 정수 중에서
	// 3의 배수만 출력하는 프로그램을 작성

	//  - 반복을 위한 조건
	//  - 코드를 수행하기 위한 조건

	for (int n = 1; n <= 20; n++)
	{
		if (n % 3 == 0)
			printf("n = %d\n", n);
	}

	return 0;
}