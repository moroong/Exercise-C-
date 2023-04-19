/*
	File Name : Example03-if.c
	Data	  : 2023. 02. 26.
*/

#include <stdio.h>

int main()
{
	// 사용자로부터 양의 정수를 입력받아서
	// 짝수인지 홀수인지 0인지 출력하는 프로그램을 작성
	//  짝수(even number) : 2의 배수인 수
	//  홀수(odd number)  : 2의 배수가 아닌 수

	int num = 0;

	printf("Enter a positive number>>>");
	scanf("%d", &num);


	//------조건을 추가하여 검사하는 방법------

	if (num % 2 == 0)
		printf("num is even number!");
	else if (num % 2 != 0)
		printf("num is odd number!");
	else
		printf("num is zero!");
	//---조건의 순서를 바꿔서 작성하는 방법---

	if (num == 0)
		printf("num is zero!\n");
	else if (num % 2 == 0)
		printf("num is even number!\n");
	else
		printf("num is odd number!\n");

	return 0;
}