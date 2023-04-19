/*
	File Name : Example01-if.c
	Data	  : 2023. 02. 25.
*/

#include <stdio.h>

int main()
{
	// 사용자로부터 정수 하나를 입력을 받고
	// 입력받은 정수가 50 이상의 7의 배수이면 "Wonderful Day!" 를 출력
	// 그렇지 않으면 "Beautiful Day!" 를 출력하는 프로그램을 작성

	int a = 0;

	printf("Enter an integer >>>");
	scanf("%d", &a);

	if (a >= 50 && a % 7 == 0)
	{
		printf("Wonderful Day!\n");
	}
	else
	{
		printf("Beautiful Day!");
	}
	

	return 0;
}