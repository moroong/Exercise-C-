/*
	File Name : Example02-Loop.c
	Data	  : 2023. 03. 12.
*/

#include <stdio.h>

int main()
{
	// 소수(Prime number)
	//  : 약수가 1과 자기 자신뿐인 1보다 큰 자연수
	//    → 2, 3, 5, 7, 11 ...
	//  : 1과 자기 자신을 제외한 다른 자연수로 나누어 떨어지면
	//	  소수가 아니다.
	
	// 소수인지 판별하는 프로그램을 작성
	//  - 사용자가 임의로 입력한 2 이상의 자연수를 입력
	//  - 사용자가 입력한 자여수가 소수인지 아닌지 출력
	
	// 플래그 변수(flag variable)
	//  - 특정 상태를 나타내기 위한 변수
	int is_prime = 1;  // 소수인지 아닌지 판별하기 위한 변수
	// 1 : 소수인 경우
	// 0 : 소수가 아닌 경우

	int num = 0;

	printf("Enter a positive number greater than 1 >>>");
	scanf("%d", &num);
	printf("\n");

	// 입력 수의 1과 자기 자신 사이의 수들을 대상으로
	// 나누어 떨어지는지 검사
	//  → 약수를 찾기 위해 2부터 num의 제곱근까지의 자연수들만 검사
	for (int n = 2; n * n <= num; n++)
	{
		if (num % n == 0)
		{
			is_prime = 0;
			break;
		}
	}

	if (is_prime)  // == 1
		printf("%d is a prime number\n", num);
	else		   // == 0
		printf("%d is not a prime number\n", num);
	
	return 0;
}