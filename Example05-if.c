/*
	Fila Name   : Example05-if.c
	Date		: 2023.02.25
*/

#include <stdio.h>

int main()
{
	// 사용자로부터 양의 정수를 입력을 받고
	// 정수가 짝수인지 홀수인지 출력하는 프로그램을 작성
	//  짝수(even number)	: 2의 배수인 수
	//  홀수(odd number)	: 2의 배수가 아닌 수

	// 나머지 연산자  : %
	// 대입 연산자    : =
	// 상등 비교 연산 : == 
	
	int num = 0;
	printf("Enter a positive number>>>");
	scanf("%d", &num);

	if (num % 2 == 0)
	{
		printf("num is even number!\n");
	}
	else
	{
		printf("num is odd number!\n"); 
	}

	//------------------------------------
	// 참(true)	   = 1
	// 거짓(false) = 0
	// 0 외의 정수 = 참(true)
	// 0		   = 거짓(false)
	if (!(num % 2))
	{
		printf("num is even number!\n");
	}
	else
	{
		printf("num is odd number!\n");
	}
	
	return 0;
}