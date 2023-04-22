/*
	File Name : Example07-Overlapped.c
	Data	  : 2023. 03. 11.
*/

#include <stdio.h>

int main()
{
	// 구구단 2단에서 9단까지 출력하는 프로그램을 작성

	// 2단 
	//  2 * 1 = 2
	//  2 * 2 = 4
	//   ...
	//  9 * 9 = 81

	// 2단에서 9단까지 반복

	for (int dan = 2; dan <= 9; dan++)
	{
		printf("======%d단======\n", dan);

		for (int n = 1; n <= 9; n++)
		{
			printf("%d*%d=%d\n", dan, n, dan*n);
		}
	}

	return 0;
}