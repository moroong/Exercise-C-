/*
	Fila Name   : Example04-if.c
	Date		: 2023.02.26
*/

#include <stdio.h>

int main()
{
	// 사용자로부터 입력 받은 정수 값을 아래 조건에 따라
	// 결과가 출력되도록 프로그램을 작성
	//  - 3의 배수인 경우 : "Fizz"
	//	- 5의 배수인 경우 : "Buzz"
	//  - 3의 배수이면서 5의 배수인경우 : "FizzBuzz"
	//  - 그 외인 경우 : 입력 받은 정수
	//-------------------------------------------------------
	// 
	
	int num = 0;
	printf("Enter an integer >>>");
	scanf("%d", &num);

	if (num % 3 == 0 && num % 5 == 0)
		printf("FizzBuzz\n");
	else if (num % 3 == 0)
		printf("Fizz\n");
	else if (num % 5 == 0)
		printf("Buzz\n");
	else
		printf("num = %d\n", num);
	//-----------------------------------------------------
	// 0		   = 거짓
	// 0 외의 정수 = 참
	
	// num % 3 → 0, 1, 2
	//	3의 배수인 경우
	//	num % 3 == 0
	//  = !(num % 3)
	//   → 나머지가 0 인 경우 not 연산자에 의해 1(참)이 된다.
	//   → 나머지가 1, 2 인 경우 not 연산자에 의해 0(거짓)이 된다.

	// 드모드간의 법칙에 의해 조건식을 간결하게 작성할 수 있다. 
	//	!A && !B = !(A || B)
	//  !A || !B = !(A && B)
	
	// if ( !(num % 3) && !(num % 5) )

	if (!(num % 3 || num % 5))
		printf("FizzBuzz\n");
	else if (!(num % 3))
		printf("Fizz\n");
	else if (!(num % 5))
		printf("Buzz\n");
	else // 위의 조건을 모두 만족하지 않은 경우
		printf("num = %d\n", num);

	return 0;
}