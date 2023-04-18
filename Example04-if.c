/*
	Fila Name   : Example04-if.c
	Date		: 2023.02.25
*/

#include <stdio.h>

int main()
{
	// 사용자가 입력한 값이 정수 형태의 양수(positive number)인지 
	// 아닌지 출력하는 프로그램을 작성

	// 양수인 경우		: "num is positive number!" 출력
	// 그렇지 않은 경우 : "num is not positive number!" 출력
	
	int num = 0;
	printf("숫자를 입력하세요>>>");
	scanf("%d", &num);

	if (num > 0)
	{
		printf("num is positive number!");
	}
	else
	{
		printf("num is not positive number!");
	}

	return 0;
}