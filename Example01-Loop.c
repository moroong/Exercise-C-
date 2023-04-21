/*
	File Name : Example01-Loop.c
	Data	  : 2023. 03. 11.
*/

#include <stdio.h>

int main()
{
	// 사용자로부터 "Beautiful Day!" 를 출력할 횟수를 입력받고
	// 입력한 값 만큼 출력하는 프로그램을 작성

	int max = 0;
	printf("Enter a count to print>>>");
	scanf("%d", &max);

	for (int count = 0; count < max; count++) {
		printf("Beautiful Day!\n");
	}
	return 0;
}