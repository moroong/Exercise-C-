/*
	Fila Name   : Example06-if.c
	Date		: 2023.02.25
*/

#include <stdio.h>

int main()
{
	// 두 개의 정수를 입력을 받고
	// 두 정수의 차이를 절대 값으로 출력하는 프로그램을 작성
	
	int a = 0, b = 0;
	int diff = 0;

	printf(" Enter two integers >>> ");
	scanf("%d %d", &a, &b);

	diff = a - b;

	if (diff < 0)
	{
		diff *= -1;
	}
	
	printf("|%d-%d|=%d\n", a, b, diff);

	return 0;
}