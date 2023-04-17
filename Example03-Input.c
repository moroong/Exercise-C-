/*
	Fila Name   : Example03-Input.c
	Date		: 2023.02.25
*/

#include <stdio.h>

int main()
{
	// 사용자로부터 3 개의 정수를 입력을 받고
	// 입력받은 정수 중에서 가장 큰 값을 구하는 프로그램을 작성
	//  - 조건 연산자를 활용
	
	int num1, num2, num3;
	int max = 0;
	printf("Enter three integers >>>");
	scanf("%d %d %d", &num1, &num2, &num3);

	max = num1 > num2 ? num1 : num2;
	max = max > num3 ? max : num3;

	printf("max = %d", max);


	return 0;
}