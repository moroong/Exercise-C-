/*
	File Name : Example01.c
	Data	  : 2023. 00. 00.
*/

#include <stdio.h>

int main()
{
	// 사용자로부터 입력받은 정수가
	// 양수인지 음수인지 0인지 출력하는 프로그램을 작성
	//	양수(positive number) : 0 보다 큰 수
	//  음수(negative number) : 0 보다 작은 수

	int num = 0;
	printf("Enter an integer>>> ");
	scanf("%d", &num);

	if (num > 0)
		printf("num is positive number!");
	else if (num < 0)
		printf("num is negative number!");
	else
		printf("num is zero!");
	return 0;
}